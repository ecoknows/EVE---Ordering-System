#include "Chicken.h"
#include "OrderingPage.h"
#include "OrderSummary.h"
#include "DataReader.h"
#include "DataWriter.h"

using namespace ProjectEve;


void Chicken::ChickenButtonHandler() {

	Chicken::butteredBtn->MouseDown += gcnew MouseEventHandler(this, &Chicken::ButteredButtonClick);
	Chicken::friedBtn->MouseDown += gcnew MouseEventHandler(this, &Chicken::FriedButtonClick);
	Chicken::spicyBtn->MouseDown += gcnew MouseEventHandler(this, &Chicken::SpicyButtonClick);
	Chicken::roastedBtn->MouseDown += gcnew MouseEventHandler(this, &Chicken::RoastedButtonClick);

	Chicken::cokeBtn->MouseDown += gcnew MouseEventHandler(this, &Chicken::CokeButtonClick);
	Chicken::spriteBtn->MouseDown += gcnew MouseEventHandler(this, &Chicken::SpriteButtonClick);
	Chicken::icedteaBtn->MouseDown += gcnew MouseEventHandler(this, &Chicken::IcedTeaButtonClick);
	Chicken::pepsiBtn->MouseDown += gcnew MouseEventHandler(this, &Chicken::PepsiButtonClick);
	Chicken::riceBtn->MouseDown += gcnew MouseEventHandler(this, &Chicken::RiceButtonClick);

	Chicken::origButteredChickenLeftPosition += Chicken::butteredQuantity->Left;
	Chicken::origFriedChickenLeftPosition += Chicken::friedQuantity->Left;
	Chicken::origSpicyChickenLeftPosition += Chicken::spicyQuantity->Left;
	Chicken::origRoastedChickenLeftPosition += Chicken::roastedQuantity->Left;
	Chicken::origRiceLeftPosition += Chicken::riceQuantity->Left;

	Chicken::origCokeLeftPosition = Chicken::cokeQuantity->Left;
	Chicken::origSpriteLeftPosition = Chicken::spriteQuantity->Left;
	Chicken::origIcedTeaLeftPosition = Chicken::icedteaQuantity->Left;
	Chicken::origPepsiLeftPosition = Chicken::pepsiQuantity->Left;
	Chicken::origRiceLeftPosition = Chicken::riceQuantity->Left;


	// NAV BUTTONS
	Chicken::orderagainBtn->Click += gcnew EventHandler(this, &Chicken::OrderingButtonClick);
	Chicken::checkoutBtn->Click += gcnew EventHandler(this, &Chicken::CheckOutButtonClick);
	Chicken::IsOrderingAndCheckout(false);

	DataReader::DeleteAllItem(Chicken::summarizedOrder);
	DataReader::ReadData(Chicken::summarizedOrder);
	Chicken::LabelGiver();
	totalDataPrice = DataReader::GetTotalData();
	Chicken::TotalPriceHandler();
}

void Chicken::MouseDownEventHandler(MouseEventArgs^ e, Label^ label, const int origLeftPos, interior_ptr<int> cnt) {
	switch (e->Button) {
	case ::MouseButtons::Left:
		*cnt = *cnt + 1;
		label->Text = Convert::ToString(*cnt);
		Chicken::LabelAdjuster(label, origLeftPos, *cnt);
		break;
	case ::MouseButtons::Right:
		if (*cnt > 0) {
			*cnt = *cnt - 1;
			label->Text = Convert::ToString(*cnt);
			Chicken::LabelAdjuster(label, origLeftPos, *cnt);
		}
		if (*cnt == 0)
			label->Text = "";
		break;
	}
}

void Chicken::LabelAdjuster(Label^ label, const int constLeftPos, const int counter) {
	if (counter < 10) {
		label->Left = constLeftPos;
	}else if (counter >= 10 && counter < 100) {
		label->Left = constLeftPos - 5;
	}else if (counter >= 100) {
		label->Left = constLeftPos - 10;
	}
	

}

void Chicken::ButtonFunction(MouseEventArgs^ e, Product^ product, ListViewItem^ listViewItem, Label^ label, interior_ptr<int> price, const int origPos) {
	if (product->quantity == 0) {
		listViewItem->SubItems->Add(Convert::ToString(product->quantity));
		listViewItem->SubItems->Add(Convert::ToString(product->price));
		Chicken::summarizedOrder->Items->Add(listViewItem);
	}

	Chicken::MouseDownEventHandler(e, label, origPos, &product->quantity);

	if (product->quantity == 0) {
		listViewItem->Remove();
		Chicken::summarizedOrder->Items->Remove(listViewItem);
	}

	product->price = *price * product->quantity;

	listViewItem->SubItems[1]->Text = Convert::ToString(product->quantity);
	listViewItem->SubItems[2]->Text = Convert::ToString(product->price);
}


void Chicken::ButtonClickDataInseration(Product^ product, int price) {
	if (DataReader::IsItemExist(product->name)) {
		DataReader::DeleteListItem(product->name, Pasta::summarizedOrder);
		if (!Once) {
			totalDataPrice = totalDataPrice - price * Convert::ToInt16(DataReader::GetQuantityData(product->name));
			Once = true;
		}
	}
}

void Chicken::ButteredButtonClick(Object^ sender, MouseEventArgs^ e) {
	Chicken::ButtonFunction(e, Chicken::butteredStruct, Chicken::butteredItem, Chicken::butteredQuantity, &Chicken::butteredPrice, origButteredChickenLeftPosition);
	Chicken::ButtonClickDataInseration(butteredStruct, butteredPrice);
	Chicken::TotalPriceHandler();
}
void Chicken::FriedButtonClick(Object^ sender, MouseEventArgs^ e) {
	Chicken::ButtonFunction(e, Chicken::friedStruct, Chicken::friedItem, Chicken::friedQuantity, &Chicken::friedPrice, origFriedChickenLeftPosition);
	Chicken::ButtonClickDataInseration(friedStruct, friedPrice);
	Chicken::TotalPriceHandler();
}
void Chicken::SpicyButtonClick(Object^ sender, MouseEventArgs^ e) {
	Chicken::ButtonFunction(e, Chicken::spicyStruct, Chicken::spicyItem, Chicken::spicyQuantity, &Chicken::spicyPrice, origSpicyChickenLeftPosition);
	Chicken::ButtonClickDataInseration(spicyStruct, spicyPrice);
	Chicken::TotalPriceHandler();
}
void Chicken::RoastedButtonClick(Object^ sender, MouseEventArgs^ e) {
	Chicken::ButtonFunction(e, Chicken::roastedStruct, Chicken::roastedItem, Chicken::roastedQuantity, &Chicken::roastedPrice, origRoastedChickenLeftPosition);
	Chicken::ButtonClickDataInseration(roastedStruct, roastedPrice);
	Chicken::TotalPriceHandler();
}


void Chicken::CokeButtonClick(Object^ sender, MouseEventArgs^ e) {
	Chicken::ButtonFunction(e, Chicken::cokeStruct, Chicken::cokeItem, Chicken::cokeQuantity, &Chicken::cokePrice, origCokeLeftPosition);
	Chicken::ButtonClickDataInseration(cokeStruct, cokePrice);
	Chicken::TotalPriceHandler();
}

void Chicken::SpriteButtonClick(Object^ sender, MouseEventArgs^ e) {
	Chicken::ButtonFunction(e, Chicken::spriteStruct, Chicken::spriteItem, Chicken::spriteQuantity, &Chicken::spritePrice, origSpriteLeftPosition);
	Chicken::ButtonClickDataInseration(spriteStruct, spritePrice);
	Chicken::TotalPriceHandler();
}

void Chicken::IcedTeaButtonClick(Object^ sender, MouseEventArgs^ e) {
	Chicken::ButtonFunction(e, Chicken::icedteaStruct, Chicken::icedteaItem, Chicken::icedteaQuantity, &Chicken::icedteaPrice, origIcedTeaLeftPosition);
	Chicken::ButtonClickDataInseration(icedteaStruct, icedteaPrice);
	Chicken::TotalPriceHandler();
}

void Chicken::PepsiButtonClick(Object^ sender, MouseEventArgs^ e) {
	Chicken::ButtonFunction(e, Chicken::pepsiStruct, Chicken::pepsiItem, Chicken::pepsiQuantity, &Chicken::pepsiPrice, origPepsiLeftPosition);
	Chicken::ButtonClickDataInseration(pepsiStruct, pepsiPrice);
	Chicken::TotalPriceHandler();
}
void Chicken::RiceButtonClick(Object^ sender, MouseEventArgs^ e) {
	Chicken::ButtonFunction(e, Chicken::riceStruct, Chicken::riceItem, Chicken::riceQuantity, &Chicken::ricePrice, origRiceLeftPosition);
	Chicken::ButtonClickDataInseration(riceStruct, ricePrice);
	Chicken::TotalPriceHandler();
}


void Chicken::TotalPriceHandler() {
	Chicken::totalPrice = Chicken::butteredStruct->price + Chicken::friedStruct->price + Chicken::spicyStruct->price +
		Chicken::roastedStruct->price + Chicken::cokeStruct->price + Chicken::spriteStruct->price +
		Chicken::icedteaStruct->price + Chicken::pepsiStruct->price + totalDataPrice;


	if (Chicken::totalPrice == 0)
		Chicken::IsOrderingAndCheckout(false);
	else
		Chicken::IsOrderingAndCheckout(true);

	Chicken::totalLabel->Text = Convert::ToString(Chicken::totalPrice);
}


// NAV BUTTONS

void Chicken::OrderingButtonClick(Object^ sender, EventArgs^ e) {
	// DATA Insertion
	Chicken::DataInsertion(butteredStruct);
	Chicken::DataInsertion(friedStruct);
	Chicken::DataInsertion(spicyStruct);
	Chicken::DataInsertion(roastedStruct);


	Chicken::DataInsertion(cokeStruct);
	Chicken::DataInsertion(spriteStruct);
	Chicken::DataInsertion(icedteaStruct);
	Chicken::DataInsertion(pepsiStruct);
	Chicken::DataInsertion(riceStruct);


	OrderingPage::ordering->BringToFront();

}

void Chicken::DataInsertion(Product^ product) {
	if (DataReader::IsItemExist(product->name) || product->quantity > 0) {
		DataReader::DeleteData(product->name);
		DataWriter::WriteData(product->name, product->price, product->quantity);
	}
	else if (product->quantity != 0) {
		DataWriter::WriteData(product->name, product->price, product->quantity);
	}

	if (product->quantity == 0) {
		DataReader::DeleteData(product->name);
	}
}


void Chicken::CheckOutButtonClick(Object^ sender, EventArgs^ e) {
	// DATA Insertion
	Chicken::DataInsertion(butteredStruct);
	Chicken::DataInsertion(friedStruct);
	Chicken::DataInsertion(spicyStruct);
	Chicken::DataInsertion(roastedStruct);


	Chicken::DataInsertion(cokeStruct);
	Chicken::DataInsertion(spriteStruct);
	Chicken::DataInsertion(icedteaStruct);
	Chicken::DataInsertion(pepsiStruct);
	Chicken::DataInsertion(riceStruct);

	OrderSummary::GenerateTransactionNumber();
	OrderSummary::userControl = OrderingPage::chicken;
	OrderSummary::SetData();
	OrderingPage::orderSummary->BringToFront();
}


void Chicken::IsOrderingAndCheckout(bool status) {
	Chicken::checkoutBtn->Enabled = status;
	if (!status) {
		Chicken::checkoutBtn->BackColor = Drawing::Color::LightGray;
	}else {
		Chicken::checkoutBtn->BackColor = Drawing::Color::Transparent;
	}
}

void Chicken::LabelGiver() {

	if (DataReader::IsItemExist(Chicken::butteredStruct->name)) {
		butteredQuantity->Text = DataReader::GetQuantityData(Chicken::butteredStruct->name);
	}
	if (DataReader::IsItemExist(Chicken::friedStruct->name)) {
		friedQuantity->Text = DataReader::GetQuantityData(Chicken::friedStruct->name);
	}
	if (DataReader::IsItemExist(Chicken::spicyStruct->name)) {
		spicyQuantity->Text = DataReader::GetQuantityData(Chicken::spicyStruct->name);
	}
	if (DataReader::IsItemExist(Chicken::roastedStruct->name)) {
		roastedQuantity->Text = DataReader::GetQuantityData(Chicken::roastedStruct->name);
	}
	if (DataReader::IsItemExist(Chicken::cokeStruct->name)) {
		cokeQuantity->Text = DataReader::GetQuantityData(Chicken::cokeStruct->name);
	}
	if (DataReader::IsItemExist(Chicken::spriteStruct->name)) {
		spriteQuantity->Text = DataReader::GetQuantityData(Chicken::spriteStruct->name);
	}
	if (DataReader::IsItemExist(Chicken::icedteaStruct->name)) {
		icedteaQuantity->Text = DataReader::GetQuantityData(Chicken::icedteaStruct->name);
	}
	if (DataReader::IsItemExist(Chicken::pepsiStruct->name)) {
		pepsiQuantity->Text = DataReader::GetQuantityData(Chicken::pepsiStruct->name);
	}
	if (DataReader::IsItemExist(Chicken::riceStruct->name)) {
		riceQuantity->Text = DataReader::GetQuantityData(Chicken::riceStruct->name);
	}
}
