#include "RiceMeals.h"
#include "OrderingPage.h"
#include "OrderSummary.h"
#include "DataReader.h"
#include "DataWriter.h"

using namespace ProjectEve;

// MAINS
void RiceMeals::RiceButtonHandler() {
	RiceMeals::burgerSteakBtn->MouseDown += gcnew MouseEventHandler(this, &RiceMeals::BurgerSteakButtonClick);
	RiceMeals::siomaRiceBtn->MouseDown += gcnew MouseEventHandler(this, &RiceMeals::SiomaiRiceButtonClick);
	RiceMeals::alaKingBtn->MouseDown += gcnew MouseEventHandler(this, &RiceMeals::AlaKingButtonClick);
	RiceMeals::sisigRiceBtn->MouseDown += gcnew MouseEventHandler(this, &RiceMeals::SisigRiceButtonClick);

	RiceMeals::cokeBtn->MouseDown += gcnew MouseEventHandler(this, &RiceMeals::CokeButtonClick);
	RiceMeals::spriteBtn->MouseDown += gcnew MouseEventHandler(this, &RiceMeals::SpriteButtonClick);
	RiceMeals::icedteaBtn->MouseDown += gcnew MouseEventHandler(this, &RiceMeals::IcedTeaButtonClick);
	RiceMeals::pepsiBtn->MouseDown += gcnew MouseEventHandler(this, &RiceMeals::PepsiButtonClick);
	RiceMeals::riceBtn->MouseDown += gcnew MouseEventHandler(this, &RiceMeals::RiceButtonClick);


	RiceMeals::origBurgerSteakLeftPosition = RiceMeals::burgerSteakQuantity->Left;
	RiceMeals::origSiomaiRicePosition = RiceMeals::siomaRiceQuantity->Left;
	RiceMeals::origAlaKingLeftPosition = RiceMeals::alaKingQuantity->Left;
	RiceMeals::origSisigRiceLeftPosition = RiceMeals::sisigRiceQuantity->Left;

	RiceMeals::origCokeLeftPosition = RiceMeals::cokeQuantity->Left;
	RiceMeals::origSpriteLeftPosition = RiceMeals::spriteQuantity->Left;
	RiceMeals::origIcedTeaLeftPosition = RiceMeals::icedteaQuantity->Left;
	RiceMeals::origPepsiLeftPosition = RiceMeals::pepsiQuantity->Left;
	RiceMeals::origRiceLeftPosition = RiceMeals::riceQuantity->Left;


	RiceMeals::orderagainBtn->Click += gcnew EventHandler(this, &RiceMeals::OrderAgainButtonClick);
	RiceMeals::checkoutBtn->Click += gcnew EventHandler(this, &RiceMeals::CheckOutButtonClick);
	RiceMeals::IsOrderingAndCheckout(false);

	DataReader::DeleteAllItem(RiceMeals::summarizedOrder);
	DataReader::ReadData(RiceMeals::summarizedOrder);
	RiceMeals::LabelGiver();
	totalDataPrice = DataReader::GetTotalData();
	RiceMeals::TotalPriceHandler();

}

// MAIN FUNCTIONS
void RiceMeals::MouseDownEventHandler(MouseEventArgs^ e, Label^ label, const int origLeftPos, interior_ptr<int> cnt) {
	switch (e->Button) {
	case ::MouseButtons::Left:
		*cnt = *cnt + 1;
		label->Text = Convert::ToString(*cnt);
		RiceMeals::LabelAdjuster(label, origLeftPos, *cnt);
		break;
	case ::MouseButtons::Right:
		if (*cnt > 0) {
			*cnt = *cnt - 1;
			label->Text = Convert::ToString(*cnt);
			RiceMeals::LabelAdjuster(label, origLeftPos, *cnt);
		}
		if (*cnt == 0)
			label->Text = "";
		break;
	}
}


void RiceMeals::LabelAdjuster(Label^ label, const int constLeftPos, const int counter) {
	if (counter < 10) {
		label->Left = constLeftPos;
	}
	else if (counter >= 10 && counter < 100) {
		label->Left = constLeftPos - 5;
	}
	else if (counter >= 100) {
		label->Left = constLeftPos - 10;
	}
}



void RiceMeals::ButtonFunction(MouseEventArgs^ e, Product^ product, ListViewItem^ listViewItem, Label^ label, interior_ptr<int> price, const int origPos) {
	if (product->quantity == 0) {
		listViewItem->SubItems->Add(Convert::ToString(product->quantity));
		listViewItem->SubItems->Add(Convert::ToString(product->price));
		RiceMeals::summarizedOrder->Items->Add(listViewItem);
	}

	RiceMeals::MouseDownEventHandler(e, label, origPos, &product->quantity);

	if (product->quantity == 0) {
		listViewItem->Remove();
		RiceMeals::summarizedOrder->Items->Remove(listViewItem);
	}

	product->price = *price * product->quantity;

	listViewItem->SubItems[1]->Text = Convert::ToString(product->quantity);
	listViewItem->SubItems[2]->Text = Convert::ToString(product->price);
}


void RiceMeals::ButtonClickDataInseration(Product^ product, int price) {
	if (DataReader::IsItemExist(product->name)) {
		DataReader::DeleteListItem(product->name, RiceMeals::summarizedOrder);
		if (!Once) {
			totalDataPrice = totalDataPrice - price * Convert::ToInt16(DataReader::GetQuantityData(product->name));
			Once = true;
		}
	}
}

// FOODS BUTTON CLICK
void RiceMeals::BurgerSteakButtonClick(Object^ sender, MouseEventArgs^ e) {
	RiceMeals::ButtonFunction(e, RiceMeals::burgerSteakStruct, RiceMeals::burgeetSteakItem, RiceMeals::burgerSteakQuantity, &RiceMeals::burgerSteakPrice, origBurgerSteakLeftPosition);
	RiceMeals::ButtonClickDataInseration(burgerSteakStruct, burgerSteakPrice);
	RiceMeals::TotalPriceHandler();
}
void RiceMeals::SiomaiRiceButtonClick(Object^ sender, MouseEventArgs^ e) {
	RiceMeals::ButtonFunction(e, RiceMeals::siomaiRiceStruct, RiceMeals::siomaRiceItem, RiceMeals::siomaRiceQuantity, &RiceMeals::siomaiRicePrice, origSiomaiRicePosition);
	RiceMeals::ButtonClickDataInseration(siomaiRiceStruct, siomaiRicePrice);
	RiceMeals::TotalPriceHandler();
}
void RiceMeals::AlaKingButtonClick(Object^ sender, MouseEventArgs^ e) {
	RiceMeals::ButtonFunction(e, RiceMeals::alaKingStruct, RiceMeals::alaKingItem, RiceMeals::alaKingQuantity, &RiceMeals::alaKingPrice, origAlaKingLeftPosition);
	RiceMeals::ButtonClickDataInseration(alaKingStruct, alaKingPrice);
	RiceMeals::TotalPriceHandler();
}
void RiceMeals::SisigRiceButtonClick(Object^ sender, MouseEventArgs^ e) {
	RiceMeals::ButtonFunction(e, RiceMeals::sisigRiceStruct, RiceMeals::sisigRiceItem, RiceMeals::sisigRiceQuantity, &RiceMeals::sisigRicePrice, origSisigRiceLeftPosition);
	RiceMeals::ButtonClickDataInseration(sisigRiceStruct, sisigRicePrice);
	RiceMeals::TotalPriceHandler();
}


// ADD-ONS BUTTON CLICK
void RiceMeals::CokeButtonClick(Object^ sender, MouseEventArgs^ e) {
	RiceMeals::ButtonFunction(e, RiceMeals::cokeStruct, RiceMeals::cokeItem, RiceMeals::cokeQuantity, &RiceMeals::cokePrice, origCokeLeftPosition);
	RiceMeals::ButtonClickDataInseration(cokeStruct, cokePrice);
	RiceMeals::TotalPriceHandler();
}
void RiceMeals::SpriteButtonClick(Object^ sender, MouseEventArgs^ e) {
	RiceMeals::ButtonFunction(e, RiceMeals::spriteStruct, RiceMeals::spriteItem, RiceMeals::spriteQuantity, &RiceMeals::spritePrice, origSpriteLeftPosition);
	RiceMeals::ButtonClickDataInseration(spriteStruct, spritePrice);
	RiceMeals::TotalPriceHandler();
}
void RiceMeals::IcedTeaButtonClick(Object^ sender, MouseEventArgs^ e) {
	RiceMeals::ButtonFunction(e, RiceMeals::icedteaStruct, RiceMeals::icedteaItem, RiceMeals::icedteaQuantity, &RiceMeals::icedteaPrice, origIcedTeaLeftPosition);
	RiceMeals::ButtonClickDataInseration(icedteaStruct, icedteaPrice);
	RiceMeals::TotalPriceHandler();
}
void RiceMeals::PepsiButtonClick(Object^ sender, MouseEventArgs^ e) {
	RiceMeals::ButtonFunction(e, RiceMeals::pepsiStruct, RiceMeals::pepsiItem, RiceMeals::pepsiQuantity, &RiceMeals::pepsiPrice, origPepsiLeftPosition);
	RiceMeals::ButtonClickDataInseration(pepsiStruct, pepsiPrice);
	RiceMeals::TotalPriceHandler();
}

void RiceMeals::RiceButtonClick(Object^ sender, MouseEventArgs^ e) {
	RiceMeals::ButtonFunction(e, RiceMeals::riceStruct, RiceMeals::riceItem, RiceMeals::riceQuantity, &RiceMeals::ricePrice, origRiceLeftPosition);
	RiceMeals::ButtonClickDataInseration(riceStruct, ricePrice);
	RiceMeals::TotalPriceHandler();
}

// TOTAL PRICE CALCULATOR
void RiceMeals::TotalPriceHandler() {
	RiceMeals::totalPrice = RiceMeals::burgerSteakStruct->price + RiceMeals::siomaiRiceStruct->price + RiceMeals::alaKingStruct->price +
		RiceMeals::sisigRiceStruct->price + RiceMeals::cokeStruct->price + RiceMeals::spriteStruct->price +
		RiceMeals::icedteaStruct->price + RiceMeals::pepsiStruct->price + RiceMeals::riceStruct->price + totalDataPrice;


	if (RiceMeals::totalPrice == 0)
		RiceMeals::IsOrderingAndCheckout(false);
	else
		RiceMeals::IsOrderingAndCheckout(true);

	RiceMeals::totalLabel->Text = Convert::ToString(RiceMeals::totalPrice);
}

// NAV BUTTO

void RiceMeals::OrderAgainButtonClick(Object^ sender, EventArgs^ e) {
	// DATA INSERTION
	RiceMeals::DataInsertion(burgerSteakStruct);
	RiceMeals::DataInsertion(siomaiRiceStruct);
	RiceMeals::DataInsertion(alaKingStruct);
	RiceMeals::DataInsertion(sisigRiceStruct);


	RiceMeals::DataInsertion(cokeStruct);
	RiceMeals::DataInsertion(spriteStruct);
	RiceMeals::DataInsertion(icedteaStruct);
	RiceMeals::DataInsertion(pepsiStruct);
	RiceMeals::DataInsertion(riceStruct);


	OrderingPage::ordering->BringToFront();
}


void RiceMeals::DataInsertion(Product^ product) {
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


void RiceMeals::CheckOutButtonClick(Object^ sender, EventArgs^ e) {
	// DATA INSERTION
	RiceMeals::DataInsertion(burgerSteakStruct);
	RiceMeals::DataInsertion(siomaiRiceStruct);
	RiceMeals::DataInsertion(alaKingStruct);
	RiceMeals::DataInsertion(sisigRiceStruct);


	RiceMeals::DataInsertion(cokeStruct);
	RiceMeals::DataInsertion(spriteStruct);
	RiceMeals::DataInsertion(icedteaStruct);
	RiceMeals::DataInsertion(pepsiStruct);
	RiceMeals::DataInsertion(riceStruct);

	OrderSummary::GenerateTransactionNumber();
	OrderSummary::userControl = OrderingPage::riceMeals;
	OrderSummary::SetData();
	OrderingPage::orderSummary->BringToFront();
}


void RiceMeals::IsOrderingAndCheckout(bool status) {
	RiceMeals::checkoutBtn->Enabled = status;
	if (status) {
		RiceMeals::checkoutBtn->BackColor = Drawing::Color::Transparent;
	}
	else {
		RiceMeals::checkoutBtn->BackColor = Drawing::Color::LightGray;
	}
}

void RiceMeals::LabelGiver() {
	if (DataReader::IsItemExist(RiceMeals::burgerSteakStruct->name)) {
		burgerSteakQuantity->Text = DataReader::GetQuantityData(RiceMeals::burgerSteakStruct->name);
	}
	if (DataReader::IsItemExist(RiceMeals::siomaiRiceStruct->name)) {
		siomaRiceQuantity->Text = DataReader::GetQuantityData(RiceMeals::siomaiRiceStruct->name);
	}
	if (DataReader::IsItemExist(RiceMeals::alaKingStruct->name)) {
		alaKingQuantity->Text = DataReader::GetQuantityData(RiceMeals::alaKingStruct->name);
	}
	if (DataReader::IsItemExist(RiceMeals::sisigRiceStruct->name)) {
		sisigRiceQuantity->Text = DataReader::GetQuantityData(RiceMeals::sisigRiceStruct->name);
	}
	if (DataReader::IsItemExist(RiceMeals::cokeStruct->name)) {
		cokeQuantity->Text = DataReader::GetQuantityData(RiceMeals::cokeStruct->name);
	}
	if (DataReader::IsItemExist(RiceMeals::spriteStruct->name)) {
		spriteQuantity->Text = DataReader::GetQuantityData(RiceMeals::spriteStruct->name);
	}
	if (DataReader::IsItemExist(RiceMeals::icedteaStruct->name)) {
		icedteaQuantity->Text = DataReader::GetQuantityData(RiceMeals::icedteaStruct->name);
	}
	if (DataReader::IsItemExist(RiceMeals::pepsiStruct->name)) {
		pepsiQuantity->Text = DataReader::GetQuantityData(RiceMeals::pepsiStruct->name);
	}

	if (DataReader::IsItemExist(RiceMeals::riceStruct->name)) {
		riceQuantity->Text = DataReader::GetQuantityData(RiceMeals::riceStruct->name);
	}
}