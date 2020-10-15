#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjectEve {

	/// <summary>
	/// Summary for OrderConfirmation
	/// </summary>
	public ref class OrderConfirmation : public System::Windows::Forms::UserControl
	{
	public:
		OrderConfirmation(void)
		{
			InitializeComponent();
			ButtonHandler();
			//
			//TODO: Add the constructor code here
			//
		}

	public:
		void ButtonHandler();
		void ConfirmButtonClick(Object^ sender, EventArgs ^e);
		void PasswordTextChange(Object^ sender, EventArgs ^e);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OrderConfirmation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  totalPaymenLabel;
	private: System::Windows::Forms::TextBox^  passwordBox;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  confirmBtn;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(OrderConfirmation::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->totalPaymenLabel = (gcnew System::Windows::Forms::Label());
			this->passwordBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->confirmBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Agency FB", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(277, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(496, 44);
			this->label1->TabIndex = 13;
			this->label1->Text = L"PLEASE CALL THE CASHIER TO CONFIRM";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Agency FB", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(416, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(215, 44);
			this->label2->TabIndex = 14;
			this->label2->Text = L"TOTAL PAYMENT";
			// 
			// totalPaymenLabel
			// 
			this->totalPaymenLabel->AutoSize = true;
			this->totalPaymenLabel->Font = (gcnew System::Drawing::Font(L"Agency FB", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalPaymenLabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->totalPaymenLabel->Location = System::Drawing::Point(469, 194);
			this->totalPaymenLabel->Name = L"totalPaymenLabel";
			this->totalPaymenLabel->Size = System::Drawing::Size(93, 44);
			this->totalPaymenLabel->TabIndex = 15;
			this->totalPaymenLabel->Text = L"10000";
			// 
			// passwordBox
			// 
			this->passwordBox->Location = System::Drawing::Point(413, 302);
			this->passwordBox->Multiline = true;
			this->passwordBox->Name = L"passwordBox";
			this->passwordBox->Size = System::Drawing::Size(207, 24);
			this->passwordBox->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Agency FB", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(167, 291);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(240, 44);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Cashier Password";
			// 
			// confirmBtn
			// 
			this->confirmBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"confirmBtn.BackgroundImage")));
			this->confirmBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->confirmBtn->FlatAppearance->BorderSize = 0;
			this->confirmBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->confirmBtn->Location = System::Drawing::Point(457, 352);
			this->confirmBtn->Name = L"confirmBtn";
			this->confirmBtn->Size = System::Drawing::Size(127, 52);
			this->confirmBtn->TabIndex = 32;
			this->confirmBtn->UseVisualStyleBackColor = true;
			// 
			// OrderConfirmation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->confirmBtn);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->passwordBox);
			this->Controls->Add(this->totalPaymenLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"OrderConfirmation";
			this->Size = System::Drawing::Size(984, 484);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
