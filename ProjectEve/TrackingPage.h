#pragma once
#include "TrackingUserLayout.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjectEve {

	/// <summary>
	/// Summary for TrackingPage
	/// </summary>
	public ref class TrackingPage : public System::Windows::Forms::UserControl
	{
	public:
		TrackingPage(void)
		{
			InitializeComponent();
			 PanelHandler();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TrackingPage()
		{
			if (components)
			{
				delete components;
			}
		}

	public:
		TrackingUserLayout^ trackingLayout = gcnew TrackingUserLayout();
		void PanelHandler();


	private: System::Windows::Forms::Panel^  transactionPanel;
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
			this->transactionPanel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// transactionPanel
			// 
			this->transactionPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->transactionPanel->Location = System::Drawing::Point(0, 0);
			this->transactionPanel->Name = L"transactionPanel";
			this->transactionPanel->Size = System::Drawing::Size(1312, 596);
			this->transactionPanel->TabIndex = 0;
			// 
			// TrackingPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->transactionPanel);
			this->Name = L"TrackingPage";
			this->Size = System::Drawing::Size(1312, 596);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
