#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjectEve {

	/// <summary>
	/// Summary for AboutJerico
	/// </summary>
	public ref class AboutJerico : public System::Windows::Forms::UserControl
	{
	public:
		AboutJerico(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AboutJerico()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutJerico::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(18, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(350, 450);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(553, 240);
			this->label10->MaximumSize = System::Drawing::Size(400, 50);
			this->label10->MinimumSize = System::Drawing::Size(400, 50);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(400, 50);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Tondo, Manila";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(553, 315);
			this->label9->MaximumSize = System::Drawing::Size(400, 150);
			this->label9->MinimumSize = System::Drawing::Size(400, 150);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(400, 150);
			this->label9->TabIndex = 20;
			this->label9->Text = L"All our dreams can come true, if we have the courage to pursue them.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(401, 240);
			this->label8->MaximumSize = System::Drawing::Size(150, 50);
			this->label8->MinimumSize = System::Drawing::Size(150, 50);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(150, 50);
			this->label8->TabIndex = 19;
			this->label8->Text = L"ADDRESS:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(401, 315);
			this->label7->MaximumSize = System::Drawing::Size(150, 50);
			this->label7->MinimumSize = System::Drawing::Size(150, 50);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 50);
			this->label7->TabIndex = 18;
			this->label7->Text = L"MOTTO:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(553, 170);
			this->label6->MaximumSize = System::Drawing::Size(400, 50);
			this->label6->MinimumSize = System::Drawing::Size(400, 50);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(400, 50);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Male";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(401, 170);
			this->label5->MaximumSize = System::Drawing::Size(150, 50);
			this->label5->MinimumSize = System::Drawing::Size(150, 50);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(150, 50);
			this->label5->TabIndex = 16;
			this->label5->Text = L"GENDER:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(553, 100);
			this->label4->MaximumSize = System::Drawing::Size(400, 50);
			this->label4->MinimumSize = System::Drawing::Size(400, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(400, 50);
			this->label4->TabIndex = 15;
			this->label4->Text = L"17";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(401, 100);
			this->label3->MaximumSize = System::Drawing::Size(150, 50);
			this->label3->MinimumSize = System::Drawing::Size(150, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 50);
			this->label3->TabIndex = 14;
			this->label3->Text = L"AGE:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(553, 33);
			this->label2->MaximumSize = System::Drawing::Size(400, 50);
			this->label2->MinimumSize = System::Drawing::Size(400, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(400, 50);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Jerico C. Villaraza";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(401, 30);
			this->label1->MaximumSize = System::Drawing::Size(150, 50);
			this->label1->MinimumSize = System::Drawing::Size(150, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 50);
			this->label1->TabIndex = 12;
			this->label1->Text = L"NAME:";
			// 
			// AboutJerico
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"AboutJerico";
			this->Size = System::Drawing::Size(984, 484);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
