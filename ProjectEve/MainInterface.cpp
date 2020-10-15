#include "MainInterface.h"

using namespace ProjectEve;

void MainInterface::PagesInterface() {
	MainInterface::orderingPage = gcnew OrderingPage();
	MainInterface::homePage = gcnew HomePage();
	MainInterface::trackingPage = gcnew TrackingPage();
	MainInterface::helpPage = gcnew HelpPage();
	MainInterface::aboutPage = gcnew AboutUsPage();
	MainInterface::bodyPanel->Controls->Add(MainInterface::homePage);
	MainInterface::bodyPanel->Controls->Add(MainInterface::orderingPage);
	MainInterface::bodyPanel->Controls->Add(MainInterface::trackingPage);
	MainInterface::bodyPanel->Controls->Add(MainInterface::helpPage);
	MainInterface::bodyPanel->Controls->Add(MainInterface::aboutPage);
	MainInterface::homePage->BringToFront();
}

void MainInterface::MainButtonsHandler() {
	MainInterface::orderingBtn->Click += gcnew EventHandler(this, &MainInterface::OrderingButtonClick);
	MainInterface::homeBtn->Click += gcnew EventHandler(this, &MainInterface::HomeButtonClick);
	MainInterface::trackingBtn->Click += gcnew EventHandler(this, &MainInterface::TrackingButtonClick);
	MainInterface::aboutusBtn->Click += gcnew EventHandler(this, &MainInterface::AboutButtonClick);
	MainInterface::helpBtn->Click += gcnew EventHandler(this, &MainInterface::HelpButtonClick);
	MainInterface::exitBtn->Click += gcnew EventHandler(this, &MainInterface::ExitButtonClick);
}



void MainInterface::HomeButtonClick(Object^ sender, EventArgs^ e) {
	MainInterface::navPanel->Location = System::Drawing::Point( MainInterface::homeBtn->Left, MainInterface::homeBtn->Top - 10);
	MainInterface::navPanel->BackColor = System::Drawing::Color::Cyan;
	MainInterface::homePage->BringToFront();

	MainInterface::isHomePage = true;
	MainInterface::isOrderPage = false;
	MainInterface::isTrackingPage = false;
	MainInterface::isAboutPage = false;
	MainInterface::isHelpPage = false;
}

void MainInterface::OrderingButtonClick(Object^ sender, EventArgs^ e) {
	MainInterface::navPanel->Location = System::Drawing::Point(MainInterface::orderingBtn->Left, MainInterface::orderingBtn->Bottom + 1);
	MainInterface::navPanel->BackColor = System::Drawing::Color::Orchid;
	MainInterface::orderingPage->BringToFront();

	MainInterface::isHomePage = false;
	MainInterface::isOrderPage = true;
	MainInterface::isTrackingPage = false;
	MainInterface::isAboutPage = false;
	MainInterface::isHelpPage = false;
}


void MainInterface::TrackingButtonClick(Object^ sender, EventArgs^ e) {
	MainInterface::navPanel->Location = System::Drawing::Point( MainInterface::trackingBtn->Left, MainInterface::trackingBtn->Top - 10);
	MainInterface::navPanel->BackColor = System::Drawing::Color::MediumSpringGreen;
	MainInterface::trackingPage->BringToFront();

	MainInterface::isHomePage = false;
	MainInterface::isOrderPage = false;
	MainInterface::isTrackingPage = true;
	MainInterface::isAboutPage = false;
	MainInterface::isHelpPage = false;
}
void MainInterface::HelpButtonClick(Object^ sender, EventArgs^ e) {
	MainInterface::navPanel->Location = System::Drawing::Point(MainInterface::helpBtn->Left, MainInterface::helpBtn->Bottom + 1);
	MainInterface::navPanel->BackColor = System::Drawing::Color::Crimson;
	MainInterface::helpPage->BringToFront();
	MainInterface::isHomePage = false;
	MainInterface::isOrderPage = false;
	MainInterface::isTrackingPage = false;
	MainInterface::isAboutPage = false;
	MainInterface::isHelpPage = true;
}

void MainInterface::AboutButtonClick(Object^ sender, EventArgs^ e) {
	MainInterface::navPanel->Location = System::Drawing::Point( MainInterface::aboutusBtn->Left, MainInterface::aboutusBtn->Top - 10);
	MainInterface::navPanel->BackColor = System::Drawing::Color::MintCream;
	MainInterface::aboutPage->BringToFront();
	MainInterface::isHomePage = false;
	MainInterface::isOrderPage = false;
	MainInterface::isTrackingPage = false;
	MainInterface::isAboutPage = true;
	MainInterface::isHelpPage = false;
}

void MainInterface::ExitButtonClick(Object^ sender, EventArgs^ e) {
	this->Close();
}