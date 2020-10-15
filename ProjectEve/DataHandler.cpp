#include "DataHandler.h"

Node^ Node_Create() {
	Node^ node = gcnew Node();
	node->next = nullptr;
	return node;
}

List^ List_Create() {
	List^ list = gcnew List();
	Node^ node = Node_Create();
	list->first = node;

	return list;
}
void List_Add(List^ list,ListViewItem^ item) {
	Node^ node = list->first;
	while (node->next != nullptr)
		node = node->next;

	node->item = item;
	node->next = Node_Create();
}

