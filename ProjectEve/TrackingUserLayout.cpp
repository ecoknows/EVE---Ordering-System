#include "TrackingUserLayout.h"

using namespace ProjectEve;

void TrackingUserLayout::ToolHandler() {
	TrackingUserLayout::searchBox->TextChanged += gcnew EventHandler(this, &TrackingUserLayout::SearchBoxTextChange);
}

void TrackingUserLayout::SearchBoxTextChange(Object^ sender, EventArgs^ e) {
	String^ search = TrackingUserLayout::searchBox->Text;
	TrackingUserLayout::transactionList->TopItem = TrackingUserLayout::transactionList->FindItemWithText(search);
}


void TrackingUserLayout::AddData(String^ transactionNumber) {
	 Node^ node = list->first;
	List_Add(list, gcnew ListViewItem(transactionNumber));
	transactionList->Items->Add(node->item);
	node = node->next;
}