#include "DataReader.h"

DataReader::DataReader()
{

}



String^ DataReader::GetQuantityData(String^ name) {
	StreamReader^ reader = gcnew StreamReader("CurrentUserData.txt");
	String^ line;
	int total = 0;

	while (line = reader->ReadLine()) {
		if (line == name) {
			line = reader->ReadLine();
			break;
		}
	}
	reader->Close();

	return line;
}

bool DataReader::IsItemExist(String^ name) {
	Node^ node = list->first;
	while (node->next != nullptr) {
		if (node->item->Text == name) {
			return true;
		}
		node = node->next;
	}
	return false;
}

void  DataReader::DeleteListItem(String^ name,ListView^ listview) {
	Node^ node = list->first;
	while (node->next != nullptr) {
		if (node->item->Text == name) {
			listview->Items->Remove(node->item);
			node->item->Remove();
			delete node;
			break;
		}
		node = node->next;
	}
}

void DataReader::DeleteAllItem(ListView^ listview) {
	Node^ node = list->first;
	while (node->next != nullptr) {
		node->item->Remove();
		listview->Items->Remove(node->item);
		node = node->next;
	}
}

int DataReader::GetTotalData() {
	StreamReader^ reader = gcnew StreamReader("CurrentUserData.txt");
	String^ line;
	int total = 0, cnt = 0,cntIn = 0;

	while (line = reader->ReadLine()) {
		if (cnt == 2+cntIn) {
			cnt = 0;
			cntIn = 2;
			total = total + Convert::ToInt16(line);
		}
		cnt++;
	}
	reader->Close();

	return total;
}

void DataReader::DeleteData(String^ name) {
	StreamWriter^ writer = gcnew StreamWriter("CurrentUserTemp.txt",true);
	StreamReader^ reader = gcnew StreamReader("CurrentUserData.txt");
	String^ line;
	int cnt = 0;
	
	while (line = reader->ReadLine()) {
		if (line == name) {
			cnt++;
			continue;
		}
		if (cnt == 4)
			cnt = 0;

		if (cnt > 0) {
			cnt++;
			continue;
		}
		writer->WriteLine(line);
	}

	writer->Close();
	reader->Close();
	File::WriteAllLines("CurrentUserData.txt", File::ReadAllLines("CurrentUserTemp.txt"));
	File::Delete("CurrentUserTemp.txt");
}

void DataReader::ReadData(ListView^ listview) {
	Node^ node = list->first;
	int cnt = 0;

	StreamReader^ read = gcnew StreamReader("CurrentUserData.txt");
	String^ data;
	bool isNotNode = true;

	while (data = read->ReadLine()) {
		if (isNotNode && data != "====================") {
			List_Add(list, gcnew ListViewItem(data));
			isNotNode = false;
		}
		else if (!isNotNode && data != "====================") {
			node->item->SubItems->Add(data);
			cnt++;
		}

		if (cnt == 2) {
			listview->Items->Add(node->item);
			isNotNode = true;
			node = node->next;
			cnt = 0;
		}

	}
	read->Close();
	//node->next = Node_Create();
}
