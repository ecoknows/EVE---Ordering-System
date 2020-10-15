#include "OrderingPage2.h"
#include "OrderingPage.h"

using namespace ProjectEve;

void OrderingPage2::OrderingPage2ButtonHandler() {
	OrderingPage2::riceMealsBtn->Click += gcnew EventHandler(this, &OrderingPage2::RiceMealsButtonClick);
}

void OrderingPage2::RiceMealsButtonClick(Object^ sender, EventArgs^ e) {
	OrderingPage::riceMeals->BringToFront();
}