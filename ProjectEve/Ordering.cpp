#include "Ordering.h"

using namespace ProjectEve;

void Ordering::OrderingPanelHandler() {
	// GENERAL FOOD
	Ordering::page1 = gcnew OrderingPage1();
	Ordering::page2 = gcnew OrderingPage2();
	Ordering::generalPanel->Controls->Add(Ordering::page1);
	Ordering::generalPanel->Controls->Add(Ordering::page2);

	// ALL PRODUCT
	Ordering::allPage1 = gcnew AllFoodsPage1();
	Ordering::allPage2 = gcnew AllFoodsPage2();
	Ordering::allpage3 = gcnew AllFoodsPage3();
	Ordering::allpage4 = gcnew AllFoodsPage4();
	Ordering::allPanel->Controls->Add(Ordering::allPage1);
	Ordering::allPanel->Controls->Add(Ordering::allPage2);
	Ordering::allPanel->Controls->Add(Ordering::allpage3);
	Ordering::allPanel->Controls->Add(Ordering::allpage4);
}

void Ordering::OrderingButtonsHandler() {
	Ordering::blueLeft->Click += gcnew EventHandler(this, &Ordering::BlueLeftButtonClick);
	Ordering::blueRight->Click += gcnew EventHandler(this, &Ordering::BlueRightButtonClick);
	Ordering::redLeft->Click += gcnew EventHandler(this, &Ordering::RedLeftButtonClick);
	Ordering::redRight->Click += gcnew EventHandler(this, &Ordering::RedRightButtonClick);
	Ordering::blueLeft->Hide();
	Ordering::redLeft->Hide();
}



void Ordering::CountMainProductPage() {
	switch (Ordering::cntMainProduct){
	case 0:
		Ordering::blueLeft->Hide();
		Ordering::blueRight->Show();
		Ordering::page1->BringToFront();
		break;
	case 1:
		Ordering::blueLeft->Show();
		Ordering::blueRight->Hide();
		Ordering::page2->BringToFront();
		break;
	}
}

void Ordering::BlueLeftButtonClick(Object^ sender, EventArgs^ e) {
	cntMainProduct--;
	Ordering::CountMainProductPage();
}

void Ordering::BlueRightButtonClick(Object^ sender, EventArgs^ e) {
	cntMainProduct++;
	Ordering::CountMainProductPage();
}

void Ordering::CountAllProductPage() {
	switch (Ordering::cntAllProduct) {
	case 0:
		Ordering::redLeft->Hide();
		Ordering::allPage1->BringToFront();
		break;
	case 1:
		Ordering::redLeft->Show();
		Ordering::redRight->Show();
		Ordering::allPage2->BringToFront();
		break;
	case 2:
		Ordering::allpage3->BringToFront();
		Ordering::redRight->Show();
		break;
	case 3:
		Ordering::allpage4->BringToFront();
		Ordering::redRight->Hide();
		break;
	default:
		cntAllProduct--;
		break;
	}
}


void Ordering::RedLeftButtonClick(Object^ sender, EventArgs^ e) {
	cntAllProduct--;
	Ordering::CountAllProductPage();
}

void Ordering::RedRightButtonClick(Object^ sender, EventArgs^ e) {
	cntAllProduct++;
	Ordering::CountAllProductPage();
}
