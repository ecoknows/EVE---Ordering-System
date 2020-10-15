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
	/// Summary for TrackingUserLayout
	/// </summary>
	public ref class TrackingUserLayout : public System::Windows::Forms::UserControl
	{
	public:
		TrackingUserLayout(void)
		{
			InitializeComponent();
			ToolHandler();
			//
			//TODO: Add the constructor code here
			//
		}

	public:
		void ToolHandler();
		void SearchBoxTextChange(Object^ sender, EventArgs^ e);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TrackingUserLayout()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	public:
		static List^ list = List_Create();
		static void AddData(String^ path);

	public:



	private: System::Windows::Forms::TextBox^  searchBox;
	public: static System::Windows::Forms::ListView^  transactionList;
	private:

	private:

	private:

	private:

	private:
	protected:



	protected:


	private: System::Windows::Forms::ColumnHeader^  transacN;








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
			this->searchBox = (gcnew System::Windows::Forms::TextBox());
			this->transactionList = (gcnew System::Windows::Forms::ListView());
			this->transacN = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// searchBox
			// 
			this->searchBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchBox->Location = System::Drawing::Point(307, 74);
			this->searchBox->Margin = System::Windows::Forms::Padding(2);
			this->searchBox->Multiline = true;
			this->searchBox->Name = L"searchBox";
			this->searchBox->Size = System::Drawing::Size(400, 38);
			this->searchBox->TabIndex = 0;
			this->searchBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// transactionList
			// 
			this->transactionList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->transacN });
			this->transactionList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->transactionList->Location = System::Drawing::Point(307, 116);
			this->transactionList->Margin = System::Windows::Forms::Padding(2);
			this->transactionList->Name = L"transactionList";
			this->transactionList->Size = System::Drawing::Size(400, 314);
			this->transactionList->TabIndex = 2;
			this->transactionList->UseCompatibleStateImageBehavior = false;
			this->transactionList->View = System::Windows::Forms::View::Details;
			// 
			// transacN
			// 
			this->transacN->Text = L"Transaction Number";
			this->transacN->Width = 392;
			// 
			// TrackingUserLayout
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->transactionList);
			this->Controls->Add(this->searchBox);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"TrackingUserLayout";
			this->Size = System::Drawing::Size(984, 484);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
