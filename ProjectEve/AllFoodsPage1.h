#pragma once
#include "Burger.h"
#include "Chicken.h"
#include "Pasta.h"
#include "RiceMeals.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjectEve {

	/// <summary>
	/// Summary for AllFoodsPage1
	/// </summary>
	public ref class AllFoodsPage1 : public System::Windows::Forms::UserControl
	{
	public:
		AllFoodsPage1(void)
		{
			InitializeComponent();
			AllFoodsButtonHandler();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		void AllFoodsButtonHandler();
		void Update(Product^ product, ListView^ listView, ListViewItem^ listViewItem, interior_ptr<int> price, Label^ label);

		

		void BeefBurgerButtonClick(Object^ sender, EventArgs^ e);
		
		void ButteredChickenButtonClick(Object^ sender, EventArgs^ e);
	
		void BakedMacButtonClick(Object^ sender, EventArgs^ e);

		void AlaKingButtonClick(Object^ sender, EventArgs^ e);
		void BurgerSteakButtonClick(Object^ sender, EventArgs^ e);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AllFoodsPage1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  butteredchickenBtn;
	protected:
	private: System::Windows::Forms::Button^  burgetsteakBtn;
	private: System::Windows::Forms::Button^  beefburgerBtn;
	private: System::Windows::Forms::Button^  bakedmacBtn;
	private: System::Windows::Forms::Button^  alakingBtn;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AllFoodsPage1::typeid));
			this->butteredchickenBtn = (gcnew System::Windows::Forms::Button());
			this->burgetsteakBtn = (gcnew System::Windows::Forms::Button());
			this->beefburgerBtn = (gcnew System::Windows::Forms::Button());
			this->bakedmacBtn = (gcnew System::Windows::Forms::Button());
			this->alakingBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// butteredchickenBtn
			// 
			this->butteredchickenBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butteredchickenBtn.BackgroundImage")));
			this->butteredchickenBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butteredchickenBtn->FlatAppearance->BorderSize = 0;
			this->butteredchickenBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butteredchickenBtn->Location = System::Drawing::Point(458, 6);
			this->butteredchickenBtn->Name = L"butteredchickenBtn";
			this->butteredchickenBtn->Size = System::Drawing::Size(111, 150);
			this->butteredchickenBtn->TabIndex = 32;
			this->butteredchickenBtn->UseVisualStyleBackColor = true;
			// 
			// burgetsteakBtn
			// 
			this->burgetsteakBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"burgetsteakBtn.BackgroundImage")));
			this->burgetsteakBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->burgetsteakBtn->FlatAppearance->BorderSize = 0;
			this->burgetsteakBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->burgetsteakBtn->Location = System::Drawing::Point(353, 36);
			this->burgetsteakBtn->Name = L"burgetsteakBtn";
			this->burgetsteakBtn->Size = System::Drawing::Size(99, 120);
			this->burgetsteakBtn->TabIndex = 31;
			this->burgetsteakBtn->UseVisualStyleBackColor = true;
			// 
			// beefburgerBtn
			// 
			this->beefburgerBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"beefburgerBtn.BackgroundImage")));
			this->beefburgerBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->beefburgerBtn->FlatAppearance->BorderSize = 0;
			this->beefburgerBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->beefburgerBtn->Location = System::Drawing::Point(236, 6);
			this->beefburgerBtn->Name = L"beefburgerBtn";
			this->beefburgerBtn->Size = System::Drawing::Size(111, 150);
			this->beefburgerBtn->TabIndex = 30;
			this->beefburgerBtn->UseVisualStyleBackColor = true;
			// 
			// bakedmacBtn
			// 
			this->bakedmacBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bakedmacBtn.BackgroundImage")));
			this->bakedmacBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bakedmacBtn->FlatAppearance->BorderSize = 0;
			this->bakedmacBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bakedmacBtn->Location = System::Drawing::Point(131, 36);
			this->bakedmacBtn->Name = L"bakedmacBtn";
			this->bakedmacBtn->Size = System::Drawing::Size(99, 120);
			this->bakedmacBtn->TabIndex = 29;
			this->bakedmacBtn->UseVisualStyleBackColor = true;
			// 
			// alakingBtn
			// 
			this->alakingBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"alakingBtn.BackgroundImage")));
			this->alakingBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->alakingBtn->FlatAppearance->BorderSize = 0;
			this->alakingBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->alakingBtn->Location = System::Drawing::Point(14, 6);
			this->alakingBtn->Name = L"alakingBtn";
			this->alakingBtn->Size = System::Drawing::Size(111, 150);
			this->alakingBtn->TabIndex = 28;
			this->alakingBtn->UseVisualStyleBackColor = true;
			// 
			// AllFoodsPage1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->butteredchickenBtn);
			this->Controls->Add(this->burgetsteakBtn);
			this->Controls->Add(this->beefburgerBtn);
			this->Controls->Add(this->bakedmacBtn);
			this->Controls->Add(this->alakingBtn);
			this->Name = L"AllFoodsPage1";
			this->Size = System::Drawing::Size(582, 163);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
