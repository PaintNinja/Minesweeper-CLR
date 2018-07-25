#include <vector>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

// Global array
int theBoard[10][10] = { { 0 },{ 0 } };
bool debugMode = true;

#pragma once

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form {
	public:
		Form1(void) {
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1() {
			if (components)	{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button100;
	private: System::Windows::Forms::Button^  button99;
	private: System::Windows::Forms::Button^  button98;
	private: System::Windows::Forms::Button^  button97;
	private: System::Windows::Forms::Button^  button96;
	private: System::Windows::Forms::Button^  button95;
	private: System::Windows::Forms::Button^  button94;
	private: System::Windows::Forms::Button^  button93;
	private: System::Windows::Forms::Button^  button92;
	private: System::Windows::Forms::Button^  button91;
	private: System::Windows::Forms::Button^  button90;
	private: System::Windows::Forms::Button^  button89;
	private: System::Windows::Forms::Button^  button88;
	private: System::Windows::Forms::Button^  button87;
	private: System::Windows::Forms::Button^  button86;
	private: System::Windows::Forms::Button^  button85;
	private: System::Windows::Forms::Button^  button84;
	private: System::Windows::Forms::Button^  button83;
	private: System::Windows::Forms::Button^  button82;
	private: System::Windows::Forms::Button^  button81;
	private: System::Windows::Forms::Button^  button80;
	private: System::Windows::Forms::Button^  button79;
	private: System::Windows::Forms::Button^  button78;
	private: System::Windows::Forms::Button^  button77;
	private: System::Windows::Forms::Button^  button76;
	private: System::Windows::Forms::Button^  button75;
	private: System::Windows::Forms::Button^  button74;
	private: System::Windows::Forms::Button^  button73;
	private: System::Windows::Forms::Button^  button72;
	private: System::Windows::Forms::Button^  button71;
	private: System::Windows::Forms::Button^  button70;
	private: System::Windows::Forms::Button^  button69;
	private: System::Windows::Forms::Button^  button68;
	private: System::Windows::Forms::Button^  button67;
	private: System::Windows::Forms::Button^  button66;
	private: System::Windows::Forms::Button^  button65;
	private: System::Windows::Forms::Button^  button64;
	private: System::Windows::Forms::Button^  button63;
	private: System::Windows::Forms::Button^  button62;
	private: System::Windows::Forms::Button^  button61;
	private: System::Windows::Forms::Button^  button60;
	private: System::Windows::Forms::Button^  button59;
	private: System::Windows::Forms::Button^  button58;
	private: System::Windows::Forms::Button^  button57;
	private: System::Windows::Forms::Button^  button56;
	private: System::Windows::Forms::Button^  button55;
	private: System::Windows::Forms::Button^  button54;
	private: System::Windows::Forms::Button^  button53;
	private: System::Windows::Forms::Button^  button52;
	private: System::Windows::Forms::Button^  button51;
	private: System::Windows::Forms::Button^  button50;
	private: System::Windows::Forms::Button^  button49;
	private: System::Windows::Forms::Button^  button48;
	private: System::Windows::Forms::Button^  button47;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Label^  label2;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void) {
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button100 = (gcnew System::Windows::Forms::Button());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(564, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newGameToolStripMenuItem,
					this->toolStripSeparator1, this->quitToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->newGameToolStripMenuItem->Text = L"New game";
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::newGameToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(128, 6);
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->quitToolStripMenuItem->Text = L"Quit";
			this->quitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::quitToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button100);
			this->panel1->Controls->Add(this->button99);
			this->panel1->Controls->Add(this->button98);
			this->panel1->Controls->Add(this->button97);
			this->panel1->Controls->Add(this->button96);
			this->panel1->Controls->Add(this->button95);
			this->panel1->Controls->Add(this->button94);
			this->panel1->Controls->Add(this->button93);
			this->panel1->Controls->Add(this->button92);
			this->panel1->Controls->Add(this->button91);
			this->panel1->Controls->Add(this->button90);
			this->panel1->Controls->Add(this->button89);
			this->panel1->Controls->Add(this->button88);
			this->panel1->Controls->Add(this->button87);
			this->panel1->Controls->Add(this->button86);
			this->panel1->Controls->Add(this->button85);
			this->panel1->Controls->Add(this->button84);
			this->panel1->Controls->Add(this->button83);
			this->panel1->Controls->Add(this->button82);
			this->panel1->Controls->Add(this->button81);
			this->panel1->Controls->Add(this->button80);
			this->panel1->Controls->Add(this->button79);
			this->panel1->Controls->Add(this->button78);
			this->panel1->Controls->Add(this->button77);
			this->panel1->Controls->Add(this->button76);
			this->panel1->Controls->Add(this->button75);
			this->panel1->Controls->Add(this->button74);
			this->panel1->Controls->Add(this->button73);
			this->panel1->Controls->Add(this->button72);
			this->panel1->Controls->Add(this->button71);
			this->panel1->Controls->Add(this->button70);
			this->panel1->Controls->Add(this->button69);
			this->panel1->Controls->Add(this->button68);
			this->panel1->Controls->Add(this->button67);
			this->panel1->Controls->Add(this->button66);
			this->panel1->Controls->Add(this->button65);
			this->panel1->Controls->Add(this->button64);
			this->panel1->Controls->Add(this->button63);
			this->panel1->Controls->Add(this->button62);
			this->panel1->Controls->Add(this->button61);
			this->panel1->Controls->Add(this->button60);
			this->panel1->Controls->Add(this->button59);
			this->panel1->Controls->Add(this->button58);
			this->panel1->Controls->Add(this->button57);
			this->panel1->Controls->Add(this->button56);
			this->panel1->Controls->Add(this->button55);
			this->panel1->Controls->Add(this->button54);
			this->panel1->Controls->Add(this->button53);
			this->panel1->Controls->Add(this->button52);
			this->panel1->Controls->Add(this->button51);
			this->panel1->Controls->Add(this->button50);
			this->panel1->Controls->Add(this->button49);
			this->panel1->Controls->Add(this->button48);
			this->panel1->Controls->Add(this->button47);
			this->panel1->Controls->Add(this->button46);
			this->panel1->Controls->Add(this->button45);
			this->panel1->Controls->Add(this->button44);
			this->panel1->Controls->Add(this->button43);
			this->panel1->Controls->Add(this->button42);
			this->panel1->Controls->Add(this->button41);
			this->panel1->Controls->Add(this->button40);
			this->panel1->Controls->Add(this->button39);
			this->panel1->Controls->Add(this->button38);
			this->panel1->Controls->Add(this->button37);
			this->panel1->Controls->Add(this->button36);
			this->panel1->Controls->Add(this->button35);
			this->panel1->Controls->Add(this->button34);
			this->panel1->Controls->Add(this->button33);
			this->panel1->Controls->Add(this->button32);
			this->panel1->Controls->Add(this->button31);
			this->panel1->Controls->Add(this->button30);
			this->panel1->Controls->Add(this->button29);
			this->panel1->Controls->Add(this->button28);
			this->panel1->Controls->Add(this->button27);
			this->panel1->Controls->Add(this->button26);
			this->panel1->Controls->Add(this->button25);
			this->panel1->Controls->Add(this->button24);
			this->panel1->Controls->Add(this->button23);
			this->panel1->Controls->Add(this->button22);
			this->panel1->Controls->Add(this->button21);
			this->panel1->Controls->Add(this->button20);
			this->panel1->Controls->Add(this->button19);
			this->panel1->Controls->Add(this->button18);
			this->panel1->Controls->Add(this->button17);
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->button15);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 86);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(564, 555);
			this->panel1->TabIndex = 3;
			// 
			// button100
			// 
			this->button100->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button100->Location = System::Drawing::Point(501, 497);
			this->button100->Name = L"button100";
			this->button100->Size = System::Drawing::Size(48, 48);
			this->button100->TabIndex = 299;
			this->button100->Text = L"button100";
			this->button100->UseVisualStyleBackColor = true;
			// 
			// button99
			// 
			this->button99->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button99->Location = System::Drawing::Point(447, 497);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(48, 48);
			this->button99->TabIndex = 298;
			this->button99->Text = L"button99";
			this->button99->UseVisualStyleBackColor = true;
			// 
			// button98
			// 
			this->button98->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button98->Location = System::Drawing::Point(393, 497);
			this->button98->Name = L"button98";
			this->button98->Size = System::Drawing::Size(48, 48);
			this->button98->TabIndex = 297;
			this->button98->Text = L"button98";
			this->button98->UseVisualStyleBackColor = true;
			// 
			// button97
			// 
			this->button97->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button97->Location = System::Drawing::Point(339, 497);
			this->button97->Name = L"button97";
			this->button97->Size = System::Drawing::Size(48, 48);
			this->button97->TabIndex = 296;
			this->button97->Text = L"button97";
			this->button97->UseVisualStyleBackColor = true;
			// 
			// button96
			// 
			this->button96->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button96->Location = System::Drawing::Point(285, 497);
			this->button96->Name = L"button96";
			this->button96->Size = System::Drawing::Size(48, 48);
			this->button96->TabIndex = 295;
			this->button96->Text = L"button96";
			this->button96->UseVisualStyleBackColor = true;
			// 
			// button95
			// 
			this->button95->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button95->Location = System::Drawing::Point(231, 497);
			this->button95->Name = L"button95";
			this->button95->Size = System::Drawing::Size(48, 48);
			this->button95->TabIndex = 294;
			this->button95->Text = L"button95";
			this->button95->UseVisualStyleBackColor = true;
			// 
			// button94
			// 
			this->button94->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button94->Location = System::Drawing::Point(177, 497);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(48, 48);
			this->button94->TabIndex = 293;
			this->button94->Text = L"button94";
			this->button94->UseVisualStyleBackColor = true;
			// 
			// button93
			// 
			this->button93->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button93->Location = System::Drawing::Point(123, 497);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(48, 48);
			this->button93->TabIndex = 292;
			this->button93->Text = L"button93";
			this->button93->UseVisualStyleBackColor = true;
			// 
			// button92
			// 
			this->button92->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button92->Location = System::Drawing::Point(69, 497);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(48, 48);
			this->button92->TabIndex = 291;
			this->button92->Text = L"button92";
			this->button92->UseVisualStyleBackColor = true;
			// 
			// button91
			// 
			this->button91->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button91->Location = System::Drawing::Point(15, 497);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(48, 48);
			this->button91->TabIndex = 290;
			this->button91->Text = L"button91";
			this->button91->UseVisualStyleBackColor = true;
			// 
			// button90
			// 
			this->button90->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button90->Location = System::Drawing::Point(501, 443);
			this->button90->Name = L"button90";
			this->button90->Size = System::Drawing::Size(48, 48);
			this->button90->TabIndex = 289;
			this->button90->Text = L"button90";
			this->button90->UseVisualStyleBackColor = true;
			// 
			// button89
			// 
			this->button89->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button89->Location = System::Drawing::Point(447, 443);
			this->button89->Name = L"button89";
			this->button89->Size = System::Drawing::Size(48, 48);
			this->button89->TabIndex = 288;
			this->button89->Text = L"button89";
			this->button89->UseVisualStyleBackColor = true;
			// 
			// button88
			// 
			this->button88->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button88->Location = System::Drawing::Point(393, 443);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(48, 48);
			this->button88->TabIndex = 287;
			this->button88->Text = L"button88";
			this->button88->UseVisualStyleBackColor = true;
			// 
			// button87
			// 
			this->button87->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button87->Location = System::Drawing::Point(339, 443);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(48, 48);
			this->button87->TabIndex = 286;
			this->button87->Text = L"button87";
			this->button87->UseVisualStyleBackColor = true;
			// 
			// button86
			// 
			this->button86->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button86->Location = System::Drawing::Point(285, 443);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(48, 48);
			this->button86->TabIndex = 285;
			this->button86->Text = L"button86";
			this->button86->UseVisualStyleBackColor = true;
			// 
			// button85
			// 
			this->button85->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button85->Location = System::Drawing::Point(231, 443);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(48, 48);
			this->button85->TabIndex = 284;
			this->button85->Text = L"button85";
			this->button85->UseVisualStyleBackColor = true;
			// 
			// button84
			// 
			this->button84->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button84->Location = System::Drawing::Point(177, 443);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(48, 48);
			this->button84->TabIndex = 283;
			this->button84->Text = L"button84";
			this->button84->UseVisualStyleBackColor = true;
			// 
			// button83
			// 
			this->button83->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button83->Location = System::Drawing::Point(123, 443);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(48, 48);
			this->button83->TabIndex = 282;
			this->button83->Text = L"button83";
			this->button83->UseVisualStyleBackColor = true;
			// 
			// button82
			// 
			this->button82->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button82->Location = System::Drawing::Point(69, 443);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(48, 48);
			this->button82->TabIndex = 281;
			this->button82->Text = L"button82";
			this->button82->UseVisualStyleBackColor = true;
			// 
			// button81
			// 
			this->button81->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button81->Location = System::Drawing::Point(15, 443);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(48, 48);
			this->button81->TabIndex = 280;
			this->button81->Text = L"button81";
			this->button81->UseVisualStyleBackColor = true;
			// 
			// button80
			// 
			this->button80->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button80->Location = System::Drawing::Point(501, 389);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(48, 48);
			this->button80->TabIndex = 279;
			this->button80->Text = L"button80";
			this->button80->UseVisualStyleBackColor = true;
			// 
			// button79
			// 
			this->button79->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button79->Location = System::Drawing::Point(447, 389);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(48, 48);
			this->button79->TabIndex = 278;
			this->button79->Text = L"button79";
			this->button79->UseVisualStyleBackColor = true;
			// 
			// button78
			// 
			this->button78->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button78->Location = System::Drawing::Point(393, 389);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(48, 48);
			this->button78->TabIndex = 277;
			this->button78->Text = L"button78";
			this->button78->UseVisualStyleBackColor = true;
			// 
			// button77
			// 
			this->button77->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button77->Location = System::Drawing::Point(339, 389);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(48, 48);
			this->button77->TabIndex = 276;
			this->button77->Text = L"button77";
			this->button77->UseVisualStyleBackColor = true;
			// 
			// button76
			// 
			this->button76->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button76->Location = System::Drawing::Point(285, 389);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(48, 48);
			this->button76->TabIndex = 275;
			this->button76->Text = L"button76";
			this->button76->UseVisualStyleBackColor = true;
			// 
			// button75
			// 
			this->button75->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button75->Location = System::Drawing::Point(231, 389);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(48, 48);
			this->button75->TabIndex = 274;
			this->button75->Text = L"button75";
			this->button75->UseVisualStyleBackColor = true;
			// 
			// button74
			// 
			this->button74->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button74->Location = System::Drawing::Point(177, 389);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(48, 48);
			this->button74->TabIndex = 273;
			this->button74->Text = L"button74";
			this->button74->UseVisualStyleBackColor = true;
			// 
			// button73
			// 
			this->button73->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button73->Location = System::Drawing::Point(123, 389);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(48, 48);
			this->button73->TabIndex = 272;
			this->button73->Text = L"button73";
			this->button73->UseVisualStyleBackColor = true;
			// 
			// button72
			// 
			this->button72->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button72->Location = System::Drawing::Point(69, 389);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(48, 48);
			this->button72->TabIndex = 271;
			this->button72->Text = L"button72";
			this->button72->UseVisualStyleBackColor = true;
			// 
			// button71
			// 
			this->button71->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button71->Location = System::Drawing::Point(15, 389);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(48, 48);
			this->button71->TabIndex = 270;
			this->button71->Text = L"button71";
			this->button71->UseVisualStyleBackColor = true;
			// 
			// button70
			// 
			this->button70->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button70->Location = System::Drawing::Point(501, 335);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(48, 48);
			this->button70->TabIndex = 269;
			this->button70->Text = L"button70";
			this->button70->UseVisualStyleBackColor = true;
			// 
			// button69
			// 
			this->button69->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button69->Location = System::Drawing::Point(447, 335);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(48, 48);
			this->button69->TabIndex = 268;
			this->button69->Text = L"button69";
			this->button69->UseVisualStyleBackColor = true;
			// 
			// button68
			// 
			this->button68->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button68->Location = System::Drawing::Point(393, 335);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(48, 48);
			this->button68->TabIndex = 267;
			this->button68->Text = L"button68";
			this->button68->UseVisualStyleBackColor = true;
			// 
			// button67
			// 
			this->button67->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button67->Location = System::Drawing::Point(339, 335);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(48, 48);
			this->button67->TabIndex = 266;
			this->button67->Text = L"button67";
			this->button67->UseVisualStyleBackColor = true;
			// 
			// button66
			// 
			this->button66->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button66->Location = System::Drawing::Point(285, 335);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(48, 48);
			this->button66->TabIndex = 265;
			this->button66->Text = L"button66";
			this->button66->UseVisualStyleBackColor = true;
			// 
			// button65
			// 
			this->button65->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button65->Location = System::Drawing::Point(231, 335);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(48, 48);
			this->button65->TabIndex = 264;
			this->button65->Text = L"button65";
			this->button65->UseVisualStyleBackColor = true;
			// 
			// button64
			// 
			this->button64->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button64->Location = System::Drawing::Point(177, 335);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(48, 48);
			this->button64->TabIndex = 263;
			this->button64->Text = L"button64";
			this->button64->UseVisualStyleBackColor = true;
			// 
			// button63
			// 
			this->button63->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button63->Location = System::Drawing::Point(123, 335);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(48, 48);
			this->button63->TabIndex = 262;
			this->button63->Text = L"button63";
			this->button63->UseVisualStyleBackColor = true;
			// 
			// button62
			// 
			this->button62->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button62->Location = System::Drawing::Point(69, 335);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(48, 48);
			this->button62->TabIndex = 261;
			this->button62->Text = L"button62";
			this->button62->UseVisualStyleBackColor = true;
			// 
			// button61
			// 
			this->button61->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button61->Location = System::Drawing::Point(15, 335);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(48, 48);
			this->button61->TabIndex = 260;
			this->button61->Text = L"button61";
			this->button61->UseVisualStyleBackColor = true;
			// 
			// button60
			// 
			this->button60->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button60->Location = System::Drawing::Point(501, 281);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(48, 48);
			this->button60->TabIndex = 259;
			this->button60->Text = L"button60";
			this->button60->UseVisualStyleBackColor = true;
			// 
			// button59
			// 
			this->button59->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button59->Location = System::Drawing::Point(447, 281);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(48, 48);
			this->button59->TabIndex = 258;
			this->button59->Text = L"button59";
			this->button59->UseVisualStyleBackColor = true;
			// 
			// button58
			// 
			this->button58->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button58->Location = System::Drawing::Point(393, 281);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(48, 48);
			this->button58->TabIndex = 257;
			this->button58->Text = L"button58";
			this->button58->UseVisualStyleBackColor = true;
			// 
			// button57
			// 
			this->button57->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button57->Location = System::Drawing::Point(339, 281);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(48, 48);
			this->button57->TabIndex = 256;
			this->button57->Text = L"button57";
			this->button57->UseVisualStyleBackColor = true;
			// 
			// button56
			// 
			this->button56->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button56->Location = System::Drawing::Point(285, 281);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(48, 48);
			this->button56->TabIndex = 255;
			this->button56->Text = L"button56";
			this->button56->UseVisualStyleBackColor = true;
			// 
			// button55
			// 
			this->button55->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button55->Location = System::Drawing::Point(231, 281);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(48, 48);
			this->button55->TabIndex = 254;
			this->button55->Text = L"button55";
			this->button55->UseVisualStyleBackColor = true;
			// 
			// button54
			// 
			this->button54->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button54->Location = System::Drawing::Point(177, 281);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(48, 48);
			this->button54->TabIndex = 253;
			this->button54->Text = L"button54";
			this->button54->UseVisualStyleBackColor = true;
			// 
			// button53
			// 
			this->button53->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button53->Location = System::Drawing::Point(123, 281);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(48, 48);
			this->button53->TabIndex = 252;
			this->button53->Text = L"button53";
			this->button53->UseVisualStyleBackColor = true;
			// 
			// button52
			// 
			this->button52->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button52->Location = System::Drawing::Point(69, 281);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(48, 48);
			this->button52->TabIndex = 251;
			this->button52->Text = L"button52";
			this->button52->UseVisualStyleBackColor = true;
			// 
			// button51
			// 
			this->button51->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button51->Location = System::Drawing::Point(15, 281);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(48, 48);
			this->button51->TabIndex = 250;
			this->button51->Text = L"button51";
			this->button51->UseVisualStyleBackColor = true;
			// 
			// button50
			// 
			this->button50->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button50->Location = System::Drawing::Point(501, 227);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(48, 48);
			this->button50->TabIndex = 249;
			this->button50->Text = L"button50";
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &Form1::button50_Click);
			// 
			// button49
			// 
			this->button49->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button49->Location = System::Drawing::Point(447, 227);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(48, 48);
			this->button49->TabIndex = 248;
			this->button49->Text = L"button49";
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &Form1::button49_Click);
			// 
			// button48
			// 
			this->button48->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button48->Location = System::Drawing::Point(393, 227);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(48, 48);
			this->button48->TabIndex = 247;
			this->button48->Text = L"button48";
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &Form1::button48_Click);
			// 
			// button47
			// 
			this->button47->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button47->Location = System::Drawing::Point(339, 227);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(48, 48);
			this->button47->TabIndex = 246;
			this->button47->Text = L"button47";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &Form1::button47_Click);
			// 
			// button46
			// 
			this->button46->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button46->Location = System::Drawing::Point(285, 227);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(48, 48);
			this->button46->TabIndex = 245;
			this->button46->Text = L"button46";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &Form1::button46_Click);
			// 
			// button45
			// 
			this->button45->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button45->Location = System::Drawing::Point(231, 227);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(48, 48);
			this->button45->TabIndex = 244;
			this->button45->Text = L"button45";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &Form1::button45_Click);
			// 
			// button44
			// 
			this->button44->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button44->Location = System::Drawing::Point(177, 227);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(48, 48);
			this->button44->TabIndex = 243;
			this->button44->Text = L"button44";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &Form1::button44_Click);
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button43->Location = System::Drawing::Point(123, 227);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(48, 48);
			this->button43->TabIndex = 242;
			this->button43->Text = L"button43";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &Form1::button43_Click);
			// 
			// button42
			// 
			this->button42->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button42->Location = System::Drawing::Point(69, 227);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(48, 48);
			this->button42->TabIndex = 241;
			this->button42->Text = L"button42";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &Form1::button42_Click);
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button41->Location = System::Drawing::Point(15, 227);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(48, 48);
			this->button41->TabIndex = 240;
			this->button41->Text = L"button41";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &Form1::button41_Click);
			// 
			// button40
			// 
			this->button40->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button40->Location = System::Drawing::Point(501, 173);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(48, 48);
			this->button40->TabIndex = 239;
			this->button40->Text = L"button40";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &Form1::button40_Click);
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->Location = System::Drawing::Point(447, 173);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(48, 48);
			this->button39->TabIndex = 238;
			this->button39->Text = L"button39";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &Form1::button39_Click);
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->Location = System::Drawing::Point(393, 173);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(48, 48);
			this->button38->TabIndex = 237;
			this->button38->Text = L"button38";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &Form1::button38_Click);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(339, 173);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(48, 48);
			this->button37->TabIndex = 236;
			this->button37->Text = L"button37";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &Form1::button37_Click);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(285, 173);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(48, 48);
			this->button36->TabIndex = 235;
			this->button36->Text = L"button36";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &Form1::button36_Click);
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(231, 173);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(48, 48);
			this->button35->TabIndex = 234;
			this->button35->Text = L"button35";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &Form1::button35_Click);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(177, 173);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(48, 48);
			this->button34->TabIndex = 233;
			this->button34->Text = L"button34";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &Form1::button34_Click);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(123, 173);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(48, 48);
			this->button33->TabIndex = 232;
			this->button33->Text = L"button33";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &Form1::button33_Click);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(69, 173);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(48, 48);
			this->button32->TabIndex = 231;
			this->button32->Text = L"button32";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &Form1::button32_Click);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(15, 173);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(48, 48);
			this->button31->TabIndex = 230;
			this->button31->Text = L"button31";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &Form1::button31_Click);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(501, 119);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(48, 48);
			this->button30->TabIndex = 229;
			this->button30->Text = L"button30";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &Form1::button30_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(447, 119);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(48, 48);
			this->button29->TabIndex = 228;
			this->button29->Text = L"button29";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Form1::button29_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(393, 119);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(48, 48);
			this->button28->TabIndex = 227;
			this->button28->Text = L"button28";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Form1::button28_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(339, 119);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(48, 48);
			this->button27->TabIndex = 226;
			this->button27->Text = L"button27";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Form1::button27_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(285, 119);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(48, 48);
			this->button26->TabIndex = 225;
			this->button26->Text = L"button26";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Form1::button26_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(231, 119);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(48, 48);
			this->button25->TabIndex = 224;
			this->button25->Text = L"button25";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(177, 119);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(48, 48);
			this->button24->TabIndex = 223;
			this->button24->Text = L"button24";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(123, 119);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(48, 48);
			this->button23->TabIndex = 222;
			this->button23->Text = L"button23";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(69, 119);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(48, 48);
			this->button22->TabIndex = 221;
			this->button22->Text = L"button22";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(15, 119);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(48, 48);
			this->button21->TabIndex = 220;
			this->button21->Text = L"button21";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(501, 65);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(48, 48);
			this->button20->TabIndex = 219;
			this->button20->Text = L"button20";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(447, 65);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(48, 48);
			this->button19->TabIndex = 218;
			this->button19->Text = L"button19";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(393, 65);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(48, 48);
			this->button18->TabIndex = 217;
			this->button18->Text = L"button18";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(339, 65);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(48, 48);
			this->button17->TabIndex = 216;
			this->button17->Text = L"button17";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(285, 65);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(48, 48);
			this->button16->TabIndex = 215;
			this->button16->Text = L"button16";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(231, 65);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(48, 48);
			this->button15->TabIndex = 214;
			this->button15->Text = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(177, 65);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(48, 48);
			this->button14->TabIndex = 213;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(123, 65);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(48, 48);
			this->button13->TabIndex = 212;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(69, 65);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(48, 48);
			this->button12->TabIndex = 211;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(15, 65);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(48, 48);
			this->button11->TabIndex = 210;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(501, 11);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(48, 48);
			this->button10->TabIndex = 209;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(447, 11);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(48, 48);
			this->button9->TabIndex = 208;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(393, 11);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(48, 48);
			this->button8->TabIndex = 207;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(339, 11);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(48, 48);
			this->button7->TabIndex = 206;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(285, 11);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(48, 48);
			this->button6->TabIndex = 205;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(231, 11);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(48, 48);
			this->button5->TabIndex = 204;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(177, 11);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(48, 48);
			this->button4->TabIndex = 203;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(123, 11);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(48, 48);
			this->button3->TabIndex = 202;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(69, 11);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(48, 48);
			this->button2->TabIndex = 201;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(15, 11);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(48, 48);
			this->button1->TabIndex = 200;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 24);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(564, 62);
			this->panel2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(256, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Status:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Score:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(564, 641);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"MinesweeperCLR";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void newGame() {
			std::cout << "test" << std::endl;
			Form1::label2->Text = L"Test";

			// https://www.tutorialspoint.com/cplusplus/cpp_multi_dimensional_arrays.htm
			// https://stackoverflow.com/questions/39009172/initializing-a-2d-array-with-random-numbers

			for (int x = 0; x < 10; x++) {
				for (int y = 0; y < 10; y++) {
					theBoard[x][y] = rand() % 2;
					std::cout << theBoard[x][y];
				}
				std::cout << std::endl;
			}
			std::cout << std::endl;
		}
		private: System::Void quitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			Form1::Close();
		}
		private: System::Void newGameToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			newGame();
		}
		private: void changeButton(int buttonId, int cellValue) {
			// this function changes the button's background colour and text based on its buttonId and cellValue

			if (buttonId == 1) {
				if (cellValue == 1) { // there's a mine under the clicked cell
					button1->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button1->BackColor = BackColor.White;
				}
			} else if (buttonId == 2) {
				if (cellValue == 1) {
					button2->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button2->BackColor = BackColor.White;
				}
			} else if (buttonId == 3) {
				if (cellValue == 1) {
					button3->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button3->BackColor = BackColor.White;
				}
			} else if (buttonId == 4) {
				if (cellValue == 1) {
					button4->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button4->BackColor = BackColor.White;
				}
			} else if (buttonId == 5) {
				if (cellValue == 1) {
					button5->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button5->BackColor = BackColor.White;
				}
			} else if (buttonId == 6) {
				if (cellValue == 1) {
					button6->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button6->BackColor = BackColor.White;
				}
			} else if (buttonId == 7) {
				if (cellValue == 1) {
					button7->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button7->BackColor = BackColor.White;
				}
			} else if (buttonId == 8) {
				if (cellValue == 1) {
					button8->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button8->BackColor = BackColor.White;
				}
			} else if (buttonId == 9) {
				if (cellValue == 1) {
					button9->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button9->BackColor = BackColor.White;
				}
			} else if (buttonId == 10) {
				if (cellValue == 1) {
					button10->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button10->BackColor = BackColor.White;
				}
			} else if (buttonId == 11) {
				if (cellValue == 1) {
					button11->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button11->BackColor = BackColor.White;
				}
			} else if (buttonId == 12) {
				if (cellValue == 1) {
					button12->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button12->BackColor = BackColor.White;
				}
			} else if (buttonId == 13) {
				if (cellValue == 1) {
					button13->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button13->BackColor = BackColor.White;
				}
			} else if (buttonId == 14) {
				if (cellValue == 1) {
					button14->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button14->BackColor = BackColor.White;
				}
			} else if (buttonId == 15) {
				if (cellValue == 1) {
					button15->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button15->BackColor = BackColor.White;
				}
			} else if (buttonId == 16) {
				if (cellValue == 1) {
					button16->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button16->BackColor = BackColor.White;
				}
			} else if (buttonId == 17) {
				if (cellValue == 1) {
					button17->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button17->BackColor = BackColor.White;
				}
			} else if (buttonId == 18) {
				if (cellValue == 1) {
					button18->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button18->BackColor = BackColor.White;
				}
			} else if (buttonId == 19) {
				if (cellValue == 1) {
					button19->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button19->BackColor = BackColor.White;
				}
			} else if (buttonId == 20) {
				if (cellValue == 1) {
					button20->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button20->BackColor = BackColor.White;
				}
			} else if (buttonId == 21) {
				if (cellValue == 1) {
					button21->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button21->BackColor = BackColor.White;
				}
			} else if (buttonId == 22) {
				if (cellValue == 1) {
					button22->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button22->BackColor = BackColor.White;
				}
			} else if (buttonId == 23) {
				if (cellValue == 1) {
					button23->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button23->BackColor = BackColor.White;
				}
			} else if (buttonId == 24) {
				if (cellValue == 1) {
					button24->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button24->BackColor = BackColor.White;
				}
			} else if (buttonId == 25) {
				if (cellValue == 1) {
					button25->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button25->BackColor = BackColor.White;
				}
			} else if (buttonId == 26) {
				if (cellValue == 1) {
					button26->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button26->BackColor = BackColor.White;
				}
			} else if (buttonId == 27) {
				if (cellValue == 1) {
					button27->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button27->BackColor = BackColor.White;
				}
			} else if (buttonId == 28) {
				if (cellValue == 1) {
					button28->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button28->BackColor = BackColor.White;
				}
			} else if (buttonId == 29) {
				if (cellValue == 1) {
					button29->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button29->BackColor = BackColor.White;
				}
			} else if (buttonId == 30) {
				if (cellValue == 1) {
					button30->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button30->BackColor = BackColor.White;
				}
			} else if (buttonId == 20) {
				if (cellValue == 1) {
					button20->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button20->BackColor = BackColor.White;
				}
			} else if (buttonId == 31) {
				if (cellValue == 1) {
					button31->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button31->BackColor = BackColor.White;
				}
			} else if (buttonId == 32) {
				if (cellValue == 1) {
					button32->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button32->BackColor = BackColor.White;
				}
			} else if (buttonId == 33) {
				if (cellValue == 1) {
					button33->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button33->BackColor = BackColor.White;
				}
			} else if (buttonId == 34) {
				if (cellValue == 1) {
					button34->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button34->BackColor = BackColor.White;
				}
			} else if (buttonId == 35) {
				if (cellValue == 1) {
					button35->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button35->BackColor = BackColor.White;
				}
			} else if (buttonId == 36) {
				if (cellValue == 1) {
					button36->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button36->BackColor = BackColor.White;
				}
			} else if (buttonId == 37) {
				if (cellValue == 1) {
					button37->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button37->BackColor = BackColor.White;
				}
			} else if (buttonId == 38) {
				if (cellValue == 1) {
					button38->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button38->BackColor = BackColor.White;
				}
			} else if (buttonId == 39) {
				if (cellValue == 1) {
					button39->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button39->BackColor = BackColor.White;
				}
			} else if (buttonId == 40) {
				if (cellValue == 1) {
					button40->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button40->BackColor = BackColor.White;
				}
			} else if (buttonId == 41) {
				if (cellValue == 1) {
					button41->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button41->BackColor = BackColor.White;
				}
			} else if (buttonId == 42) {
				if (cellValue == 1) {
					button42->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button42->BackColor = BackColor.White;
				}
			} else if (buttonId == 43) {
				if (cellValue == 1) {
					button43->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button43->BackColor = BackColor.White;
				}
			} else if (buttonId == 44) {
				if (cellValue == 1) {
					button44->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button44->BackColor = BackColor.White;
				}
			} else if (buttonId == 45) {
				if (cellValue == 1) {
					button45->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button45->BackColor = BackColor.White;
				}
			} else if (buttonId == 46) {
				if (cellValue == 1) {
					button46->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button46->BackColor = BackColor.White;
				}
			} else if (buttonId == 47) {
				if (cellValue == 1) {
					button47->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button47->BackColor = BackColor.White;
				}
			} else if (buttonId == 48) {
				if (cellValue == 1) {
					button48->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button48->BackColor = BackColor.White;
				}
			} else if (buttonId == 49) {
				if (cellValue == 1) {
					button49->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button49->BackColor = BackColor.White;
				}
			} else if (buttonId == 50) {
				if (cellValue == 1) {
					button50->BackColor = BackColor.DarkRed;
				} else if (cellValue == 0) {
					button50->BackColor = BackColor.White;
				}
			}
		}
		void checkMine(int buttonId) {

			if (debugMode) { // if debug mode is enabled, tell the user which button in the grid was clicked
				MessageBox::Show(this, "button" + buttonId + "clicked", "MinesweeperCLR");
			}

			int cellValue = 0;
			int row = 0;
			int column = 0;

			// convert the buttonId into coordinates
			// first the rows
			if (buttonId > 0 && buttonId < 11) { // if the buttonId is between 1 and 10, it's on row 0.
				row = 0;
			} else if (buttonId > 10 && buttonId < 21) {
				row = 1;
			} else if (buttonId > 20 && buttonId < 31) {
				row = 2;
			} else if (buttonId > 30 && buttonId < 41) {
				row = 3;
			} else if (buttonId > 40 && buttonId < 51) {
				row = 4;
			} else if (buttonId > 50 && buttonId < 61) {
				row = 5;
			} else if (buttonId > 60 && buttonId < 71) {
				row = 6;
			} else if (buttonId > 70 && buttonId < 81) {
				row = 7;
			} else if (buttonId > 80 && buttonId < 91) {
				row = 8;
			} else if (buttonId > 90) {
				row = 9;
			}

			// now the columns
			if (buttonId == 1 || buttonId == 2 || buttonId == 3 || buttonId == 4 || buttonId == 5 || buttonId == 6 || buttonId == 7 || buttonId == 8 || buttonId == 9 || buttonId == 10) {
				column = 0;
			} else if (buttonId == 11 || buttonId == 12 || buttonId == 13 || buttonId == 14 || buttonId == 15 || buttonId == 16 || buttonId == 17 || buttonId == 18 || buttonId == 19 || buttonId == 20) {
				column = 1;
			} else if (buttonId == 21 || buttonId == 22 || buttonId == 23 || buttonId == 24 || buttonId == 25 || buttonId == 26 || buttonId == 27 || buttonId == 28 || buttonId == 29 || buttonId == 30) {
				column = 2;
			} else if (buttonId == 31 || buttonId == 32 || buttonId == 33 || buttonId == 34 || buttonId == 35 || buttonId == 36 || buttonId == 37 || buttonId == 38 || buttonId == 39 || buttonId == 40) {
				column = 3;
			} else if (buttonId == 41 || buttonId == 42 || buttonId == 43 || buttonId == 44 || buttonId == 45 || buttonId == 46 || buttonId == 47 || buttonId == 48 || buttonId == 49 || buttonId == 50) {
				column = 4;
			} else if (buttonId == 51 || buttonId == 52 || buttonId == 53 || buttonId == 54 || buttonId == 55 || buttonId == 56 || buttonId == 57 || buttonId == 58 || buttonId == 59 || buttonId == 60) {
				column = 5;
			} else if (buttonId == 61 || buttonId == 62 || buttonId == 63 || buttonId == 64 || buttonId == 65 || buttonId == 66 || buttonId == 67 || buttonId == 68 || buttonId == 69 || buttonId == 70) {
				column = 6;
			} else if (buttonId == 71 || buttonId == 72 || buttonId == 73 || buttonId == 74 || buttonId == 75 || buttonId == 76 || buttonId == 77 || buttonId == 78 || buttonId == 79 || buttonId == 80) {
				column = 7;
			} else if (buttonId == 81 || buttonId == 82 || buttonId == 83 || buttonId == 84 || buttonId == 85 || buttonId == 86 || buttonId == 87 || buttonId == 88 || buttonId == 89 || buttonId == 90) {
				column = 8;
			} else if (buttonId == 91 || buttonId == 92 || buttonId == 93 || buttonId == 94 || buttonId == 95 || buttonId == 96 || buttonId == 97 || buttonId == 98 || buttonId == 99 || buttonId == 100) {
				column = 9;
			}

			// now we have the coordinates of the cell based on the buttonId, check what value is in that cell under the button and react accordingly:
			//  - if the cell value is 9, it is a mine and the player looses for hitting a mine
			//  - if the cell value is 0, there are no mines nearby and there is no mine in the cell
			//  - if the cell value is between 1 and 8 inclusive, the cell does not contain a mine however there are x mines nearby
			cellValue = theBoard[row][column];

			if (debugMode) {
				MessageBox::Show("theBoard[" + row + "][" + column + "]: " + theBoard[row][column]);
			}

			changeButton(buttonId, cellValue); // parse the cellValue and buttonId over to changeButton()

			if (cellValue == 1) { // there's a mine under the clicked cell
				MessageBox::Show("Game over");
			}
		}
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(1);
		}
		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(2);
		}
		private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(3);
		}
		private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(4);
		}
		private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(5);
		}
		private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(6);
		}
		private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(7);
		}
		private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(8);
		}
		private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(9);
		}
		private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(10);
		}
		private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(11);
		}
		private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(12);
		}
		private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(13);
		}
		private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(14);
		}
		private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(15);
		}
		private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(16);
		}
		private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(17);
		}
		private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(18);
		}
		private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(19);
		}
		private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(20);
		}
		private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(21);
		}
		private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(22);
		}
		private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(23);
		}
		private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(24);
		}
		private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(25);
		}
		private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(26);
		}
		private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(27);
		}
		private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(28);
		}
		private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(29);
		}
		private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(30);
		}
		private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(31);
		}
		private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(32);
		}
		private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(33);
		}
		private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(34);
		}
		private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(35);
		}
		private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(36);
		}
		private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(37);
		}
		private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(38);
		}
		private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(39);
		}
		private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(40);
		}
		private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(41);
		}
		private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(42);
		}
		private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(43);
		}
		private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(44);
		}
		private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(45);
		}
		private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(46);
		}
		private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(47);
		}
		private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(48);
		}
		private: System::Void button49_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(49);
		}
		private: System::Void button50_Click(System::Object^  sender, System::EventArgs^  e) {
			checkMine(50);
		}
};
}