#include "Burger.h"
#include "OrderingPage.h"
#include "OrderSummary.h"
#include "DataReader.h"
#include "DataWriter.h"

using namespace ProjectEve;
void Burger::BurgerButtonHandler() {
	Burger::hotdogBtn->MouseDown += gcnew MouseEventHandler(this, &Burger::HotdogButtonClick);
	Burger::cheeseburgerBtn->MouseDown += gcnew MouseEventHandler(this, &Burger::CheeseBurgerButtonClick);
	Burger::beefburgerBtn->MouseDown += gcnew MouseEventHandler(this, &Burger::BeefBurgerButtonClick);
	Burger::chickenburgerBtn->MouseDown += gcnew MouseEventHandler(this, &Burger::ChickenBurgerButtonClick);
	Burger::footlongBtn->MouseDown += gcnew MouseEventHandler(this, &Burger::FootLongButtonClick);

	Burger::cokeBtn->MouseDown += gcnew MouseEventHandler(this, &Burger::CokeButtonClick);
	Burger::spriteBtn->MouseDown += gcnew MouseEventHandler(this, &Burger::SpriteButtonClick);
	Burger::icedteaBtn->MouseDown += gcnew MouseEventHandler(this, &Burger::IcedTeaButtonClick);
	Burger::pepsiBtn->MouseDown += gcnew MouseEventHandler(this, &Burger::PepsiButtonClick);

	Burger::origHotDogLeftPosition = Burger::hotdogQuantity->Left;
	Burger::origCheeseBurgerLeftPosition = Burger::cheeseQuantity->Left;
	Burger::origBeefBurgerLeftPosition = Burger::beefQuantity->Left;
	Burger::origChickenBurgerLeftPosition = Burger::chickenQuantity->Left;
	Burger::origFootLongLeftPosition = Burger::footlongQuantity->Left;

	Burger::origCokeLeftPosition = Burger::cokeQuantity->Left;
	Burger::origSpriteLeftPosition = Burger::spriteQuantity->Left;
	Burger::origIcedTeaLeftPosition = Burger::icedteaQuantity->Left;
	Burger::origPepsiLeftPosition = Burger::pepsiQuantity->Left;

	// NAV BUTTONS
	Burger::orderagainBtn->Click += gcnew EventHandler(this, &Burger::OrderAgainButtonClick);
	Burger::checkoutBtn->Click += gcnew EventHandler(this, &Burger::CheckOutButtonClick);
	Burger::IsCheckOut(false);

	DataReader::DeleteAllItem(Burger::summarizedOrder);
	DataReader::ReadData(Burger::summarizedOrder);
	Burger::LabelGiver();
	totalDataPrice = DataReader::GetTotalData();
	Burger::TotalPriceHandler();
}


void Burger::ButtonFunction(MouseEventArgs^ e, Product^ product, ListViewItem^ listViewItem, Label^ label ,interior_ptr<int> price ,const int origPos) {
	if (product->quantity == 0) {
		listViewItem->SubItems->Add(Convert::ToString(product->quantity));
		listViewItem->SubItems->Add(Convert::ToString(product->price));
		Burger::summarizedOrder->Items->Add(listViewItem);
	}

	Burger::MouseDownEventHandler(e, label, origPos, &product->quantity);

	if (product->quantity == 0) {
		listViewItem->Remove();
		Burger::summarizedOrder->Items->Remove(listViewItem);
	}

	product->price = *price * product->quantity;

	listViewItem->SubItems[1]->Text = Convert::ToString(product->quantity);
	listViewItem->SubItems[2]->Text = Convert::ToString(product->price);
}


void Burger::LabelAdjuster(Label^ label,const int consLeftPos,const int counter) {
	if (counter < 10) {
		label->Left = consLeftPos;
	}else if (counter >= 10 && counter < 100) {
		label->Left = consLeftPos - 5;
	}
	else if (counter >= 100) {
		label->Left = consLeftPos - 10;
	}
}

void Burger::MouseDownEventHandler(MouseEventArgs^ e, Label^ label,const int  origLeftPos,interior_ptr<int>  cnt) {
	switch (e->Button) {
	case ::MouseButtons::Left:
		*cnt=*cnt+1;
		label->Text = Convert::ToString(*cnt);
		Burger::LabelAdjuster(label, origLeftPos, *cnt);
		break;
	case ::MouseButtons::Right:
		if (*cnt > 0) {
			*cnt = *cnt - 1;
			label->Text = Convert::ToString(*cnt);
			Burger::LabelAdjuster(label, origLeftPos, *cnt);
		}
		if (*cnt <= 0)
			label->Text = "";
		break;
	}
}


// BURGER TYPES

void Burger::ButtonClickDataInseration(Product^ product, int price) {
	if (DataReader::IsItemExist(product->name)) {
		DataReader::DeleteListItem(product->name, Burger::summarizedOrder);
		if (!Once) {
			totalDataPrice = totalDataPrice - price * Convert::ToInt16(DataReader::GetQuantityData(product->name));
			Once = true;
		}
	}
}

void Burger::CheeseBurgerButtonClick(Object^ sender, MouseEventArgs^ e) {
	Burger::ButtonFunction(e, Burger::cheeseStruct, Burger::cheeseItem, Burger::cheeseQuantity, &Burger::cheeseBurgerPrice, origCheeseBurgerLeftPosition);
	Burger::ButtonClickDataInseration(cheeseStruct,cheeseBurgerPrice);
	Burger::TotalPriceHandler();
}

void Burger::HotdogButtonClick(Object^ sender, MouseEventArgs^ e) {
	Burger::ButtonFunction(e, Burger::hotdogStruct, Burger::hotdogItem, Burger::hotdogQuantity, &Burger::hotDogPrice, origHotDogLeftPosition);
	Burger::ButtonClickDataInseration(hotdogStruct,hotDogPrice);
	Burger::TotalPriceHandler();
}

void Burger::BeefBurgerButtonClick(Object^ sender, MouseEventArgs^ e) {
	Burger::ButtonFunction(e, Burger::beefStruct, Burger::beefItem, Burger::beefQuantity, &Burger::beefBurgerPrice, origBeefBurgerLeftPosition);
	Burger::ButtonClickDataInseration(beefStruct,beefBurgerPrice);
	Burger::TotalPriceHandler();
}

void Burger::ChickenBurgerButtonClick(Object^ sender, MouseEventArgs^ e) {
	Burger::ButtonFunction(e, Burger::chickenStruct, Burger::chickenItem, Burger::chickenQuantity, &Burger::chickenBurgerPrice, origChickenBurgerLeftPosition);
	Burger::ButtonClickDataInseration(chickenStruct,chickenBurgerPrice);
	Burger::TotalPriceHandler();
}

void Burger::FootLongButtonClick(Object^ sender, MouseEventArgs^ e) {
	Burger::ButtonFunction(e, Burger::footlongStruct, Burger::footlongItem, Burger::footlongQuantity, &Burger::footlongPrice, origFootLongLeftPosition);
	Burger::ButtonClickDataInseration(footlongStruct,footlongPrice);
	Burger::TotalPriceHandler();
}


// ADD ONS

void Burger::CokeButtonClick(Object^ sender, MouseEventArgs^ e) {
	Burger::ButtonFunction(e, Burger::cokeStruct, Burger::cokeItem, Burger::cokeQuantity, &Burger::cokePrice, origCokeLeftPosition);
	Burger::ButtonClickDataInseration(cokeStruct,cokePrice);
	Burger::TotalPriceHandler();
}

void Burger::SpriteButtonClick(Object^ sender, MouseEventArgs^ e) {
	Burger::ButtonFunction(e, Burger::spriteStruct, Burger::spriteItem, Burger::spriteQuantity, &Burger::spritePrice, origSpriteLeftPosition);
	Burger::ButtonClickDataInseration(spriteStruct,spritePrice);
	Burger::TotalPriceHandler();
}

void Burger::IcedTeaButtonClick(Object^ sender, MouseEventArgs^ e) {
	Burger::ButtonFunction(e, Burger::icedteaStruct, Burger::icedteaItem, Burger::icedteaQuantity, &Burger::icedteaPrice, origIcedTeaLeftPosition);
	Burger::ButtonClickDataInseration(icedteaStruct,icedteaPrice);
	Burger::TotalPriceHandler();
}

void Burger::PepsiButtonClick(Object^ sender, MouseEventArgs^ e) {
	Burger::ButtonFunction(e, Burger::pepsiStruct, Burger::pepsiItem, Burger::pepsiQuantity, &Burger::pepsiPrice, origPepsiLeftPosition);
	Burger::ButtonClickDataInseration(pepsiStruct,pepsiPrice);
	Burger::TotalPriceHandler();
}

// NAV BUTTONS

void Burger::OrderAgainButtonClick(Object^ sender, EventArgs^ e) {
	// DATA INSERTION

	Burger::DataInsertion(cheeseStruct);
	Burger::DataInsertion(hotdogStruct);
	Burger::DataInsertion(footlongStruct);
	Burger::DataInsertion(beefStruct);
	Burger::DataInsertion(chickenStruct);


	Burger::DataInsertion(cokeStruct);
	Burger::DataInsertion(spriteStruct);
	Burger::DataInsertion(icedteaStruct);
	Burger::DataInsertion(pepsiStruct);


	OrderingPage::ordering->BringToFront();
}

void Burger::DataInsertion(Product^ product) {
	if (DataReader::IsItemExist(product->name) || product->quantity > 0) {
		DataReader::DeleteData(product->name);
		DataWriter::WriteData(product->name, product->price, product->quantity);
	}
	else if (product->quantity != 0){
		DataWriter::WriteData(product->name, product->price, product->quantity);
	}

	if (product->quantity == 0) {
		DataReader::DeleteData(product->name);
	}
}



void Burger::CheckOutButtonClick(Object^ sender, EventArgs^ e) {
	// DATA INSERTION
	Burger::DataInsertion(cheeseStruct);
	Burger::DataInsertion(hotdogStruct);
	Burger::DataInsertion(footlongStruct);
	Burger::DataInsertion(beefStruct);
	Burger::DataInsertion(chickenStruct);


	Burger::DataInsertion(cokeStruct);
	Burger::DataInsertion(spriteStruct);
	Burger::DataInsertion(icedteaStruct);
	Burger::DataInsertion(pepsiStruct);


	OrderSummary::GenerateTransactionNumber(); // GENERATE TRANSACTION NUMBER TEMPORARY
	OrderSummary::userControl = OrderingPage::burger;
	OrderSummary::SetData();
	OrderingPage::orderSummary->BringToFront();
}




void Burger::TotalPriceHandler() {
	Burger::totalPrice = Burger::hotdogStruct->price + Burger::cheeseStruct->price + Burger::beefStruct->price +
		Burger::chickenStruct->price + Burger::footlongStruct->price + Burger::cokeStruct->price + Burger::spriteStruct->price +
		Burger::icedteaStruct->price + Burger::pepsiStruct->price + totalDataPrice;


	if (Burger::totalPrice == 0)
		Burger::IsCheckOut(false);
	else
		Burger::IsCheckOut(true);

	Burger::totalLabel->Text = Convert::ToString(totalPrice);
}


void Burger::IsCheckOut(bool status) {
	Burger::checkoutBtn->Enabled = status;
	if (status) {
		Burger::checkoutBtn->BackColor = Drawing::Color::Transparent;
	}else {
		Burger::checkoutBtn->BackColor = Drawing::Color::LightGray;
	}
}

void Burger::LabelGiver() {
	if (DataReader::IsItemExist(Burger::cheeseStruct->name)) {
		cheeseQuantity->Text = DataReader::GetQuantityData(Burger::cheeseStruct->name);
	}
	if (DataReader::IsItemExist(Burger::chickenStruct->name)) {
		chickenQuantity->Text = DataReader::GetQuantityData(Burger::chickenStruct->name);
	}
	if (DataReader::IsItemExist(Burger::hotdogStruct->name)) {
		hotdogQuantity->Text = DataReader::GetQuantityData(Burger::hotdogStruct->name);
	}
	if (DataReader::IsItemExist(Burger::beefStruct->name)) {
		beefQuantity->Text = DataReader::GetQuantityData(Burger::beefStruct->name);
	}
	if (DataReader::IsItemExist(Burger::footlongStruct->name)) {
		footlongQuantity->Text = DataReader::GetQuantityData(Burger::footlongStruct->name);
	}
	if (DataReader::IsItemExist(Burger::cokeStruct->name)) {
		cokeQuantity->Text = DataReader::GetQuantityData(Burger::cokeStruct->name);
	}
	if (DataReader::IsItemExist(Burger::spriteStruct->name)) {
		spriteQuantity->Text = DataReader::GetQuantityData(Burger::spriteStruct->name);
	}
	if (DataReader::IsItemExist(Burger::icedteaStruct->name)) {
		icedteaQuantity->Text = DataReader::GetQuantityData(Burger::icedteaStruct->name);
	}
	if (DataReader::IsItemExist(Burger::pepsiStruct->name)) {
		pepsiQuantity->Text = DataReader::GetQuantityData(Burger::pepsiStruct->name);
	}
}
