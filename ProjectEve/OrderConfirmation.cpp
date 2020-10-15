#include "OrderConfirmation.h"
#include "OrderingPage.h"

using namespace ProjectEve;

void OrderConfirmation::ButtonHandler() {
	OrderConfirmation::confirmBtn->Click += gcnew EventHandler(this, &OrderConfirmation::ConfirmButtonClick);
	OrderConfirmation::passwordBox->TextChanged += gcnew EventHandler(this, &OrderConfirmation::PasswordTextChange);

	OrderConfirmation::confirmBtn->Enabled = false;
	OrderConfirmation::confirmBtn->BackColor = Drawing::Color::LightGray;
}

void OrderConfirmation::ConfirmButtonClick(Object^ sender, EventArgs ^e) {
	OrderingPage::ordering->BringToFront();
	File::Delete("CurrentUserData.txt");
	File::Create("CurrentUserData.txt");
}
void OrderConfirmation::PasswordTextChange(Object^ sender, EventArgs ^e) {
	if ("password" == passwordBox->Text) {
		OrderConfirmation::confirmBtn->Enabled = true;
		OrderConfirmation::confirmBtn->BackColor = Drawing::Color::Transparent;
	}
	else {
		OrderConfirmation::confirmBtn->Enabled = false;
		OrderConfirmation::confirmBtn->BackColor = Drawing::Color::LightGray;
	}
}
