#include "AllFoodsPage3.h"
#include "OrderingPage.h"
#include "OrderingPage1.h"
#include "OrderingPage2.h"

using namespace ProjectEve;

void AllFoodsPage3::AllFoodsButtonHandler() {
	AllFoodsPage3::hotdogBtn->Click += gcnew EventHandler(this, &AllFoodsPage3::HotDogButtonClick);

	AllFoodsPage3::roastedChicken->Click += gcnew EventHandler(this, &AllFoodsPage3::RoastedChickenButtonClick);

	AllFoodsPage3::lasagnaBtn->Click += gcnew EventHandler(this, &AllFoodsPage3::LasagnaButtonClick);


	AllFoodsPage3::siomariceBtn->Click += gcnew EventHandler(this, &AllFoodsPage3::SiomaiRiceButtonClick);
	AllFoodsPage3::sisigriceBtn->Click += gcnew EventHandler(this, &AllFoodsPage3::SisigRiceButtonClick);
}


void AllFoodsPage3::Update(Product^ product,ListView^ listView, ListViewItem^ listViewItem, interior_ptr<int> price, Label^ label) {
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


void AllFoodsPage3::HotDogButtonClick(Object^ sender, EventArgs^ e) {
	OrderingPage::burger->BringToFront();
	OrderingPage1::burgerBtn->PerformClick();
	AllFoodsPage3::Update(Burger::hotdogStruct,Burger::summarizedOrder ,Burger::hotdogItem, &Burger::hotDogPrice, Burger::hotdogQuantity);
	Burger::TotalPriceHandler();
}

void AllFoodsPage3::RoastedChickenButtonClick(Object^ sender, EventArgs^ e) {
	OrderingPage::chicken->BringToFront();
	OrderingPage1::chickenBtn->PerformClick();
	AllFoodsPage3::Update(Chicken::roastedStruct,Chicken::summarizedOrder ,Chicken::roastedItem, &Chicken::roastedPrice, Chicken::roastedQuantity);
	Chicken::TotalPriceHandler();
}


void AllFoodsPage3::LasagnaButtonClick(Object^ sender, EventArgs^ e) {
	OrderingPage::pasta->BringToFront();
	OrderingPage1::pastaBtn->PerformClick();
	AllFoodsPage3::Update(Pasta::lasagnaStruct, Pasta::summarizedOrder, Pasta::lasagnaItem, &Pasta::lasagnaPrice, Pasta::lasagnaQuantity);
	Pasta::TotalPriceHandler();
}


void AllFoodsPage3::SiomaiRiceButtonClick(Object^ sender, EventArgs^ e){
	OrderingPage::riceMeals->BringToFront();
	OrderingPage2::riceMealsBtn->PerformClick();
	AllFoodsPage3::Update(RiceMeals::siomaiRiceStruct, RiceMeals::summarizedOrder, RiceMeals::siomaRiceItem, &RiceMeals::siomaiRicePrice, RiceMeals::siomaRiceQuantity);
	RiceMeals::TotalPriceHandler();
}
void AllFoodsPage3::SisigRiceButtonClick(Object^ sender, EventArgs^ e){
	OrderingPage::riceMeals->BringToFront();
	OrderingPage2::riceMealsBtn->PerformClick();
	AllFoodsPage3::Update(RiceMeals::sisigRiceStruct, RiceMeals::summarizedOrder, RiceMeals::sisigRiceItem, &RiceMeals::sisigRicePrice, RiceMeals::sisigRiceQuantity);
	RiceMeals::TotalPriceHandler();
}