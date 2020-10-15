#pragma once
#include "Product.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjectEve {

	/// <summary>
	/// Summary for Pasta
	/// </summary>
	public ref class Pasta : public System::Windows::Forms::UserControl
	{
	public:
		Pasta(void)
		{
			InitializeComponent();
			PastaButtonHandler();
			//
			//TODO: Add the constructor code here
			//
		}

	public: // PRODUCT OBJECT
		// FOODS
		static Product^ spaghettiStruct = gcnew Product("Spaghetti");
		static Product^ carbonaraStruct = gcnew Product("Carbonara");
		static Product^ lasagnaStruct = gcnew Product("Lasagna");
		static Product^ bakedStruct = gcnew Product("Baked Mac");

		//ADDONS
		static Product^ cokeStruct = gcnew Product("Coke");
		static Product^ spriteStruct = gcnew Product("Sprite");
		static Product^ icedteaStruct = gcnew Product("Iced Tea");
		static Product^ pepsiStruct = gcnew Product("Pepsi");

		static void TotalPriceHandler();

	public: // PRICING
		// FOODS
		static int spaghettiPrice = 50;
		static int carbonaraPrice = 60;
		static int lasagnaPrice = 60;
		static int bakedPrice = 80;

		// ADD ONS
		static int cokePrice = 20;
		static int spritePrice = 20;
		static int icedteaPrice = 20;
		static int pepsiPrice = 20;

		static int totalPrice = 0;

	public:// LIST VIEW HANDLER
		// FOODS
		static ListViewItem^ spaghettiItem = gcnew ListViewItem(spaghettiStruct->name);
		static ListViewItem^ carbonaraItem = gcnew ListViewItem(carbonaraStruct->name);
		static ListViewItem^ lasagnaItem = gcnew ListViewItem(lasagnaStruct->name);
		static ListViewItem^ bakedItem = gcnew ListViewItem(bakedStruct->name);

		// ADD ONS
		static ListViewItem^ cokeItem = gcnew ListViewItem(cokeStruct->name);
		static ListViewItem^ spriteItem = gcnew ListViewItem(spriteStruct->name);
		static ListViewItem^ icedteaItem = gcnew ListViewItem(icedteaStruct->name);
		static ListViewItem^ pepsiItem = gcnew ListViewItem(pepsiStruct->name);

	public:// BUTTON HANDLER
		void PastaButtonHandler();
		void MouseDownEventHandler(MouseEventArgs^ e, Label^ label, const int origLeftPos, interior_ptr<int> cnt);
		void ButtonFunction(MouseEventArgs^ e, Product^ product, ListViewItem^ listViewItem, Label^ label, interior_ptr<int> price, const int origPos);

		// FOODS
		void SpaghettiButtonClick(Object^ sender, MouseEventArgs^ e);
		void CarbonaraButtonClick(Object^ sender, MouseEventArgs^ e);
		void LasagnaButtonClick(Object^ sender, MouseEventArgs^ e);
		void BakedMacButtonClick(Object^ sender, MouseEventArgs^ e);

		// ADD ONS
		void CokeButtonClick(Object^ sender, MouseEventArgs^ e);
		void SpriteButtonClick(Object^ sender, MouseEventArgs^ e);
		void IcedTeaButtonClick(Object^ sender, MouseEventArgs^ e);
		void PepsiButtonClick(Object^ sender, MouseEventArgs^ e);

		static void IsOrderingAndCheckout(bool status);

	public:// POSITIONING
		//FOODS
		static int origSpaghettinLeftPosition;
		static int origCarbonaraLeftPosition;
		static int origLasagnaLeftPosition;
		static int origBakedMacLeftPosition;

		//ADD ONS
		static int origCokeLeftPosition;
		static int origSpriteLeftPosition;
		static int origIcedTeaLeftPosition;
		static int origPepsiLeftPosition;

	public:
		void LabelAdjuster(Label^ label, const int constLeftPos, const int counter);

	public:// NAV BUTTONS
		void OrderingButtonClick(Object^ sender, EventArgs^ e);
		void CheckOutButtonClick(Object^ sender, EventArgs^ e);
		void LabelGiver();
		void DataInsertion(Product^ product);
		void ButtonClickDataInseration(Product^ product, int price);
		bool Once = false;
		static int totalDataPrice = 0;



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Pasta()
		{
			if (components)
			{
				delete components;
			}
		}



	public: static System::Windows::Forms::Label^  bakedmacQuantity;
	public: static System::Windows::Forms::Label^  lasagnaQuantity;
	public: static System::Windows::Forms::Label^  carbonaraQuantity;
	public: static System::Windows::Forms::Label^  spaghettiQuantity;
	public: static System::Windows::Forms::Label^  pepsiQuantity;
	public: static System::Windows::Forms::Label^  icedteaQuantity;
	public: static System::Windows::Forms::Label^  spriteQuantity;
	public: static System::Windows::Forms::Label^  cokeQuantity;
	public: static System::Windows::Forms::Label^  label1;
	public: static System::Windows::Forms::Label^  totalLabel;

	public: static System::Windows::Forms::Button^  lasagnaBtn;
	public: static System::Windows::Forms::Button^  carbonaraBtn;
	public: static System::Windows::Forms::Button^  spaghettiBtn;
	public: static System::Windows::Forms::Button^  bakedmacBtn;
	public: static System::Windows::Forms::Button^  pepsiBtn;
	public: static System::Windows::Forms::Button^  icedteaBtn;
	public: static System::Windows::Forms::Button^  spriteBtn;
	public: static System::Windows::Forms::Button^  cokeBtn;
	public: static System::Windows::Forms::Button^  orderagainBtn;
	public: static System::Windows::Forms::Button^  checkoutBtn;

	public: System::Windows::Forms::PictureBox^  pictureBox1;
	public: static System::Windows::Forms::ListView^  summarizedOrder;

	public: System::Windows::Forms::ColumnHeader^  Food;
	public: System::Windows::Forms::ColumnHeader^  Quantity;
	public: System::Windows::Forms::ColumnHeader^  Price;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Pasta::typeid));
			this->bakedmacQuantity = (gcnew System::Windows::Forms::Label());
			this->lasagnaQuantity = (gcnew System::Windows::Forms::Label());
			this->carbonaraQuantity = (gcnew System::Windows::Forms::Label());
			this->spaghettiQuantity = (gcnew System::Windows::Forms::Label());
			this->lasagnaBtn = (gcnew System::Windows::Forms::Button());
			this->carbonaraBtn = (gcnew System::Windows::Forms::Button());
			this->spaghettiBtn = (gcnew System::Windows::Forms::Button());
			this->bakedmacBtn = (gcnew System::Windows::Forms::Button());
			this->pepsiQuantity = (gcnew System::Windows::Forms::Label());
			this->icedteaQuantity = (gcnew System::Windows::Forms::Label());
			this->spriteQuantity = (gcnew System::Windows::Forms::Label());
			this->cokeQuantity = (gcnew System::Windows::Forms::Label());
			this->pepsiBtn = (gcnew System::Windows::Forms::Button());
			this->icedteaBtn = (gcnew System::Windows::Forms::Button());
			this->spriteBtn = (gcnew System::Windows::Forms::Button());
			this->cokeBtn = (gcnew System::Windows::Forms::Button());
			this->orderagainBtn = (gcnew System::Windows::Forms::Button());
			this->checkoutBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->totalLabel = (gcnew System::Windows::Forms::Label());
			this->summarizedOrder = (gcnew System::Windows::Forms::ListView());
			this->Food = (gcnew System::Windows::Forms::ColumnHeader());
			this->Quantity = (gcnew System::Windows::Forms::ColumnHeader());
			this->Price = (gcnew System::Windows::Forms::ColumnHeader());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// bakedmacQuantity
			// 
			this->bakedmacQuantity->AutoSize = true;
			this->bakedmacQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bakedmacQuantity->ForeColor = System::Drawing::Color::White;
			this->bakedmacQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bakedmacQuantity.Image")));
			this->bakedmacQuantity->Location = System::Drawing::Point(465, 176);
			this->bakedmacQuantity->Name = L"bakedmacQuantity";
			this->bakedmacQuantity->Size = System::Drawing::Size(0, 25);
			this->bakedmacQuantity->TabIndex = 50;
			// 
			// lasagnaQuantity
			// 
			this->lasagnaQuantity->AutoSize = true;
			this->lasagnaQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lasagnaQuantity->ForeColor = System::Drawing::Color::White;
			this->lasagnaQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lasagnaQuantity.Image")));
			this->lasagnaQuantity->Location = System::Drawing::Point(363, 176);
			this->lasagnaQuantity->Name = L"lasagnaQuantity";
			this->lasagnaQuantity->Size = System::Drawing::Size(0, 25);
			this->lasagnaQuantity->TabIndex = 49;
			// 
			// carbonaraQuantity
			// 
			this->carbonaraQuantity->AutoSize = true;
			this->carbonaraQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->carbonaraQuantity->ForeColor = System::Drawing::Color::White;
			this->carbonaraQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"carbonaraQuantity.Image")));
			this->carbonaraQuantity->Location = System::Drawing::Point(258, 176);
			this->carbonaraQuantity->Name = L"carbonaraQuantity";
			this->carbonaraQuantity->Size = System::Drawing::Size(0, 25);
			this->carbonaraQuantity->TabIndex = 48;
			// 
			// spaghettiQuantity
			// 
			this->spaghettiQuantity->AutoSize = true;
			this->spaghettiQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->spaghettiQuantity->ForeColor = System::Drawing::Color::White;
			this->spaghettiQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"spaghettiQuantity.Image")));
			this->spaghettiQuantity->Location = System::Drawing::Point(156, 176);
			this->spaghettiQuantity->Name = L"spaghettiQuantity";
			this->spaghettiQuantity->Size = System::Drawing::Size(0, 25);
			this->spaghettiQuantity->TabIndex = 47;
			// 
			// lasagnaBtn
			// 
			this->lasagnaBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lasagnaBtn.BackgroundImage")));
			this->lasagnaBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->lasagnaBtn->FlatAppearance->BorderSize = 0;
			this->lasagnaBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lasagnaBtn->Location = System::Drawing::Point(324, 57);
			this->lasagnaBtn->Name = L"lasagnaBtn";
			this->lasagnaBtn->Size = System::Drawing::Size(97, 120);
			this->lasagnaBtn->TabIndex = 46;
			this->lasagnaBtn->UseVisualStyleBackColor = true;
			// 
			// carbonaraBtn
			// 
			this->carbonaraBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"carbonaraBtn.BackgroundImage")));
			this->carbonaraBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->carbonaraBtn->FlatAppearance->BorderSize = 0;
			this->carbonaraBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->carbonaraBtn->Location = System::Drawing::Point(221, 57);
			this->carbonaraBtn->Name = L"carbonaraBtn";
			this->carbonaraBtn->Size = System::Drawing::Size(97, 120);
			this->carbonaraBtn->TabIndex = 45;
			this->carbonaraBtn->UseVisualStyleBackColor = true;
			// 
			// spaghettiBtn
			// 
			this->spaghettiBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"spaghettiBtn.BackgroundImage")));
			this->spaghettiBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->spaghettiBtn->FlatAppearance->BorderSize = 0;
			this->spaghettiBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->spaghettiBtn->Location = System::Drawing::Point(118, 57);
			this->spaghettiBtn->Name = L"spaghettiBtn";
			this->spaghettiBtn->Size = System::Drawing::Size(97, 120);
			this->spaghettiBtn->TabIndex = 44;
			this->spaghettiBtn->UseVisualStyleBackColor = true;
			// 
			// bakedmacBtn
			// 
			this->bakedmacBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bakedmacBtn.BackgroundImage")));
			this->bakedmacBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->bakedmacBtn->FlatAppearance->BorderSize = 0;
			this->bakedmacBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bakedmacBtn->Location = System::Drawing::Point(427, 58);
			this->bakedmacBtn->Name = L"bakedmacBtn";
			this->bakedmacBtn->Size = System::Drawing::Size(97, 120);
			this->bakedmacBtn->TabIndex = 43;
			this->bakedmacBtn->UseVisualStyleBackColor = true;
			// 
			// pepsiQuantity
			// 
			this->pepsiQuantity->AutoSize = true;
			this->pepsiQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->pepsiQuantity->ForeColor = System::Drawing::Color::White;
			this->pepsiQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pepsiQuantity.Image")));
			this->pepsiQuantity->Location = System::Drawing::Point(438, 329);
			this->pepsiQuantity->Name = L"pepsiQuantity";
			this->pepsiQuantity->Size = System::Drawing::Size(0, 25);
			this->pepsiQuantity->TabIndex = 58;
			// 
			// icedteaQuantity
			// 
			this->icedteaQuantity->AutoSize = true;
			this->icedteaQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->icedteaQuantity->ForeColor = System::Drawing::Color::White;
			this->icedteaQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"icedteaQuantity.Image")));
			this->icedteaQuantity->Location = System::Drawing::Point(353, 329);
			this->icedteaQuantity->Name = L"icedteaQuantity";
			this->icedteaQuantity->Size = System::Drawing::Size(0, 25);
			this->icedteaQuantity->TabIndex = 57;
			// 
			// spriteQuantity
			// 
			this->spriteQuantity->AutoSize = true;
			this->spriteQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->spriteQuantity->ForeColor = System::Drawing::Color::White;
			this->spriteQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"spriteQuantity.Image")));
			this->spriteQuantity->Location = System::Drawing::Point(268, 329);
			this->spriteQuantity->Name = L"spriteQuantity";
			this->spriteQuantity->Size = System::Drawing::Size(0, 25);
			this->spriteQuantity->TabIndex = 56;
			// 
			// cokeQuantity
			// 
			this->cokeQuantity->AutoSize = true;
			this->cokeQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cokeQuantity->ForeColor = System::Drawing::Color::White;
			this->cokeQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cokeQuantity.Image")));
			this->cokeQuantity->Location = System::Drawing::Point(180, 329);
			this->cokeQuantity->Name = L"cokeQuantity";
			this->cokeQuantity->Size = System::Drawing::Size(0, 25);
			this->cokeQuantity->TabIndex = 55;
			// 
			// pepsiBtn
			// 
			this->pepsiBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pepsiBtn.BackgroundImage")));
			this->pepsiBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pepsiBtn->FlatAppearance->BorderSize = 0;
			this->pepsiBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pepsiBtn->Location = System::Drawing::Point(410, 228);
			this->pepsiBtn->Name = L"pepsiBtn";
			this->pepsiBtn->Size = System::Drawing::Size(80, 102);
			this->pepsiBtn->TabIndex = 54;
			this->pepsiBtn->UseVisualStyleBackColor = true;
			// 
			// icedteaBtn
			// 
			this->icedteaBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"icedteaBtn.BackgroundImage")));
			this->icedteaBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->icedteaBtn->FlatAppearance->BorderSize = 0;
			this->icedteaBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->icedteaBtn->Location = System::Drawing::Point(324, 228);
			this->icedteaBtn->Name = L"icedteaBtn";
			this->icedteaBtn->Size = System::Drawing::Size(80, 102);
			this->icedteaBtn->TabIndex = 53;
			this->icedteaBtn->UseVisualStyleBackColor = true;
			// 
			// spriteBtn
			// 
			this->spriteBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"spriteBtn.BackgroundImage")));
			this->spriteBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->spriteBtn->FlatAppearance->BorderSize = 0;
			this->spriteBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->spriteBtn->Location = System::Drawing::Point(238, 228);
			this->spriteBtn->Name = L"spriteBtn";
			this->spriteBtn->Size = System::Drawing::Size(80, 102);
			this->spriteBtn->TabIndex = 52;
			this->spriteBtn->UseVisualStyleBackColor = true;
			// 
			// cokeBtn
			// 
			this->cokeBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cokeBtn.BackgroundImage")));
			this->cokeBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cokeBtn->FlatAppearance->BorderSize = 0;
			this->cokeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cokeBtn->Location = System::Drawing::Point(152, 228);
			this->cokeBtn->Name = L"cokeBtn";
			this->cokeBtn->Size = System::Drawing::Size(80, 102);
			this->cokeBtn->TabIndex = 51;
			this->cokeBtn->UseVisualStyleBackColor = true;
			// 
			// orderagainBtn
			// 
			this->orderagainBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"orderagainBtn.BackgroundImage")));
			this->orderagainBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->orderagainBtn->FlatAppearance->BorderSize = 0;
			this->orderagainBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->orderagainBtn->Location = System::Drawing::Point(678, 416);
			this->orderagainBtn->Name = L"orderagainBtn";
			this->orderagainBtn->Size = System::Drawing::Size(114, 53);
			this->orderagainBtn->TabIndex = 65;
			this->orderagainBtn->UseVisualStyleBackColor = true;
			// 
			// checkoutBtn
			// 
			this->checkoutBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkoutBtn.BackgroundImage")));
			this->checkoutBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->checkoutBtn->FlatAppearance->BorderSize = 0;
			this->checkoutBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkoutBtn->Location = System::Drawing::Point(798, 416);
			this->checkoutBtn->Name = L"checkoutBtn";
			this->checkoutBtn->Size = System::Drawing::Size(114, 53);
			this->checkoutBtn->TabIndex = 63;
			this->checkoutBtn->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(607, 371);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 28);
			this->label1->TabIndex = 62;
			this->label1->Text = L"TOTAL";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(598, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(367, 59);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 61;
			this->pictureBox1->TabStop = false;
			// 
			// totalLabel
			// 
			this->totalLabel->AutoSize = true;
			this->totalLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalLabel->Location = System::Drawing::Point(668, 369);
			this->totalLabel->Name = L"totalLabel";
			this->totalLabel->Size = System::Drawing::Size(26, 30);
			this->totalLabel->TabIndex = 60;
			this->totalLabel->Text = L"0";
			// 
			// summarizedOrder
			// 
			this->summarizedOrder->BackColor = System::Drawing::SystemColors::Control;
			this->summarizedOrder->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->summarizedOrder->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->Food, this->Quantity,
					this->Price
			});
			this->summarizedOrder->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->summarizedOrder->Location = System::Drawing::Point(598, 68);
			this->summarizedOrder->Name = L"summarizedOrder";
			this->summarizedOrder->Size = System::Drawing::Size(367, 300);
			this->summarizedOrder->TabIndex = 59;
			this->summarizedOrder->TileSize = System::Drawing::Size(168, 50);
			this->summarizedOrder->UseCompatibleStateImageBehavior = false;
			this->summarizedOrder->View = System::Windows::Forms::View::Details;
			// 
			// Food
			// 
			this->Food->Text = L"Food";
			this->Food->Width = 201;
			// 
			// Quantity
			// 
			this->Quantity->Text = L"Quantity";
			this->Quantity->Width = 110;
			// 
			// Price
			// 
			this->Price->Text = L"Price";
			this->Price->Width = 66;
			// 
			// Pasta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->orderagainBtn);
			this->Controls->Add(this->checkoutBtn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->totalLabel);
			this->Controls->Add(this->summarizedOrder);
			this->Controls->Add(this->pepsiQuantity);
			this->Controls->Add(this->icedteaQuantity);
			this->Controls->Add(this->spriteQuantity);
			this->Controls->Add(this->cokeQuantity);
			this->Controls->Add(this->pepsiBtn);
			this->Controls->Add(this->icedteaBtn);
			this->Controls->Add(this->spriteBtn);
			this->Controls->Add(this->cokeBtn);
			this->Controls->Add(this->bakedmacQuantity);
			this->Controls->Add(this->lasagnaQuantity);
			this->Controls->Add(this->carbonaraQuantity);
			this->Controls->Add(this->spaghettiQuantity);
			this->Controls->Add(this->lasagnaBtn);
			this->Controls->Add(this->carbonaraBtn);
			this->Controls->Add(this->spaghettiBtn);
			this->Controls->Add(this->bakedmacBtn);
			this->Name = L"Pasta";
			this->Size = System::Drawing::Size(984, 484);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
