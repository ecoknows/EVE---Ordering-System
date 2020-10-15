#pragma once
#include "OrderingPage1.h"
#include "OrderingPage2.h"
#include "AllFoodsPage1.h"
#include "AllFoodsPage2.h"
#include "AllFoodsPage3.h"
#include "AllFoodsPage4.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjectEve {

	/// <summary>
	/// Summary for Ordering
	/// </summary>
	public ref class Ordering : public System::Windows::Forms::UserControl
	{
	public:
		Ordering(void)
		{
			InitializeComponent();
			OrderingPanelHandler();
			OrderingButtonsHandler();
			//
			//TODO: Add the constructor code here
			//
		}


	public:
	public:// PANEL PART
		void OrderingPanelHandler();

		// GENERAL FOOND
		OrderingPage1^ page1;
		OrderingPage2^ page2;
		// ALL PRODUCT
		AllFoodsPage1^ allPage1;
		AllFoodsPage2^ allPage2;
		AllFoodsPage3^ allpage3;
		AllFoodsPage4^ allpage4;

	public:// BUTTON PART
		void OrderingButtonsHandler();
		
		int cntMainProduct = 0;
		void CountMainProductPage();
		void BlueLeftButtonClick(Object^ sender, EventArgs^ e);
		void BlueRightButtonClick(Object^ sender, EventArgs^ e);

		int cntAllProduct = 0;
		void CountAllProductPage();
		void RedLeftButtonClick(Object^ sender, EventArgs^ e);
		void RedRightButtonClick(Object^ sender, EventArgs^ e);
		


	public: static System::Windows::Forms::Button^  blueLeft;
	public: static System::Windows::Forms::Button^  blueRight;
	public: static System::Windows::Forms::Button^  redLeft;
	public: static System::Windows::Forms::Button^  redRight;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Ordering()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Panel^  allPanel;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::Panel^  generalPanel;











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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Ordering::typeid));
			this->blueLeft = (gcnew System::Windows::Forms::Button());
			this->blueRight = (gcnew System::Windows::Forms::Button());
			this->redLeft = (gcnew System::Windows::Forms::Button());
			this->redRight = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->generalPanel = (gcnew System::Windows::Forms::Panel());
			this->allPanel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// blueLeft
			// 
			this->blueLeft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"blueLeft.BackgroundImage")));
			this->blueLeft->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->blueLeft->FlatAppearance->BorderSize = 0;
			this->blueLeft->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->blueLeft->Location = System::Drawing::Point(47, 117);
			this->blueLeft->Name = L"blueLeft";
			this->blueLeft->Size = System::Drawing::Size(84, 89);
			this->blueLeft->TabIndex = 3;
			this->blueLeft->UseVisualStyleBackColor = true;
			// 
			// blueRight
			// 
			this->blueRight->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"blueRight.BackgroundImage")));
			this->blueRight->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->blueRight->FlatAppearance->BorderSize = 0;
			this->blueRight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->blueRight->Location = System::Drawing::Point(865, 117);
			this->blueRight->Name = L"blueRight";
			this->blueRight->Size = System::Drawing::Size(84, 89);
			this->blueRight->TabIndex = 4;
			this->blueRight->UseVisualStyleBackColor = true;
			// 
			// redLeft
			// 
			this->redLeft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"redLeft.BackgroundImage")));
			this->redLeft->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->redLeft->FlatAppearance->BorderSize = 0;
			this->redLeft->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->redLeft->Location = System::Drawing::Point(150, 377);
			this->redLeft->Name = L"redLeft";
			this->redLeft->Size = System::Drawing::Size(58, 58);
			this->redLeft->TabIndex = 9;
			this->redLeft->UseVisualStyleBackColor = true;
			// 
			// redRight
			// 
			this->redRight->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"redRight.BackgroundImage")));
			this->redRight->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->redRight->FlatAppearance->BorderSize = 0;
			this->redRight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->redRight->Location = System::Drawing::Point(802, 377);
			this->redRight->Name = L"redRight";
			this->redRight->Size = System::Drawing::Size(58, 58);
			this->redRight->TabIndex = 10;
			this->redRight->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Agency FB", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(408, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 44);
			this->label1->TabIndex = 12;
			this->label1->Text = L"GENERAL FOODS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(454, 276);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 31);
			this->label2->TabIndex = 13;
			this->label2->Text = L"All Products";
			// 
			// generalPanel
			// 
			this->generalPanel->Location = System::Drawing::Point(150, 51);
			this->generalPanel->Name = L"generalPanel";
			this->generalPanel->Size = System::Drawing::Size(709, 228);
			this->generalPanel->TabIndex = 18;
			// 
			// allPanel
			// 
			this->allPanel->Location = System::Drawing::Point(214, 308);
			this->allPanel->Name = L"allPanel";
			this->allPanel->Size = System::Drawing::Size(582, 163);
			this->allPanel->TabIndex = 19;
			// 
			// Ordering
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->allPanel);
			this->Controls->Add(this->generalPanel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->redRight);
			this->Controls->Add(this->redLeft);
			this->Controls->Add(this->blueRight);
			this->Controls->Add(this->blueLeft);
			this->Name = L"Ordering";
			this->Size = System::Drawing::Size(984, 484);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
