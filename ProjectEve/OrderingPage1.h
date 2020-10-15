#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjectEve {

	/// <summary>
	/// Summary for OrderingPage1
	/// </summary>
	public ref class OrderingPage1 : public System::Windows::Forms::UserControl
	{
	public:
		OrderingPage1(void)
		{
			InitializeComponent();
			OrderingPage1ButtonHandler();
			//
			//TODO: Add the constructor code here
			//
		}

	public: // BUTTONS
		void OrderingPage1ButtonHandler();
		void BurgerButtonClick(Object^ sender, EventArgs^ e);
		void ChickenButtonClick(Object^ sender, EventArgs^ e);
		void PastaButtonClick(Object^ sender, EventArgs^ e);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OrderingPage1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: static System::Windows::Forms::Button^  burgerBtn;
	protected:
	public: static System::Windows::Forms::Button^  chickenBtn;
	public: static System::Windows::Forms::Button^  pastaBtn;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(OrderingPage1::typeid));
			this->burgerBtn = (gcnew System::Windows::Forms::Button());
			this->chickenBtn = (gcnew System::Windows::Forms::Button());
			this->pastaBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// burgerBtn
			// 
			this->burgerBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"burgerBtn.BackgroundImage")));
			this->burgerBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->burgerBtn->FlatAppearance->BorderSize = 0;
			this->burgerBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->burgerBtn->Location = System::Drawing::Point(71, 18);
			this->burgerBtn->Name = L"burgerBtn";
			this->burgerBtn->Size = System::Drawing::Size(177, 186);
			this->burgerBtn->TabIndex = 6;
			this->burgerBtn->UseVisualStyleBackColor = true;
			// 
			// chickenBtn
			// 
			this->chickenBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chickenBtn.BackgroundImage")));
			this->chickenBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->chickenBtn->FlatAppearance->BorderSize = 0;
			this->chickenBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->chickenBtn->Location = System::Drawing::Point(268, 33);
			this->chickenBtn->Name = L"chickenBtn";
			this->chickenBtn->Size = System::Drawing::Size(163, 157);
			this->chickenBtn->TabIndex = 7;
			this->chickenBtn->UseVisualStyleBackColor = true;
			// 
			// pastaBtn
			// 
			this->pastaBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pastaBtn.BackgroundImage")));
			this->pastaBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pastaBtn->FlatAppearance->BorderSize = 0;
			this->pastaBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pastaBtn->Location = System::Drawing::Point(452, 18);
			this->pastaBtn->Name = L"pastaBtn";
			this->pastaBtn->Size = System::Drawing::Size(177, 186);
			this->pastaBtn->TabIndex = 8;
			this->pastaBtn->UseVisualStyleBackColor = true;
			// 
			// OrderingPage1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->pastaBtn);
			this->Controls->Add(this->chickenBtn);
			this->Controls->Add(this->burgerBtn);
			this->Name = L"OrderingPage1";
			this->Size = System::Drawing::Size(709, 228);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
