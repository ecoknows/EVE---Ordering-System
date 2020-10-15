#pragma once
#include "Burger.h"
#include "Chicken.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjectEve {

	/// <summary>
	/// Summary for AllFoodsPage2
	/// </summary>
	public ref class AllFoodsPage2 : public System::Windows::Forms::UserControl
	{
	public:
		AllFoodsPage2(void)
		{
			InitializeComponent();
			AllFoodsButtonHandler();
			//
			//TODO: Add the constructor code here
			//
		}

	public:
		void AllFoodsButtonHandler();
		void Update(Product^ product,ListView^ listView ,ListViewItem^ listViewItem, interior_ptr<int> price, Label^ label);

		void CheeseBurgerButtonClick(Object^ sender, EventArgs^ e);
		void FootLongButtonClick(Object^ sender, EventArgs^ e);
		void ChickenButtonClick(Object^ sender, EventArgs^ e);

		void FriedChickenButtonClick(Object^ sender, EventArgs^ e);

		void CarbonaraButtonClick(Object^ sender, EventArgs^ e);


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AllFoodsPage2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  friedchickenBtn;
	protected:

	private: System::Windows::Forms::Button^  footlongBtn;
	protected:

	private: System::Windows::Forms::Button^  chickenburgerBtn;

	private: System::Windows::Forms::Button^  cheeseburgerBtn;

	private: System::Windows::Forms::Button^  carbonaraBtn;


	protected:


	protected:


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AllFoodsPage2::typeid));
			this->friedchickenBtn = (gcnew System::Windows::Forms::Button());
			this->footlongBtn = (gcnew System::Windows::Forms::Button());
			this->chickenburgerBtn = (gcnew System::Windows::Forms::Button());
			this->cheeseburgerBtn = (gcnew System::Windows::Forms::Button());
			this->carbonaraBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// friedchickenBtn
			// 
			this->friedchickenBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"friedchickenBtn.BackgroundImage")));
			this->friedchickenBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->friedchickenBtn->FlatAppearance->BorderSize = 0;
			this->friedchickenBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->friedchickenBtn->Location = System::Drawing::Point(458, 6);
			this->friedchickenBtn->Name = L"friedchickenBtn";
			this->friedchickenBtn->Size = System::Drawing::Size(111, 150);
			this->friedchickenBtn->TabIndex = 37;
			this->friedchickenBtn->UseVisualStyleBackColor = true;
			// 
			// footlongBtn
			// 
			this->footlongBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"footlongBtn.BackgroundImage")));
			this->footlongBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->footlongBtn->FlatAppearance->BorderSize = 0;
			this->footlongBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->footlongBtn->Location = System::Drawing::Point(353, 36);
			this->footlongBtn->Name = L"footlongBtn";
			this->footlongBtn->Size = System::Drawing::Size(99, 120);
			this->footlongBtn->TabIndex = 36;
			this->footlongBtn->UseVisualStyleBackColor = true;
			// 
			// chickenburgerBtn
			// 
			this->chickenburgerBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chickenburgerBtn.BackgroundImage")));
			this->chickenburgerBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->chickenburgerBtn->FlatAppearance->BorderSize = 0;
			this->chickenburgerBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->chickenburgerBtn->Location = System::Drawing::Point(236, 6);
			this->chickenburgerBtn->Name = L"chickenburgerBtn";
			this->chickenburgerBtn->Size = System::Drawing::Size(111, 150);
			this->chickenburgerBtn->TabIndex = 35;
			this->chickenburgerBtn->UseVisualStyleBackColor = true;
			// 
			// cheeseburgerBtn
			// 
			this->cheeseburgerBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cheeseburgerBtn.BackgroundImage")));
			this->cheeseburgerBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cheeseburgerBtn->FlatAppearance->BorderSize = 0;
			this->cheeseburgerBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cheeseburgerBtn->Location = System::Drawing::Point(131, 36);
			this->cheeseburgerBtn->Name = L"cheeseburgerBtn";
			this->cheeseburgerBtn->Size = System::Drawing::Size(99, 120);
			this->cheeseburgerBtn->TabIndex = 34;
			this->cheeseburgerBtn->UseVisualStyleBackColor = true;
			// 
			// carbonaraBtn
			// 
			this->carbonaraBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"carbonaraBtn.BackgroundImage")));
			this->carbonaraBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->carbonaraBtn->FlatAppearance->BorderSize = 0;
			this->carbonaraBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->carbonaraBtn->Location = System::Drawing::Point(14, 6);
			this->carbonaraBtn->Name = L"carbonaraBtn";
			this->carbonaraBtn->Size = System::Drawing::Size(111, 150);
			this->carbonaraBtn->TabIndex = 33;
			this->carbonaraBtn->UseVisualStyleBackColor = true;
			// 
			// AllFoodsPage2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->friedchickenBtn);
			this->Controls->Add(this->footlongBtn);
			this->Controls->Add(this->chickenburgerBtn);
			this->Controls->Add(this->cheeseburgerBtn);
			this->Controls->Add(this->carbonaraBtn);
			this->Name = L"AllFoodsPage2";
			this->Size = System::Drawing::Size(582, 163);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
