#pragma once
#include "DataHandler.h"
#include <iostream>
#include <string>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace std;
ref class DataReader
{
public:
	DataReader();
	static List^ list = List_Create();
	static int GetTotalData();
	static void ReadData(ListView^ listview);
	static void DeleteData(String^ name);
	static void DeleteListItem(String^ name, ListView^ listview);
	static void DeleteAllItem(ListView^ listview);
	static bool IsItemExist(String^ name);
	static String^ GetQuantityData(String^ name);


};

