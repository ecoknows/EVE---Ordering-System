#include "AllFoodsPage2.h"
#include "OrderingPage.h"
#include "OrderingPage1.h"

using namespace ProjectEve;

void AllFoodsPage2::AllFoodsButtonHandler() {
	AllFoodsPage2::cheeseburgerBtn->Click += gcnew EventHandler(this, &AllFoodsPage2::CheeseBurgerButtonClick);
	AllFoodsPage2::footlongBtn->Click += gcnew EventHandler(this, &AllFoodsPage2::FootLongButtonClick);
	AllFoodsPage2::chickenburgerBtn->Click += gcnew EventHandler(this, &AllFoodsPage2::ChickenButtonClick);

	AllFoodsPage2::friedchickenBtn->Click += gcnew EventHandler(this, &AllFoodsPage2::FriedChickenButtonClick);


	AllFoodsPage2::carbonaraBtn->Click += gcnew EventHandler(this, &AllFoodsPage2::CarbonaraButtonClick);
}

void AllFoodsPage2::Update(Product^ product, ListView^ listView, ListViewItem^ listViewItem, interior_ptr<int> price, Label^ label) {
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


// BURGER
void AllFoodsPage2::CheeseBurgerButtonClick(Object^ sender, EventArgs^ e) {
	OrderingPage::burger->BringToFront();
	OrderingPage1::burgerBtn->PerformClick();
	AllFoodsPage2::Update(Burger::cheeseStruct,Burger::summarizedOrder, Burger::cheeseItem, &Burger::cheeseBurgerPrice, Burger::cheeseQuantity);
	Burger::TotalPriceHandler();
}

void AllFoodsPage2::FootLongButtonClick(Object^ sender, EventArgs^ e) {
	OrderingPage::burger->BringToFront();
	OrderingPage1::burgerBtn->PerformClick();
	AllFoodsPage2::Update(Burger::footlongStruct,Burger::summarizedOrder ,Burger::footlongItem, &Burger::footlongPrice, Burger::footlongQuantity);
	Burger::TotalPriceHandler();
}

void AllFoodsPage2::ChickenButtonClick(Object^ sender, EventArgs^ e) {
	OrderingPage::burger->BringToFront();
	OrderingPage1::burgerBtn->PerformClick();
	AllFoodsPage2::Update(Burger::chickenStruct,Burger::summarizedOrder, Burger::chickenItem, &Burger::chickenBurgerPrice, Burger::chickenQuantity);
	Burger::TotalPriceHandler();
}

// CHICKEN
void AllFoodsPage2::FriedChickenButtonClick(Object^ sender, EventArgs^ e) {
	OrderingPage::chicken->BringToFront();
	OrderingPage1::chickenBtn->PerformClick();
	AllFoodsPage2::Update(Chicken::friedStruct,Chicken::summarizedOrder ,Chicken::friedItem, &Chicken::friedPrice, Chicken::friedQuantity);
	Chicken::TotalPriceHandler();
}


// PASTA
void AllFoodsPage2::CarbonaraButtonClick(Object^ sender, EventArgs^ e) {
	OrderingPage::pasta->BringToFront();
	OrderingPage1::pastaBtn->PerformClick();
	AllFoodsPage2::Update(Pasta::carbonaraStruct, Pasta::summarizedOrder, Pasta::carbonaraItem, &Pasta::carbonaraPrice, Pasta::carbonaraQuantity);
	Pasta::TotalPriceHandler();
}