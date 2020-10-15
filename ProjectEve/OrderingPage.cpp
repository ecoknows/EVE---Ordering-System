#include "OrderingPage.h"

using namespace ProjectEve;


void OrderingPage::OrderingUserControls() {
	OrderingPage::ordering = gcnew Ordering();
	OrderingPage::bodyPanel->Controls->Add(OrderingPage::ordering);

	// Burger
	OrderingPage::burger = gcnew Burger();
	OrderingPage::bodyPanel->Controls->Add(OrderingPage::burger);

	// Chicken
	OrderingPage::chicken = gcnew Chicken();
	OrderingPage::bodyPanel->Controls->Add(OrderingPage::chicken);

	// PASTA
	OrderingPage::pasta = gcnew Pasta();
	OrderingPage::bodyPanel->Controls->Add(OrderingPage::pasta);

	// RICE MEALS
	OrderingPage::riceMeals = gcnew RiceMeals();
	OrderingPage::bodyPanel->Controls->Add(OrderingPage::riceMeals);

	// ORDER SUMMARY
	OrderingPage::orderSummary = gcnew OrderSummary();
	OrderingPage::bodyPanel->Controls->Add(OrderingPage::orderSummary);


	// ORDER Confirmation
	OrderingPage::orderConfirmation = gcnew OrderConfirmation();
	OrderingPage::bodyPanel->Controls->Add(OrderingPage::orderConfirmation);

}
