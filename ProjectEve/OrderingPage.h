#pragma once
#include "Ordering.h"
#include "Burger.h"
#include "Chicken.h"
#include "Pasta.h"
#include "RiceMeals.h"
#include "OrderSummary.h"
#include "OrderConfirmation.h"


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjectEve {

	/// <summary>
	/// Summary for OrderingPage
	/// </summary>
	public ref class OrderingPage : public System::Windows::Forms::UserControl
	{
	public:
		OrderingPage(void)
		{
			InitializeComponent();
			OrderingUserControls();
			//
			//TODO: Add the constructor code here
			//
		}
	public: // PANEL
		static Ordering^ ordering;
		// Order's Panel
		static Burger^ burger;
		static Chicken^ chicken;
		static Pasta^ pasta;
		static RiceMeals^ riceMeals;
		static OrderSummary^ orderSummary;
		static OrderConfirmation^ orderConfirmation;

		void OrderingUserControls();




	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OrderingPage()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Panel^  bodyPanel;
	protected:

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
			this->bodyPanel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// bodyPanel
			// 
			this->bodyPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->bodyPanel->Location = System::Drawing::Point(0, 0);
			this->bodyPanel->Name = L"bodyPanel";
			this->bodyPanel->Size = System::Drawing::Size(984, 484);
			this->bodyPanel->TabIndex = 0;
			// 
			// OrderingPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->bodyPanel);
			this->Name = L"OrderingPage";
			this->Size = System::Drawing::Size(984, 484);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
