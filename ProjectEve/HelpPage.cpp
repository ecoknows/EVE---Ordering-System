#include "HelpPage.h"

using namespace ProjectEve;

void HelpPage::SetPanels() {
	helppageinfo = gcnew HelpPageInfo();
	HelpPage::helpPagePanel->Controls->Add(helppageinfo);
}
