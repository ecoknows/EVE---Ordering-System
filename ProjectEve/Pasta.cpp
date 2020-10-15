#include "Pasta.h"
#include "OrderingPage.h"
#include "OrderSummary.h"
#include "DataReader.h"
#include "DataWriter.h"

using namespace ProjectEve;

// MAINS
void Pasta::PastaButtonHandler() {
	Pasta::spaghettiBtn->MouseDown += gcnew MouseEventHandler(this,&Pasta::SpaghettiButtonClick);
	Pasta::carbonaraBtn->MouseDown += gcnew MouseEventHandler(this, &Pasta::CarbonaraButtonClick);
	Pasta::lasagnaBtn->MouseDown += gcnew MouseEventHandler(this, &Pasta::LasagnaButtonClick);
	Pasta::bakedmacBtn->MouseDown += gcnew MouseEventHandler(this, &Pasta::BakedMacButtonClick);

	Pasta::cokeBtn->MouseDown += gcnew MouseEventHandler(this, &Pasta::CokeButtonClick);
	Pasta::spriteBtn->MouseDown += gcnew MouseEventHandler(this, &Pasta::SpriteButtonClick);
	Pasta::icedteaBtn->MouseDown += gcnew MouseEventHandler(this, &Pasta::IcedTeaButtonClick);
	Pasta::pepsiBtn->MouseDown += gcnew MouseEventHandler(this, &Pasta::PepsiButtonClick);


	Pasta::origSpaghettinLeftPosition = Pasta::spaghettiQuantity->Left;
	Pasta::origCarbonaraLeftPosition = Pasta::carbonaraQuantity->Left;
	Pasta::origLasagnaLeftPosition = Pasta::lasagnaQuantity->Left;
	Pasta::origBakedMacLeftPosition = Pasta::bakedmacQuantity->Left;

	Pasta::origCokeLeftPosition = Pasta::cokeQuantity->Left;
	Pasta::origSpriteLeftPosition = Pasta::spriteQuantity->Left;
	Pasta::origIcedTeaLeftPosition = Pasta::icedteaQuantity->Left;
	Pasta::origPepsiLeftPosition = Pasta::pepsiQuantity->Left;

	// NAV BUTTONS
	Pasta::orderagainBtn->Click += gcnew EventHandler(this, &Pasta::OrderingButtonClick);
	Pasta::checkoutBtn->Click += gcnew EventHandler(this, &Pasta::CheckOutButtonClick);
	Pasta::IsOrderingAndCheckout(false);

	DataReader::DeleteAllItem(Pasta::summarizedOrder);
	DataReader::ReadData(Pasta::summarizedOrder);
	Pasta::LabelGiver();
	totalDataPrice = DataReader::GetTotalData();
	Pasta::TotalPriceHandler();
}


void Pasta::MouseDownEventHandler(MouseEventArgs^ e, Label^ label, const int origLeftPos, interior_ptr<int> cnt) {
	switch (e->Button) {
	case ::MouseButtons::Left:
		*cnt = *cnt + 1;
		label->Text = Convert::ToString(*cnt);
		Pasta::LabelAdjuster(label, origLeftPos, *cnt);
		break;
	case ::MouseButtons::Right:
		if (*cnt > 0) {
			*cnt = *cnt - 1;
			label->Text = Convert::ToString(*cnt);
			Pasta::LabelAdjuster(label,origLeftPos, *cnt);
		}
		if (*cnt == 0)
			label->Text = "";
		break;
	}
}

void Pasta::LabelAdjuster(Label^ label, const int constLeftPos, const int counter) {
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

void Pasta::ButtonFunction(MouseEventArgs^ e, Product^ product, ListViewItem^ listViewItem, Label^ label, interior_ptr<int> price, const int origPos) {
	if (product->quantity == 0) {
		listViewItem->SubItems->Add(Convert::ToString(product->quantity));
		listViewItem->SubItems->Add(Convert::ToString(product->price));
		Pasta::summarizedOrder->Items->Add(listViewItem);
	}

	Pasta::MouseDownEventHandler(e, label, origPos, &product->quantity);

	if (product->quantity == 0) {
		listViewItem->Remove();
		Pasta::summarizedOrder->Items->Remove(listViewItem);
	}

	product->price = *price * product->quantity;

	listViewItem->SubItems[1]->Text = Convert::ToString(product->quantity);
	listViewItem->SubItems[2]->Text = Convert::ToString(product->price);
}


void Pasta::ButtonClickDataInseration(Product^ product, int price) {
	if (DataReader::IsItemExist(product->name)) {
		DataReader::DeleteListItem(product->name, Pasta::summarizedOrder);
		if (!Once) {
			totalDataPrice = totalDataPrice - price * Convert::ToInt16(DataReader::GetQuantityData(product->name));
			Once = true;
		}
	}
}




// FOODS BUTTON CLICK
void Pasta::SpaghettiButtonClick(Object^ sender, MouseEventArgs^ e) {
	Pasta::ButtonFunction(e,Pasta::spaghettiStruct, Pasta::spaghettiItem, Pasta::spaghettiQuantity, &Pasta::spaghettiPrice,origSpaghettinLeftPosition);
	Pasta::ButtonClickDataInseration(spaghettiStruct, spaghettiPrice);
	Pasta::TotalPriceHandler();
}
void Pasta::CarbonaraButtonClick(Object^ sender, MouseEventArgs^ e) {
	Pasta::ButtonFunction(e, Pasta::carbonaraStruct, Pasta::carbonaraItem, Pasta::carbonaraQuantity, &Pasta::carbonaraPrice, origCarbonaraLeftPosition);
	Pasta::ButtonClickDataInseration(carbonaraStruct, carbonaraPrice);
	Pasta::TotalPriceHandler();
}
void Pasta::LasagnaButtonClick(Object^ sender, MouseEventArgs^ e) {
	Pasta::ButtonFunction(e, Pasta::lasagnaStruct, Pasta::lasagnaItem, Pasta::lasagnaQuantity, &Pasta::lasagnaPrice,origLasagnaLeftPosition);
	Pasta::ButtonClickDataInseration(lasagnaStruct, lasagnaPrice);
	Pasta::TotalPriceHandler();
}
void Pasta::BakedMacButtonClick(Object^ sender, MouseEventArgs^ e) {
	Pasta::ButtonFunction(e, Pasta::bakedStruct, Pasta::bakedItem, Pasta::bakedmacQuantity, &Pasta::bakedPrice, origBakedMacLeftPosition);
	Pasta::ButtonClickDataInseration(bakedStruct, bakedPrice);
	Pasta::TotalPriceHandler();
}

// ADD-ONS BUTTON CLICK
void Pasta::CokeButtonClick(Object^ sender, MouseEventArgs^ e) {
	Pasta::ButtonFunction(e, Pasta::cokeStruct, Pasta::cokeItem, Pasta::cokeQuantity, &Pasta::cokePrice, origCokeLeftPosition);
	Pasta::ButtonClickDataInseration(cokeStruct, cokePrice);
	Pasta::TotalPriceHandler();
}
void Pasta::SpriteButtonClick(Object^ sender, MouseEventArgs^ e) {
	Pasta::ButtonFunction(e, Pasta::spriteStruct, Pasta::spriteItem, Pasta::spriteQuantity, &Pasta::spritePrice, origSpriteLeftPosition);
	Pasta::ButtonClickDataInseration(spriteStruct, spritePrice);
	Pasta::TotalPriceHandler();
}
void Pasta::IcedTeaButtonClick(Object^ sender, MouseEventArgs^ e) {
	Pasta::ButtonFunction(e, Pasta::icedteaStruct, Pasta::icedteaItem, Pasta::icedteaQuantity, &Pasta::icedteaPrice, origIcedTeaLeftPosition);
	Pasta::ButtonClickDataInseration(icedteaStruct, icedteaPrice);
	Pasta::TotalPriceHandler();
}
void Pasta::PepsiButtonClick(Object^ sender, MouseEventArgs^ e) {
	Pasta::ButtonFunction(e, Pasta::pepsiStruct, Pasta::pepsiItem, Pasta::pepsiQuantity, &Pasta::pepsiPrice, origPepsiLeftPosition);
	Pasta::ButtonClickDataInseration(pepsiStruct, pepsiPrice);
	Pasta::TotalPriceHandler();
}


// TOTAL PRICE CALCULATOR
void Pasta::TotalPriceHandler() {
	Pasta::totalPrice = Pasta::spaghettiStruct->price + Pasta::carbonaraStruct->price + Pasta::lasagnaStruct->price +
		Pasta::bakedStruct->price + Pasta::cokeStruct->price + Pasta::spriteStruct->price +
		Pasta::icedteaStruct->price + Pasta::pepsiStruct->price + totalDataPrice;

	if (Pasta::totalPrice == 0)
		Pasta::IsOrderingAndCheckout(false);
	else
		Pasta::IsOrderingAndCheckout(true);

	Pasta::totalLabel->Text = Convert::ToString(Pasta::totalPrice);
}


void Pasta::OrderingButtonClick(Object^ sender, EventArgs^ e) {
	// DATA Insertion
	Pasta::DataInsertion(spaghettiStruct);
	Pasta::DataInsertion(carbonaraStruct);
	Pasta::DataInsertion(lasagnaStruct);
	Pasta::DataInsertion(bakedStruct);


	Pasta::DataInsertion(cokeStruct);
	Pasta::DataInsertion(spriteStruct);
	Pasta::DataInsertion(icedteaStruct);
	Pasta::DataInsertion(pepsiStruct);


	OrderingPage::ordering->BringToFront();

}


void Pasta::DataInsertion(Product^ product) {
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


void Pasta::CheckOutButtonClick(Object^ sender, EventArgs^ e) {
	// DATA Insertion

	Pasta::DataInsertion(spaghettiStruct);
	Pasta::DataInsertion(carbonaraStruct);
	Pasta::DataInsertion(lasagnaStruct);
	Pasta::DataInsertion(bakedStruct);

	Pasta::DataInsertion(cokeStruct);
	Pasta::DataInsertion(spriteStruct);
	Pasta::DataInsertion(icedteaStruct);
	Pasta::DataInsertion(pepsiStruct);

	OrderSummary::GenerateTransactionNumber();
	OrderSummary::userControl = OrderingPage::pasta;
	OrderSummary::SetData();
	OrderingPage::orderSummary->BringToFront();
}


void Pasta::IsOrderingAndCheckout(bool status) {
	Pasta::checkoutBtn->Enabled = status;
	if (status) {
		Pasta::checkoutBtn->BackColor = Drawing::Color::Transparent;
	}
	else {
		Pasta::checkoutBtn->BackColor = Drawing::Color::LightGray;
	}

}



void Pasta::LabelGiver() {
	if (DataReader::IsItemExist(Pasta::spaghettiStruct->name)) {
		spaghettiQuantity->Text = DataReader::GetQuantityData(Pasta::spaghettiStruct->name);
	}
	if (DataReader::IsItemExist(Pasta::carbonaraStruct->name)) {
		carbonaraQuantity->Text = DataReader::GetQuantityData(Pasta::carbonaraStruct->name);
	}
	if (DataReader::IsItemExist(Pasta::lasagnaStruct->name)) {
		lasagnaQuantity->Text = DataReader::GetQuantityData(Pasta::lasagnaStruct->name);
	}
	if (DataReader::IsItemExist(Pasta::bakedStruct->name)) {
		bakedmacQuantity->Text = DataReader::GetQuantityData(Pasta::bakedStruct->name);
	}
	if (DataReader::IsItemExist(Pasta::cokeStruct->name)) {
		cokeQuantity->Text = DataReader::GetQuantityData(Pasta::cokeStruct->name);
	}
	if (DataReader::IsItemExist(Pasta::spriteStruct->name)) {
		spriteQuantity->Text = DataReader::GetQuantityData(Pasta::spriteStruct->name);
	}
	if (DataReader::IsItemExist(Pasta::icedteaStruct->name)) {
		icedteaQuantity->Text = DataReader::GetQuantityData(Pasta::icedteaStruct->name);
	}
	if (DataReader::IsItemExist(Pasta::pepsiStruct->name)) {
		pepsiQuantity->Text = DataReader::GetQuantityData(Pasta::pepsiStruct->name);
	}
}