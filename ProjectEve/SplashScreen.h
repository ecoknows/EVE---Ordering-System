#pragma once
#include "MainInterface.h"

namespace ProjectEve {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Speech::Recognition;
	using namespace System::Speech::Synthesis;

	/// <summary>
	/// Summary for SplashScreen
	/// </summary>
	public ref class SplashScreen : public System::Windows::Forms::Form
	{
	public:
		SplashScreen(void)
		{
			InitializeComponent();
			EveVoiceHandler();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		SpeechRecognizer^ recog;
		SpeechSynthesizer^ synth;

	public:

	public:

	public:
		MainInterface^ mainInterface = gcnew MainInterface();
		void EveVoiceHandler();
		void SpeechRecognized(Object^ sender, SpeechRecognizedEventArgs^ e);

		delegate void CloseSplashScreen(MainInterface^ main, SplashScreen^ splash);
		CloseSplashScreen^ closeSplashScreen = gcnew CloseSplashScreen(this, &SplashScreen::UICloseWorker);
		void UICloseWorker(MainInterface^ main, SplashScreen^ splash);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SplashScreen()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SplashScreen::typeid));
			this->SuspendLayout();
			// 
			// SplashScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(910, 489);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SplashScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SplashScreen";
			this->TopMost = true;
			this->Click += gcnew System::EventHandler(this, &SplashScreen::SplashScreen_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void SplashScreen_Load(System::Object^  sender, System::EventArgs^  e) {
		synth->Speak("Hello I'm Eve 18 Years Old, created by my greate Creators, Jerico, Jake, Lovelyn, Roxie and Jayson"
			+" Okay to many introduction, Do you want to proceed to the main program ? ");
	}
	};
}
