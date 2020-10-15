#include "AboutUsInfo.h"
#include "AboutUsPage.h"

using namespace ProjectEve;


void AboutUsInfo::ButtonHandler() {
	AboutUsInfo::jericoBtn->Click += gcnew EventHandler(this, &AboutUsInfo::JericoButtonClick);
	AboutUsInfo::roxieBtn->Click += gcnew EventHandler(this, &AboutUsInfo::RoxieButtonClick);
	AboutUsInfo::jaysonBtn->Click += gcnew EventHandler(this, &AboutUsInfo::JaysonButtonClick);
	AboutUsInfo::lovelynBtn->Click += gcnew EventHandler(this, &AboutUsInfo::LovelynButtonClick);
	AboutUsInfo::jakeBtn->Click += gcnew EventHandler(this, &AboutUsInfo::JakeButtonClick);
}

void AboutUsInfo::JericoButtonClick(Object^ sender, EventArgs^ e) {
	AboutUsPage::aboutJerico->BringToFront();
}

void AboutUsInfo::RoxieButtonClick(Object^ sender, EventArgs^ e) {
	AboutUsPage::aboutRoxie->BringToFront();
}
void AboutUsInfo::JaysonButtonClick(Object^ sender, EventArgs^ e) {
	AboutUsPage::aboutJayson->BringToFront();
}
void AboutUsInfo::LovelynButtonClick(Object^ sender, EventArgs^ e) {
	AboutUsPage::aboutLovely->BringToFront();
}
void AboutUsInfo::JakeButtonClick(Object^ sender, EventArgs^ e) {
	AboutUsPage::aboutJake->BringToFront();
}