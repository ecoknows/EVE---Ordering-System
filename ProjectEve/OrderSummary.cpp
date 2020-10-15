#include "OrderSummary.h"
#include <fstream>
#include "TrackingUserLayout.h"
#include "OrderingPage.h"
#include "DataReader.h"

using namespace ProjectEve;
using namespace std;

void OrderSummary::ButtonEventHandler() {
	OrderSummary::backBtn->Click += gcnew EventHandler(this, &OrderSummary::BackButtonClick);
	OrderSummary::confirmBtn->Click += gcnew EventHandler(this, &OrderSummary::ConfirmButtonClick);
}

void OrderSummary::BackButtonClick(Object^ sender, EventArgs^ e) {
	OrderSummary::userControl->BringToFront();
}
void OrderSummary::SetData() {
	DataReader::DeleteAllItem(OrderSummary::summarizedOrder);
	DataReader::ReadData(OrderSummary::summarizedOrder);
	OrderSummary::totalLabel->Text = Convert::ToString(DataReader::GetTotalData());
}


void OrderSummary::ConfirmButtonClick(Object^ sender, EventArgs^ e) {
	
	String^ transacNumber;
	StreamReader^ reader = gcnew StreamReader("LatestTransactionNumber.txt");
	transacNumber = reader->ReadLine();
	StreamWriter^ writer = gcnew StreamWriter("Tracking/" + transacNumber + ".txt");
	writer->Close();
	reader->Close();

	File::WriteAllLines("Tracking/" + transacNumber + ".txt", File::ReadAllLines("CurrentUserData.txt"));
	TrackingUserLayout::AddData(transacNumber);
	OrderingPage::orderConfirmation->BringToFront();
}

void OrderSummary::GenerateTransactionNumber(){
	int value = 0;

	ifstream read;
	read.open("LatestTransactionNumber.txt");
	read >> value;
	read.close();
	value++;

	OrderSummary::transactionLabel->Text = Convert::ToString(value);

	ofstream writer;
	writer.open("LatestTransactionNumber.txt");
	writer << value;
	writer.close();

}