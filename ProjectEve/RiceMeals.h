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
	/// Summary for RiceMeals
	/// </summary>
	public ref class RiceMeals : public System::Windows::Forms::UserControl
	{
	public:
		RiceMeals(void)
		{
			InitializeComponent();
			RiceButtonHandler();
			//
			//TODO: Add the constructor code here
			//
		}
	public: // PRODUCT OBJECT
	// FOODS
		static Product^ burgerSteakStruct = gcnew Product("Burger Steak Rice");
		static Product^ siomaiRiceStruct = gcnew Product("Siomai Rice");
		static Product^ alaKingStruct = gcnew Product("Ala King Rice");
		static Product^ sisigRiceStruct = gcnew Product("Sisig Rice");

		//ADDONS
		static Product^ cokeStruct = gcnew Product("Coke");
		static Product^ spriteStruct = gcnew Product("Sprite");
		static Product^ icedteaStruct = gcnew Product("Iced Tea");
		static Product^ pepsiStruct = gcnew Product("Pepsi");
		static Product^ riceStruct = gcnew Product("Rice");

		static void TotalPriceHandler();

	public: // PRICING
		// FOODS
		static int burgerSteakPrice = 50;
		static int siomaiRicePrice = 50;
		static int alaKingPrice = 50;
		static int sisigRicePrice = 50;

		// ADD ONS
		static int cokePrice = 20;
		static int spritePrice = 20;
		static int icedteaPrice = 20;
		static int pepsiPrice = 20;
		static int ricePrice = 10;

		static int totalPrice = 0;

	public:// LIST VIEW HANDLER
		// FOODS
		static ListViewItem^ burgeetSteakItem = gcnew ListViewItem(burgerSteakStruct->name);
		static ListViewItem^ siomaRiceItem = gcnew ListViewItem(siomaiRiceStruct->name);
		static ListViewItem^ alaKingItem = gcnew ListViewItem(alaKingStruct->name);
		static ListViewItem^ sisigRiceItem = gcnew ListViewItem(sisigRiceStruct->name);

		// ADD ONS
		static ListViewItem^ cokeItem = gcnew ListViewItem(cokeStruct->name);
		static ListViewItem^ spriteItem = gcnew ListViewItem(spriteStruct->name);
		static ListViewItem^ icedteaItem = gcnew ListViewItem(icedteaStruct->name);
		static ListViewItem^ pepsiItem = gcnew ListViewItem(pepsiStruct->name);
		static ListViewItem^ riceItem = gcnew ListViewItem(riceStruct->name);

	public:// BUTTON HANDLER
		void RiceButtonHandler();
		void MouseDownEventHandler(MouseEventArgs^ e, Label^ label,const int origLeftPos , interior_ptr<int> cnt);
		void ButtonFunction(MouseEventArgs^ e, Product^ product, ListViewItem^ listViewItem, Label^ label, interior_ptr<int> price, const int origPos);

		// FOODS
		void BurgerSteakButtonClick(Object^ sender, MouseEventArgs^ e);
		void SiomaiRiceButtonClick(Object^ sender, MouseEventArgs^ e);
		void AlaKingButtonClick(Object^ sender, MouseEventArgs^ e);
		void SisigRiceButtonClick(Object^ sender, MouseEventArgs^ e);

		// ADD ONS
		void CokeButtonClick(Object^ sender, MouseEventArgs^ e);
		void SpriteButtonClick(Object^ sender, MouseEventArgs^ e);
		void IcedTeaButtonClick(Object^ sender, MouseEventArgs^ e);
		void PepsiButtonClick(Object^ sender, MouseEventArgs^ e);
		void RiceButtonClick(Object^ sender, MouseEventArgs^ e);

		static void IsOrderingAndCheckout(bool status);

	public:// POSITIONING
	//FOODS
		static int origBurgerSteakLeftPosition;
		static int origSiomaiRicePosition;
		static int origAlaKingLeftPosition;
		static int origSisigRiceLeftPosition;

		//ADD ONS
		static int origCokeLeftPosition;
		static int origSpriteLeftPosition;
		static int origIcedTeaLeftPosition;
		static int origPepsiLeftPosition;
		static int origRiceLeftPosition;

	public:
		void LabelAdjuster(Label^ label,const int constLeftPos, const int counter);

	public: // NAV BUTTONS
		void OrderAgainButtonClick(Object^ sender, EventArgs^ e);
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
		~RiceMeals()
		{
			if (components)
			{
				delete components;
			}
		}
public: static System::Windows::Forms::Label^  sisigRiceQuantity;
protected:
public: static System::Windows::Forms::Label^  alaKingQuantity;
public: static System::Windows::Forms::Label^  siomaRiceQuantity;
public: static System::Windows::Forms::Label^  burgerSteakQuantity;
public: static System::Windows::Forms::Label^  pepsiQuantity;
public: static System::Windows::Forms::Label^  icedteaQuantity;
public: static System::Windows::Forms::Label^  spriteQuantity;
public: static System::Windows::Forms::Label^  cokeQuantity;
public: static System::Windows::Forms::Label^  label1;
public: static System::Windows::Forms::Label^  totalLabel;
public: static System::Windows::Forms::Label^  riceQuantity;
public: static System::Windows::Forms::Button^  alaKingBtn;
public: static System::Windows::Forms::Button^  siomaRiceBtn;
public: static System::Windows::Forms::Button^  burgerSteakBtn;
public: static System::Windows::Forms::Button^  sisigRiceBtn;
public: static System::Windows::Forms::Button^  pepsiBtn;
public: static System::Windows::Forms::Button^  icedteaBtn;
public: static System::Windows::Forms::Button^  spriteBtn;
public: static System::Windows::Forms::Button^  cokeBtn;
public: static System::Windows::Forms::Button^  orderagainBtn;
public: static System::Windows::Forms::Button^  checkoutBtn;
public: static System::Windows::Forms::Button^  riceBtn;
public: static System::Windows::Forms::ListView^  summarizedOrder;

	public: System::Windows::Forms::ColumnHeader^  Food;
	public: System::Windows::Forms::ColumnHeader^  Quantity;
	public: System::Windows::Forms::ColumnHeader^  Price;
	public: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RiceMeals::typeid));
			this->sisigRiceQuantity = (gcnew System::Windows::Forms::Label());
			this->alaKingQuantity = (gcnew System::Windows::Forms::Label());
			this->siomaRiceQuantity = (gcnew System::Windows::Forms::Label());
			this->burgerSteakQuantity = (gcnew System::Windows::Forms::Label());
			this->alaKingBtn = (gcnew System::Windows::Forms::Button());
			this->siomaRiceBtn = (gcnew System::Windows::Forms::Button());
			this->burgerSteakBtn = (gcnew System::Windows::Forms::Button());
			this->sisigRiceBtn = (gcnew System::Windows::Forms::Button());
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
			this->riceQuantity = (gcnew System::Windows::Forms::Label());
			this->riceBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// sisigRiceQuantity
			// 
			this->sisigRiceQuantity->AutoSize = true;
			this->sisigRiceQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sisigRiceQuantity->ForeColor = System::Drawing::Color::White;
			this->sisigRiceQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sisigRiceQuantity.Image")));
			this->sisigRiceQuantity->Location = System::Drawing::Point(426, 180);
			this->sisigRiceQuantity->Name = L"sisigRiceQuantity";
			this->sisigRiceQuantity->Size = System::Drawing::Size(0, 25);
			this->sisigRiceQuantity->TabIndex = 58;
			// 
			// alaKingQuantity
			// 
			this->alaKingQuantity->AutoSize = true;
			this->alaKingQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->alaKingQuantity->ForeColor = System::Drawing::Color::White;
			this->alaKingQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"alaKingQuantity.Image")));
			this->alaKingQuantity->Location = System::Drawing::Point(324, 180);
			this->alaKingQuantity->Name = L"alaKingQuantity";
			this->alaKingQuantity->Size = System::Drawing::Size(0, 25);
			this->alaKingQuantity->TabIndex = 57;
			// 
			// siomaRiceQuantity
			// 
			this->siomaRiceQuantity->AutoSize = true;
			this->siomaRiceQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->siomaRiceQuantity->ForeColor = System::Drawing::Color::White;
			this->siomaRiceQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"siomaRiceQuantity.Image")));
			this->siomaRiceQuantity->Location = System::Drawing::Point(219, 180);
			this->siomaRiceQuantity->Name = L"siomaRiceQuantity";
			this->siomaRiceQuantity->Size = System::Drawing::Size(0, 25);
			this->siomaRiceQuantity->TabIndex = 56;
			// 
			// burgerSteakQuantity
			// 
			this->burgerSteakQuantity->AutoSize = true;
			this->burgerSteakQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->burgerSteakQuantity->ForeColor = System::Drawing::Color::White;
			this->burgerSteakQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"burgerSteakQuantity.Image")));
			this->burgerSteakQuantity->Location = System::Drawing::Point(117, 180);
			this->burgerSteakQuantity->Name = L"burgerSteakQuantity";
			this->burgerSteakQuantity->Size = System::Drawing::Size(0, 25);
			this->burgerSteakQuantity->TabIndex = 55;
			// 
			// alaKingBtn
			// 
			this->alaKingBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"alaKingBtn.BackgroundImage")));
			this->alaKingBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->alaKingBtn->FlatAppearance->BorderSize = 0;
			this->alaKingBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->alaKingBtn->Location = System::Drawing::Point(285, 61);
			this->alaKingBtn->Name = L"alaKingBtn";
			this->alaKingBtn->Size = System::Drawing::Size(97, 120);
			this->alaKingBtn->TabIndex = 54;
			this->alaKingBtn->UseVisualStyleBackColor = true;
			// 
			// siomaRiceBtn
			// 
			this->siomaRiceBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"siomaRiceBtn.BackgroundImage")));
			this->siomaRiceBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->siomaRiceBtn->FlatAppearance->BorderSize = 0;
			this->siomaRiceBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->siomaRiceBtn->Location = System::Drawing::Point(182, 61);
			this->siomaRiceBtn->Name = L"siomaRiceBtn";
			this->siomaRiceBtn->Size = System::Drawing::Size(97, 120);
			this->siomaRiceBtn->TabIndex = 53;
			this->siomaRiceBtn->UseVisualStyleBackColor = true;
			// 
			// burgerSteakBtn
			// 
			this->burgerSteakBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"burgerSteakBtn.BackgroundImage")));
			this->burgerSteakBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->burgerSteakBtn->FlatAppearance->BorderSize = 0;
			this->burgerSteakBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->burgerSteakBtn->Location = System::Drawing::Point(79, 61);
			this->burgerSteakBtn->Name = L"burgerSteakBtn";
			this->burgerSteakBtn->Size = System::Drawing::Size(97, 120);
			this->burgerSteakBtn->TabIndex = 52;
			this->burgerSteakBtn->UseVisualStyleBackColor = true;
			// 
			// sisigRiceBtn
			// 
			this->sisigRiceBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sisigRiceBtn.BackgroundImage")));
			this->sisigRiceBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->sisigRiceBtn->FlatAppearance->BorderSize = 0;
			this->sisigRiceBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sisigRiceBtn->Location = System::Drawing::Point(388, 62);
			this->sisigRiceBtn->Name = L"sisigRiceBtn";
			this->sisigRiceBtn->Size = System::Drawing::Size(97, 120);
			this->sisigRiceBtn->TabIndex = 51;
			this->sisigRiceBtn->UseVisualStyleBackColor = true;
			// 
			// pepsiQuantity
			// 
			this->pepsiQuantity->AutoSize = true;
			this->pepsiQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->pepsiQuantity->ForeColor = System::Drawing::Color::White;
			this->pepsiQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pepsiQuantity.Image")));
			this->pepsiQuantity->Location = System::Drawing::Point(354, 326);
			this->pepsiQuantity->Name = L"pepsiQuantity";
			this->pepsiQuantity->Size = System::Drawing::Size(0, 25);
			this->pepsiQuantity->TabIndex = 66;
			// 
			// icedteaQuantity
			// 
			this->icedteaQuantity->AutoSize = true;
			this->icedteaQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->icedteaQuantity->ForeColor = System::Drawing::Color::White;
			this->icedteaQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"icedteaQuantity.Image")));
			this->icedteaQuantity->Location = System::Drawing::Point(269, 326);
			this->icedteaQuantity->Name = L"icedteaQuantity";
			this->icedteaQuantity->Size = System::Drawing::Size(0, 25);
			this->icedteaQuantity->TabIndex = 65;
			// 
			// spriteQuantity
			// 
			this->spriteQuantity->AutoSize = true;
			this->spriteQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->spriteQuantity->ForeColor = System::Drawing::Color::White;
			this->spriteQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"spriteQuantity.Image")));
			this->spriteQuantity->Location = System::Drawing::Point(184, 326);
			this->spriteQuantity->Name = L"spriteQuantity";
			this->spriteQuantity->Size = System::Drawing::Size(0, 25);
			this->spriteQuantity->TabIndex = 64;
			// 
			// cokeQuantity
			// 
			this->cokeQuantity->AutoSize = true;
			this->cokeQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cokeQuantity->ForeColor = System::Drawing::Color::White;
			this->cokeQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cokeQuantity.Image")));
			this->cokeQuantity->Location = System::Drawing::Point(96, 326);
			this->cokeQuantity->Name = L"cokeQuantity";
			this->cokeQuantity->Size = System::Drawing::Size(0, 25);
			this->cokeQuantity->TabIndex = 63;
			// 
			// pepsiBtn
			// 
			this->pepsiBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pepsiBtn.BackgroundImage")));
			this->pepsiBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pepsiBtn->FlatAppearance->BorderSize = 0;
			this->pepsiBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pepsiBtn->Location = System::Drawing::Point(326, 225);
			this->pepsiBtn->Name = L"pepsiBtn";
			this->pepsiBtn->Size = System::Drawing::Size(80, 102);
			this->pepsiBtn->TabIndex = 62;
			this->pepsiBtn->UseVisualStyleBackColor = true;
			// 
			// icedteaBtn
			// 
			this->icedteaBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"icedteaBtn.BackgroundImage")));
			this->icedteaBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->icedteaBtn->FlatAppearance->BorderSize = 0;
			this->icedteaBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->icedteaBtn->Location = System::Drawing::Point(240, 225);
			this->icedteaBtn->Name = L"icedteaBtn";
			this->icedteaBtn->Size = System::Drawing::Size(80, 102);
			this->icedteaBtn->TabIndex = 61;
			this->icedteaBtn->UseVisualStyleBackColor = true;
			// 
			// spriteBtn
			// 
			this->spriteBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"spriteBtn.BackgroundImage")));
			this->spriteBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->spriteBtn->FlatAppearance->BorderSize = 0;
			this->spriteBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->spriteBtn->Location = System::Drawing::Point(154, 225);
			this->spriteBtn->Name = L"spriteBtn";
			this->spriteBtn->Size = System::Drawing::Size(80, 102);
			this->spriteBtn->TabIndex = 60;
			this->spriteBtn->UseVisualStyleBackColor = true;
			// 
			// cokeBtn
			// 
			this->cokeBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cokeBtn.BackgroundImage")));
			this->cokeBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cokeBtn->FlatAppearance->BorderSize = 0;
			this->cokeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cokeBtn->Location = System::Drawing::Point(68, 225);
			this->cokeBtn->Name = L"cokeBtn";
			this->cokeBtn->Size = System::Drawing::Size(80, 102);
			this->cokeBtn->TabIndex = 59;
			this->cokeBtn->UseVisualStyleBackColor = true;
			// 
			// orderagainBtn
			// 
			this->orderagainBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"orderagainBtn.BackgroundImage")));
			this->orderagainBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->orderagainBtn->FlatAppearance->BorderSize = 0;
			this->orderagainBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->orderagainBtn->Location = System::Drawing::Point(673, 416);
			this->orderagainBtn->Name = L"orderagainBtn";
			this->orderagainBtn->Size = System::Drawing::Size(114, 53);
			this->orderagainBtn->TabIndex = 73;
			this->orderagainBtn->UseVisualStyleBackColor = true;
			// 
			// checkoutBtn
			// 
			this->checkoutBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkoutBtn.BackgroundImage")));
			this->checkoutBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->checkoutBtn->FlatAppearance->BorderSize = 0;
			this->checkoutBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkoutBtn->Location = System::Drawing::Point(793, 416);
			this->checkoutBtn->Name = L"checkoutBtn";
			this->checkoutBtn->Size = System::Drawing::Size(114, 53);
			this->checkoutBtn->TabIndex = 71;
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
			this->label1->TabIndex = 70;
			this->label1->Text = L"TOTAL";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(598, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(367, 59);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 69;
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
			this->totalLabel->TabIndex = 68;
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
			this->summarizedOrder->TabIndex = 67;
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
			// riceQuantity
			// 
			this->riceQuantity->AutoSize = true;
			this->riceQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->riceQuantity->ForeColor = System::Drawing::Color::White;
			this->riceQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"riceQuantity.Image")));
			this->riceQuantity->Location = System::Drawing::Point(441, 326);
			this->riceQuantity->Name = L"riceQuantity";
			this->riceQuantity->Size = System::Drawing::Size(0, 25);
			this->riceQuantity->TabIndex = 75;
			// 
			// riceBtn
			// 
			this->riceBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"riceBtn.BackgroundImage")));
			this->riceBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->riceBtn->FlatAppearance->BorderSize = 0;
			this->riceBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->riceBtn->Location = System::Drawing::Point(412, 225);
			this->riceBtn->Name = L"riceBtn";
			this->riceBtn->Size = System::Drawing::Size(80, 102);
			this->riceBtn->TabIndex = 74;
			this->riceBtn->UseVisualStyleBackColor = true;
			// 
			// RiceMeals
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->riceQuantity);
			this->Controls->Add(this->riceBtn);
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
			this->Controls->Add(this->sisigRiceQuantity);
			this->Controls->Add(this->alaKingQuantity);
			this->Controls->Add(this->siomaRiceQuantity);
			this->Controls->Add(this->burgerSteakQuantity);
			this->Controls->Add(this->alaKingBtn);
			this->Controls->Add(this->siomaRiceBtn);
			this->Controls->Add(this->burgerSteakBtn);
			this->Controls->Add(this->sisigRiceBtn);
			this->Name = L"RiceMeals";
			this->Size = System::Drawing::Size(984, 484);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
