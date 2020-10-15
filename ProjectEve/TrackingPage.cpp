#include "TrackingPage.h"

using namespace ProjectEve;

void TrackingPage::PanelHandler() {
	TrackingPage::transactionPanel->Controls->Add(trackingLayout);
	trackingLayout->BringToFront();
}
