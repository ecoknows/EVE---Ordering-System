#include "AboutUsPage.h"

using namespace ProjectEve;

void AboutUsPage::PanelHandler() {
	AboutUsPage::aboutUsInfo = gcnew AboutUsInfo();
	AboutUsPage::aboutJerico = gcnew AboutJerico();
	AboutUsPage::aboutJayson = gcnew AboutJayson();
	AboutUsPage::aboutJake = gcnew AboutJake();
	AboutUsPage::aboutRoxie = gcnew AboutRoxie();
	AboutUsPage::aboutLovely = gcnew AboutLovely();
	AboutUsPage::aboutPanel->Controls->Add(AboutUsPage::aboutUsInfo);
	AboutUsPage::aboutPanel->Controls->Add(AboutUsPage::aboutJerico);
	AboutUsPage::aboutPanel->Controls->Add(AboutUsPage::aboutJayson);
	AboutUsPage::aboutPanel->Controls->Add(AboutUsPage::aboutJake);
	AboutUsPage::aboutPanel->Controls->Add(AboutUsPage::aboutRoxie);
	AboutUsPage::aboutPanel->Controls->Add(AboutUsPage::aboutLovely);
	AboutUsPage::aboutUsInfo->BringToFront();
}