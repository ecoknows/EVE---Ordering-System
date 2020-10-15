#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjectEve {

	/// <summary>
	/// Summary for AboutUsInfo
	/// </summary>
	public ref class AboutUsInfo : public System::Windows::Forms::UserControl
	{
	public:
		AboutUsInfo(void)
		{
			InitializeComponent();
			ButtonHandler();
			//
			//TODO: Add the constructor code here
			//
		}

	public:
		void ButtonHandler();
		void JericoButtonClick(Object^ sender, EventArgs^ e);
		void RoxieButtonClick(Object^ sender, EventArgs^ e);
		void JaysonButtonClick(Object^ sender, EventArgs^ e);
		void LovelynButtonClick(Object^ sender, EventArgs^ e);
		void JakeButtonClick(Object^ sender, EventArgs^ e);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AboutUsInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  jaysonBtn;
	protected:
	private: System::Windows::Forms::Button^  jakeBtn;
	private: System::Windows::Forms::Button^  roxieBtn;
	private: System::Windows::Forms::Button^  lovelynBtn;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  jericoBtn;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutUsInfo::typeid));
			this->jaysonBtn = (gcnew System::Windows::Forms::Button());
			this->jakeBtn = (gcnew System::Windows::Forms::Button());
			this->roxieBtn = (gcnew System::Windows::Forms::Button());
			this->lovelynBtn = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->jericoBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// jaysonBtn
			// 
			this->jaysonBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"jaysonBtn.BackgroundImage")));
			this->jaysonBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->jaysonBtn->FlatAppearance->BorderSize = 0;
			this->jaysonBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->jaysonBtn->Location = System::Drawing::Point(260, 258);
			this->jaysonBtn->Name = L"jaysonBtn";
			this->jaysonBtn->Size = System::Drawing::Size(139, 132);
			this->jaysonBtn->TabIndex = 11;
			this->jaysonBtn->UseVisualStyleBackColor = true;
			// 
			// jakeBtn
			// 
			this->jakeBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"jakeBtn.BackgroundImage")));
			this->jakeBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->jakeBtn->FlatAppearance->BorderSize = 0;
			this->jakeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->jakeBtn->Location = System::Drawing::Point(810, 339);
			this->jakeBtn->Name = L"jakeBtn";
			this->jakeBtn->Size = System::Drawing::Size(156, 122);
			this->jakeBtn->TabIndex = 10;
			this->jakeBtn->UseVisualStyleBackColor = true;
			// 
			// roxieBtn
			// 
			this->roxieBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roxieBtn.BackgroundImage")));
			this->roxieBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->roxieBtn->FlatAppearance->BorderSize = 0;
			this->roxieBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->roxieBtn->Location = System::Drawing::Point(60, 339);
			this->roxieBtn->Name = L"roxieBtn";
			this->roxieBtn->Size = System::Drawing::Size(124, 122);
			this->roxieBtn->TabIndex = 9;
			this->roxieBtn->UseVisualStyleBackColor = true;
			// 
			// lovelynBtn
			// 
			this->lovelynBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lovelynBtn.BackgroundImage")));
			this->lovelynBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->lovelynBtn->FlatAppearance->BorderSize = 0;
			this->lovelynBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lovelynBtn->Location = System::Drawing::Point(649, 258);
			this->lovelynBtn->Name = L"lovelynBtn";
			this->lovelynBtn->Size = System::Drawing::Size(115, 117);
			this->lovelynBtn->TabIndex = 8;
			this->lovelynBtn->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(297, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(415, 249);
			this->button2->TabIndex = 7;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// jericoBtn
			// 
			this->jericoBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"jericoBtn.BackgroundImage")));
			this->jericoBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->jericoBtn->FlatAppearance->BorderSize = 0;
			this->jericoBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->jericoBtn->Location = System::Drawing::Point(446, 339);
			this->jericoBtn->Name = L"jericoBtn";
			this->jericoBtn->Size = System::Drawing::Size(139, 122);
			this->jericoBtn->TabIndex = 6;
			this->jericoBtn->UseVisualStyleBackColor = true;
			// 
			// AboutUsInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->jaysonBtn);
			this->Controls->Add(this->jakeBtn);
			this->Controls->Add(this->roxieBtn);
			this->Controls->Add(this->lovelynBtn);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->jericoBtn);
			this->Name = L"AboutUsInfo";
			this->Size = System::Drawing::Size(984, 484);
			this->ResumeLayout(false);

		}
#pragma endregion
};
}
