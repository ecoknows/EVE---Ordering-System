#include "DataWriter.h"



DataWriter::DataWriter()
{


}



void DataWriter::WriteData(String^ name, int price, int quantity) {
	StreamWriter^ writer = gcnew StreamWriter("CurrentUserData.txt",true);

	writer->WriteLine(name);
	writer->WriteLine(quantity);
	writer->WriteLine(price);
	writer->WriteLine("====================");

	writer->Close();
}
