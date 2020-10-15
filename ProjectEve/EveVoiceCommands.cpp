#include "SplashScreen.h"
#include "MainInterface.h"
#include "OrderingPage1.h"
#include "OrderingPage2.h"
#include "Ordering.h"
#include "Burger.h"

using namespace ProjectEve;


void SplashScreen::EveVoiceHandler() {
	SplashScreen::recog = gcnew SpeechRecognizer();
	SplashScreen::synth = gcnew SpeechSynthesizer();
	synth->SelectVoiceByHints(VoiceGender::Female);
	synth->Rate = -1;
	Choices^ cho = gcnew Choices();
	cho->Add("Okay if you do so");
	GrammarBuilder^ grammarBuilder = gcnew GrammarBuilder(cho);
	Grammar^ grammar = gcnew Grammar(grammarBuilder);
	grammar->SpeechRecognized += gcnew EventHandler<SpeechRecognizedEventArgs^>(this, &SplashScreen::SpeechRecognized);
	recog->LoadGrammar(grammar);
}

void SplashScreen::SpeechRecognized(Object^ sender, SpeechRecognizedEventArgs^ e) {
	if ((e->Result->Text) == "Okay if you do so") {
		if (this->InvokeRequired) {
			this->BeginInvoke(closeSplashScreen, mainInterface, this);
		}
	}
}

void SplashScreen::UICloseWorker(MainInterface^ main, SplashScreen^ splash) {
	main->Show();
	splash->Close();
}

void MainInterface::EveVoiceHandler() {
	MainInterface::synth = gcnew SpeechSynthesizer();
	MainInterface::recog = gcnew SpeechRecognizer();
	synth->SelectVoiceByHints(VoiceGender::Female);
	synth->Rate = -2;
	Choices^ cho = gcnew Choices();
	MainInterface::MainButtonsGrammars(cho);
	MainInterface::OrderingPageBurgerGrammars(cho);
	MainInterface::OrderingPageMainProductsGrammars(cho);
	MainInterface::OrderingPageArrowsGrammars(cho);
	MainInterface::NormalConversationGrammars(cho);

	GrammarBuilder^ grammarBuilder = gcnew GrammarBuilder(cho);
	Grammar^ grammar = gcnew Grammar(grammarBuilder);
	grammar->SpeechRecognized += gcnew EventHandler<SpeechRecognizedEventArgs^>(this,&MainInterface::SpeechRecognized);
	recog->LoadGrammar(grammar);
	
}


void MainInterface::SpeechRecognized(Object^ sender, SpeechRecognizedEventArgs^ e){
	MainInterface::MainButtonsCommands(e->Result->Text);
	MainInterface::OrderingPageMainProductsCommands(e->Result->Text);
	MainInterface::OrderingPageArrowsCommands(e->Result->Text);
	MainInterface::OrderingPageBurgerCommands(e->Result->Text);
	MainInterface::NormalConversationCommands(e->Result->Text);
}


void MainInterface::NormalConversationGrammars(Choices^ cho) {
	cho->Add("Hello");
	cho->Add("How old are you?");
}
void MainInterface::NormalConversationCommands(String^ command) {
	if (command == "Hello") {
		synth->Speak("Hello there! I'm Eve");
	}else if (command == "How old are you") {
		synth->Speak("I'm 18 years old");
	}
}


void MainInterface::MainButtonsCommands(String^ command) {
	synth->Speak("Okay going to " + command);
	if (command == "Home Page") {
		if (MainInterface::homeBtn->InvokeRequired) {
			MainInterface::homeBtn->BeginInvoke(buttonClick, MainInterface::homeBtn);
		}
		
	}else if (command == "Ordering Page") {
		if (MainInterface::orderingBtn->InvokeRequired) {
			MainInterface::orderingBtn->BeginInvoke(buttonClick, MainInterface::orderingBtn);
		}

	}else if (command == "Tracking Page") {
		if (MainInterface::orderingBtn->InvokeRequired) {
			MainInterface::orderingBtn->BeginInvoke(buttonClick, MainInterface::trackingBtn);
		}

	}else if (command == "About Us Page") {
		if (MainInterface::orderingBtn->InvokeRequired) {
			MainInterface::orderingBtn->BeginInvoke(buttonClick, MainInterface::aboutusBtn);
		}

	}else if (command == "Help Page") {
		if (MainInterface::orderingBtn->InvokeRequired) {
			MainInterface::orderingBtn->BeginInvoke(buttonClick, MainInterface::helpBtn);
		}

	}
}

void MainInterface::MainButtonsGrammars(Choices^ cho) {
	cho->Add("Home Page");
	cho->Add("Ordering Page");
	cho->Add("About Us Page");
	cho->Add("Help Page");
	cho->Add("Tracking Page");
}


void MainInterface::OrderingPageMainProductsCommands(String^ command) {
	if (MainInterface::isOrderPage) {
		if (command == "Main Products Burger") {
			OrderingPage1::burgerBtn->BeginInvoke(MainInterface::buttonClick, OrderingPage1::burgerBtn);
		}
		else if (command == "Main Products Chicken") {
			OrderingPage1::chickenBtn->BeginInvoke(MainInterface::buttonClick, OrderingPage1::chickenBtn);
		}
		else if (command == "Main Products Pasta") {
			OrderingPage1::pastaBtn->BeginInvoke(MainInterface::buttonClick, OrderingPage1::pastaBtn);
		}
		else if (command == "Main Products Rice Meals") {
			OrderingPage2::riceMealsBtn->BeginInvoke(MainInterface::buttonClick, OrderingPage2::riceMealsBtn);
		}
	}
}

void MainInterface::OrderingPageMainProductsGrammars(Choices^ cho) {
	cho->Add("Main Products Burger");
	cho->Add("Main Products Chicken");
	cho->Add("Main Products Pasta");
	cho->Add("Main Products Rice Meals");
	cho->Add("Order Again");
}

void MainInterface::OrderingPageBurgerGrammars(Choices^ cho) {
	for (int i = 0; i <= 100; i++) {
		cho->Add(Convert::ToString(i) + " Pieces of Hotdog");
		cho->Add(Convert::ToString(i) + " Pieces of Foot long");
		cho->Add(Convert::ToString(i) + " Pieces of Cheese Burger");
		cho->Add(Convert::ToString(i) + " Pieces of Beef Burger");
		cho->Add(Convert::ToString(i) + " Pieces of Chicken Burger");
	}
}


void MainInterface::OrderingPageBurgerCommands(String^ command) {
	if (MainInterface::isOrderPage) {
		for (int i = 0; i <= 100; i++) {
			if ((Convert::ToString(i) + " Pieces of Hotdog") == command) {
				MainInterface::Update(Burger::hotdogStruct, Burger::summarizedOrder, Burger::hotdogItem, &Burger::hotDogPrice, Burger::hotdogQuantity, i);
				MainInterface::LabelAdjust(Burger::hotdogQuantity, Burger::origHotDogLeftPosition,i);
				MainInterface::TotalPriceHandler(Burger::totalLabel);
			}else if ((Convert::ToString(i) + " Pieces of Foot long") == command) {
				MainInterface::Update(Burger::footlongStruct, Burger::summarizedOrder, Burger::footlongItem, &Burger::footlongPrice, Burger::footlongQuantity, i);
				MainInterface::LabelAdjust(Burger::footlongQuantity,Burger::origFootLongLeftPosition,i);
				MainInterface::TotalPriceHandler(Burger::totalLabel);
			}else if ((Convert::ToString(i) + " Pieces of Cheese Burger") == command) {
				MainInterface::Update(Burger::cheeseStruct, Burger::summarizedOrder, Burger::cheeseItem, &Burger::cheeseBurgerPrice, Burger::cheeseQuantity, i);
				MainInterface::LabelAdjust(Burger::cheeseQuantity, Burger::origCheeseBurgerLeftPosition, i);
				MainInterface::TotalPriceHandler(Burger::totalLabel);
			}else if ((Convert::ToString(i) + " Pieces of Beef Burger") == command) {
				MainInterface::Update(Burger::beefStruct, Burger::summarizedOrder, Burger::beefItem, &Burger::beefBurgerPrice, Burger::beefQuantity, i);
				MainInterface::LabelAdjust(Burger::beefQuantity, Burger::origBeefBurgerLeftPosition, i);
				MainInterface::TotalPriceHandler(Burger::totalLabel);
			}else if ((Convert::ToString(i) + " Pieces of Chicken Burger") == command) {
				MainInterface::Update(Burger::chickenStruct, Burger::summarizedOrder, Burger::chickenItem, &Burger::chickenBurgerPrice, Burger::chickenQuantity, i);
				MainInterface::LabelAdjust(Burger::chickenQuantity, Burger::origChickenBurgerLeftPosition, i);
				MainInterface::TotalPriceHandler(Burger::totalLabel);
			}
		}
	}

}


void MainInterface::OrderingPageArrowsCommands(String^ command) {
	if (command == "Blue Arrow Right") {
		Ordering::blueRight->BeginInvoke(buttonClick, Ordering::blueRight);
	}else if (command == "Blue Arrow Left") {
		Ordering::blueLeft->BeginInvoke(buttonClick, Ordering::blueLeft);
	}
}

void MainInterface::OrderingPageArrowsGrammars(Choices^ cho) {
	cho->Add("Blue Arrow Right");
	cho->Add("Blue Arrow Left");
	cho->Add("Red Arrow Right");
	cho->Add("Red Arrow Left");
}


void MainInterface::UIButtonWorker(Button^ btn) {
	btn->PerformClick();
}

void MainInterface::UIListViewWorker(ListView^ listView, ListViewItem^ item, bool isAdd) {
	if(isAdd)
		listView->Items->Add(item);
	else {
		listView->Items->Remove(item);
		item->Remove();
	}
}


void MainInterface::UIListViewItemWorker(ListView^ listView, ListViewItem^ listViewItem, Product^ product) {
	listViewItem->SubItems[1]->Text = Convert::ToString(product->quantity);
	listViewItem->SubItems[2]->Text = Convert::ToString(product->price);
}

void MainInterface::UILabelWorker(Label^ label, String^ text) {
	label->Text = text;
}


void MainInterface::Update(Product^ product, ListView^ listView, ListViewItem^ listViewItem, interior_ptr<int> price, Label^ label, int userQuantity) {
	if (product->quantity == 0) {
		listViewItem->SubItems->Add(Convert::ToString(product->quantity));
		listViewItem->SubItems->Add(Convert::ToString(product->price));
		if (listView->InvokeRequired) {
			listView->BeginInvoke(listViewChange,listView,listViewItem, true);
		}
	}
	
	product->quantity = userQuantity;

	if (product->quantity == 0) {
		if (listView->InvokeRequired) {
			listView->BeginInvoke(listViewChange, listView, listViewItem, false);
		}
	}

	if (label->InvokeRequired) {
		label->BeginInvoke(labelChange,label, Convert::ToString(product->quantity));
	}
	product->price = *price * product->quantity;

	if (listView->InvokeRequired) {
		listView->BeginInvoke(listViewItemChange,listView,listViewItem, product);
	}

}


void MainInterface::LabelAdjust(Label^ label,const int constPos, const int quantity) {
	if (quantity < 10) {
		if (label->InvokeRequired) {
			label->BeginInvoke(labelAdjustChange, label, constPos);
		}
	}else if (quantity >= 10 && quantity < 100) {
		if (label->InvokeRequired) {
			label->BeginInvoke(labelAdjustChange, label, constPos - 5);
		}
	}else if (quantity >= 100) {
		if (label->InvokeRequired) {
			label->BeginInvoke(labelAdjustChange, label, constPos - 10);
		}
	}
}

void MainInterface::UILabelAdjustWorker(Label^ label,const int constPos){
	label->Left = constPos;
}
void MainInterface::TotalPriceHandler(Label^ label) {
	Burger::totalPrice = Burger::hotdogStruct->price + Burger::cheeseStruct->price + Burger::beefStruct->price +
		Burger::chickenStruct->price + Burger::footlongStruct->price + Burger::cokeStruct->price + Burger::spriteStruct->price +
		Burger::icedteaStruct->price + Burger::pepsiStruct->price;

	if (label->InvokeRequired) {
		label->BeginInvoke(labelChange, label, Convert::ToString(Burger::totalPrice));
	}

}