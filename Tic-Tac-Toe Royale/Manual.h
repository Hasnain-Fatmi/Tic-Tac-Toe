#pragma once

namespace TicTacToeFirstAttempt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for Manual
	/// </summary>
	public ref class Manual : public System::Windows::Forms::Form
	{
	public:
		Manual(void)
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
		~Manual()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ A;
	private: System::Windows::Forms::Button^ C;
	protected:


	private: System::Windows::Forms::Button^ B;
	private: System::Windows::Forms::Button^ E;
	private: System::Windows::Forms::Button^ F;



	private: System::Windows::Forms::Button^ D;
	private: System::Windows::Forms::Button^ H;
	private: System::Windows::Forms::Button^ I;



	private: System::Windows::Forms::Button^ G;




	private: System::Windows::Forms::Button^ Reset;
	private: System::Windows::Forms::Button^ New;
	private: System::Windows::Forms::Label^ Label;
	private: System::Windows::Forms::Label^ Label2;
	private: System::Windows::Forms::Button^ Back;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ PlayerX;
	private: System::Windows::Forms::Label^ PlayerO;
	private: System::Windows::Forms::Label^ Label1;
	private: System::Windows::Forms::Label^ Draw;
	private: System::Windows::Forms::Label^ Win;
	private: System::Windows::Forms::Label^ Declaration;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ Exit;


	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Manual::typeid));
			this->A = (gcnew System::Windows::Forms::Button());
			this->C = (gcnew System::Windows::Forms::Button());
			this->B = (gcnew System::Windows::Forms::Button());
			this->E = (gcnew System::Windows::Forms::Button());
			this->F = (gcnew System::Windows::Forms::Button());
			this->D = (gcnew System::Windows::Forms::Button());
			this->H = (gcnew System::Windows::Forms::Button());
			this->I = (gcnew System::Windows::Forms::Button());
			this->G = (gcnew System::Windows::Forms::Button());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->Reset = (gcnew System::Windows::Forms::Button());
			this->New = (gcnew System::Windows::Forms::Button());
			this->Label = (gcnew System::Windows::Forms::Label());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->PlayerX = (gcnew System::Windows::Forms::Label());
			this->PlayerO = (gcnew System::Windows::Forms::Label());
			this->Label1 = (gcnew System::Windows::Forms::Label());
			this->Draw = (gcnew System::Windows::Forms::Label());
			this->Win = (gcnew System::Windows::Forms::Label());
			this->Declaration = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// A
			// 
			this->A->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->A->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 22.2F, System::Drawing::FontStyle::Bold));
			this->A->ForeColor = System::Drawing::Color::Black;
			this->A->Location = System::Drawing::Point(109, 176);
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(75, 77);
			this->A->TabIndex = 0;
			this->A->UseVisualStyleBackColor = false;
			this->A->Click += gcnew System::EventHandler(this, &Manual::A_Click);
			// 
			// C
			// 
			this->C->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->C->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 22.2F, System::Drawing::FontStyle::Bold));
			this->C->ForeColor = System::Drawing::Color::Black;
			this->C->Location = System::Drawing::Point(271, 176);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(75, 77);
			this->C->TabIndex = 1;
			this->C->UseVisualStyleBackColor = false;
			this->C->Click += gcnew System::EventHandler(this, &Manual::C_Click);
			// 
			// B
			// 
			this->B->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->B->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 22.2F, System::Drawing::FontStyle::Bold));
			this->B->ForeColor = System::Drawing::Color::Black;
			this->B->Location = System::Drawing::Point(190, 176);
			this->B->Name = L"B";
			this->B->Size = System::Drawing::Size(75, 77);
			this->B->TabIndex = 2;
			this->B->UseVisualStyleBackColor = false;
			this->B->Click += gcnew System::EventHandler(this, &Manual::B_Click);
			// 
			// E
			// 
			this->E->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->E->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 22.2F, System::Drawing::FontStyle::Bold));
			this->E->ForeColor = System::Drawing::Color::Black;
			this->E->Location = System::Drawing::Point(190, 259);
			this->E->Name = L"E";
			this->E->Size = System::Drawing::Size(75, 77);
			this->E->TabIndex = 5;
			this->E->UseVisualStyleBackColor = false;
			this->E->Click += gcnew System::EventHandler(this, &Manual::E_Click);
			// 
			// F
			// 
			this->F->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->F->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 22.2F, System::Drawing::FontStyle::Bold));
			this->F->ForeColor = System::Drawing::Color::Black;
			this->F->Location = System::Drawing::Point(271, 259);
			this->F->Name = L"F";
			this->F->Size = System::Drawing::Size(75, 77);
			this->F->TabIndex = 4;
			this->F->UseVisualStyleBackColor = false;
			this->F->Click += gcnew System::EventHandler(this, &Manual::F_Click);
			// 
			// D
			// 
			this->D->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->D->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 22.2F, System::Drawing::FontStyle::Bold));
			this->D->ForeColor = System::Drawing::Color::Black;
			this->D->Location = System::Drawing::Point(109, 259);
			this->D->Name = L"D";
			this->D->Size = System::Drawing::Size(75, 77);
			this->D->TabIndex = 3;
			this->D->UseVisualStyleBackColor = false;
			this->D->Click += gcnew System::EventHandler(this, &Manual::D_Click);
			// 
			// H
			// 
			this->H->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->H->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 22.2F, System::Drawing::FontStyle::Bold));
			this->H->ForeColor = System::Drawing::Color::Black;
			this->H->Location = System::Drawing::Point(190, 342);
			this->H->Name = L"H";
			this->H->Size = System::Drawing::Size(75, 77);
			this->H->TabIndex = 8;
			this->H->UseVisualStyleBackColor = false;
			this->H->Click += gcnew System::EventHandler(this, &Manual::H_Click);
			// 
			// I
			// 
			this->I->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->I->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->I->ForeColor = System::Drawing::Color::Black;
			this->I->Location = System::Drawing::Point(271, 342);
			this->I->Name = L"I";
			this->I->Size = System::Drawing::Size(75, 77);
			this->I->TabIndex = 7;
			this->I->UseVisualStyleBackColor = false;
			this->I->Click += gcnew System::EventHandler(this, &Manual::I_Click);
			// 
			// G
			// 
			this->G->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->G->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 22.2F, System::Drawing::FontStyle::Bold));
			this->G->ForeColor = System::Drawing::Color::Black;
			this->G->Location = System::Drawing::Point(109, 342);
			this->G->Name = L"G";
			this->G->Size = System::Drawing::Size(75, 77);
			this->G->TabIndex = 6;
			this->G->UseVisualStyleBackColor = false;
			this->G->Click += gcnew System::EventHandler(this, &Manual::G_Click);
			// 
			// Back
			// 
			this->Back->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.2F));
			this->Back->Location = System::Drawing::Point(231, 428);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(115, 53);
			this->Back->TabIndex = 9;
			this->Back->Text = L"Back";
			this->Back->UseVisualStyleBackColor = false;
			this->Back->Click += gcnew System::EventHandler(this, &Manual::Exit_Click);
			// 
			// Reset
			// 
			this->Reset->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Reset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F));
			this->Reset->Location = System::Drawing::Point(-1, 428);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(117, 53);
			this->Reset->TabIndex = 10;
			this->Reset->Text = L"NEW GAME";
			this->Reset->UseVisualStyleBackColor = false;
			this->Reset->Click += gcnew System::EventHandler(this, &Manual::Reset_Click);
			// 
			// New
			// 
			this->New->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->New->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.2F));
			this->New->Location = System::Drawing::Point(122, 428);
			this->New->Name = L"New";
			this->New->Size = System::Drawing::Size(103, 54);
			this->New->TabIndex = 11;
			this->New->Text = L"RESET";
			this->New->UseVisualStyleBackColor = false;
			this->New->Click += gcnew System::EventHandler(this, &Manual::New_Click);
			// 
			// Label
			// 
			this->Label->AutoSize = true;
			this->Label->BackColor = System::Drawing::Color::Transparent;
			this->Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label->ForeColor = System::Drawing::Color::White;
			this->Label->Location = System::Drawing::Point(7, 31);
			this->Label->Name = L"Label";
			this->Label->Size = System::Drawing::Size(121, 29);
			this->Label->TabIndex = 12;
			this->Label->Text = L"Wins of X:";
			this->Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Label->Click += gcnew System::EventHandler(this, &Manual::Label_Click);
			// 
			// Label2
			// 
			this->Label2->AutoSize = true;
			this->Label2->BackColor = System::Drawing::Color::Transparent;
			this->Label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label2->ForeColor = System::Drawing::Color::White;
			this->Label2->Location = System::Drawing::Point(341, 31);
			this->Label2->Name = L"Label2";
			this->Label2->Size = System::Drawing::Size(123, 29);
			this->Label2->TabIndex = 13;
			this->Label2->Text = L"Wins of O:";
			this->Label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Label2->Click += gcnew System::EventHandler(this, &Manual::Label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(474, 484);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Manual::pictureBox1_Click);
			// 
			// PlayerX
			// 
			this->PlayerX->AutoSize = true;
			this->PlayerX->BackColor = System::Drawing::Color::Transparent;
			this->PlayerX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerX->ForeColor = System::Drawing::Color::White;
			this->PlayerX->Location = System::Drawing::Point(46, 74);
			this->PlayerX->Name = L"PlayerX";
			this->PlayerX->Size = System::Drawing::Size(32, 36);
			this->PlayerX->TabIndex = 15;
			this->PlayerX->Text = L"0";
			this->PlayerX->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->PlayerX->Click += gcnew System::EventHandler(this, &Manual::PlayerX_Click);
			// 
			// PlayerO
			// 
			this->PlayerO->AutoSize = true;
			this->PlayerO->BackColor = System::Drawing::Color::Transparent;
			this->PlayerO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerO->ForeColor = System::Drawing::Color::White;
			this->PlayerO->Location = System::Drawing::Point(387, 74);
			this->PlayerO->Name = L"PlayerO";
			this->PlayerO->Size = System::Drawing::Size(32, 36);
			this->PlayerO->TabIndex = 16;
			this->PlayerO->Text = L"0";
			// 
			// Label1
			// 
			this->Label1->AutoSize = true;
			this->Label1->BackColor = System::Drawing::Color::Transparent;
			this->Label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label1->ForeColor = System::Drawing::Color::White;
			this->Label1->Location = System::Drawing::Point(194, 31);
			this->Label1->Name = L"Label1";
			this->Label1->Size = System::Drawing::Size(87, 29);
			this->Label1->TabIndex = 17;
			this->Label1->Text = L"Draws:";
			// 
			// Draw
			// 
			this->Draw->AutoSize = true;
			this->Draw->BackColor = System::Drawing::Color::Transparent;
			this->Draw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Draw->ForeColor = System::Drawing::Color::White;
			this->Draw->Location = System::Drawing::Point(220, 74);
			this->Draw->Name = L"Draw";
			this->Draw->Size = System::Drawing::Size(32, 36);
			this->Draw->TabIndex = 18;
			this->Draw->Text = L"0";
			this->Draw->Click += gcnew System::EventHandler(this, &Manual::label3_Click);
			// 
			// Win
			// 
			this->Win->BackColor = System::Drawing::Color::Transparent;
			this->Win->Font = (gcnew System::Drawing::Font(L"Castellar", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Win->ForeColor = System::Drawing::Color::White;
			this->Win->Location = System::Drawing::Point(96, 110);
			this->Win->Name = L"Win";
			this->Win->Size = System::Drawing::Size(266, 27);
			this->Win->TabIndex = 19;
			this->Win->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Win->Click += gcnew System::EventHandler(this, &Manual::Win_Click);
			// 
			// Declaration
			// 
			this->Declaration->BackColor = System::Drawing::Color::Transparent;
			this->Declaration->Font = (gcnew System::Drawing::Font(L"Castellar", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Declaration->ForeColor = System::Drawing::Color::White;
			this->Declaration->Location = System::Drawing::Point(12, 146);
			this->Declaration->Name = L"Declaration";
			this->Declaration->Size = System::Drawing::Size(447, 27);
			this->Declaration->TabIndex = 20;
			this->Declaration->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Declaration->Click += gcnew System::EventHandler(this, &Manual::Declaration_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Manual::timer1_Tick);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.2F));
			this->Exit->Location = System::Drawing::Point(352, 428);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(118, 52);
			this->Exit->TabIndex = 21;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &Manual::button1_Click);
			// 
			// Manual
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(471, 485);
			this->ControlBox = false;
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Declaration);
			this->Controls->Add(this->Win);
			this->Controls->Add(this->Draw);
			this->Controls->Add(this->Label1);
			this->Controls->Add(this->PlayerO);
			this->Controls->Add(this->PlayerX);
			this->Controls->Add(this->Label2);
			this->Controls->Add(this->Label);
			this->Controls->Add(this->New);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->Reset);
			this->Controls->Add(this->H);
			this->Controls->Add(this->I);
			this->Controls->Add(this->G);
			this->Controls->Add(this->E);
			this->Controls->Add(this->F);
			this->Controls->Add(this->D);
			this->Controls->Add(this->B);
			this->Controls->Add(this->C);
			this->Controls->Add(this->A);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Manual";
			this->Text = L"Tic Tac Toe";
			this->Load += gcnew System::EventHandler(this, &Manual::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		bool checker = false;
		int N = 0;
		int O = 0;
		int M = 0;
		int count = 0;

#pragma endregion
		void Enable_False()
		{
			A->Enabled = false;
			B->Enabled = false;
			C->Enabled = false;
			D->Enabled = false;
			E->Enabled = false;
			F->Enabled = false;
			G->Enabled = false;
			H->Enabled = false;
			I->Enabled = false;
		}
		void score()
		{
			if (A->Text == "X" && B->Text == "X" && C->Text == "X")
			{ // For Sound
				System::Media::SoundPlayer^ player1 = gcnew System::Media::SoundPlayer();
				player1->SoundLocation = "Celebrate.wav";
				player1->Load();
				player1->PlayLooping();
				A->BackColor = System::Drawing::Color::Azure;
				B->BackColor = System::Drawing::Color::Azure;
				C->BackColor = System::Drawing::Color::Azure;
				N = int::Parse(PlayerX->Text);
				PlayerX->Text = Convert::ToString(N + 1); // for counting number of Wins for X.
				Win->Text = "Congratulations!";
				Declaration->Text = "Player with X wins!";
				Enable_False();
				count = 0;
			}
			else if (D->Text == "X" && E->Text == "X" && F->Text == "X")
			{
				System::Media::SoundPlayer^ player1 = gcnew System::Media::SoundPlayer();
				player1->SoundLocation = "Celebrate.wav";
				player1->Load();
				player1->PlayLooping();
				D->BackColor = System::Drawing::Color::Azure;
				E->BackColor = System::Drawing::Color::Azure;
				F->BackColor = System::Drawing::Color::Azure;
				N = int::Parse(PlayerX->Text);
				PlayerX->Text = Convert::ToString(N + 1);
				Win->Text = "Congratulations!";
				Declaration->Text = "Player with X wins!";
				Enable_False();
				count = 0;
			}
			else if (G->Text == "X" && H->Text == "X" && I->Text == "X")
			{
				System::Media::SoundPlayer^ player1 = gcnew System::Media::SoundPlayer();
				player1->SoundLocation = "Celebrate.wav";
				player1->Load();
				player1->PlayLooping();
				G->BackColor = System::Drawing::Color::Azure;
				H->BackColor = System::Drawing::Color::Azure;
				I->BackColor = System::Drawing::Color::Azure;
				N = int::Parse(PlayerX->Text);
				PlayerX->Text = Convert::ToString(N + 1);
				Win->Text = "Congratulations!";
				Declaration->Text = "Player with X wins!";
				Enable_False();
				count = 0;
			}
			else if (A->Text == "X" && D->Text == "X" && G->Text == "X")
			{
				System::Media::SoundPlayer^ player1 = gcnew System::Media::SoundPlayer();
				player1->SoundLocation = "Celebrate.wav";
				player1->Load();
				player1->PlayLooping();
				A->BackColor = System::Drawing::Color::Azure;
				D->BackColor = System::Drawing::Color::Azure;
				G->BackColor = System::Drawing::Color::Azure;
				N = int::Parse(PlayerX->Text);
				PlayerX->Text = Convert::ToString(N + 1);
				Win->Text = "Congratulations!";
				Declaration->Text = "Player with X wins!";
				Enable_False();
				count = 0;
			}
			else if (B->Text == "X" && E->Text == "X" && H->Text == "X")
			{
				System::Media::SoundPlayer^ player1 = gcnew System::Media::SoundPlayer();
				player1->SoundLocation = "Celebrate.wav";
				player1->Load();
				player1->PlayLooping();
				B->BackColor = System::Drawing::Color::Azure;
				E->BackColor = System::Drawing::Color::Azure;
				H->BackColor = System::Drawing::Color::Azure;
				N = int::Parse(PlayerX->Text);
				PlayerX->Text = Convert::ToString(N + 1);
				Win->Text = "Congratulations!";
				Declaration->Text = "Player with X wins!";
				Enable_False();
				count = 0;
			}
			else if (C->Text == "X" && F->Text == "X" && I->Text == "X")
			{
				System::Media::SoundPlayer^ player1 = gcnew System::Media::SoundPlayer();
				player1->SoundLocation = "Celebrate.wav";
				player1->Load();
				player1->PlayLooping();
				C->BackColor = System::Drawing::Color::Azure;
				F->BackColor = System::Drawing::Color::Azure;
				I->BackColor = System::Drawing::Color::Azure;
				N = int::Parse(PlayerX->Text);
				PlayerX->Text = Convert::ToString(N + 1);
				Win->Text = "Congratulations!";
				Declaration->Text = "Player with X wins!";
				Enable_False();
				count = 0;
			}
			else if (A->Text == "X" && E->Text == "X" && I->Text == "X")
			{
				System::Media::SoundPlayer^ player1 = gcnew System::Media::SoundPlayer();
				player1->SoundLocation = "Celebrate.wav";
				player1->Load();
				player1->PlayLooping();
				A->BackColor = System::Drawing::Color::Azure;
				E->BackColor = System::Drawing::Color::Azure;
				I->BackColor = System::Drawing::Color::Azure;
				N = int::Parse(PlayerX->Text);
				PlayerX->Text = Convert::ToString(N + 1);
				Win->Text = "Congratulations!";
				Declaration->Text = "Player with X wins!";
				Enable_False();
			}
			else if (C->Text == "X" && E->Text == "X" && G->Text == "X")
			{
				System::Media::SoundPlayer^ player1 = gcnew System::Media::SoundPlayer();
				player1->SoundLocation = "Celebrate.wav";
				player1->Load();
				player1->PlayLooping();
				C->BackColor = System::Drawing::Color::Azure;
				E->BackColor = System::Drawing::Color::Azure;
				G->BackColor = System::Drawing::Color::Azure;
				N = int::Parse(PlayerX->Text);
				PlayerX->Text = Convert::ToString(N + 1);
				Win->Text = "Congratulations!";
				Declaration->Text = "Player with X wins!";
				Enable_False();
				count = 0;
			}

			// FOR PLAYER O

			else if (A->Text == "O" && B->Text == "O" && C->Text == "O")
			{
				System::Media::SoundPlayer^ player1 = gcnew System::Media::SoundPlayer();
				player1->SoundLocation = "Celebrate.wav";
				player1->Load();
				player1->PlayLooping();
				A->BackColor = System::Drawing::Color::Azure;
				B->BackColor = System::Drawing::Color::Azure;
				C->BackColor = System::Drawing::Color::Azure;
				O = int::Parse(PlayerO->Text);
				PlayerO->Text = Convert::ToString(O + 1); // for counting number of Wins of O.
				Win->Text = "Congratulations!";
				Declaration->Text = "Player with O wins!";
				Enable_False();
				count = 0;
			}
			else if (D->Text == "O" && E->Text == "O" && F->Text == "O")
			{
				System::Media::SoundPlayer^ player1 = gcnew System::Media::SoundPlayer();
				player1->SoundLocation = "Celebrate.wav";
				player1->Load();
				player1->PlayLooping();
				D->BackColor = System::Drawing::Color::Azure;
				E->BackColor = System::Drawing::Color::Azure;
				F->BackColor = System::Drawing::Color::Azure;
				O = int::Parse(PlayerO->Text);
				PlayerO->Text = Convert::ToString(O + 1);
				Win->Text = "Congratulations!";
				Declaration->Text = "Player with O wins!";
				Enable_False();
				count = 0;
			}
			else if (G->Text == "O" && H->Text == "O" && I->Text == "O")
			{
				System::Media::SoundPlayer^ player1 = gcnew System::Media::SoundPlayer();
				player1->SoundLocation = "Celebrate.wav";
				player1->Load();
				player1->PlayLooping();
				G->BackColor = System::Drawing::Color::Azure;
				H->BackColor = System::Drawing::Color::Azure;
				I->BackColor = System::Drawing::Color::Azure;
				O = int::Parse(PlayerO->Text);
				PlayerO->Text = Convert::ToString(O + 1);
				Win->Text = "Congratulations!";
				Declaration->Text = "Player with O wins!";
				Enable_False();
				count = 0;
			}
			else if (A->Text == "O" && D->Text == "O" && G->Text == "O")
			{
				System::Media::SoundPlayer^ player1 = gcnew System::Media::SoundPlayer();
				player1->SoundLocation = "Celebrate.wav";
				player1->Load();
				player1->PlayLooping();
				A->BackColor = System::Drawing::Color::Azure;
				D->BackColor = System::Drawing::Color::Azure;
				G->BackColor = System::Drawing::Color::Azure;
				O = int::Parse(PlayerO->Text);
				PlayerO->Text = Convert::ToString(O + 1);
				Win->Text = "Congratulations!";
				Declaration->Text = "Player with O wins!";
				Enable_False();
				count = 0;
			}
			else if (B->Text == "O" && E->Text == "O" && H->Text == "O")
			{
				System::Media::SoundPlayer^ player1 = gcnew System::Media::SoundPlayer();
				player1->SoundLocation = "Celebrate.wav";
				player1->Load();
				player1->PlayLooping();
				B->BackColor = System::Drawing::Color::Azure;
				E->BackColor = System::Drawing::Color::Azure;
				H->BackColor = System::Drawing::Color::Azure;
				O = int::Parse(PlayerO->Text);
				PlayerO->Text = Convert::ToString(O + 1);
				Win->Text = "Congratulations!";
				Declaration->Text = "Player with O wins!";
				Enable_False();
				count = 0;
			}
			else if (C->Text == "O" && F->Text == "O" && I->Text == "O")
			{
				System::Media::SoundPlayer^ player1 = gcnew System::Media::SoundPlayer();
				player1->SoundLocation = "Celebrate.wav";
				player1->Load();
				player1->PlayLooping();
				C->BackColor = System::Drawing::Color::Azure;
				F->BackColor = System::Drawing::Color::Azure;
				I->BackColor = System::Drawing::Color::Azure;
				O = int::Parse(PlayerO->Text);
				PlayerO->Text = Convert::ToString(O + 1);
				Win->Text = "Congratulations!";
				Declaration->Text = "Player with O wins!";
				Enable_False();
				count = 0;
			}
			else if (A->Text == "O" && E->Text == "O" && I->Text == "O")
			{
				System::Media::SoundPlayer^ player1 = gcnew System::Media::SoundPlayer();
				player1->SoundLocation = "Celebrate.wav";
				player1->Load();
				player1->PlayLooping();
				A->BackColor = System::Drawing::Color::Azure;
				E->BackColor = System::Drawing::Color::Azure;
				I->BackColor = System::Drawing::Color::Azure;
				O = int::Parse(PlayerO->Text);
				PlayerO->Text = Convert::ToString(O + 1);
				Win->Text = "Congratulations!";
				Declaration->Text = "Player with O wins!";
				Enable_False();
				count = 0;
			}
			else if (C->Text == "O" && E->Text == "O" && G->Text == "O")
			{
				System::Media::SoundPlayer^ player1 = gcnew System::Media::SoundPlayer();
				player1->SoundLocation = "Celebrate.wav";
				player1->Load();
				player1->PlayLooping();
				C->BackColor = System::Drawing::Color::Azure;
				E->BackColor = System::Drawing::Color::Azure;
				G->BackColor = System::Drawing::Color::Azure;
				O = int::Parse(PlayerO->Text);
				PlayerO->Text = Convert::ToString(O + 1);
				Win->Text = "Congratulations!";
				Declaration->Text = "Player with O wins!";
				Enable_False();
				count = 0;
			}
			// for Draw
			else if (count == 9)
			{
				System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
				player->SoundLocation = "Sound1.wav";
				player->Load();
				player->PlayLooping();
				A->BackColor = System::Drawing::Color::MistyRose;
				B->BackColor = System::Drawing::Color::MistyRose;
				C->BackColor = System::Drawing::Color::MistyRose;
				D->BackColor = System::Drawing::Color::MistyRose;
				E->BackColor = System::Drawing::Color::MistyRose;
				F->BackColor = System::Drawing::Color::MistyRose;
				G->BackColor = System::Drawing::Color::MistyRose;
				H->BackColor = System::Drawing::Color::MistyRose;
				I->BackColor = System::Drawing::Color::MistyRose;
				M = int::Parse(Draw->Text);
				Draw->Text = Convert::ToString(M + 1); // for counting number of Draws
				Win->Text = "It's a Draw!";
				Declaration->Text = "Better Luck Next Time.";
				Enable_False();
				count = 0;
			}
		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		// To make Declaration Transparent
		Label->Parent = pictureBox1;
		Label->BackColor = Color::Transparent;
		Label2->Parent = pictureBox1;
		Label2->BackColor = Color::Transparent;
		PlayerX->Parent = pictureBox1;
		PlayerX->BackColor = Color::Transparent;
		PlayerO->Parent = pictureBox1;
		PlayerO->BackColor = Color::Transparent;
		Draw->Parent = pictureBox1;
		Draw->BackColor = Color::Transparent;
		Label1->Parent = pictureBox1;
		Label1->BackColor = Color::Transparent;
		Win->Parent = pictureBox1;
		Win->BackColor = Color::Transparent;
		Declaration->Parent = pictureBox1;
		Declaration->BackColor = Color::Transparent;
		// For Sound
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
		player->SoundLocation = "Sound.wav";
		player->Load();
		player->PlayLooping();


	}
		   // Print X or O when Button is pressed
	private: System::Void A_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (checker == false)
		{
			A->Text = "X";
			checker = true;
			count++;
		}
		else
		{
			A->Text = "O";
			checker = false;
			count++;
		}
		score();
		A->Enabled = false;
	}
	private: System::Void B_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (checker == false)
		{
			B->Text = "X";
			checker = true;
			count++;
		}
		else
		{
			B->Text = "O";
			checker = false;
			count++;
		}
		score();
		B->Enabled = false;
	}

	private: System::Void C_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (checker == false)
		{
			C->Text = "X";
			checker = true;
			count++;
		}
		else
		{
			C->Text = "O";
			checker = false;
			count++;
		}
		score();
		C->Enabled = false;
	}

	private: System::Void D_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (checker == false)
		{
			D->Text = "X";
			checker = true;
			count++;
		}
		else
		{
			D->Text = "O";
			checker = false;
			count++;
		}
		score();
		D->Enabled = false;

	}
	private: System::Void E_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (checker == false)
		{
			E->Text = "X";
			checker = true;
			count++;
		}
		else
		{
			E->Text = "O";
			checker = false;
			count++;
		}
		score();
		E->Enabled = false;
	}
	private: System::Void F_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (checker == false)
		{
			F->Text = "X";
			checker = true;
			count++;
		}
		else
		{
			F->Text = "O";
			checker = false;
			count++;
		}
		score();
		F->Enabled = false;
	}
	private: System::Void G_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (checker == false)
		{
			G->Text = "X";
			checker = true;
			count++;
		}
		else
		{
			G->Text = "O";
			checker = false;
			count++;
		}
		score();
		G->Enabled = false;
	}
	private: System::Void H_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (checker == false)
		{
			H->Text = "X";
			checker = true;
			count++;
		}
		else
		{
			H->Text = "O";
			checker = false;
			count++;
		}
		score();
		H->Enabled = false;
	}
	private: System::Void I_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (checker == false)
		{
			I->Text = "X";
			checker = true;
			count++;
		}
		else
		{
			I->Text = "O";
			checker = false;
			count++;
		}
		score();
		I->Enabled = false;
	}
		   // Clear buttons
	private: System::Void Reset_Click(System::Object^ sender, System::EventArgs^ e)
	{
		A->Enabled = true;
		B->Enabled = true;
		C->Enabled = true;
		D->Enabled = true;
		E->Enabled = true;
		F->Enabled = true;
		G->Enabled = true;
		H->Enabled = true;
		I->Enabled = true;

		A->Text = "";
		B->Text = "";
		C->Text = "";
		D->Text = "";
		E->Text = "";
		F->Text = "";
		G->Text = "";
		H->Text = "";
		I->Text = "";
		Win->Text = "";
		Declaration->Text = "";
		New->Enabled = true;
		count = 0;
		checker = false;
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
		player->SoundLocation = "Sound.wav";
		player->Load();
		player->PlayLooping();

		A->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		B->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		C->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		D->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		E->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		F->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		G->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		H->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		I->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
	}
		   // Clear All
	private: System::Void New_Click(System::Object^ sender, System::EventArgs^ e)
	{
		A->Enabled = true;
		B->Enabled = true;
		C->Enabled = true;
		D->Enabled = true;
		E->Enabled = true;
		F->Enabled = true;
		G->Enabled = true;
		H->Enabled = true;
		I->Enabled = true;

		A->Text = "";
		B->Text = "";
		C->Text = "";
		D->Text = "";
		E->Text = "";
		F->Text = "";
		G->Text = "";
		H->Text = "";
		I->Text = "";
		PlayerO->Text = "0";
		PlayerX->Text = "0";
		Draw->Text = "0";
		Win->Text = "";
		Declaration->Text = "";
		count = 0;
		checker = false;

		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
		player->SoundLocation = "Sound.wav";
		player->Load();
		player->PlayLooping();

		A->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		B->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		C->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		D->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		E->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		F->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		G->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		H->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
		I->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// To close
		Close();

	}

		   // Components of form
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PlayerX_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PlayerO_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Win_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Declaration_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Application::Exit();
	}
};
}