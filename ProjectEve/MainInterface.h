#pragma once
#include "HomePage.h"
#include "OrderingPage.h"
#include "TrackingPage.h"
#include "HelpPage.h"
#include "AboutUsPage.h"

namespace ProjectEve {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Speech::Synthesis;
	using namespace System::Speech::Recognition;

	/// <summary>
	/// Summary for MainInterface
	/// </summary>
	public ref class MainInterface : public System::Windows::Forms::Form
	{
	public:
		MainInterface(void)
		{
			InitializeComponent();
			EveVoiceHandler();
			MainButtonsHandler();
			PagesInterface();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainInterface()
		{
			if (components)
			{
				delete components;
			}
		}

	public:
		HomePage^ homePage;

	public: System::Windows::Forms::Button^  orderingBtn;
	public: System::Windows::Forms::Button^  aboutusBtn;

	public: System::Windows::Forms::Button^  helpBtn;

	public: System::Windows::Forms::Button^  trackingBtn;

	public: System::Windows::Forms::Panel^  navPanel;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel1;
	public: System::Windows::Forms::Button^  twitterBtn;
	private:
	public: System::Windows::Forms::Button^  instagramBtn;
	public: System::Windows::Forms::Button^  facebookBtn;
	private: System::Windows::Forms::Button^  exitBtn;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;

	public:

	public:

	public:
	public:
	public:

	public:
		OrderingPage^ orderingPage;
		TrackingPage^ trackingPage;
		HelpPage^ helpPage;
		AboutUsPage^ aboutPage;
		void PagesInterface();

	public:// Main Buttons
		void MainButtonsHandler();
		void HomeButtonClick(Object^ sender, EventArgs^ e);
		void OrderingButtonClick(Object^ sender, EventArgs^ e);
		void TrackingButtonClick(Object^ sender, EventArgs^ e);
		void HelpButtonClick(Object^ sender, EventArgs^ e);
		void AboutButtonClick(Object^ sender, EventArgs^ e);
		void ExitButtonClick(Object^ sender, EventArgs^ e);
		

	public: // CROSS THREADING
		delegate void ButtonClick(Button^ btn);
		ButtonClick^ buttonClick = gcnew ButtonClick(this, &MainInterface::UIButtonWorker);
		void UIButtonWorker(Button^ btn);

		delegate void ListViewChange(ListView^ listView, ListViewItem^ item, bool isAdd);
		ListViewChange^ listViewChange = gcnew ListViewChange(this, &MainInterface::UIListViewWorker);
		void UIListViewWorker(ListView^ listView, ListViewItem^ item, bool isAdd);

		delegate void ListViewItemChange(ListView^ listView, ListViewItem^ listViewItem, Product^ product);
		ListViewItemChange^ listViewItemChange = gcnew ListViewItemChange(this, &MainInterface::UIListViewItemWorker);
		void UIListViewItemWorker(ListView^ listView, ListViewItem^ listViewItem, Product^ product);

		delegate void LabelChange(Label^ label, String^ text);
		LabelChange^ labelChange = gcnew LabelChange(this, &MainInterface::UILabelWorker);
		void UILabelWorker(Label^ label, String^ text);




	public: // EVE VOICE
		SpeechSynthesizer^ synth;
		SpeechRecognizer^ recog;
		void EveVoiceHandler();
		void SpeechRecognized(Object^ sender, SpeechRecognizedEventArgs^ e);
		void Update(Product^ product, ListView^ listView, ListViewItem^ listViewItem, interior_ptr<int> price, Label^ label, int userQuantity);

		bool isHomePage = false, isOrderPage = false, isTrackingPage = false, isAboutPage = false, isHelpPage = false;

		// MAIN BUTTONS COMMAND HANDLER
		void MainButtonsGrammars(Choices^ cho);
		void MainButtonsCommands(String^ command);

		// ORDERING PAGE COMMAND HANDLER
		void OrderingPageMainProductsGrammars(Choices^ cho);
		void OrderingPageMainProductsCommands(String^ command);
		
		// ORDERING PAGE ARROWS HANDLER
		void OrderingPageArrowsGrammars(Choices^ cho);
		void OrderingPageArrowsCommands(String^ command);


		// Normal ConversationHANDLER
		void NormalConversationGrammars(Choices^ cho);
		void NormalConversationCommands(String^ command);

		void OrderingPageBurgerGrammars(Choices^ cho);
		void OrderingPageBurgerCommands(String^ command);

		// LABEL ADJUSTER
		delegate void LabelAdjustChange(Label^ label,const int constPos);
		LabelAdjustChange^ labelAdjustChange = gcnew LabelAdjustChange(this, &MainInterface::UILabelAdjustWorker);
		void UILabelAdjustWorker(Label^ label, const int constPos);

		void LabelAdjust(Label^ label, const int lefPos, const int quantity);

		// TOTAL PRICE FUNCTION
		void TotalPriceHandler(Label^ label);


	protected:
	public: System::Windows::Forms::Panel^  headerPanel;
	public: System::Windows::Forms::Panel^  bodyPanel;
	public: System::Windows::Forms::Button^  homeBtn;










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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainInterface::typeid));
			this->headerPanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->navPanel = (gcnew System::Windows::Forms::Panel());
			this->aboutusBtn = (gcnew System::Windows::Forms::Button());
			this->helpBtn = (gcnew System::Windows::Forms::Button());
			this->trackingBtn = (gcnew System::Windows::Forms::Button());
			this->orderingBtn = (gcnew System::Windows::Forms::Button());
			this->homeBtn = (gcnew System::Windows::Forms::Button());
			this->bodyPanel = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->twitterBtn = (gcnew System::Windows::Forms::Button());
			this->instagramBtn = (gcnew System::Windows::Forms::Button());
			this->facebookBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->headerPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// headerPanel
			// 
			this->headerPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->headerPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->headerPanel->Controls->Add(this->exitBtn);
			this->headerPanel->Controls->Add(this->pictureBox1);
			this->headerPanel->Controls->Add(this->navPanel);
			this->headerPanel->Controls->Add(this->aboutusBtn);
			this->headerPanel->Controls->Add(this->helpBtn);
			this->headerPanel->Controls->Add(this->trackingBtn);
			this->headerPanel->Controls->Add(this->orderingBtn);
			this->headerPanel->Controls->Add(this->homeBtn);
			this->headerPanel->Controls->Add(this->pictureBox2);
			this->headerPanel->Controls->Add(this->pictureBox3);
			this->headerPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->headerPanel->Location = System::Drawing::Point(0, 0);
			this->headerPanel->Name = L"headerPanel";
			this->headerPanel->Size = System::Drawing::Size(984, 75);
			this->headerPanel->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(639, -15);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(247, 123);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// exitBtn
			// 
			this->exitBtn->FlatAppearance->BorderSize = 0;
			this->exitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->exitBtn->ForeColor = System::Drawing::Color::White;
			this->exitBtn->Location = System::Drawing::Point(937, 0);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(47, 33);
			this->exitBtn->TabIndex = 5;
			this->exitBtn->Text = L"X";
			this->exitBtn->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(7, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(138, 78);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// navPanel
			// 
			this->navPanel->BackColor = System::Drawing::Color::Cyan;
			this->navPanel->Location = System::Drawing::Point(356, 0);
			this->navPanel->Name = L"navPanel";
			this->navPanel->Size = System::Drawing::Size(56, 10);
			this->navPanel->TabIndex = 0;
			// 
			// aboutusBtn
			// 
			this->aboutusBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aboutusBtn.BackgroundImage")));
			this->aboutusBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->aboutusBtn->FlatAppearance->BorderSize = 0;
			this->aboutusBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->aboutusBtn->ForeColor = System::Drawing::Color::White;
			this->aboutusBtn->Location = System::Drawing::Point(604, 12);
			this->aboutusBtn->Name = L"aboutusBtn";
			this->aboutusBtn->Size = System::Drawing::Size(56, 52);
			this->aboutusBtn->TabIndex = 4;
			this->aboutusBtn->UseVisualStyleBackColor = true;
			// 
			// helpBtn
			// 
			this->helpBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"helpBtn.BackgroundImage")));
			this->helpBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->helpBtn->FlatAppearance->BorderSize = 0;
			this->helpBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->helpBtn->ForeColor = System::Drawing::Color::White;
			this->helpBtn->Location = System::Drawing::Point(542, 12);
			this->helpBtn->Name = L"helpBtn";
			this->helpBtn->Size = System::Drawing::Size(56, 52);
			this->helpBtn->TabIndex = 3;
			this->helpBtn->UseVisualStyleBackColor = true;
			// 
			// trackingBtn
			// 
			this->trackingBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"trackingBtn.BackgroundImage")));
			this->trackingBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->trackingBtn->FlatAppearance->BorderSize = 0;
			this->trackingBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->trackingBtn->ForeColor = System::Drawing::Color::White;
			this->trackingBtn->Location = System::Drawing::Point(480, 12);
			this->trackingBtn->Name = L"trackingBtn";
			this->trackingBtn->Size = System::Drawing::Size(56, 52);
			this->trackingBtn->TabIndex = 2;
			this->trackingBtn->UseVisualStyleBackColor = true;
			// 
			// orderingBtn
			// 
			this->orderingBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"orderingBtn.BackgroundImage")));
			this->orderingBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->orderingBtn->FlatAppearance->BorderSize = 0;
			this->orderingBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->orderingBtn->ForeColor = System::Drawing::Color::White;
			this->orderingBtn->Location = System::Drawing::Point(418, 12);
			this->orderingBtn->Name = L"orderingBtn";
			this->orderingBtn->Size = System::Drawing::Size(56, 52);
			this->orderingBtn->TabIndex = 1;
			this->orderingBtn->UseVisualStyleBackColor = true;
			// 
			// homeBtn
			// 
			this->homeBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"homeBtn.BackgroundImage")));
			this->homeBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->homeBtn->FlatAppearance->BorderSize = 0;
			this->homeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->homeBtn->ForeColor = System::Drawing::Color::White;
			this->homeBtn->Location = System::Drawing::Point(356, 12);
			this->homeBtn->Name = L"homeBtn";
			this->homeBtn->Size = System::Drawing::Size(56, 52);
			this->homeBtn->TabIndex = 0;
			this->homeBtn->UseVisualStyleBackColor = true;
			// 
			// bodyPanel
			// 
			this->bodyPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->bodyPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->bodyPanel->Location = System::Drawing::Point(0, 75);
			this->bodyPanel->Name = L"bodyPanel";
			this->bodyPanel->Size = System::Drawing::Size(984, 486);
			this->bodyPanel->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->twitterBtn);
			this->panel1->Controls->Add(this->instagramBtn);
			this->panel1->Controls->Add(this->facebookBtn);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 567);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(984, 55);
			this->panel1->TabIndex = 2;
			// 
			// twitterBtn
			// 
			this->twitterBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"twitterBtn.BackgroundImage")));
			this->twitterBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->twitterBtn->FlatAppearance->BorderSize = 0;
			this->twitterBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->twitterBtn->ForeColor = System::Drawing::Color::White;
			this->twitterBtn->Location = System::Drawing::Point(937, 8);
			this->twitterBtn->Name = L"twitterBtn";
			this->twitterBtn->Size = System::Drawing::Size(39, 40);
			this->twitterBtn->TabIndex = 7;
			this->twitterBtn->UseVisualStyleBackColor = true;
			// 
			// instagramBtn
			// 
			this->instagramBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"instagramBtn.BackgroundImage")));
			this->instagramBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->instagramBtn->FlatAppearance->BorderSize = 0;
			this->instagramBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->instagramBtn->ForeColor = System::Drawing::Color::White;
			this->instagramBtn->Location = System::Drawing::Point(892, 8);
			this->instagramBtn->Name = L"instagramBtn";
			this->instagramBtn->Size = System::Drawing::Size(39, 40);
			this->instagramBtn->TabIndex = 6;
			this->instagramBtn->UseVisualStyleBackColor = true;
			// 
			// facebookBtn
			// 
			this->facebookBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"facebookBtn.BackgroundImage")));
			this->facebookBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->facebookBtn->FlatAppearance->BorderSize = 0;
			this->facebookBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->facebookBtn->ForeColor = System::Drawing::Color::White;
			this->facebookBtn->Location = System::Drawing::Point(847, 8);
			this->facebookBtn->Name = L"facebookBtn";
			this->facebookBtn->Size = System::Drawing::Size(39, 40);
			this->facebookBtn->TabIndex = 5;
			this->facebookBtn->UseVisualStyleBackColor = true;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(143, -15);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(207, 108);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// MainInterface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 622);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->bodyPanel);
			this->Controls->Add(this->headerPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainInterface";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainInterface";
			this->headerPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

};
}
