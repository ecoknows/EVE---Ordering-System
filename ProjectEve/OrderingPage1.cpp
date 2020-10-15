#include "OrderingPage1.h"
#include "OrderingPage.h"

using namespace ProjectEve;

void OrderingPage1::OrderingPage1ButtonHandler() {
	OrderingPage1::burgerBtn->Click += gcnew EventHandler(this, &OrderingPage1::BurgerButtonClick);
	OrderingPage1::chickenBtn->Click += gcnew EventHandler(this, &OrderingPage1::ChickenButtonClick);
	OrderingPage1::pastaBtn->Click += gcnew EventHandler(this, &OrderingPage1::PastaButtonClick);
}

void OrderingPage1::BurgerButtonClick(Object^ sender, EventArgs^ e) {
	OrderingPage::burger->BringToFront();
}

void OrderingPage1::ChickenButtonClick(Object^ sender, EventArgs^ e) {
	OrderingPage::chicken->BringToFront();
}

void OrderingPage1::PastaButtonClick(Object^ sender, EventArgs^ e) {
	OrderingPage::pasta->BringToFront();
}