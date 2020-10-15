#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjectEve {

	/// <summary>
	/// Summary for OrderingPage2
	/// </summary>
	public ref class OrderingPage2 : public System::Windows::Forms::UserControl
	{
	public:
		OrderingPage2(void)
		{
			InitializeComponent();
			OrderingPage2ButtonHandler();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		void OrderingPage2ButtonHandler();
		void RiceMealsButtonClick(Object^ sender, EventArgs^ e);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OrderingPage2()
		{
			if (components)
			{
				delete components;
			}
		}
	public: static System::Windows::Forms::Button^  riceMealsBtn;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(OrderingPage2::typeid));
			this->riceMealsBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// riceMealsBtn
			// 
			this->riceMealsBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"riceMealsBtn.BackgroundImage")));
			this->riceMealsBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->riceMealsBtn->FlatAppearance->BorderSize = 0;
			this->riceMealsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->riceMealsBtn->Location = System::Drawing::Point(268, 17);
			this->riceMealsBtn->Name = L"riceMealsBtn";
			this->riceMealsBtn->Size = System::Drawing::Size(177, 186);
			this->riceMealsBtn->TabIndex = 7;
			this->riceMealsBtn->UseVisualStyleBackColor = true;
			// 
			// OrderingPage2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->riceMealsBtn);
			this->Name = L"OrderingPage2";
			this->Size = System::Drawing::Size(709, 228);
			this->ResumeLayout(false);

		}
#pragma endregion
};
}
