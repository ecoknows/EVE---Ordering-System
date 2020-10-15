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
	/// Summary for Chicken
	/// </summary>
	public ref class Chicken : public System::Windows::Forms::UserControl
	{
	public:
		Chicken(void)
		{
			InitializeComponent();
			ChickenButtonHandler();
			//
			//TODO: Add the constructor code here
			//
		}

	public:
		// FOODS
		static Product^ butteredStruct = gcnew Product("Buttered Chicken");
		static Product^ friedStruct = gcnew Product("Fried Chicken");
		static Product^ spicyStruct = gcnew Product("Spicy Chicken");
		static Product^ roastedStruct = gcnew Product("Roasted Chicken");

		// ADDS ON
		static Product^ cokeStruct = gcnew Product("Coke");
		static Product^ spriteStruct = gcnew Product("Sprite");
		static Product^ icedteaStruct = gcnew Product("Iced Tea");
		static Product^ pepsiStruct = gcnew Product("Pepsi");
		static Product^ riceStruct = gcnew Product("Rice");

		static void TotalPriceHandler();

	public:
		static int butteredPrice = 150;
		static int friedPrice = 90;
		static int spicyPrice = 100;
		static int roastedPrice = 150;

		static int cokePrice = 20;
		static int spritePrice = 20;
		static int icedteaPrice = 20;
		static int pepsiPrice = 20;
		static int ricePrice = 10;
		
		static int totalPrice = 0;

	public:
		static ListViewItem^ butteredItem = gcnew ListViewItem(butteredStruct->name);
		static ListViewItem^ friedItem = gcnew ListViewItem(friedStruct->name);
		static ListViewItem^ spicyItem = gcnew ListViewItem(spicyStruct->name);
		static ListViewItem^ roastedItem = gcnew ListViewItem(roastedStruct->name);


		static ListViewItem^ cokeItem = gcnew ListViewItem(cokeStruct->name);
		static ListViewItem^ spriteItem = gcnew ListViewItem(spriteStruct->name);
		static ListViewItem^ icedteaItem = gcnew ListViewItem(icedteaStruct->name);
		static ListViewItem^ pepsiItem = gcnew ListViewItem(pepsiStruct->name);
		static ListViewItem^ riceItem = gcnew ListViewItem(riceStruct->name);


	public:
		void ChickenButtonHandler();
		void MouseDownEventHandler(MouseEventArgs^ e, Label^ label, const int origLeftPos, interior_ptr<int> cnt);

		void ButteredButtonClick(Object^ sender, MouseEventArgs^ e);
		void FriedButtonClick(Object^ sender, MouseEventArgs^ e);
		void SpicyButtonClick(Object^ sender, MouseEventArgs^ e);
		void RoastedButtonClick(Object^ sender, MouseEventArgs^ e);


		void CokeButtonClick(Object^ sender, MouseEventArgs^ e);
		void SpriteButtonClick(Object^ sender, MouseEventArgs^ e);
		void IcedTeaButtonClick(Object^ sender, MouseEventArgs^ e);
		void PepsiButtonClick(Object^ sender, MouseEventArgs^ e);
		void RiceButtonClick(Object^ sender, MouseEventArgs^ e);

		static void IsOrderingAndCheckout(bool status);

	public:
		static int origButteredChickenLeftPosition;
		static int origFriedChickenLeftPosition;
		static int origSpicyChickenLeftPosition;
		static int origRoastedChickenLeftPosition;

		static int origCokeLeftPosition;
		static int origSpriteLeftPosition;
		static int origIcedTeaLeftPosition;
		static int origPepsiLeftPosition;
		static int origRiceLeftPosition;

	public:
		void LabelAdjuster(Label^ label, const int constLeftPos, const int counter);
		void ButtonFunction(MouseEventArgs^ e, Product^ product, ListViewItem^ listViewItem, Label^ label, interior_ptr<int> price, const int origPos);

	public: // NAV BUTTONS
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
		~Chicken()
		{
			if (components)
			{
				delete components;
			}
		}

	public: static System::Windows::Forms::Label^  butteredQuantity;
	public: static System::Windows::Forms::Label^  friedQuantity;
	public: static System::Windows::Forms::Label^  spicyQuantity;
	public: static System::Windows::Forms::Label^  roastedQuantity;
	public: static System::Windows::Forms::Label^  cokeQuantity;
	public: static System::Windows::Forms::Label^  spriteQuantity;
	public: static System::Windows::Forms::Label^  icedteaQuantity;
	public: static System::Windows::Forms::Label^  pepsiQuantity;
	public: static System::Windows::Forms::Label^  riceQuantity;
	public: static System::Windows::Forms::Label^  label1;
	public: static System::Windows::Forms::Label^  totalLabel;

	public: static System::Windows::Forms::Button^  butteredBtn;
	public: static System::Windows::Forms::Button^  roastedBtn;
	public: static System::Windows::Forms::Button^  spicyBtn;
	public: static System::Windows::Forms::Button^  friedBtn;
	public: static System::Windows::Forms::Button^  pepsiBtn;
	public: static System::Windows::Forms::Button^  icedteaBtn;
	public: static System::Windows::Forms::Button^  spriteBtn;
	public: static System::Windows::Forms::Button^  cokeBtn;
	public: static System::Windows::Forms::Button^  riceBtn;
	public: static System::Windows::Forms::Button^  checkoutBtn;
	public: static System::Windows::Forms::Button^  orderagainBtn;

	public: static System::Windows::Forms::ListView^  summarizedOrder;
	public: System::Windows::Forms::ColumnHeader^  Food;
	public: System::Windows::Forms::ColumnHeader^  Quantity;
	public: System::Windows::Forms::ColumnHeader^  Price;


	public: System::Windows::Forms::PictureBox^  pictureBox1;
	public:



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Chicken::typeid));
			this->spicyBtn = (gcnew System::Windows::Forms::Button());
			this->friedBtn = (gcnew System::Windows::Forms::Button());
			this->butteredBtn = (gcnew System::Windows::Forms::Button());
			this->roastedBtn = (gcnew System::Windows::Forms::Button());
			this->pepsiBtn = (gcnew System::Windows::Forms::Button());
			this->icedteaBtn = (gcnew System::Windows::Forms::Button());
			this->spriteBtn = (gcnew System::Windows::Forms::Button());
			this->cokeBtn = (gcnew System::Windows::Forms::Button());
			this->riceBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->totalLabel = (gcnew System::Windows::Forms::Label());
			this->summarizedOrder = (gcnew System::Windows::Forms::ListView());
			this->Food = (gcnew System::Windows::Forms::ColumnHeader());
			this->Quantity = (gcnew System::Windows::Forms::ColumnHeader());
			this->Price = (gcnew System::Windows::Forms::ColumnHeader());
			this->orderagainBtn = (gcnew System::Windows::Forms::Button());
			this->checkoutBtn = (gcnew System::Windows::Forms::Button());
			this->butteredQuantity = (gcnew System::Windows::Forms::Label());
			this->friedQuantity = (gcnew System::Windows::Forms::Label());
			this->spicyQuantity = (gcnew System::Windows::Forms::Label());
			this->roastedQuantity = (gcnew System::Windows::Forms::Label());
			this->cokeQuantity = (gcnew System::Windows::Forms::Label());
			this->spriteQuantity = (gcnew System::Windows::Forms::Label());
			this->icedteaQuantity = (gcnew System::Windows::Forms::Label());
			this->pepsiQuantity = (gcnew System::Windows::Forms::Label());
			this->riceQuantity = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// spicyBtn
			// 
			this->spicyBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"spicyBtn.BackgroundImage")));
			this->spicyBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->spicyBtn->FlatAppearance->BorderSize = 0;
			this->spicyBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->spicyBtn->Location = System::Drawing::Point(309, 56);
			this->spicyBtn->Name = L"spicyBtn";
			this->spicyBtn->Size = System::Drawing::Size(97, 120);
			this->spicyBtn->TabIndex = 13;
			this->spicyBtn->UseVisualStyleBackColor = true;
			// 
			// friedBtn
			// 
			this->friedBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"friedBtn.BackgroundImage")));
			this->friedBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->friedBtn->FlatAppearance->BorderSize = 0;
			this->friedBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->friedBtn->Location = System::Drawing::Point(206, 56);
			this->friedBtn->Name = L"friedBtn";
			this->friedBtn->Size = System::Drawing::Size(97, 120);
			this->friedBtn->TabIndex = 12;
			this->friedBtn->UseVisualStyleBackColor = true;
			// 
			// butteredBtn
			// 
			this->butteredBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butteredBtn.BackgroundImage")));
			this->butteredBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butteredBtn->FlatAppearance->BorderSize = 0;
			this->butteredBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butteredBtn->Location = System::Drawing::Point(103, 56);
			this->butteredBtn->Name = L"butteredBtn";
			this->butteredBtn->Size = System::Drawing::Size(97, 120);
			this->butteredBtn->TabIndex = 11;
			this->butteredBtn->UseVisualStyleBackColor = true;
			// 
			// roastedBtn
			// 
			this->roastedBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roastedBtn.BackgroundImage")));
			this->roastedBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->roastedBtn->FlatAppearance->BorderSize = 0;
			this->roastedBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->roastedBtn->Location = System::Drawing::Point(412, 57);
			this->roastedBtn->Name = L"roastedBtn";
			this->roastedBtn->Size = System::Drawing::Size(97, 120);
			this->roastedBtn->TabIndex = 10;
			this->roastedBtn->UseVisualStyleBackColor = true;
			// 
			// pepsiBtn
			// 
			this->pepsiBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pepsiBtn.BackgroundImage")));
			this->pepsiBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pepsiBtn->FlatAppearance->BorderSize = 0;
			this->pepsiBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pepsiBtn->Location = System::Drawing::Point(350, 235);
			this->pepsiBtn->Name = L"pepsiBtn";
			this->pepsiBtn->Size = System::Drawing::Size(80, 102);
			this->pepsiBtn->TabIndex = 19;
			this->pepsiBtn->UseVisualStyleBackColor = true;
			// 
			// icedteaBtn
			// 
			this->icedteaBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"icedteaBtn.BackgroundImage")));
			this->icedteaBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->icedteaBtn->FlatAppearance->BorderSize = 0;
			this->icedteaBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->icedteaBtn->Location = System::Drawing::Point(264, 235);
			this->icedteaBtn->Name = L"icedteaBtn";
			this->icedteaBtn->Size = System::Drawing::Size(80, 102);
			this->icedteaBtn->TabIndex = 18;
			this->icedteaBtn->UseVisualStyleBackColor = true;
			// 
			// spriteBtn
			// 
			this->spriteBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"spriteBtn.BackgroundImage")));
			this->spriteBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->spriteBtn->FlatAppearance->BorderSize = 0;
			this->spriteBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->spriteBtn->Location = System::Drawing::Point(178, 235);
			this->spriteBtn->Name = L"spriteBtn";
			this->spriteBtn->Size = System::Drawing::Size(80, 102);
			this->spriteBtn->TabIndex = 17;
			this->spriteBtn->UseVisualStyleBackColor = true;
			// 
			// cokeBtn
			// 
			this->cokeBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cokeBtn.BackgroundImage")));
			this->cokeBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cokeBtn->FlatAppearance->BorderSize = 0;
			this->cokeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cokeBtn->Location = System::Drawing::Point(92, 235);
			this->cokeBtn->Name = L"cokeBtn";
			this->cokeBtn->Size = System::Drawing::Size(80, 102);
			this->cokeBtn->TabIndex = 16;
			this->cokeBtn->UseVisualStyleBackColor = true;
			// 
			// riceBtn
			// 
			this->riceBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"riceBtn.BackgroundImage")));
			this->riceBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->riceBtn->FlatAppearance->BorderSize = 0;
			this->riceBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->riceBtn->Location = System::Drawing::Point(436, 235);
			this->riceBtn->Name = L"riceBtn";
			this->riceBtn->Size = System::Drawing::Size(80, 102);
			this->riceBtn->TabIndex = 20;
			this->riceBtn->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(608, 371);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 28);
			this->label1->TabIndex = 35;
			this->label1->Text = L"TOTAL";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(599, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(367, 59);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			// 
			// totalLabel
			// 
			this->totalLabel->AutoSize = true;
			this->totalLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalLabel->Location = System::Drawing::Point(669, 369);
			this->totalLabel->Name = L"totalLabel";
			this->totalLabel->Size = System::Drawing::Size(26, 30);
			this->totalLabel->TabIndex = 33;
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
			this->summarizedOrder->Location = System::Drawing::Point(599, 68);
			this->summarizedOrder->Name = L"summarizedOrder";
			this->summarizedOrder->Size = System::Drawing::Size(367, 300);
			this->summarizedOrder->TabIndex = 32;
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
			// orderagainBtn
			// 
			this->orderagainBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"orderagainBtn.BackgroundImage")));
			this->orderagainBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->orderagainBtn->FlatAppearance->BorderSize = 0;
			this->orderagainBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->orderagainBtn->Location = System::Drawing::Point(681, 415);
			this->orderagainBtn->Name = L"orderagainBtn";
			this->orderagainBtn->Size = System::Drawing::Size(114, 53);
			this->orderagainBtn->TabIndex = 38;
			this->orderagainBtn->UseVisualStyleBackColor = true;
			// 
			// checkoutBtn
			// 
			this->checkoutBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkoutBtn.BackgroundImage")));
			this->checkoutBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->checkoutBtn->FlatAppearance->BorderSize = 0;
			this->checkoutBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkoutBtn->Location = System::Drawing::Point(801, 415);
			this->checkoutBtn->Name = L"checkoutBtn";
			this->checkoutBtn->Size = System::Drawing::Size(114, 53);
			this->checkoutBtn->TabIndex = 36;
			this->checkoutBtn->UseVisualStyleBackColor = true;
			// 
			// butteredQuantity
			// 
			this->butteredQuantity->AutoSize = true;
			this->butteredQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->butteredQuantity->ForeColor = System::Drawing::Color::White;
			this->butteredQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butteredQuantity.Image")));
			this->butteredQuantity->Location = System::Drawing::Point(141, 175);
			this->butteredQuantity->Name = L"butteredQuantity";
			this->butteredQuantity->Size = System::Drawing::Size(0, 25);
			this->butteredQuantity->TabIndex = 39;
			// 
			// friedQuantity
			// 
			this->friedQuantity->AutoSize = true;
			this->friedQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->friedQuantity->ForeColor = System::Drawing::Color::White;
			this->friedQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"friedQuantity.Image")));
			this->friedQuantity->Location = System::Drawing::Point(243, 175);
			this->friedQuantity->Name = L"friedQuantity";
			this->friedQuantity->Size = System::Drawing::Size(0, 25);
			this->friedQuantity->TabIndex = 40;
			// 
			// spicyQuantity
			// 
			this->spicyQuantity->AutoSize = true;
			this->spicyQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->spicyQuantity->ForeColor = System::Drawing::Color::White;
			this->spicyQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"spicyQuantity.Image")));
			this->spicyQuantity->Location = System::Drawing::Point(348, 175);
			this->spicyQuantity->Name = L"spicyQuantity";
			this->spicyQuantity->Size = System::Drawing::Size(0, 25);
			this->spicyQuantity->TabIndex = 41;
			// 
			// roastedQuantity
			// 
			this->roastedQuantity->AutoSize = true;
			this->roastedQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->roastedQuantity->ForeColor = System::Drawing::Color::White;
			this->roastedQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roastedQuantity.Image")));
			this->roastedQuantity->Location = System::Drawing::Point(450, 175);
			this->roastedQuantity->Name = L"roastedQuantity";
			this->roastedQuantity->Size = System::Drawing::Size(0, 25);
			this->roastedQuantity->TabIndex = 42;
			// 
			// cokeQuantity
			// 
			this->cokeQuantity->AutoSize = true;
			this->cokeQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cokeQuantity->ForeColor = System::Drawing::Color::White;
			this->cokeQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cokeQuantity.Image")));
			this->cokeQuantity->Location = System::Drawing::Point(120, 336);
			this->cokeQuantity->Name = L"cokeQuantity";
			this->cokeQuantity->Size = System::Drawing::Size(0, 25);
			this->cokeQuantity->TabIndex = 43;
			// 
			// spriteQuantity
			// 
			this->spriteQuantity->AutoSize = true;
			this->spriteQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->spriteQuantity->ForeColor = System::Drawing::Color::White;
			this->spriteQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"spriteQuantity.Image")));
			this->spriteQuantity->Location = System::Drawing::Point(208, 336);
			this->spriteQuantity->Name = L"spriteQuantity";
			this->spriteQuantity->Size = System::Drawing::Size(0, 25);
			this->spriteQuantity->TabIndex = 44;
			// 
			// icedteaQuantity
			// 
			this->icedteaQuantity->AutoSize = true;
			this->icedteaQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->icedteaQuantity->ForeColor = System::Drawing::Color::White;
			this->icedteaQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"icedteaQuantity.Image")));
			this->icedteaQuantity->Location = System::Drawing::Point(293, 336);
			this->icedteaQuantity->Name = L"icedteaQuantity";
			this->icedteaQuantity->Size = System::Drawing::Size(0, 25);
			this->icedteaQuantity->TabIndex = 45;
			// 
			// pepsiQuantity
			// 
			this->pepsiQuantity->AutoSize = true;
			this->pepsiQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->pepsiQuantity->ForeColor = System::Drawing::Color::White;
			this->pepsiQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pepsiQuantity.Image")));
			this->pepsiQuantity->Location = System::Drawing::Point(378, 336);
			this->pepsiQuantity->Name = L"pepsiQuantity";
			this->pepsiQuantity->Size = System::Drawing::Size(0, 25);
			this->pepsiQuantity->TabIndex = 46;
			// 
			// riceQuantity
			// 
			this->riceQuantity->AutoSize = true;
			this->riceQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->riceQuantity->ForeColor = System::Drawing::Color::White;
			this->riceQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"riceQuantity.Image")));
			this->riceQuantity->Location = System::Drawing::Point(465, 336);
			this->riceQuantity->Name = L"riceQuantity";
			this->riceQuantity->Size = System::Drawing::Size(0, 25);
			this->riceQuantity->TabIndex = 47;
			// 
			// Chicken
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->riceQuantity);
			this->Controls->Add(this->pepsiQuantity);
			this->Controls->Add(this->icedteaQuantity);
			this->Controls->Add(this->spriteQuantity);
			this->Controls->Add(this->cokeQuantity);
			this->Controls->Add(this->roastedQuantity);
			this->Controls->Add(this->spicyQuantity);
			this->Controls->Add(this->friedQuantity);
			this->Controls->Add(this->butteredQuantity);
			this->Controls->Add(this->orderagainBtn);
			this->Controls->Add(this->checkoutBtn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->totalLabel);
			this->Controls->Add(this->summarizedOrder);
			this->Controls->Add(this->riceBtn);
			this->Controls->Add(this->pepsiBtn);
			this->Controls->Add(this->icedteaBtn);
			this->Controls->Add(this->spriteBtn);
			this->Controls->Add(this->cokeBtn);
			this->Controls->Add(this->spicyBtn);
			this->Controls->Add(this->friedBtn);
			this->Controls->Add(this->butteredBtn);
			this->Controls->Add(this->roastedBtn);
			this->Name = L"Chicken";
			this->Size = System::Drawing::Size(984, 484);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
