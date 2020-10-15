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
	/// Summary for Burger
	/// </summary>
	public ref class Burger : public System::Windows::Forms::UserControl
	{
	public:
		Burger(void)
		{
			InitializeComponent();
			BurgerButtonHandler();
			//
			//TODO: Add the constructor code here
			//
		}


	public:// DATA TYPES
		// QUANTITY
		static Product^ hotdogStruct = gcnew Product("Hot Dog");
		static Product^ cheeseStruct = gcnew Product("Cheese Burger");
		static Product^ beefStruct = gcnew Product("Beef Burger");
		static Product^ chickenStruct = gcnew Product("Chicken Burger");
		static Product^ footlongStruct = gcnew Product("Foot Long");
			 // ADD ONS
		static Product^ cokeStruct = gcnew Product("Coke");
		static Product^ spriteStruct = gcnew Product("Sprite");
		static Product^ icedteaStruct = gcnew Product("Iced Tea");
		static Product^ pepsiStruct = gcnew Product("Pepsi");

		static void TotalPriceHandler();
		// PRICE
		static int cheeseBurgerPrice = 60;
		static int beefBurgerPrice = 100;
		static int hotDogPrice = 50;
		static int chickenBurgerPrice = 80;
		static int footlongPrice = 60;
		
		// Add ONS
		static int cokePrice = 20;
		static int spritePrice = 20;
		static int icedteaPrice = 20;
		static int pepsiPrice = 20;

		static int totalPrice = 0;
		static int totalDataPrice = 0;

	public: // LIST VIEW HANDLER
		static ListViewItem^ hotdogItem = gcnew ListViewItem(hotdogStruct->name);
		static ListViewItem^ cheeseItem = gcnew ListViewItem(cheeseStruct->name);
		static ListViewItem^ beefItem = gcnew ListViewItem(beefStruct->name);
		static ListViewItem^ chickenItem = gcnew ListViewItem(chickenStruct->name);
		static ListViewItem^ footlongItem = gcnew ListViewItem(footlongStruct->name);

		static ListViewItem^ cokeItem = gcnew ListViewItem(cokeStruct->name);
		static ListViewItem^ spriteItem = gcnew ListViewItem(spriteStruct->name);
		static ListViewItem^ icedteaItem = gcnew ListViewItem(icedteaStruct->name);
		static ListViewItem^ pepsiItem = gcnew ListViewItem(pepsiStruct->name);
	

	public:
		static int origHotDogLeftPosition;
		static int origCheeseBurgerLeftPosition;
		static int origBeefBurgerLeftPosition;
		static int origChickenBurgerLeftPosition;
		static int origFootLongLeftPosition;
		static int origCokeLeftPosition;
		static int origSpriteLeftPosition;
		static int origIcedTeaLeftPosition;
		static int origPepsiLeftPosition;

		

	public:
		void LabelAdjuster(Label^ label, const int constLeftPos ,const int counter);
		void ButtonFunction(MouseEventArgs^ e , Product^ product ,ListViewItem^ listViewItem ,Label^ label ,interior_ptr<int> price ,const int origPos);

	public:
		void BurgerButtonHandler();		
		void MouseDownEventHandler(MouseEventArgs^ e, Label^ label,const int origLeftPos ,interior_ptr<int> cnt);

		// Button Handler ( BURGER TYPES )
		void HotdogButtonClick(Object^ sender, MouseEventArgs^ e);
		void CheeseBurgerButtonClick(Object^ sender, MouseEventArgs^ e);
		void BeefBurgerButtonClick(Object^ sender, MouseEventArgs^ e);
		void ChickenBurgerButtonClick(Object^ sender, MouseEventArgs^ e);
		void FootLongButtonClick(Object^ sender, MouseEventArgs^ e);


		void CokeButtonClick(Object^ sender, MouseEventArgs^ e);
		void SpriteButtonClick(Object^ sender, MouseEventArgs^ e);
		void IcedTeaButtonClick(Object^ sender, MouseEventArgs^ e);
		void PepsiButtonClick(Object^ sender, MouseEventArgs^ e);

		static void IsCheckOut(bool status);


	public:// Button Handler ( Nav Buttons )
		void OrderAgainButtonClick(Object^ sender, EventArgs^ e);
		void CheckOutButtonClick(Object^ sender, EventArgs^ e);
		void LabelGiver();
		void DataInsertion(Product^ product);
		void ButtonClickDataInseration(Product^ product, int price);
		bool Once = false;




	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Burger()
		{
			if (components)
			{
				delete components;
			}
		}
public: static System::Windows::Forms::ListView^  summarizedOrder;
protected:
public: System::Windows::Forms::ColumnHeader^  Food;
public: System::Windows::Forms::ColumnHeader^  Quantity;
public: System::Windows::Forms::ColumnHeader^  Price;
public: static System::Windows::Forms::Label^  totalLabel;
public: System::Windows::Forms::PictureBox^  pictureBox1;
public: static System::Windows::Forms::Label^  label1;
private: static System::Windows::Forms::Button^  checkoutBtn;
public:
private: static System::Windows::Forms::Button^  orderagainBtn;
public: static System::Windows::Forms::Button^  hotdogBtn;
private:
public: static System::Windows::Forms::Button^  footlongBtn;
public: static System::Windows::Forms::Button^  cheeseburgerBtn;
public: static System::Windows::Forms::Button^  beefburgerBtn;
public: static System::Windows::Forms::Button^  chickenburgerBtn;
public: static System::Windows::Forms::Button^  cokeBtn;
public: static System::Windows::Forms::Button^  spriteBtn;
public: static System::Windows::Forms::Button^  icedteaBtn;
public: static System::Windows::Forms::Button^  pepsiBtn;
public: static System::Windows::Forms::Label^  cheeseQuantity;
public: static System::Windows::Forms::Label^  pepsiQuantity;
public: static System::Windows::Forms::Label^  icedteaQuantity;
public: static System::Windows::Forms::Label^  spriteQuantity;
public: static System::Windows::Forms::Label^  cokeQuantity;
public: static System::Windows::Forms::Label^  footlongQuantity;
public: static System::Windows::Forms::Label^  hotdogQuantity;
public: static System::Windows::Forms::Label^  chickenQuantity;
public: static System::Windows::Forms::Label^  beefQuantity;










protected:



private:


















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Burger::typeid));
			this->checkoutBtn = (gcnew System::Windows::Forms::Button());
			this->orderagainBtn = (gcnew System::Windows::Forms::Button());
			this->hotdogBtn = (gcnew System::Windows::Forms::Button());
			this->footlongBtn = (gcnew System::Windows::Forms::Button());
			this->cheeseburgerBtn = (gcnew System::Windows::Forms::Button());
			this->beefburgerBtn = (gcnew System::Windows::Forms::Button());
			this->chickenburgerBtn = (gcnew System::Windows::Forms::Button());
			this->cokeBtn = (gcnew System::Windows::Forms::Button());
			this->spriteBtn = (gcnew System::Windows::Forms::Button());
			this->icedteaBtn = (gcnew System::Windows::Forms::Button());
			this->pepsiBtn = (gcnew System::Windows::Forms::Button());
			this->cheeseQuantity = (gcnew System::Windows::Forms::Label());
			this->pepsiQuantity = (gcnew System::Windows::Forms::Label());
			this->icedteaQuantity = (gcnew System::Windows::Forms::Label());
			this->spriteQuantity = (gcnew System::Windows::Forms::Label());
			this->cokeQuantity = (gcnew System::Windows::Forms::Label());
			this->footlongQuantity = (gcnew System::Windows::Forms::Label());
			this->hotdogQuantity = (gcnew System::Windows::Forms::Label());
			this->chickenQuantity = (gcnew System::Windows::Forms::Label());
			this->beefQuantity = (gcnew System::Windows::Forms::Label());
			this->summarizedOrder = (gcnew System::Windows::Forms::ListView());
			this->Food = (gcnew System::Windows::Forms::ColumnHeader());
			this->Quantity = (gcnew System::Windows::Forms::ColumnHeader());
			this->Price = (gcnew System::Windows::Forms::ColumnHeader());
			this->totalLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// checkoutBtn
			// 
			this->checkoutBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkoutBtn.BackgroundImage")));
			this->checkoutBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->checkoutBtn->FlatAppearance->BorderSize = 0;
			this->checkoutBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkoutBtn->Location = System::Drawing::Point(792, 414);
			this->checkoutBtn->Name = L"checkoutBtn";
			this->checkoutBtn->Size = System::Drawing::Size(114, 53);
			this->checkoutBtn->TabIndex = 1;
			this->checkoutBtn->UseVisualStyleBackColor = true;
			// 
			// orderagainBtn
			// 
			this->orderagainBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"orderagainBtn.BackgroundImage")));
			this->orderagainBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->orderagainBtn->FlatAppearance->BorderSize = 0;
			this->orderagainBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->orderagainBtn->Location = System::Drawing::Point(672, 414);
			this->orderagainBtn->Name = L"orderagainBtn";
			this->orderagainBtn->Size = System::Drawing::Size(114, 53);
			this->orderagainBtn->TabIndex = 3;
			this->orderagainBtn->UseVisualStyleBackColor = true;
			// 
			// hotdogBtn
			// 
			this->hotdogBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hotdogBtn.BackgroundImage")));
			this->hotdogBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->hotdogBtn->FlatAppearance->BorderSize = 0;
			this->hotdogBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->hotdogBtn->Location = System::Drawing::Point(340, 60);
			this->hotdogBtn->Name = L"hotdogBtn";
			this->hotdogBtn->Size = System::Drawing::Size(97, 120);
			this->hotdogBtn->TabIndex = 5;
			this->hotdogBtn->UseVisualStyleBackColor = true;
			// 
			// footlongBtn
			// 
			this->footlongBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"footlongBtn.BackgroundImage")));
			this->footlongBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->footlongBtn->FlatAppearance->BorderSize = 0;
			this->footlongBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->footlongBtn->Location = System::Drawing::Point(443, 60);
			this->footlongBtn->Name = L"footlongBtn";
			this->footlongBtn->Size = System::Drawing::Size(97, 120);
			this->footlongBtn->TabIndex = 6;
			this->footlongBtn->UseVisualStyleBackColor = true;
			// 
			// cheeseburgerBtn
			// 
			this->cheeseburgerBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cheeseburgerBtn.BackgroundImage")));
			this->cheeseburgerBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cheeseburgerBtn->FlatAppearance->BorderSize = 0;
			this->cheeseburgerBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cheeseburgerBtn->Location = System::Drawing::Point(31, 59);
			this->cheeseburgerBtn->Name = L"cheeseburgerBtn";
			this->cheeseburgerBtn->Size = System::Drawing::Size(97, 120);
			this->cheeseburgerBtn->TabIndex = 7;
			this->cheeseburgerBtn->UseVisualStyleBackColor = true;
			// 
			// beefburgerBtn
			// 
			this->beefburgerBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"beefburgerBtn.BackgroundImage")));
			this->beefburgerBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->beefburgerBtn->FlatAppearance->BorderSize = 0;
			this->beefburgerBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->beefburgerBtn->Location = System::Drawing::Point(134, 59);
			this->beefburgerBtn->Name = L"beefburgerBtn";
			this->beefburgerBtn->Size = System::Drawing::Size(97, 120);
			this->beefburgerBtn->TabIndex = 8;
			this->beefburgerBtn->UseVisualStyleBackColor = true;
			// 
			// chickenburgerBtn
			// 
			this->chickenburgerBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chickenburgerBtn.BackgroundImage")));
			this->chickenburgerBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->chickenburgerBtn->FlatAppearance->BorderSize = 0;
			this->chickenburgerBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->chickenburgerBtn->Location = System::Drawing::Point(237, 59);
			this->chickenburgerBtn->Name = L"chickenburgerBtn";
			this->chickenburgerBtn->Size = System::Drawing::Size(97, 120);
			this->chickenburgerBtn->TabIndex = 9;
			this->chickenburgerBtn->UseVisualStyleBackColor = true;
			// 
			// cokeBtn
			// 
			this->cokeBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cokeBtn.BackgroundImage")));
			this->cokeBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cokeBtn->FlatAppearance->BorderSize = 0;
			this->cokeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cokeBtn->Location = System::Drawing::Point(114, 233);
			this->cokeBtn->Name = L"cokeBtn";
			this->cokeBtn->Size = System::Drawing::Size(80, 102);
			this->cokeBtn->TabIndex = 11;
			this->cokeBtn->UseVisualStyleBackColor = true;
			// 
			// spriteBtn
			// 
			this->spriteBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"spriteBtn.BackgroundImage")));
			this->spriteBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->spriteBtn->FlatAppearance->BorderSize = 0;
			this->spriteBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->spriteBtn->Location = System::Drawing::Point(200, 233);
			this->spriteBtn->Name = L"spriteBtn";
			this->spriteBtn->Size = System::Drawing::Size(80, 102);
			this->spriteBtn->TabIndex = 13;
			this->spriteBtn->UseVisualStyleBackColor = true;
			// 
			// icedteaBtn
			// 
			this->icedteaBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"icedteaBtn.BackgroundImage")));
			this->icedteaBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->icedteaBtn->FlatAppearance->BorderSize = 0;
			this->icedteaBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->icedteaBtn->Location = System::Drawing::Point(286, 233);
			this->icedteaBtn->Name = L"icedteaBtn";
			this->icedteaBtn->Size = System::Drawing::Size(80, 102);
			this->icedteaBtn->TabIndex = 14;
			this->icedteaBtn->UseVisualStyleBackColor = true;
			// 
			// pepsiBtn
			// 
			this->pepsiBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pepsiBtn.BackgroundImage")));
			this->pepsiBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pepsiBtn->FlatAppearance->BorderSize = 0;
			this->pepsiBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pepsiBtn->Location = System::Drawing::Point(372, 233);
			this->pepsiBtn->Name = L"pepsiBtn";
			this->pepsiBtn->Size = System::Drawing::Size(80, 102);
			this->pepsiBtn->TabIndex = 15;
			this->pepsiBtn->UseVisualStyleBackColor = true;
			// 
			// cheeseQuantity
			// 
			this->cheeseQuantity->AutoSize = true;
			this->cheeseQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cheeseQuantity->ForeColor = System::Drawing::Color::White;
			this->cheeseQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cheeseQuantity.Image")));
			this->cheeseQuantity->Location = System::Drawing::Point(68, 176);
			this->cheeseQuantity->Name = L"cheeseQuantity";
			this->cheeseQuantity->Size = System::Drawing::Size(0, 25);
			this->cheeseQuantity->TabIndex = 22;
			// 
			// pepsiQuantity
			// 
			this->pepsiQuantity->AutoSize = true;
			this->pepsiQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->pepsiQuantity->ForeColor = System::Drawing::Color::White;
			this->pepsiQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pepsiQuantity.Image")));
			this->pepsiQuantity->Location = System::Drawing::Point(401, 334);
			this->pepsiQuantity->Name = L"pepsiQuantity";
			this->pepsiQuantity->Size = System::Drawing::Size(0, 25);
			this->pepsiQuantity->TabIndex = 24;
			// 
			// icedteaQuantity
			// 
			this->icedteaQuantity->AutoSize = true;
			this->icedteaQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->icedteaQuantity->ForeColor = System::Drawing::Color::White;
			this->icedteaQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"icedteaQuantity.Image")));
			this->icedteaQuantity->Location = System::Drawing::Point(315, 334);
			this->icedteaQuantity->Name = L"icedteaQuantity";
			this->icedteaQuantity->Size = System::Drawing::Size(0, 25);
			this->icedteaQuantity->TabIndex = 25;
			// 
			// spriteQuantity
			// 
			this->spriteQuantity->AutoSize = true;
			this->spriteQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->spriteQuantity->ForeColor = System::Drawing::Color::White;
			this->spriteQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"spriteQuantity.Image")));
			this->spriteQuantity->Location = System::Drawing::Point(232, 334);
			this->spriteQuantity->Name = L"spriteQuantity";
			this->spriteQuantity->Size = System::Drawing::Size(0, 25);
			this->spriteQuantity->TabIndex = 26;
			// 
			// cokeQuantity
			// 
			this->cokeQuantity->AutoSize = true;
			this->cokeQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cokeQuantity->ForeColor = System::Drawing::Color::White;
			this->cokeQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cokeQuantity.Image")));
			this->cokeQuantity->Location = System::Drawing::Point(145, 334);
			this->cokeQuantity->Name = L"cokeQuantity";
			this->cokeQuantity->Size = System::Drawing::Size(0, 25);
			this->cokeQuantity->TabIndex = 27;
			// 
			// footlongQuantity
			// 
			this->footlongQuantity->AutoSize = true;
			this->footlongQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->footlongQuantity->ForeColor = System::Drawing::Color::White;
			this->footlongQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"footlongQuantity.Image")));
			this->footlongQuantity->Location = System::Drawing::Point(482, 176);
			this->footlongQuantity->Name = L"footlongQuantity";
			this->footlongQuantity->Size = System::Drawing::Size(0, 25);
			this->footlongQuantity->TabIndex = 23;
			// 
			// hotdogQuantity
			// 
			this->hotdogQuantity->AutoSize = true;
			this->hotdogQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->hotdogQuantity->ForeColor = System::Drawing::Color::White;
			this->hotdogQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hotdogQuantity.Image")));
			this->hotdogQuantity->Location = System::Drawing::Point(379, 176);
			this->hotdogQuantity->Name = L"hotdogQuantity";
			this->hotdogQuantity->Size = System::Drawing::Size(0, 25);
			this->hotdogQuantity->TabIndex = 19;
			// 
			// chickenQuantity
			// 
			this->chickenQuantity->AutoSize = true;
			this->chickenQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->chickenQuantity->ForeColor = System::Drawing::Color::White;
			this->chickenQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chickenQuantity.Image")));
			this->chickenQuantity->Location = System::Drawing::Point(276, 176);
			this->chickenQuantity->Name = L"chickenQuantity";
			this->chickenQuantity->Size = System::Drawing::Size(0, 25);
			this->chickenQuantity->TabIndex = 20;
			// 
			// beefQuantity
			// 
			this->beefQuantity->AutoSize = true;
			this->beefQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->beefQuantity->ForeColor = System::Drawing::Color::White;
			this->beefQuantity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"beefQuantity.Image")));
			this->beefQuantity->Location = System::Drawing::Point(173, 176);
			this->beefQuantity->Name = L"beefQuantity";
			this->beefQuantity->Size = System::Drawing::Size(0, 25);
			this->beefQuantity->TabIndex = 21;
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
			this->summarizedOrder->Location = System::Drawing::Point(597, 59);
			this->summarizedOrder->Name = L"summarizedOrder";
			this->summarizedOrder->Size = System::Drawing::Size(367, 300);
			this->summarizedOrder->TabIndex = 28;
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
			// totalLabel
			// 
			this->totalLabel->AutoSize = true;
			this->totalLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalLabel->Location = System::Drawing::Point(667, 360);
			this->totalLabel->Name = L"totalLabel";
			this->totalLabel->Size = System::Drawing::Size(26, 30);
			this->totalLabel->TabIndex = 29;
			this->totalLabel->Text = L"0";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(597, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(367, 59);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(606, 362);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 28);
			this->label1->TabIndex = 31;
			this->label1->Text = L"TOTAL";
			// 
			// Burger
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::OutlineButton;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->totalLabel);
			this->Controls->Add(this->summarizedOrder);
			this->Controls->Add(this->cokeQuantity);
			this->Controls->Add(this->spriteQuantity);
			this->Controls->Add(this->icedteaQuantity);
			this->Controls->Add(this->pepsiQuantity);
			this->Controls->Add(this->footlongQuantity);
			this->Controls->Add(this->cheeseQuantity);
			this->Controls->Add(this->beefQuantity);
			this->Controls->Add(this->chickenQuantity);
			this->Controls->Add(this->hotdogQuantity);
			this->Controls->Add(this->orderagainBtn);
			this->Controls->Add(this->checkoutBtn);
			this->Controls->Add(this->pepsiBtn);
			this->Controls->Add(this->icedteaBtn);
			this->Controls->Add(this->spriteBtn);
			this->Controls->Add(this->cokeBtn);
			this->Controls->Add(this->chickenburgerBtn);
			this->Controls->Add(this->beefburgerBtn);
			this->Controls->Add(this->cheeseburgerBtn);
			this->Controls->Add(this->footlongBtn);
			this->Controls->Add(this->hotdogBtn);
			this->Name = L"Burger";
			this->Size = System::Drawing::Size(984, 484);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
};
}
