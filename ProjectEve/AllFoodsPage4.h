#pragma once
#include "Chicken.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjectEve {

	/// <summary>
	/// Summary for AllFoodsPage4
	/// </summary>
	public ref class AllFoodsPage4 : public System::Windows::Forms::UserControl
	{
	public:
		AllFoodsPage4(void)
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

		void SpicyChickenButtonClick(Object^ sender, EventArgs^ e);
		void SpaghettiButtonClick(Object^ sender, EventArgs^ e);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AllFoodsPage4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  spicyChicken;
	protected:

	private: System::Windows::Forms::Button^  spaghettiBtn;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AllFoodsPage4::typeid));
			this->spicyChicken = (gcnew System::Windows::Forms::Button());
			this->spaghettiBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// spicyChicken
			// 
			this->spicyChicken->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"spicyChicken.BackgroundImage")));
			this->spicyChicken->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->spicyChicken->FlatAppearance->BorderSize = 0;
			this->spicyChicken->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->spicyChicken->Location = System::Drawing::Point(300, 36);
			this->spicyChicken->Name = L"spicyChicken";
			this->spicyChicken->Size = System::Drawing::Size(99, 120);
			this->spicyChicken->TabIndex = 41;
			this->spicyChicken->UseVisualStyleBackColor = true;
			// 
			// spaghettiBtn
			// 
			this->spaghettiBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"spaghettiBtn.BackgroundImage")));
			this->spaghettiBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->spaghettiBtn->FlatAppearance->BorderSize = 0;
			this->spaghettiBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->spaghettiBtn->Location = System::Drawing::Point(183, 6);
			this->spaghettiBtn->Name = L"spaghettiBtn";
			this->spaghettiBtn->Size = System::Drawing::Size(111, 150);
			this->spaghettiBtn->TabIndex = 40;
			this->spaghettiBtn->UseVisualStyleBackColor = true;
			// 
			// AllFoodsPage4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->spicyChicken);
			this->Controls->Add(this->spaghettiBtn);
			this->Name = L"AllFoodsPage4";
			this->Size = System::Drawing::Size(582, 163);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
