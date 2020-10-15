#include "AllFoodsPage4.h"
#include "OrderingPage.h"
#include "OrderingPage1.h"

using namespace ProjectEve;

void AllFoodsPage4::AllFoodsButtonHandler() {
	AllFoodsPage4::spicyChicken->Click += gcnew EventHandler(this, &AllFoodsPage4::SpicyChickenButtonClick);

	AllFoodsPage4::spaghettiBtn->Click += gcnew EventHandler(this, &AllFoodsPage4::SpaghettiButtonClick);
}

void AllFoodsPage4::Update(Product^ product, ListView^ listView, ListViewItem^ listViewItem, interior_ptr<int> price, Label^ label) {
	if (product->quantity == 0) {
		listViewItem->SubItems->Add(Convert::ToString(product->quantity));
		listViewItem->SubItems->Add(Convert::ToString(product->price));
		listView->Items->Add(listViewItem);
	}

	product->quantity++;
	label->Text = Convert::ToString(product->quantity);

	if (product->quantity == 0) {
		listViewItem->Remove();
		listView->Items->Remove(listViewItem);
	}

	product->price = *price * product->quantity;

	listViewItem->SubItems[1]->Text = Convert::ToString(product->quantity);
	listViewItem->SubItems[2]->Text = Convert::ToString(product->price);
}

void AllFoodsPage4::SpicyChickenButtonClick(Object^ sender, EventArgs^ e) {
	OrderingPage::chicken->BringToFront();
	OrderingPage1::chickenBtn->PerformClick();
	AllFoodsPage4::Update(Chicken::spicyStruct,Chicken::summarizedOrder ,Chicken::spicyItem, &Chicken::spicyPrice, Chicken::spicyQuantity);
	Chicken::TotalPriceHandler();
}


void AllFoodsPage4::SpaghettiButtonClick(Object^ sender, EventArgs^ e) {
	OrderingPage::pasta->BringToFront();
	OrderingPage1::pastaBtn->PerformClick();
	AllFoodsPage4::Update(Pasta::spaghettiStruct, Pasta::summarizedOrder, Pasta::spaghettiItem, &Pasta::spaghettiPrice, Pasta::spaghettiQuantity);
	Pasta::TotalPriceHandler();
}