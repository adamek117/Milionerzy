#pragma once
#include <iostream>
#include <fstream>
#include <time.h>
#include <locale.h>
#include <algorithm>
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	int pamiec[15]{};
	string zasady[6]{};
	string tab[6]{};
	int licznikPyt{};
	struct pytania
	{
		int randomXP;
		int nrPytania;
		bool operator < (const pytania& x)const //zdefiniowanie zachowania si�
		{                //operatora < potrzebnego przy sortowaniu
			return randomXP > x.randomXP;
		}
	};
	void odczytPliku(string nazwaPliku, int numerZestawu)
	{
		fstream plik(nazwaPliku);
		if (plik.is_open())
		{
			int licznik{};
			string linia;
			while (!plik.eof())
			{
				getline(plik, linia);
				tab[0] = linia;

				getline(plik, linia);
				tab[1] = linia;

				getline(plik, linia);
				tab[2] = linia;

				getline(plik, linia);
				tab[3] = linia;

				getline(plik, linia);
				tab[4] = linia;

				getline(plik, linia);
				tab[5] = linia;
				if (licznik == numerZestawu)
				{
					break;
				}
				licznik++;
			}
		}
	}

	/// <summary>
	/// Zusammenfassung f�r Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{

		//	String data;

	public:

		Form1(void)
		{
			InitializeComponent();



			//
			//TODO: Konstruktorcode hier hinzuf�gen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nowaGraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wyjscieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ oProgramieToolStripMenuItem;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ToolStripMenuItem^ ko�aRatunkoweToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;




	private: System::Windows::Forms::ToolStripMenuItem^ telefonDoPrzyjacielaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ publiczno��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ instrukcjaDoGryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zasadyGryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
		/// </summary>

		void ladujPytanie(int numerPytania)
		{
			
			odczytPliku("PytaniaOdpowiedzi.txt", numerPytania);
			this->button1->Text = gcnew String(tab[1].c_str());
			this->button2->Text = gcnew String(tab[2].c_str());
			this->button3->Text = gcnew String(tab[3].c_str());
			this->button4->Text = gcnew String(tab[4].c_str());
			this->textBox1->Text = gcnew String(tab[0].c_str());
			this->button2->BackColor = System::Drawing::Color::Gainsboro;
			this->button1->BackColor = System::Drawing::Color::Gainsboro;
			this->button3->BackColor = System::Drawing::Color::Gainsboro;
			this->button4->BackColor = System::Drawing::Color::Gainsboro;
			if (licznikPyt == 11)
			{
				this->button1->Text = gcnew String(tab[1].c_str());
				this->button2->Text = gcnew String(tab[2].c_str());
				this->button3->Text = gcnew String(tab[3].c_str());
				this->button4->Text = gcnew String(tab[4].c_str());
				this->textBox1->Text ="!PYTANIE ZA MILION!: \r\n" + gcnew String(tab[0].c_str());
				this->button2->BackColor = System::Drawing::Color::Gainsboro;
				this->button1->BackColor = System::Drawing::Color::Gainsboro;
				this->button3->BackColor = System::Drawing::Color::Gainsboro;
				this->button4->BackColor = System::Drawing::Color::Gainsboro;
			}
		}
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nowaGraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wyjscieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ko�aRatunkoweToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->telefonDoPrzyjacielaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->publiczno��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->instrukcjaDoGryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zasadyGryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(22, 196);
			this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(378, 100);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(22, 31);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBox1->MaxLength = 0;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(772, 150);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Witaj w Milionerach!\r\nPrzed rozpocz�ciem gry wejd� w zak�adke \"O programie\" i zap"
				L"oznaj si� z instrukcj� oraz zasadami gry.\r\nJe�li znasz zasady i dzia�anie progra"
				L"mu wybierz \"Nowa Gra\" z menu \"Gra\".";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(416, 196);
			this->button2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(378, 100);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(22, 311);
			this->button3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(378, 100);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->plikToolStripMenuItem,
					this->ko�aRatunkoweToolStripMenuItem, this->oProgramieToolStripMenuItem, this->toolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(820, 28);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nowaGraToolStripMenuItem,
					this->wyjscieToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->plikToolStripMenuItem->Text = L"Gra";
			// 
			// nowaGraToolStripMenuItem
			// 
			this->nowaGraToolStripMenuItem->Name = L"nowaGraToolStripMenuItem";
			this->nowaGraToolStripMenuItem->Size = System::Drawing::Size(157, 26);
			this->nowaGraToolStripMenuItem->Text = L"Nowa gra";
			this->nowaGraToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::nowaGraToolStripMenuItem_Click);
			// 
			// wyjscieToolStripMenuItem
			// 
			this->wyjscieToolStripMenuItem->Name = L"wyjscieToolStripMenuItem";
			this->wyjscieToolStripMenuItem->Size = System::Drawing::Size(157, 26);
			this->wyjscieToolStripMenuItem->Text = L"Wyjscie";
			this->wyjscieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::wyjscieToolStripMenuItem_Click);
			// 
			// ko�aRatunkoweToolStripMenuItem
			// 
			this->ko�aRatunkoweToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem2,
					this->telefonDoPrzyjacielaToolStripMenuItem, this->publiczno��ToolStripMenuItem
			});
			this->ko�aRatunkoweToolStripMenuItem->Name = L"ko�aRatunkoweToolStripMenuItem";
			this->ko�aRatunkoweToolStripMenuItem->Size = System::Drawing::Size(126, 24);
			this->ko�aRatunkoweToolStripMenuItem->Text = L"Ko�a ratunkowe";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(238, 26);
			this->toolStripMenuItem2->Text = L"50/50";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem2_Click);
			// 
			// telefonDoPrzyjacielaToolStripMenuItem
			// 
			this->telefonDoPrzyjacielaToolStripMenuItem->Name = L"telefonDoPrzyjacielaToolStripMenuItem";
			this->telefonDoPrzyjacielaToolStripMenuItem->Size = System::Drawing::Size(238, 26);
			this->telefonDoPrzyjacielaToolStripMenuItem->Text = L"Telefon do przyjaciela";
			this->telefonDoPrzyjacielaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::telefonDoPrzyjacielaToolStripMenuItem_Click);
			// 
			// publiczno��ToolStripMenuItem
			// 
			this->publiczno��ToolStripMenuItem->Name = L"publiczno��ToolStripMenuItem";
			this->publiczno��ToolStripMenuItem->Size = System::Drawing::Size(238, 26);
			this->publiczno��ToolStripMenuItem->Text = L"Publiczno��";
			this->publiczno��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::publiczno��ToolStripMenuItem_Click);
			// 
			// oProgramieToolStripMenuItem
			// 
			this->oProgramieToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->instrukcjaDoGryToolStripMenuItem,
					this->zasadyGryToolStripMenuItem
			});
			this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
			this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(108, 24);
			this->oProgramieToolStripMenuItem->Text = L"O programie";
			this->oProgramieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::oProgramieToolStripMenuItem_Click);
			// 
			// instrukcjaDoGryToolStripMenuItem
			// 
			this->instrukcjaDoGryToolStripMenuItem->Name = L"instrukcjaDoGryToolStripMenuItem";
			this->instrukcjaDoGryToolStripMenuItem->Size = System::Drawing::Size(201, 26);
			this->instrukcjaDoGryToolStripMenuItem->Text = L"Instrukcja do gry";
			this->instrukcjaDoGryToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::instrukcjaDoGryToolStripMenuItem_Click);
			// 
			// zasadyGryToolStripMenuItem
			// 
			this->zasadyGryToolStripMenuItem->Name = L"zasadyGryToolStripMenuItem";
			this->zasadyGryToolStripMenuItem->Size = System::Drawing::Size(201, 26);
			this->zasadyGryToolStripMenuItem->Text = L"Zasady gry";
			this->zasadyGryToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::zasadyGryToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(27, 24);
			this->toolStripMenuItem1->Text = L" ";
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(416, 311);
			this->button4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(378, 102);
			this->button4->TabIndex = 5;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Navy;
			this->ClientSize = System::Drawing::Size(820, 438);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"Form1";
			this->Text = L"Milionerzy";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Czy to twoja ostateczna odpowied�?", "Milionerzy", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			if (gcnew String(tab[1].c_str()) == gcnew String(tab[5].c_str()))
			{
				this->button1->BackColor = System::Drawing::Color::FromArgb(0, 255, 0);
				MessageBox::Show("Poprawna odpowied�", "Gratulacje");
				if (licznikPyt == 11)
				{
					MessageBox::Show("Gratulacje! Wygra�e� milion z�otych!", "Milionerzy");
					this->textBox1->Text = "Wybierz Nowa Gra je�li chcesz zagra� ponownie";
				}

				if (MessageBox::Show("Czy grasz dalej?", "Milionerzy", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
					if (licznikPyt == 10)
					{
						MessageBox::Show("Nast�pne pytanie jest o milion z�otych!", "Milionerzy", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						licznikPyt++;
						ladujPytanie(pamiec[licznikPyt]);
					}
					else
					{
						licznikPyt++;
						ladujPytanie(pamiec[licznikPyt]);
					}

				}
				else
				{
					if (MessageBox::Show("Wszystkie post�py zostan� utracone. Czy jeste� pewny?", " Milionerzy", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
					{
						Application::Exit();
					}
					else
					{
						licznikPyt++;
						ladujPytanie(pamiec[licznikPyt]);
						/*ladujPytanie(licznikPyt);*/
					}
				}
			}
			else
			{
				this->button1->BackColor = System::Drawing::Color::FromArgb(255, 0, 0);

				MessageBox::Show("Zla odpowied�", "Niestety");

				if (MessageBox::Show("Czy chcesz zagra� ponownie?", "Milionerzy", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
					licznikPyt = 0;
					srand(time(NULL));
					pytania pytanie[39]
					{
					{rand() % 100 + 1,1},
					{rand() % 100 + 1,2},
					{rand() % 100 + 1,3},
					{rand() % 100 + 1,4},
					{rand() % 100 + 1,5},
					{rand() % 100 + 1,6},
					{rand() % 100 + 1,7},
					{rand() % 100 + 1,8},
					{rand() % 100 + 1,9},
					{rand() % 100 + 1,10},
					{rand() % 100 + 1,11},
					{rand() % 100 + 1,12},
					{rand() % 100 + 1,13},
					{rand() % 100 + 1,14},
					{rand() % 100 + 1,15},
					{rand() % 100 + 1,16},
					{rand() % 100 + 1,17},
					{rand() % 100 + 1,18},
					{rand() % 100 + 1,19},
					{rand() % 100 + 1,20},
					{rand() % 100 + 1,21},
					{rand() % 100 + 1,22},
					{rand() % 100 + 1,23},
					{rand() % 100 + 1,24},
					{rand() % 100 + 1,25},
					{rand() % 100 + 1,26},
					{rand() % 100 + 1,27},
					{rand() % 100 + 1,28},
					{rand() % 100 + 1,29},
					{rand() % 100 + 1,30},
					{rand() % 100 + 1,31},
					{rand() % 100 + 1,32},
					{rand() % 100 + 1,33},
					{rand() % 100 + 1,34},
					{rand() % 100 + 1,35},
					{rand() % 100 + 1,36},
					{rand() % 100 + 1,37},
					{rand() % 100 + 1,38},
					{rand() % 100 + 1,39}
					};
					sort(pytanie, pytanie + 39);
					for (int i = 0; i < 12; i++)
					{
						pamiec[i] = pytanie[i].nrPytania;
					}
					//
					ladujPytanie(pamiec[licznikPyt]);
					this->button1->Enabled = true;
					this->button2->Enabled = true;
					this->button3->Enabled = true;
					this->button4->Enabled = true;
					this->toolStripMenuItem2->Enabled = true;
					this->telefonDoPrzyjacielaToolStripMenuItem->Enabled = true;
					this->publiczno��ToolStripMenuItem->Enabled = true;

				}
				else
				{
					if (MessageBox::Show("Jestes pewny?", "Milionerzy", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
					{
						Application::Exit();
					}
					else
					{
						MessageBox::Show("Kliknij ok, aby wrocic do gry", "Wyjscie");
						this->textBox1->Text = "Wybierz \"Nowa Gra\" z menu \"Gra\" je�li chcesz rozpocz�� gr�.";
						this->button1->Enabled = false;
						this->button2->Enabled = false;
						this->button3->Enabled = false;
						this->button4->Enabled = false;
					}
				}
			}
		}
	}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Czy to twoja ostateczna odpowied�?", "Milionerzy", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			if (gcnew String(tab[2].c_str()) == gcnew String(tab[5].c_str()))
			{
				this->button2->BackColor = System::Drawing::Color::FromArgb(0, 255, 0);

				MessageBox::Show("Poprawna odpowied�", "Gratulacje");
				if (licznikPyt == 11)
				{
					MessageBox::Show("Gratulacje! Wygra�e� milion z�otych!", "Milionerzy");
					this->textBox1->Text = "Wybierz Nowa Gra je�li chcesz zagra� ponownie";
				}

				if (MessageBox::Show("Czy grasz dalej?", "Milionerzy", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
					if (licznikPyt == 10)
					{
						MessageBox::Show("Nast�pne pytanie jest o milion z�otych!", "Milionerzy", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						licznikPyt++;
						ladujPytanie(pamiec[licznikPyt]);
					}
					
					else
					{
						licznikPyt++;
						ladujPytanie(pamiec[licznikPyt]);
					}
				}
				else
				{
					if (MessageBox::Show("Wszystkie post�py zostan� utracone. Czy jeste� pewny?", " Milionerzy", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
					{
						Application::Exit();
					}
					else
					{
						licznikPyt++;
						ladujPytanie(pamiec[licznikPyt]);
					}
				}
			}
			else
			{
				this->button2->BackColor = System::Drawing::Color::FromArgb(255, 0, 0);

				MessageBox::Show("Zla odpowied�", "Niestety");

				if (MessageBox::Show("Czy chcesz zagra� ponownie?", "Milionerzy", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
					licznikPyt = 0;
					srand(time(NULL));
					pytania pytanie[39]
					{
					{rand() % 100 + 1,1},
					{rand() % 100 + 1,2},
					{rand() % 100 + 1,3},
					{rand() % 100 + 1,4},
					{rand() % 100 + 1,5},
					{rand() % 100 + 1,6},
					{rand() % 100 + 1,7},
					{rand() % 100 + 1,8},
					{rand() % 100 + 1,9},
					{rand() % 100 + 1,10},
					{rand() % 100 + 1,11},
					{rand() % 100 + 1,12},
					{rand() % 100 + 1,13},
					{rand() % 100 + 1,14},
					{rand() % 100 + 1,15},
					{rand() % 100 + 1,16},
					{rand() % 100 + 1,17},
					{rand() % 100 + 1,18},
					{rand() % 100 + 1,19},
					{rand() % 100 + 1,20},
					{rand() % 100 + 1,21},
					{rand() % 100 + 1,22},
					{rand() % 100 + 1,23},
					{rand() % 100 + 1,24},
					{rand() % 100 + 1,25},
					{rand() % 100 + 1,26},
					{rand() % 100 + 1,27},
					{rand() % 100 + 1,28},
					{rand() % 100 + 1,29},
					{rand() % 100 + 1,30},
					{rand() % 100 + 1,31},
					{rand() % 100 + 1,32},
					{rand() % 100 + 1,33},
					{rand() % 100 + 1,34},
					{rand() % 100 + 1,35},
					{rand() % 100 + 1,36},
					{rand() % 100 + 1,37},
					{rand() % 100 + 1,38},
					{rand() % 100 + 1,39}
					};
					sort(pytanie, pytanie + 39);
					for (int i = 0; i < 12; i++)
					{
						pamiec[i] = pytanie[i].nrPytania;
					}
					//
					ladujPytanie(pamiec[licznikPyt]);
					this->button1->Enabled = true;
					this->button2->Enabled = true;
					this->button3->Enabled = true;
					this->button4->Enabled = true;
					this->toolStripMenuItem2->Enabled = true;
					this->telefonDoPrzyjacielaToolStripMenuItem->Enabled = true;
					this->publiczno��ToolStripMenuItem->Enabled = true;
				}
				else
				{
					if (MessageBox::Show("Jestes pewny?", "Milionerzy", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
					{
						Application::Exit();
					}
					else
					{
						MessageBox::Show("Kliknij ok, aby wrocic do gry", "Wyjscie");
						this->textBox1->Text = "Wybierz \"Nowa Gra\" z menu \"Gra\" je�li chcesz rozpocz�� gr�.";
						this->button1->Enabled = false;
						this->button2->Enabled = false;
						this->button3->Enabled = false;
						this->button4->Enabled = false;
					}

				}
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Czy to twoja ostateczna odpowied�?", "Milionerzy", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			if (gcnew String(tab[3].c_str()) == gcnew String(tab[5].c_str()))
			{
				this->button3->BackColor = System::Drawing::Color::FromArgb(0, 255, 0);
				MessageBox::Show("Poprawna odpowied�", "Gratulacje");
				if (licznikPyt == 11)
				{
					MessageBox::Show("Gratulacje! Wygra�e� milion z�otych!", "Milionerzy");
					this->textBox1->Text = "Wybierz Nowa Gra je�li chcesz zagra� ponownie";
				}
				if (MessageBox::Show("Czy grasz dalej?", "Milionerzy", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
					if (licznikPyt == 10)
					{
						MessageBox::Show("Nast�pne pytanie jest o milion z�otych!", "Milionerzy");
						licznikPyt++;
						ladujPytanie(pamiec[licznikPyt]);
					}
					
					else
					{
						licznikPyt++;
						ladujPytanie(pamiec[licznikPyt]);
					}

				}
				else
				{
					if (MessageBox::Show("Wszystkie post�py zostan� utracone. Czy jeste� pewny?", " Milionerzy", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
					{
						Application::Exit();
					}
					else
					{
						licznikPyt++;
						ladujPytanie(pamiec[licznikPyt]);
					}

				}
			}
			else
			{
				this->button3->BackColor = System::Drawing::Color::FromArgb(255, 0, 0);

				MessageBox::Show("Zla odpowied�", "Niestety");

				if (MessageBox::Show("Czy chcesz zagra� ponownie?", "Milionerzy", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
					licznikPyt = 0;
					srand(time(NULL));
					pytania pytanie[39]
					{
					{rand() % 100 + 1,1},
					{rand() % 100 + 1,2},
					{rand() % 100 + 1,3},
					{rand() % 100 + 1,4},
					{rand() % 100 + 1,5},
					{rand() % 100 + 1,6},
					{rand() % 100 + 1,7},
					{rand() % 100 + 1,8},
					{rand() % 100 + 1,9},
					{rand() % 100 + 1,10},
					{rand() % 100 + 1,11},
					{rand() % 100 + 1,12},
					{rand() % 100 + 1,13},
					{rand() % 100 + 1,14},
					{rand() % 100 + 1,15},
					{rand() % 100 + 1,16},
					{rand() % 100 + 1,17},
					{rand() % 100 + 1,18},
					{rand() % 100 + 1,19},
					{rand() % 100 + 1,20},
					{rand() % 100 + 1,21},
					{rand() % 100 + 1,22},
					{rand() % 100 + 1,23},
					{rand() % 100 + 1,24},
					{rand() % 100 + 1,25},
					{rand() % 100 + 1,26},
					{rand() % 100 + 1,27},
					{rand() % 100 + 1,28},
					{rand() % 100 + 1,29},
					{rand() % 100 + 1,30},
					{rand() % 100 + 1,31},
					{rand() % 100 + 1,32},
					{rand() % 100 + 1,33},
					{rand() % 100 + 1,34},
					{rand() % 100 + 1,35},
					{rand() % 100 + 1,36},
					{rand() % 100 + 1,37},
					{rand() % 100 + 1,38},
					{rand() % 100 + 1,39}
					};
					sort(pytanie, pytanie + 39);
					for (int i = 0; i < 12; i++)
					{
						pamiec[i] = pytanie[i].nrPytania;
					}
					//
					ladujPytanie(pamiec[licznikPyt]);
					this->button1->Enabled = true;
					this->button2->Enabled = true;
					this->button3->Enabled = true;
					this->button4->Enabled = true;
					this->toolStripMenuItem2->Enabled = true;
					this->telefonDoPrzyjacielaToolStripMenuItem->Enabled = true;
					this->publiczno��ToolStripMenuItem->Enabled = true;
				}
				else
				{
					if (MessageBox::Show("Jestes pewny?", "Milionerzy", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
					{
						Application::Exit();
					}
					else
					{
						MessageBox::Show("Kliknij ok, aby wrocic do gry", "Wyjscie");
						this->textBox1->Text = "Wybierz \"Nowa Gra\" z menu \"Gra\" je�li chcesz rozpocz�� gr�.";
						this->button1->Enabled = false;
						this->button2->Enabled = false;
						this->button3->Enabled = false;
						this->button4->Enabled = false;
					}

				}
			}

		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Czy to twoja ostateczna odpowied�?", "Milionerzy", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			if (gcnew String(tab[4].c_str()) == gcnew String(tab[5].c_str()))
			{
				this->button4->BackColor = System::Drawing::Color::FromArgb(0, 255, 0);
				MessageBox::Show("Poprawna odpowied�", "Gratulacje");
				if (licznikPyt == 11)
				{
					MessageBox::Show("Gratulacje! Wygra�e� milion z�otych!", "Milionerzy");
					this->textBox1->Text = "Wybierz Nowa Gra je�li chcesz zagra� ponownie";
				}
				if (MessageBox::Show("Czy grasz dalej?", "Milionerzy", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
					if (licznikPyt == 10)
					{
						MessageBox::Show("Nast�pne pytanie jest o milion z�otych!", "Milionerzy", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						licznikPyt++;
						ladujPytanie(pamiec[licznikPyt]);
					}
					
					else
					{
						licznikPyt++;
						ladujPytanie(pamiec[licznikPyt]);
					}

				}
				else
				{
					if (MessageBox::Show("Wszystkie post�py zostan� utracone. Czy jeste� pewny?", " Milionerzy", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
					{
						Application::Exit();
					}
					else
					{
						licznikPyt++;
						ladujPytanie(pamiec[licznikPyt]);
					}

				}
			}
			else
			{
				this->button4->BackColor = System::Drawing::Color::FromArgb(255, 0, 0);
				MessageBox::Show("Zla odpowied�", "Niestety");
				if (MessageBox::Show("Czy chcesz zagra� ponownie?", "Milionerzy", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
					licznikPyt = 0;
					srand(time(NULL));
					pytania pytanie[39]
					{
					{rand() % 100 + 1,1},
					{rand() % 100 + 1,2},
					{rand() % 100 + 1,3},
					{rand() % 100 + 1,4},
					{rand() % 100 + 1,5},
					{rand() % 100 + 1,6},
					{rand() % 100 + 1,7},
					{rand() % 100 + 1,8},
					{rand() % 100 + 1,9},
					{rand() % 100 + 1,10},
					{rand() % 100 + 1,11},
					{rand() % 100 + 1,12},
					{rand() % 100 + 1,13},
					{rand() % 100 + 1,14},
					{rand() % 100 + 1,15},
					{rand() % 100 + 1,16},
					{rand() % 100 + 1,17},
					{rand() % 100 + 1,18},
					{rand() % 100 + 1,19},
					{rand() % 100 + 1,20},
					{rand() % 100 + 1,21},
					{rand() % 100 + 1,22},
					{rand() % 100 + 1,23},
					{rand() % 100 + 1,24},
					{rand() % 100 + 1,25},
					{rand() % 100 + 1,26},
					{rand() % 100 + 1,27},
					{rand() % 100 + 1,28},
					{rand() % 100 + 1,29},
					{rand() % 100 + 1,30},
					{rand() % 100 + 1,31},
					{rand() % 100 + 1,32},
					{rand() % 100 + 1,33},
					{rand() % 100 + 1,34},
					{rand() % 100 + 1,35},
					{rand() % 100 + 1,36},
					{rand() % 100 + 1,37},
					{rand() % 100 + 1,38},
					{rand() % 100 + 1,39}
					};
					sort(pytanie, pytanie + 39);
					for (int i = 0; i < 12; i++)
					{
						pamiec[i] = pytanie[i].nrPytania;
					}
					//
					ladujPytanie(pamiec[licznikPyt]);
					this->button1->Enabled = true;
					this->button2->Enabled = true;
					this->button3->Enabled = true;
					this->button4->Enabled = true;
					this->toolStripMenuItem2->Enabled = true;
					this->telefonDoPrzyjacielaToolStripMenuItem->Enabled = true;
					this->publiczno��ToolStripMenuItem->Enabled = true;
				}
				else
				{
					if (MessageBox::Show("Jestes pewny?", "Milionerzy", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
					{
						Application::Exit();
					}
					else
					{
						MessageBox::Show("Kliknij ok, aby wrocic do gry", "Wyjscie");
						this->textBox1->Text = "Wybierz \"Nowa Gra\" z menu \"Gra\" je�li chcesz rozpocz�� gr�.";
						this->button1->Enabled = false;
						this->button2->Enabled = false;
						this->button3->Enabled = false;
						this->button4->Enabled = false;
					}
				}
			}
		}
	}
	private: System::Void nowaGraToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
		srand(time(NULL));
		pytania pytanie[39]
		{
		{rand() % 100 + 1,1},
		{rand() % 100 + 1,2},
		{rand() % 100 + 1,3},
		{rand() % 100 + 1,4},
		{rand() % 100 + 1,5},
		{rand() % 100 + 1,6},
		{rand() % 100 + 1,7},
		{rand() % 100 + 1,8},
		{rand() % 100 + 1,9},
		{rand() % 100 + 1,10},
		{rand() % 100 + 1,11},
		{rand() % 100 + 1,12},
		{rand() % 100 + 1,13},
		{rand() % 100 + 1,14},
		{rand() % 100 + 1,15},
		{rand() % 100 + 1,16},
		{rand() % 100 + 1,17},
		{rand() % 100 + 1,18},
		{rand() % 100 + 1,19},
		{rand() % 100 + 1,20},
		{rand() % 100 + 1,21},
		{rand() % 100 + 1,22},
		{rand() % 100 + 1,23},
		{rand() % 100 + 1,24},
		{rand() % 100 + 1,25},
		{rand() % 100 + 1,26},
		{rand() % 100 + 1,27},
		{rand() % 100 + 1,28},
		{rand() % 100 + 1,29},
		{rand() % 100 + 1,30},
		{rand() % 100 + 1,31},
		{rand() % 100 + 1,32},
		{rand() % 100 + 1,33},
		{rand() % 100 + 1,34},
		{rand() % 100 + 1,35},
		{rand() % 100 + 1,36},
		{rand() % 100 + 1,37},
		{rand() % 100 + 1,38},
		{rand() % 100 + 1,39}
		};
		sort(pytanie, pytanie + 39);
		for (int i = 0; i < 12; i++)
		{	
			pamiec[i] = pytanie[i].nrPytania;
		}
		//
		ladujPytanie(pamiec[licznikPyt]);
		this->button1->Enabled = true;
		this->button2->Enabled = true;
		this->button3->Enabled = true;
		this->button4->Enabled = true;
		this->toolStripMenuItem2->Enabled = true;
		this->telefonDoPrzyjacielaToolStripMenuItem->Enabled = true;
		this->publiczno��ToolStripMenuItem->Enabled = true;
	}

	private: System::Void wyjscieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Jestes pewny?", "Milionerzy", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
		else
		{
			MessageBox::Show("Kliknij ok, aby wrocic do gry", "Wyjscie");
			this->textBox1->Text = "Wybierz \"Nowa Gra\" z menu \"Gra\" je�li chcesz rozpocz�� gr�.";
			
		}
	}

	private: System::Void oProgramieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
		   
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)//50 na 50//  czasami nic nie skre�la, po kliknieciu nowa gra albo po wybraniu publicznosci
	{
		int iloscUsunietychBlednychOdpowiedzi = 0;

		if (this->button1->Text != gcnew String(tab[5].c_str()) && (iloscUsunietychBlednychOdpowiedzi < 2)) 
		{
			iloscUsunietychBlednychOdpowiedzi++;
			this->button1->Text = "";
			
		}
	
		if (this->button2->Text != gcnew String(tab[5].c_str()) && (iloscUsunietychBlednychOdpowiedzi < 2))
		{
			iloscUsunietychBlednychOdpowiedzi++;
			this->button2->Text = "";
			
		}

		if (this->button3->Text != gcnew String(tab[5].c_str()) && (iloscUsunietychBlednychOdpowiedzi < 2))
		{
			iloscUsunietychBlednychOdpowiedzi++;
			this->button3->Text = "";
			
		}

		if (this->button4->Text != gcnew String(tab[5].c_str()) && (iloscUsunietychBlednychOdpowiedzi < 2))
		{
			iloscUsunietychBlednychOdpowiedzi++;
			this->button4->Text = "";
			
		}

		this->toolStripMenuItem2->Enabled = false;
	}
private: System::Void telefonDoPrzyjacielaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//telefon// 
	{
	if (this->button1->Text == gcnew String(tab[5].c_str()))
	{
		this->button2->Text = "";
		this->button3->Text = "";
		this->button4->Text = "";
	}
	if (this->button2->Text == gcnew String(tab[5].c_str()))
	{
		this->button1->Text = "";
		this->button3->Text = "";
		this->button4->Text = "";
	}
	if (this->button3->Text == gcnew String(tab[5].c_str()))
	{
		this->button2->Text = "";
		this->button1->Text = "";
		this->button4->Text = "";
	}
	if (this->button4->Text == gcnew String(tab[5].c_str()))
	{
		this->button2->Text = "";
		this->button3->Text = "";
		this->button1->Text = "";
	}
		this->telefonDoPrzyjacielaToolStripMenuItem->Enabled = false; 
	}
	   Color wyborKoloru(int OcenaPub)
	   {
		   switch (OcenaPub)
		   {
		   case 1:

			   return  System::Drawing::Color::Green;

		   case 2:

			   return  System::Drawing::Color::Yellow;   

		   case 3:

			   return  System::Drawing::Color::Orange;

		   case 4:

			   return  System::Drawing::Color::Gainsboro;

		   }
	   
	   }
		  
private: System::Void publiczno��ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //publicznosc, po wybraniu 50/50 czasami nie dzia�a
{
	
	
	/* 0.zadeklaruj tablice 	int tablicawynikow[4]{ -1, -1, -1, -1 };
	  1. losuj liczbe 1..4
	  2. dodaj pierwsza wylosowana liczbe do tablicy wynikow pierwszy wynik == pierwszy index
	  3. losuj kolejna liczbe i sprawdz czy wylosowana liczba nie znajduje sie na tablicy wynikow
	  4. jesli sie znajduje to losuj kolejny raz*/

	int j, i, k, l;
	if (button1->Text == "" && button2->Text == "")  
	{	
		while (true)
		{	
			int kolor[2]{ 1,3 };
			srand(time(NULL));
			j = kolor[rand() % 2];
			k = kolor[rand() % 2];
			if ((j == k))
			{
				continue;
			}
			else
			{
				break;
			}
		}
		this->button3->BackColor = wyborKoloru(j);
		this->button4->BackColor = wyborKoloru(k);
	}
	else if(button1->Text == "" && button3->Text == "")
	{
		while (true)
		{
			int kolor[2]{ 1,3 };
			srand(time(NULL));
			j = kolor[rand() % 2];
			k = kolor[rand() % 2];
			if ((j == k))
			{
				continue;
			}
			else
			{
				break;
			}
		}
		this->button2->BackColor = wyborKoloru(j);
		this->button4->BackColor = wyborKoloru(k);
	}
	else if (button1->Text == "" && button4->Text == "")
	{
		while (true)
		{
			int kolor[2]{ 1,3 };
			srand(time(NULL));
			j = kolor[rand() % 2];
			k = kolor[rand() % 2];
			if ((j == k))
			{
				continue;
			}
			else
			{
				break;
			}
		}
		this->button3->BackColor = wyborKoloru(j);
		this->button2->BackColor = wyborKoloru(k);
	}
	else if (button2->Text == "" && button3->Text == "")
	{
		while (true)
		{
			int kolor[2]{ 1,3 };
			srand(time(NULL));
			j = kolor[rand() % 2];
			k = kolor[rand() % 2];
			if ((j == k))
			{
				continue;
			}
			else
			{
				break;
			}
		}
		this->button1->BackColor = wyborKoloru(j);
		this->button4->BackColor = wyborKoloru(k);
	}
	else if (button2->Text == "" && button4->Text == "")
	{
		while (true)
		{
			int kolor[2]{ 1,3 };
			srand(time(NULL));
			j = kolor[rand() % 2];
			k = kolor[rand() % 2];
			if ((j == k))
			{
				continue;
			}
			else
			{
				break;
			}
		}
		this->button1->BackColor = wyborKoloru(j);
		this->button3->BackColor = wyborKoloru(k);
	}
	else if (button3->Text == "" && button4->Text == "")
	{
		while (true)
		{
			int kolor[2]{ 1,3 };
			srand(time(NULL));
			j = kolor[rand() % 2];
			k = kolor[rand() % 2];
			if ((j == k))
			{
				continue;
			}
			else
			{
				break;
			}
		}
		this->button1->BackColor = wyborKoloru(j);
		this->button2->BackColor = wyborKoloru(k);
	}
	else
	{
		while (true)
		{
			int losowanie[4]{ 1,2,3,4 };
			srand(time(NULL));
			j = losowanie[rand() % 4];
			k = losowanie[rand() % 4];
			l = losowanie[rand() % 4];
			i = losowanie[rand() % 4];
			if ((j == i) || (i == k) || (k == l) || (i == l) || (j == l) || (j == k))
			{
				continue;
			}
			else
			{
				break;
			}
		}
		this->button1->BackColor = wyborKoloru(j);
		this->button2->BackColor = wyborKoloru(i);
		this->button3->BackColor = wyborKoloru(k);
		this->button4->BackColor = wyborKoloru(l);
	}
	
	this->publiczno��ToolStripMenuItem->Enabled = false;
}
private: System::Void zasadyGryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text =
	"1.Prawid�owa jest tylko jedna odpowied�. \r\n"
	"2.Aby zdoby� g��wn� nagrod� i wygra� nale�y odpowiedzie� poprawnie na dwana�cie wylosowanych pyta�.\r\n"
	"3.Nie ma tak zwanych punkt�w kontrolnych, po udzieleniu z�ej odpowiedzi tracisz wszystko. \r\n"
	"4.W czasie gry masz do dyspozycji trzy ko�a ratunkowe, ka�de z nich mo�esz u�y� tylko raz - pytanie do publiczno�ci, 50 / 50, telefon do przyjaciela.\r\n"
	"Szczeg�y dzia�ania k� opisane s� w zak�adce \"Instrukcja do gry\" znajduj�ca si� w zak�adce \"O programie\".";

}
private: System::Void instrukcjaDoGryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->textBox1->Text =
		"1.Post�puj zgodnie z instrukcjami wy�wietlanymi w okienku aplikacji \r\n"
		"2.Po rozpocz�ciu gry zostanie wy�wietlone Ci losowe pytanie razem z czterema odpowiedziami.\r\n"
		"3.Wyb�r odpowiedzi polega na klikni�cie w prostok�t z odpowiedzi� i potwierdzeniu jej. \r\n"
		"4.Wyst�puj� trzy ko�a ratunkowe - ka�de dzia�a na sw�j spos�b: \r\n"
		"a)Publiczno�� - wskazuj� odpowiedzi zmieniaj�c ich kolor na: \r\n"
		"-zielony (odpowied� z najwi�kszym % g�os�w); \r\n"
		"-pomara�czowy (odpowied� z drugim najwi�kszym %); \r\n"
		"-��ty (odpowied� z trzecim najwi�kszym %).\r\n"
		"Domy�lny kolor oznacza odpowied� z najmniejszym %.\r\n"
		"UWAGA: Publiczno�� mo�e si� myli� i i nie zawsze odpowied� z najwi�kszym % g�os�w jest prawid�owa.\r\n"
		"b)50/50 - zostawia tylko dwie odpowiedzi, jedn� poprawn�, drug� z��. \r\n"
		"c)Telefon do przyjaciela - zostawia tylko jedn� z czterech odpowiedzi";

}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	BackColor=System::Drawing::Color::Navy;
}
 
};
}
