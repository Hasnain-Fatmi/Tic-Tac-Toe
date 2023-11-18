#pragma once
#include "Manual.h"
#include "Auto.h"

namespace TicTacToeFirstAttempt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Label^ Credits;
	private: System::Windows::Forms::Button^ button3;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Credits = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(120, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(216, 58);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Multiplayer";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(120, 133);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(216, 58);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Single Player";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(120, 240);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(216, 58);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Credits";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm3::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(-3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(476, 480);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm3::pictureBox1_Click);
			// 
			// Credits
			// 
			this->Credits->BackColor = System::Drawing::Color::Transparent;
			this->Credits->Font = (gcnew System::Drawing::Font(L"Castellar", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Credits->ForeColor = System::Drawing::Color::White;
			this->Credits->Location = System::Drawing::Point(12, 412);
			this->Credits->Name = L"Credits";
			this->Credits->Size = System::Drawing::Size(447, 64);
			this->Credits->TabIndex = 18;
			this->Credits->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Credits->Click += gcnew System::EventHandler(this, &MyForm3::Credits_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(120, 338);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(216, 58);
			this->button3->TabIndex = 19;
			this->button3->Text = L"EXIT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::button3_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(471, 485);
			this->ControlBox = false;
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Credits);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm3";
			this->Text = L"Game Menu";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e)
	{
		// For Sound
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
		player->SoundLocation = "Sound1.wav";
		player->Load();
		player->PlayLooping();
		// To make label transpatent
		Credits->Parent = pictureBox1;
		Credits->BackColor = Color::Transparent;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// To transfer to game
		this->Hide();
		TicTacToeFirstAttempt::Manual form211;
		form211.ShowDialog();
		this->Show();
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
		player->SoundLocation = "Sound1.wav";
		player->Load();
		player->PlayLooping();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// To print credits
		Credits->Text = "Made by \nM. Hasnain Fatmi (21L-1773) \nM. Asad Tariq (21L-5266) ";
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Credits_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// To close
		Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		TicTacToeFirstAttempt::Auto form;
		form.ShowDialog();
		this->Show();
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
		player->SoundLocation = "Sound1.wav";
		player->Load();
		player->PlayLooping();

	}
	};
}