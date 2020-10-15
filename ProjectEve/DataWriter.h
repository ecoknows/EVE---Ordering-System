#pragma once


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

ref class DataWriter
{
public:
	DataWriter();
	static void WriteData(String^ name,int price, int quantity);
};

