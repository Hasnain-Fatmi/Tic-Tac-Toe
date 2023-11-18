#pragma once
#include <cstdlib>
#include <ctime>

static int centre[10] = { 0, 0, 8, 7, 6, 0, 4, 3, 2, 3 };
static int corner[10] = { 0, 2, 4, 6, 8, 0, 2, 4, 6, 8 };
static int edge[10] = { 0, 3, 3, 9, 1, 0, 9, 1, 7, 7 };

int turn = 0;
char mode = 'E';
int P = 0;
int C = 0;
int D = 0;
namespace TicTacToeFirstAttempt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Auto
	/// </summary>
	public ref class Auto : public System::Windows::Forms::Form
	{
	public:
		Auto(void)
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
		~Auto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Reset;
	protected:
	private: System::Windows::Forms::GroupBox^ Mode;
	private: System::Windows::Forms::RadioButton^ VSCH;
	private: System::Windows::Forms::RadioButton^ VSCE;


	private: System::Windows::Forms::Button^ G3;
	private: System::Windows::Forms::Button^ G2;
	private: System::Windows::Forms::Button^ G1;
	private: System::Windows::Forms::Button^ G6;
	private: System::Windows::Forms::Button^ G5;
	private: System::Windows::Forms::Button^ G4;
	private: System::Windows::Forms::Button^ G9;
	private: System::Windows::Forms::Button^ G8;
	private: System::Windows::Forms::Button^ G7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Auto::typeid));
			this->Reset = (gcnew System::Windows::Forms::Button());
			this->Mode = (gcnew System::Windows::Forms::GroupBox());
			this->VSCH = (gcnew System::Windows::Forms::RadioButton());
			this->VSCE = (gcnew System::Windows::Forms::RadioButton());
			this->G3 = (gcnew System::Windows::Forms::Button());
			this->G2 = (gcnew System::Windows::Forms::Button());
			this->G1 = (gcnew System::Windows::Forms::Button());
			this->G6 = (gcnew System::Windows::Forms::Button());
			this->G5 = (gcnew System::Windows::Forms::Button());
			this->G4 = (gcnew System::Windows::Forms::Button());
			this->G9 = (gcnew System::Windows::Forms::Button());
			this->G8 = (gcnew System::Windows::Forms::Button());
			this->G7 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Mode->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Reset
			// 
			this->Reset->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->Reset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Reset->Location = System::Drawing::Point(5, 433);
			this->Reset->Margin = System::Windows::Forms::Padding(4);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(147, 51);
			this->Reset->TabIndex = 23;
			this->Reset->Text = L"Reset Grid";
			this->Reset->UseVisualStyleBackColor = false;
			this->Reset->Click += gcnew System::EventHandler(this, &Auto::Reset_Click);
			// 
			// Mode
			// 
			this->Mode->BackColor = System::Drawing::Color::Black;
			this->Mode->Controls->Add(this->VSCH);
			this->Mode->Controls->Add(this->VSCE);
			this->Mode->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->Mode->Location = System::Drawing::Point(111, 13);
			this->Mode->Margin = System::Windows::Forms::Padding(4);
			this->Mode->Name = L"Mode";
			this->Mode->Padding = System::Windows::Forms::Padding(4);
			this->Mode->Size = System::Drawing::Size(225, 105);
			this->Mode->TabIndex = 22;
			this->Mode->TabStop = false;
			this->Mode->Text = L"Game Mode";
			// 
			// VSCH
			// 
			this->VSCH->AutoSize = true;
			this->VSCH->Location = System::Drawing::Point(20, 74);
			this->VSCH->Margin = System::Windows::Forms::Padding(4);
			this->VSCH->Name = L"VSCH";
			this->VSCH->Size = System::Drawing::Size(190, 20);
			this->VSCH->TabIndex = 1;
			this->VSCH->Text = L"Player VS Computer (Hard)";
			this->VSCH->UseVisualStyleBackColor = true;
			this->VSCH->CheckedChanged += gcnew System::EventHandler(this, &Auto::VSCH_CheckedChanged);
			// 
			// VSCE
			// 
			this->VSCE->AutoSize = true;
			this->VSCE->Checked = true;
			this->VSCE->Location = System::Drawing::Point(21, 32);
			this->VSCE->Margin = System::Windows::Forms::Padding(4);
			this->VSCE->Name = L"VSCE";
			this->VSCE->Size = System::Drawing::Size(191, 20);
			this->VSCE->TabIndex = 0;
			this->VSCE->TabStop = true;
			this->VSCE->Text = L"Player VS Computer (Easy)";
			this->VSCE->UseVisualStyleBackColor = true;
			this->VSCE->CheckedChanged += gcnew System::EventHandler(this, &Auto::VSCE_CheckedChanged);
			// 
			// G3
			// 
			this->G3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->G3->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 22.2F, System::Drawing::FontStyle::Bold));
			this->G3->Location = System::Drawing::Point(267, 307);
			this->G3->Margin = System::Windows::Forms::Padding(4);
			this->G3->Name = L"G3";
			this->G3->Size = System::Drawing::Size(75, 75);
			this->G3->TabIndex = 20;
			this->G3->Text = L" ";
			this->G3->UseVisualStyleBackColor = false;
			this->G3->Click += gcnew System::EventHandler(this, &Auto::G3_Click);
			// 
			// G2
			// 
			this->G2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->G2->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 22.2F, System::Drawing::FontStyle::Bold));
			this->G2->Location = System::Drawing::Point(189, 307);
			this->G2->Margin = System::Windows::Forms::Padding(4);
			this->G2->Name = L"G2";
			this->G2->Size = System::Drawing::Size(75, 75);
			this->G2->TabIndex = 19;
			this->G2->Text = L" ";
			this->G2->UseVisualStyleBackColor = false;
			this->G2->Click += gcnew System::EventHandler(this, &Auto::G2_Click);
			// 
			// G1
			// 
			this->G1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->G1->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 22.2F, System::Drawing::FontStyle::Bold));
			this->G1->Location = System::Drawing::Point(111, 307);
			this->G1->Margin = System::Windows::Forms::Padding(4);
			this->G1->Name = L"G1";
			this->G1->Size = System::Drawing::Size(75, 75);
			this->G1->TabIndex = 18;
			this->G1->Text = L" ";
			this->G1->UseVisualStyleBackColor = false;
			this->G1->Click += gcnew System::EventHandler(this, &Auto::G1_Click);
			// 
			// G6
			// 
			this->G6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->G6->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 22.2F, System::Drawing::FontStyle::Bold));
			this->G6->Location = System::Drawing::Point(267, 229);
			this->G6->Margin = System::Windows::Forms::Padding(4);
			this->G6->Name = L"G6";
			this->G6->Size = System::Drawing::Size(75, 75);
			this->G6->TabIndex = 17;
			this->G6->Text = L" ";
			this->G6->UseVisualStyleBackColor = false;
			this->G6->Click += gcnew System::EventHandler(this, &Auto::G6_Click);
			// 
			// G5
			// 
			this->G5->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->G5->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 22.2F, System::Drawing::FontStyle::Bold));
			this->G5->Location = System::Drawing::Point(189, 229);
			this->G5->Margin = System::Windows::Forms::Padding(4);
			this->G5->Name = L"G5";
			this->G5->Size = System::Drawing::Size(75, 75);
			this->G5->TabIndex = 16;
			this->G5->Text = L" ";
			this->G5->UseVisualStyleBackColor = false;
			this->G5->Click += gcnew System::EventHandler(this, &Auto::G5_Click);
			// 
			// G4
			// 
			this->G4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->G4->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 22.2F, System::Drawing::FontStyle::Bold));
			this->G4->Location = System::Drawing::Point(111, 229);
			this->G4->Margin = System::Windows::Forms::Padding(4);
			this->G4->Name = L"G4";
			this->G4->Size = System::Drawing::Size(75, 75);
			this->G4->TabIndex = 15;
			this->G4->Text = L" ";
			this->G4->UseVisualStyleBackColor = false;
			this->G4->Click += gcnew System::EventHandler(this, &Auto::G4_Click);
			// 
			// G9
			// 
			this->G9->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->G9->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 22.2F, System::Drawing::FontStyle::Bold));
			this->G9->Location = System::Drawing::Point(267, 151);
			this->G9->Margin = System::Windows::Forms::Padding(4);
			this->G9->Name = L"G9";
			this->G9->Size = System::Drawing::Size(75, 75);
			this->G9->TabIndex = 14;
			this->G9->Text = L" ";
			this->G9->UseVisualStyleBackColor = false;
			this->G9->Click += gcnew System::EventHandler(this, &Auto::G9_Click);
			// 
			// G8
			// 
			this->G8->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->G8->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 22.2F, System::Drawing::FontStyle::Bold));
			this->G8->Location = System::Drawing::Point(189, 151);
			this->G8->Margin = System::Windows::Forms::Padding(4);
			this->G8->Name = L"G8";
			this->G8->Size = System::Drawing::Size(75, 75);
			this->G8->TabIndex = 13;
			this->G8->Text = L" ";
			this->G8->UseVisualStyleBackColor = false;
			this->G8->Click += gcnew System::EventHandler(this, &Auto::G8_Click);
			// 
			// G7
			// 
			this->G7->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->G7->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 22.2F, System::Drawing::FontStyle::Bold));
			this->G7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->G7->Location = System::Drawing::Point(111, 151);
			this->G7->Margin = System::Windows::Forms::Padding(4);
			this->G7->Name = L"G7";
			this->G7->Size = System::Drawing::Size(75, 75);
			this->G7->TabIndex = 12;
			this->G7->Text = L" ";
			this->G7->UseVisualStyleBackColor = false;
			this->G7->Click += gcnew System::EventHandler(this, &Auto::G7_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(175, 433);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 49);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Auto::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(471, 480);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(328, 434);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 49);
			this->button3->TabIndex = 26;
			this->button3->Text = L"EXIT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Auto::button3_Click);
			// 
			// Auto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(471, 485);
			this->ControlBox = false;
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Reset);
			this->Controls->Add(this->Mode);
			this->Controls->Add(this->G3);
			this->Controls->Add(this->G2);
			this->Controls->Add(this->G1);
			this->Controls->Add(this->G6);
			this->Controls->Add(this->G5);
			this->Controls->Add(this->G4);
			this->Controls->Add(this->G9);
			this->Controls->Add(this->G8);
			this->Controls->Add(this->G7);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Auto";
			this->Text = L"TIC TAC TOE";
			this->Load += gcnew System::EventHandler(this, &Auto::Auto_Load);
			this->Mode->ResumeLayout(false);
			this->Mode->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		void resetG()
		{
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Sound.wav";
			player->Load();
			player->PlayLooping();

			G1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			G2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			G3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			G4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			G5->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			G6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			G7->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			G8->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			G9->BackColor = System::Drawing::SystemColors::GradientActiveCaption;

			turn = 0;

			centre[0] = 0;
			centre[1] = 0;
			centre[2] = 8;
			centre[3] = 7;
			centre[4] = 6;
			centre[5] = 0;
			centre[6] = 4;
			centre[7] = 3;
			centre[8] = 2;
			centre[9] = 3;

			corner[0] = 0;
			corner[1] = 2;
			corner[2] = 4;
			corner[3] = 6;
			corner[4] = 8;
			corner[5] = 0;
			corner[6] = 2;
			corner[7] = 4;
			corner[8] = 6;
			corner[9] = 8;

			edge[0] = 0;
			edge[1] = 3;
			edge[2] = 3;
			edge[3] = 9;
			edge[4] = 1;
			edge[5] = 0;
			edge[6] = 9;
			edge[7] = 1;
			edge[8] = 7;
			edge[9] = 7;

			G1->Text = L" ";
			G2->Text = L" ";
			G3->Text = L" ";
			G4->Text = L" ";
			G5->Text = L" ";
			G6->Text = L" ";
			G7->Text = L" ";
			G8->Text = L" ";
			G9->Text = L" ";
		}

		bool checkwin()
		{
			if ((G1->Text == L"X" && G2->Text == L"X" && G3->Text == L"X") || (G4->Text == L"X" && G5->Text == L"X" && G6->Text == L"X") || (G7->Text == L"X" && G8->Text == L"X" && G9->Text == L"X") || (G1->Text == L"X" && G4->Text == L"X" && G7->Text == L"X") || (G2->Text == L"X" && G5->Text == L"X" && G8->Text == L"X") || (G3->Text == L"X" && G6->Text == L"X" && G9->Text == L"X") || (G1->Text == L"X" && G5->Text == L"X" && G9->Text == L"X") || (G3->Text == L"X" && G5->Text == L"X" && G7->Text == L"X"))
			{
				System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
				player->SoundLocation = "Celebrate.wav";
				player->Load();
				player->PlayLooping();
				MessageBox::Show(L"You have won the game.\nCongratulations!", L"Outcome of the Game", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

			}
			else if ((G1->Text == L"O" && G2->Text == L"O" && G3->Text == L"O") || (G4->Text == L"O" && G5->Text == L"O" && G6->Text == L"O") || (G7->Text == L"O" && G8->Text == L"O" && G9->Text == L"O") || (G1->Text == L"O" && G4->Text == L"O" && G7->Text == L"O") || (G2->Text == L"O" && G5->Text == L"O" && G8->Text == L"O") || (G3->Text == L"O" && G6->Text == L"O" && G9->Text == L"O") || (G1->Text == L"O" && G5->Text == L"O" && G9->Text == L"O") || (G3->Text == L"O" && G5->Text == L"O" && G7->Text == L"O"))
			{
				System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
				player->SoundLocation = "infinity.wav";
				player->Load();
				player->PlayLooping();
				MessageBox::Show(L"The computer has won the game.\nBetter luck next time, human!", L"Outcome of the Game", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

			}
			else if (turn == 9)
			{
				System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
				player->SoundLocation = "Sound1.wav";
				player->Load();
				player->PlayLooping();
				G1->BackColor = System::Drawing::Color::MistyRose;
				G2->BackColor = System::Drawing::Color::MistyRose;
				G3->BackColor = System::Drawing::Color::MistyRose;
				G4->BackColor = System::Drawing::Color::MistyRose;
				G5->BackColor = System::Drawing::Color::MistyRose;
				G6->BackColor = System::Drawing::Color::MistyRose;
				G7->BackColor = System::Drawing::Color::MistyRose;
				G8->BackColor = System::Drawing::Color::MistyRose;
				G9->BackColor = System::Drawing::Color::MistyRose;

				MessageBox::Show(L"The game has been drawn!", L"Outcome of the Game", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
			else
			{
				return false;
			}
			return true;
		}

		void endturn()
		{
			if (checkwin() == true)
			{
				resetG();
			}
			turn++;

			if (turn % 2 == 0 && mode == 'E')
			{
				computereasy();
				endturn();
			}
			else if (turn % 2 == 0 && mode == 'H')
			{
				computerhard();
				endturn();
			}
		}

		void computereasy()
		{
			int choice = 0;

			// two second delay here

			while (true)
			{
				choice = 1 + rand() % 9;

				if (computerturn(choice) == true)
					break;
				else
					continue;
			}

			return;
		}

		void computerhard()
		{
			int choice = 0;
			static int option;
			bool done = false;

			// two second delay here

			if (turn == 2)
			{
				if (isfilled(5))
					option = 1;
				else if (isfilled(1) || isfilled(3) || isfilled(7) || isfilled(9))
				{
					option = 2;
					if (isfilled(1))
						corner[1] = 0;
					else if (isfilled(3))
						corner[3] = 0;
					else if (isfilled(7))
						corner[7] = 0;
					else if (isfilled(9))
						corner[9] = 0;
				}
				else
				{
					option = 3;
					if (isfilled(2))
					{
						edge[2] = 0;
						edge[8] = 7;
					}
					else if (isfilled(4))
					{
						edge[4] = 0;
						edge[6] = 9;
					}
					else if (isfilled(6))
					{
						edge[6] = 0;
						edge[4] = 1;
					}
					else if (isfilled(8))
					{
						edge[8] = 0;
						edge[2] = 3;
					}
				}
			}

			if (option == 1)
			{
				G1->Text = L"O";
				option = 11;
			}
			else if (option == 2)
			{
				G5->Text = L"O";
				option = 21;
			}
			else if (option == 3)
			{
				G5->Text = L"O";
				option = 31;
			}
			else if (option == 11)
			{
				if (centrewin() != 0)
				{
					(computerturn(centrewin()));
				}
				else
				{
					for (int i = 1; i < 10; i++)
					{
						if (centre[i] != 0 && isfilled(i))
						{
							if (computerturn(centre[i]))
							{
								done = true;
								centre[i] = 0;
								centre[centre[i]] = 0;
								if (i == 9)
								{
									centre[4] = 2;
									centre[6] = 2;
									centre[7] = 2;
									centre[8] = 2;
								}
								if (i == 2 && (centre[4] == 2 || centre[8] == 2))
								{
									centre[4] = 6;
									centre[6] = 4;
									centre[7] = 4;
								}
								break;
							}
						}
					}

					if (done == false)
					{
						computereasy();
						for (int i = 1; i < 10; i++)
							if (centre[i] != 0 && isfilled(i))
								centre[i] = 0;
					}
				}
			}
			else if (option == 21)
			{
				if (nearwin() != 0)
				{
					(computerturn(nearwin()));
				}
				else if (blockwin() != 0)
				{
					(computerturn(blockwin()));
					for (int i = 1; i < 10; i++)
						if (corner[i] != 0 && isfilled(i))
							corner[i] = 0;
					corner[blockwin()] = 0;
				}
				else
				{
					for (int i = 1; i < 10; i++)
					{
						if (corner[i] != 0 && isfilled(i))
						{
							if (computerturn(corner[i]))
							{
								done = true;
								corner[i] = 0;
								corner[corner[i]] = 0;

								for (int j = 1; j < 10; j++)
								{
									if (corner[j] == i || corner[j] == corner[i])
										for (int k = 1; k < 20; k++)
											if (corner[k % 10] != 0 && (k % 2) == (j % 2) && corner[k % 10] != corner[j])
												corner[j] = corner[k % 10];
								}

								break;
							}
						}
					}

					if (done == false)
					{
						computereasy();
						for (int i = 1; i < 10; i++)
							if (corner[i] != 0 && isfilled(i))
								corner[i] = 0;
					}
				}
			}
			else if (option == 31)
			{
				if (nearwin() != 0)
				{
					(computerturn(nearwin()));
				}
				else if (blockwin() != 0)
				{
					(computerturn(blockwin()));
					for (int i = 1; i < 10; i++)
						if (edge[i] != 0 && isfilled(i))
							edge[i] = 0;
					edge[blockwin()] = 0;
				}
				else
				{
					for (int i = 1; i < 10; i++)
					{
						if (centre[i] != 0 && isfilled(i))
						{
							if (computerturn(corner[i]))
							{
								done = true;
								corner[i] = 0;
								corner[corner[i]] = 0;

								for (int j = 1; j < 10; j++)
								{
									if (corner[j] == i || corner[j] == corner[i])
										for (int k = 1; k < 20; k++)
											if (corner[k % 10] != 0 && (k % 2) == (j % 2) && corner[k % 10] != corner[j])
												corner[j] = corner[k % 10];
								}

								break;
							}
						}
					}

					if (done == false)
					{
						computereasy();
						for (int i = 1; i < 10; i++)
							if (edge[i] != 0 && isfilled(i))
								edge[i] = 0;
					}
				}
			}

			return;
		}



		int centrewin()
		{
			if (G1->Text == L"O" && G3->Text == L"O" && G2->Text == L" ")
				return 2;
			else if (G1->Text == L"O" && G2->Text == L"O" && G3->Text == L" ")
				return 3;
			else if (G2->Text == L"O" && G3->Text == L"O" && G1->Text == L" ")
				return 1;
			else if (G1->Text == L"O" && G7->Text == L"O" && G4->Text == L" ")
				return 4;
			else if (G1->Text == L"O" && G4->Text == L"O" && G7->Text == L" ")
				return 7;
			else if (G4->Text == L"O" && G7->Text == L"O" && G1->Text == L" ")
				return 1;
			else if (G3->Text == L"O" && G6->Text == L"O" && G9->Text == L" ")
				return 9;
			else if (G3->Text == L"O" && G9->Text == L"O" && G6->Text == L" ")
				return 6;
			else if (G6->Text == L"O" && G9->Text == L"O" && G3->Text == L" ")
				return 3;//
			else if (G7->Text == L"O" && G8->Text == L"O" && G9->Text == L" ")
				return 9;
			else if (G7->Text == L"O" && G9->Text == L"O" && G8->Text == L" ")
				return 8;
			else if (G8->Text == L"O" && G9->Text == L"O" && G7->Text == L" ")
				return 7;
			else
				return 0;
		}

		int nearwin()
		{
			if (centrewin() != 0)
				return centrewin();
			else if (G4->Text == L"O" && G5->Text == L"O" && G6->Text == L" ")
				return 6;
			else if (G4->Text == L"O" && G6->Text == L"O" && G5->Text == L" ")
				return 5;
			else if (G5->Text == L"O" && G6->Text == L"O" && G4->Text == L" ")
				return 4;
			else if (G2->Text == L"O" && G5->Text == L"O" && G8->Text == L" ")
				return 8;
			else if (G2->Text == L"O" && G8->Text == L"O" && G5->Text == L" ")
				return 5;
			else if (G5->Text == L"O" && G8->Text == L"O" && G2->Text == L" ")
				return 2;
			else if (G1->Text == L"O" && G5->Text == L"O" && G9->Text == L" ")
				return 9;
			else if (G1->Text == L"O" && G9->Text == L"O" && G5->Text == L" ")
				return 5;
			else if (G5->Text == L"O" && G1->Text == L"O" && G9->Text == L" ")
				return 9;
			else if (G3->Text == L"O" && G5->Text == L"O" && G7->Text == L" ")
				return 7;
			else if (G3->Text == L"O" && G7->Text == L"O" && G5->Text == L" ")
				return 5;
			else if (G5->Text == L"O" && G7->Text == L"O" && G3->Text == L" ")
				return 3;
			else
				return 0;
		}

		int blockwin()
		{
			if (G1->Text == L"X" && G3->Text == L"X" && G2->Text == L" ")
				return 2;
			else if (G1->Text == L"X" && G2->Text == L"X" && G3->Text == L" ")
				return 3;
			else if (G2->Text == L"X" && G3->Text == L"X" && G1->Text == L" ")
				return 1;
			else if (G1->Text == L"X" && G7->Text == L"X" && G4->Text == L" ")
				return 4;
			else if (G1->Text == L"X" && G4->Text == L"X" && G7->Text == L" ")
				return 7;
			else if (G4->Text == L"X" && G7->Text == L"X" && G1->Text == L" ")
				return 1;
			else if (G3->Text == L"X" && G6->Text == L"X" && G9->Text == L" ")
				return 9;
			else if (G3->Text == L"X" && G9->Text == L"X" && G6->Text == L" ")
				return 6;
			else if (G6->Text == L"X" && G9->Text == L"X" && G3->Text == L" ")
				return 3;//
			else if (G7->Text == L"X" && G8->Text == L"X" && G9->Text == L" ")
				return 9;
			else if (G7->Text == L"X" && G9->Text == L"X" && G8->Text == L" ")
				return 8;
			else if (G8->Text == L"X" && G9->Text == L"X" && G7->Text == L" ")
				return 7;
			else if (G4->Text == L"X" && G5->Text == L"X" && G6->Text == L" ")
				return 6;
			else if (G4->Text == L"X" && G6->Text == L"X" && G5->Text == L" ")
				return 5;
			else if (G5->Text == L"X" && G6->Text == L"X" && G4->Text == L" ")
				return 4;
			else if (G2->Text == L"X" && G5->Text == L"X" && G8->Text == L" ")
				return 8;
			else if (G2->Text == L"X" && G8->Text == L"X" && G5->Text == L" ")
				return 5;
			else if (G5->Text == L"X" && G8->Text == L"X" && G2->Text == L" ")
				return 2;
			else if (G1->Text == L"X" && G5->Text == L"X" && G9->Text == L" ")
				return 9;
			else if (G1->Text == L"X" && G9->Text == L"X" && G5->Text == L" ")
				return 5;
			else if (G5->Text == L"X" && G1->Text == L"X" && G9->Text == L" ")
				return 9;
			else if (G3->Text == L"X" && G5->Text == L"X" && G7->Text == L" ")
				return 7;
			else if (G3->Text == L"X" && G7->Text == L"X" && G5->Text == L" ")
				return 5;
			else if (G5->Text == L"X" && G7->Text == L"X" && G3->Text == L" ")
				return 3;
			else
				return 0;
		}

		bool isfilled(int x)
		{
			if ((x == 1 && G1->Text == L"X") || (x == 2 && G2->Text == L"X") || (x == 3 && G3->Text == L"X") || (x == 4 && G4->Text == L"X") || (x == 5 && G5->Text == L"X") || (x == 6 && G6->Text == L"X") || (x == 7 && G7->Text == L"X") || (x == 8 && G8->Text == L"X") || (x == 9 && G9->Text == L"X"))
				return true;
			else
				return false;
		}

		bool computerturn(int x)
		{
			if (x == 1 && G1->Text == L" ")
				G1->Text = L"O";
			else if (x == 2 && G2->Text == L" ")
				G2->Text = L"O";
			else if (x == 3 && G3->Text == L" ")
				G3->Text = L"O";
			else if (x == 4 && G4->Text == L" ")
				G4->Text = L"O";
			else if (x == 5 && G5->Text == L" ")
				G5->Text = L"O";
			else if (x == 6 && G6->Text == L" ")
				G6->Text = L"O";
			else if (x == 7 && G7->Text == L" ")
				G7->Text = L"O";
			else if (x == 8 && G8->Text == L" ")
				G8->Text = L"O";
			else if (x == 9 && G9->Text == L" ")
				G9->Text = L"O";
			else
				return false;

			return true;
		}

		void wrongbox()
		{
			MessageBox::Show(L"This square is already filled in!\nTry another one.", L"Invalid Selection!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			turn--;
		}

		void wrongturn()
		{
			MessageBox::Show(L"This is the turn of the computer!\nWait for your turn.", L"Out of turn!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			turn--;
		}

	private: System::Void Auto_Load(System::Object^ sender, System::EventArgs^ e)
	{
		resetG();
		endturn();
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
		player->SoundLocation = "Sound.wav";
		player->Load();
		player->PlayLooping();
	}
	private: System::Void G7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (turn % 2 == 1)
			if (G7->Text == L" ")
				if (turn % 2 == 1)
					G7->Text = L"X";
				else
					G7->Text = L"O";
			else
				wrongbox();
		else
			wrongturn();

		endturn();
	}
	private: System::Void G8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (turn % 2 == 1)
			if (G8->Text == L" ")
				if (turn % 2 == 1)
					G8->Text = L"X";
				else
					G8->Text = L"O";
			else
				wrongbox();
		else
			wrongturn();

		endturn();
	}

	private: System::Void G9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (turn % 2 == 1)
			if (G9->Text == L" ")
				if (turn % 2 == 1)
					G9->Text = L"X";
				else
					G9->Text = L"O";
			else
				wrongbox();
		else
			wrongturn();

		endturn();
	}

	private: System::Void G4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (turn % 2 == 1)
			if (G4->Text == L" ")
				if (turn % 2 == 1)
					G4->Text = L"X";
				else
					G4->Text = L"O";
			else
				wrongbox();
		else
			wrongturn();

		endturn();
	}


	private: System::Void G5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (turn % 2 == 1)
			if (G5->Text == L" ")
				if (turn % 2 == 1)
					G5->Text = L"X";
				else
					G5->Text = L"O";
			else
				wrongbox();
		else
			wrongturn();

		endturn();
	}

	private: System::Void G6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (turn % 2 == 1)
			if (G6->Text == L" ")
				if (turn % 2 == 1)
					G6->Text = L"X";
				else
					G6->Text = L"O";
			else
				wrongbox();
		else
			wrongturn();

		endturn();
	}

	private: System::Void G1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (turn % 2 == 1)
			if (G1->Text == L" ")
				if (turn % 2 == 1)
					G1->Text = L"X";
				else
					G1->Text = L"O";
			else
				wrongbox();
		else
			wrongturn();

		endturn();
	}

	private: System::Void G2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (turn % 2 == 1)
			if (G2->Text == L" ")
				if (turn % 2 == 1)
					G2->Text = L"X";
				else
					G2->Text = L"O";
			else
				wrongbox();
		else
			wrongturn();

		endturn();
	}

	private: System::Void G3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (turn % 2 == 1)
			if (G3->Text == L" ")
				if (turn % 2 == 1)
					G3->Text = L"X";
				else
					G3->Text = L"O";
			else
				wrongbox();
		else
			wrongturn();

		endturn();
	}

	private: System::Void VSCE_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		mode = 'E';
		resetG();
		endturn();
	}
	private: System::Void VSCH_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		mode = 'H';
		resetG();
		endturn();
	}
	private: System::Void Reset_Click(System::Object^ sender, System::EventArgs^ e)
	{
		resetG();
		endturn();
	}
	private: System::Void Info_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Turn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Application::Exit();
	}
};
}