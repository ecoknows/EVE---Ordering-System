#include "AllFoodsPage1.h"
#include "OrderingPage.h"
#include "OrderingPage1.h"
#include "OrderingPage2.h"

using namespace ProjectEve;

void AllFoodsPage1::AllFoodsButtonHandler() {
	AllFoodsPage1::beefburgerBtn->Click += gcnew EventHandler(this, &AllFoodsPage1::BeefBurgerButtonClick);
	
	AllFoodsPage1::butteredchickenBtn->Click += gcnew EventHandler(this, &AllFoodsPage1::ButteredChickenButtonClick);

	AllFoodsPage1::bakedmacBtn->Click += gcnew EventHandler(this, &AllFoodsPage1::BakedMacButtonClick);


	AllFoodsPage1::burgetsteakBtn->Click += gcnew EventHandler(this, &AllFoodsPage1::BurgerSteakButtonClick);
	AllFoodsPage1::alakingBtn->Click += gcnew EventHandler(this, &AllFoodsPage1::AlaKingButtonClick);
}


void AllFoodsPage1::Update(Product^ product,ListView^ listView ,ListViewItem^ listViewItem, interior_ptr<int> price,Label^ label) {
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


void AllFoodsPage1::BeefBurgerButtonClick(Object^ sender, EventArgs^ e) {
	OrderingPage::burger->BringToFront();
	OrderingPage1::burgerBtn->PerformClick();
	AllFoodsPage1::Update(Burger::beefStruct,Burger::summarizedOrder ,Burger::beefItem, &Burger::beefBurgerPrice, Burger::beefQuantity);
	Burger::TotalPriceHandler();
}

void AllFoodsPage1::ButteredChickenButtonClick(Object^ sender, EventArgs^ e) {
	OrderingPage::chicken->BringToFront();
	OrderingPage1::chickenBtn->PerformClick();
	AllFoodsPage1::Update(Chicken::butteredStruct,Chicken::summarizedOrder ,Chicken::butteredItem, &Chicken::butteredPrice, Chicken::butteredQuantity);
	Chicken::TotalPriceHandler();
}


void AllFoodsPage1::BakedMacButtonClick(Object^ sender, EventArgs^ e) {
	OrderingPage::pasta->BringToFront();
	OrderingPage1::pastaBtn->PerformClick();
	AllFoodsPage1::Update(Pasta::bakedStruct, Pasta::summarizedOrder, Pasta::bakedItem, &Pasta::bakedPrice, Pasta::bakedmacQuantity);
	Pasta::TotalPriceHandler();
}


void AllFoodsPage1::AlaKingButtonClick(Object^ sender, EventArgs^ e) {
	OrderingPage::riceMeals->BringToFront();
	OrderingPage2::riceMealsBtn->PerformClick();
	AllFoodsPage1::Update(RiceMeals::alaKingStruct, RiceMeals::summarizedOrder, RiceMeals::alaKingItem, &RiceMeals::alaKingPrice, RiceMeals::alaKingQuantity);
	RiceMeals::TotalPriceHandler();
}
void AllFoodsPage1::BurgerSteakButtonClick(Object^ sender, EventArgs^ e) {
	OrderingPage::riceMeals->BringToFront();
	OrderingPage2::riceMealsBtn->PerformClick();
	AllFoodsPage1::Update(RiceMeals::burgerSteakStruct, RiceMeals::summarizedOrder, RiceMeals::burgeetSteakItem, &RiceMeals::burgerSteakPrice, RiceMeals::burgerSteakQuantity);
	RiceMeals::TotalPriceHandler();
}
