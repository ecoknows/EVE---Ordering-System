#pragma once
#include "DataHandler.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;


namespace ProjectEve {

	/// <summary>
	/// Summary for OrderSummary
	/// </summary>
	public ref class OrderSummary : public System::Windows::Forms::UserControl
	{
	public:
		OrderSummary(void)
		{
			InitializeComponent();
			ButtonEventHandler();
			//
			//TODO: Add the constructor code here
			//
		}

	public: // BUTTON HANDLER
		 void ButtonEventHandler();
		 void BackButtonClick(Object^ sender, EventArgs^ e);
		 void ConfirmButtonClick(Object^ sender, EventArgs^ e);
		 static void SetData();
	public:static System::Windows::Forms::Label^  totalLabel;
			List^ list = List_Create();


	public:
		static void GenerateTransactionNumber();
	public: static System::Windows::Forms::Label^  transactionLabel;







	public:
	public:




	public:
		static UserControl^ userControl;



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OrderSummary()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	public: static System::Windows::Forms::ListView^  summarizedOrder;
	private:

	private:
	public: System::Windows::Forms::ColumnHeader^  Food;
	public: System::Windows::Forms::ColumnHeader^  Quantity;
	public: System::Windows::Forms::ColumnHeader^  Price;
	private: System::Windows::Forms::Button^  backBtn;
	public:
	private: System::Windows::Forms::Button^  confirmBtn;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(OrderSummary::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->summarizedOrder = (gcnew System::Windows::Forms::ListView());
			this->Food = (gcnew System::Windows::Forms::ColumnHeader());
			this->Quantity = (gcnew System::Windows::Forms::ColumnHeader());
			this->Price = (gcnew System::Windows::Forms::ColumnHeader());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->confirmBtn = (gcnew System::Windows::Forms::Button());
			this->transactionLabel = (gcnew System::Windows::Forms::Label());
			this->totalLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(19, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(547, 280);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(572, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(395, 431);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// summarizedOrder
			// 
			this->summarizedOrder->BackColor = System::Drawing::SystemColors::Control;
			this->summarizedOrder->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->summarizedOrder->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->Food, this->Quantity,
					this->Price
			});
			this->summarizedOrder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->summarizedOrder->Location = System::Drawing::Point(594, 64);
			this->summarizedOrder->Name = L"summarizedOrder";
			this->summarizedOrder->Size = System::Drawing::Size(348, 288);
			this->summarizedOrder->TabIndex = 29;
			this->summarizedOrder->TileSize = System::Drawing::Size(168, 50);
			this->summarizedOrder->UseCompatibleStateImageBehavior = false;
			this->summarizedOrder->View = System::Windows::Forms::View::Details;
			// 
			// Food
			// 
			this->Food->Text = L"Food";
			this->Food->Width = 156;
			// 
			// Quantity
			// 
			this->Quantity->Text = L"Quantity";
			this->Quantity->Width = 96;
			// 
			// Price
			// 
			this->Price->Text = L"Price";
			this->Price->Width = 79;
			// 
			// backBtn
			// 
			this->backBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backBtn.BackgroundImage")));
			this->backBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->Location = System::Drawing::Point(42, 335);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(127, 52);
			this->backBtn->TabIndex = 30;
			this->backBtn->UseVisualStyleBackColor = true;
			// 
			// confirmBtn
			// 
			this->confirmBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"confirmBtn.BackgroundImage")));
			this->confirmBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->confirmBtn->FlatAppearance->BorderSize = 0;
			this->confirmBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->confirmBtn->Location = System::Drawing::Point(376, 335);
			this->confirmBtn->Name = L"confirmBtn";
			this->confirmBtn->Size = System::Drawing::Size(127, 52);
			this->confirmBtn->TabIndex = 31;
			this->confirmBtn->UseVisualStyleBackColor = true;
			// 
			// transactionLabel
			// 
			this->transactionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->transactionLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->transactionLabel->Location = System::Drawing::Point(62, 126);
			this->transactionLabel->Name = L"transactionLabel";
			this->transactionLabel->Size = System::Drawing::Size(460, 115);
			this->transactionLabel->TabIndex = 32;
			this->transactionLabel->Text = L"0";
			this->transactionLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// totalLabel
			// 
			this->totalLabel->AutoSize = true;
			this->totalLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalLabel->Location = System::Drawing::Point(673, 357);
			this->totalLabel->Name = L"totalLabel";
			this->totalLabel->Size = System::Drawing::Size(26, 30);
			this->totalLabel->TabIndex = 33;
			this->totalLabel->Text = L"0";
			// 
			// OrderSummary
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->totalLabel);
			this->Controls->Add(this->transactionLabel);
			this->Controls->Add(this->confirmBtn);
			this->Controls->Add(this->backBtn);
			this->Controls->Add(this->summarizedOrder);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"OrderSummary";
			this->Size = System::Drawing::Size(984, 484);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
