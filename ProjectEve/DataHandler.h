#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

typedef ref struct NodeTag
{

	ListViewItem^ item;
	ref struct NodeTag^ next;
}Node;

Node^ Node_Create();

typedef ref struct ListTag {
	ref struct NodeTag^ first;
}List;

List^ List_Create();
void List_Add(List^ list, ListViewItem^ item);

