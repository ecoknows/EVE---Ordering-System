#pragma once
#include "HelpPageInfo.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjectEve {

	/// <summary>
	/// Summary for HelpPage
	/// </summary>
	public ref class HelpPage : public System::Windows::Forms::UserControl
	{
	public:
		HelpPage(void)
		{
			InitializeComponent();
			SetPanels();
			//
			//TODO: Add the constructor code here
			//
		}

	public:
		void SetPanels();
		HelpPageInfo^ helppageinfo;


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HelpPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  helpPagePanel;
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
			this->helpPagePanel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// helpPagePanel
			// 
			this->helpPagePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->helpPagePanel->Location = System::Drawing::Point(0, 0);
			this->helpPagePanel->Name = L"helpPagePanel";
			this->helpPagePanel->Size = System::Drawing::Size(984, 484);
			this->helpPagePanel->TabIndex = 0;
			// 
			// HelpPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->helpPagePanel);
			this->Name = L"HelpPage";
			this->Size = System::Drawing::Size(984, 484);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
