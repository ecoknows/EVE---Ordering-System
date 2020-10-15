#pragma once


using namespace System;

public ref class Product {
	public:
		Product(String^ name) {
			this->name = name;
		}

		String^ name;
		int quantity = 0;
		int price = 0;
};
