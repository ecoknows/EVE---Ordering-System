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
	/// Summary for AllFoodsPage3
	/// </summary>
	public ref class AllFoodsPage3 : public System::Windows::Forms::UserControl
	{
	public:
		AllFoodsPage3(void)
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

		void HotDogButtonClick(Object^ sender, EventArgs^ e);

		void RoastedChickenButtonClick(Object^ sender, EventArgs^ e);

		void LasagnaButtonClick(Object^ sender, EventArgs^ e);

		void SiomaiRiceButtonClick(Object^ sender, EventArgs^ e);
		void SisigRiceButtonClick(Object^ sender, EventArgs^ e);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AllFoodsPage3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  sisigriceBtn;
	protected:
	private: System::Windows::Forms::Button^  siomariceBtn;
	private: System::Windows::Forms::Button^  roastedChicken;
	private: System::Windows::Forms::Button^  lasagnaBtn;

	private: System::Windows::Forms::Button^  hotdogBtn;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AllFoodsPage3::typeid));
			this->sisigriceBtn = (gcnew System::Windows::Forms::Button());
			this->siomariceBtn = (gcnew System::Windows::Forms::Button());
			this->roastedChicken = (gcnew System::Windows::Forms::Button());
			this->lasagnaBtn = (gcnew System::Windows::Forms::Button());
			this->hotdogBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// sisigriceBtn
			// 
			this->sisigriceBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sisigriceBtn.BackgroundImage")));
			this->sisigriceBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->sisigriceBtn->FlatAppearance->BorderSize = 0;
			this->sisigriceBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sisigriceBtn->Location = System::Drawing::Point(458, 6);
			this->sisigriceBtn->Name = L"sisigriceBtn";
			this->sisigriceBtn->Size = System::Drawing::Size(111, 150);
			this->sisigriceBtn->TabIndex = 42;
			this->sisigriceBtn->UseVisualStyleBackColor = true;
			// 
			// siomariceBtn
			// 
			this->siomariceBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"siomariceBtn.BackgroundImage")));
			this->siomariceBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->siomariceBtn->FlatAppearance->BorderSize = 0;
			this->siomariceBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->siomariceBtn->Location = System::Drawing::Point(353, 36);
			this->siomariceBtn->Name = L"siomariceBtn";
			this->siomariceBtn->Size = System::Drawing::Size(99, 120);
			this->siomariceBtn->TabIndex = 41;
			this->siomariceBtn->UseVisualStyleBackColor = true;
			// 
			// roastedChicken
			// 
			this->roastedChicken->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roastedChicken.BackgroundImage")));
			this->roastedChicken->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->roastedChicken->FlatAppearance->BorderSize = 0;
			this->roastedChicken->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->roastedChicken->Location = System::Drawing::Point(236, 6);
			this->roastedChicken->Name = L"roastedChicken";
			this->roastedChicken->Size = System::Drawing::Size(111, 150);
			this->roastedChicken->TabIndex = 40;
			this->roastedChicken->UseVisualStyleBackColor = true;
			// 
			// lasagnaBtn
			// 
			this->lasagnaBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lasagnaBtn.BackgroundImage")));
			this->lasagnaBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->lasagnaBtn->FlatAppearance->BorderSize = 0;
			this->lasagnaBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lasagnaBtn->Location = System::Drawing::Point(131, 36);
			this->lasagnaBtn->Name = L"lasagnaBtn";
			this->lasagnaBtn->Size = System::Drawing::Size(99, 120);
			this->lasagnaBtn->TabIndex = 39;
			this->lasagnaBtn->UseVisualStyleBackColor = true;
			// 
			// hotdogBtn
			// 
			this->hotdogBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hotdogBtn.BackgroundImage")));
			this->hotdogBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->hotdogBtn->FlatAppearance->BorderSize = 0;
			this->hotdogBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->hotdogBtn->Location = System::Drawing::Point(14, 6);
			this->hotdogBtn->Name = L"hotdogBtn";
			this->hotdogBtn->Size = System::Drawing::Size(111, 150);
			this->hotdogBtn->TabIndex = 38;
			this->hotdogBtn->UseVisualStyleBackColor = true;
			// 
			// AllFoodsPage3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->sisigriceBtn);
			this->Controls->Add(this->siomariceBtn);
			this->Controls->Add(this->roastedChicken);
			this->Controls->Add(this->lasagnaBtn);
			this->Controls->Add(this->hotdogBtn);
			this->Name = L"AllFoodsPage3";
			this->Size = System::Drawing::Size(582, 163);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
