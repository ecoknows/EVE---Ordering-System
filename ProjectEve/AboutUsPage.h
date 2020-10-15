#pragma once
#include "AboutUsInfo.h"
#include "AboutJerico.h"
#include "AboutJake.h"
#include "AboutJayson.h"
#include "AboutLovely.h"
#include "AboutRoxie.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjectEve {

	/// <summary>
	/// Summary for AboutUsPage
	/// </summary>
	public ref class AboutUsPage : public System::Windows::Forms::UserControl
	{
	public:
		AboutUsPage(void)
		{
			InitializeComponent();
			PanelHandler();
			//
			//TODO: Add the constructor code here
			//
		}

	public:
		void PanelHandler();
		static AboutUsInfo^ aboutUsInfo;
		static AboutJerico^ aboutJerico;
		static AboutJake^ aboutJake;
		static AboutRoxie^ aboutRoxie;
		static AboutLovely^ aboutLovely;
		static AboutJayson^ aboutJayson;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AboutUsPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  aboutPanel;
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
			this->aboutPanel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// aboutPanel
			// 
			this->aboutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->aboutPanel->Location = System::Drawing::Point(0, 0);
			this->aboutPanel->Name = L"aboutPanel";
			this->aboutPanel->Size = System::Drawing::Size(984, 484);
			this->aboutPanel->TabIndex = 0;
			// 
			// AboutUsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->aboutPanel);
			this->Name = L"AboutUsPage";
			this->Size = System::Drawing::Size(984, 484);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
