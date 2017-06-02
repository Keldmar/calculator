#pragma once
#include <string>
#include <stdio.h>
#include <math.h>

namespace indz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		String^ first;
		String^ second;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  авторToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  спправкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;

			 Char operation;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
			 double tmp;
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->авторToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->спправкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(26, 40);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(291, 56);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 120);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(34, 33);
			this->button1->TabIndex = 1;
			this->button1->Text = L"←";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(76, 120);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(34, 33);
			this->button2->TabIndex = 2;
			this->button2->Text = L"C";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(26, 159);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(34, 33);
			this->button3->TabIndex = 3;
			this->button3->Text = L"1";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(76, 159);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(34, 33);
			this->button4->TabIndex = 4;
			this->button4->Text = L"2";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Control;
			this->button5->Location = System::Drawing::Point(132, 159);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(34, 33);
			this->button5->TabIndex = 5;
			this->button5->Text = L"3";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(26, 199);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(34, 33);
			this->button6->TabIndex = 6;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(76, 199);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(34, 33);
			this->button7->TabIndex = 7;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(132, 199);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(34, 33);
			this->button8->TabIndex = 8;
			this->button8->Text = L"6";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(26, 239);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(34, 33);
			this->button9->TabIndex = 9;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(76, 239);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(34, 33);
			this->button10->TabIndex = 10;
			this->button10->Text = L"8";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(132, 239);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(34, 33);
			this->button11->TabIndex = 11;
			this->button11->Text = L"9";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(26, 279);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(87, 33);
			this->button12->TabIndex = 12;
			this->button12->Text = L"0";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(132, 279);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(34, 33);
			this->button13->TabIndex = 13;
			this->button13->Text = L",";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(185, 279);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(34, 33);
			this->button14->TabIndex = 14;
			this->button14->Text = L"+";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(185, 239);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(34, 33);
			this->button15->TabIndex = 15;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(185, 200);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(34, 33);
			this->button16->TabIndex = 16;
			this->button16->Text = L"*";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(185, 159);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(34, 33);
			this->button17->TabIndex = 17;
			this->button17->Text = L"/";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(237, 239);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(80, 73);
			this->button18->TabIndex = 18;
			this->button18->Text = L"=";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox2->Location = System::Drawing::Point(332, 40);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(183, 272);
			this->textBox2->TabIndex = 19;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->авторToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(536, 24);
			this->menuStrip1->TabIndex = 20;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// авторToolStripMenuItem
			// 
			this->авторToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->спправкаToolStripMenuItem, 
				this->проПрограмуToolStripMenuItem});
			this->авторToolStripMenuItem->Name = L"авторToolStripMenuItem";
			this->авторToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->авторToolStripMenuItem->Text = L"Справка";
			// 
			// спправкаToolStripMenuItem
			// 
			this->спправкаToolStripMenuItem->Name = L"спправкаToolStripMenuItem";
			this->спправкаToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->спправкаToolStripMenuItem->Text = L"Автор";
			this->спправкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::спправкаToolStripMenuItem_Click);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			this->проПрограмуToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::проПрограмуToolStripMenuItem_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(132, 120);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(34, 33);
			this->button19->TabIndex = 21;
			this->button19->Text = L"ln";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(185, 120);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(34, 33);
			this->button20->TabIndex = 22;
			this->button20->Text = L"sin";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(237, 120);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(34, 33);
			this->button21->TabIndex = 23;
			this->button21->Text = L"cos";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(237, 159);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(34, 33);
			this->button22->TabIndex = 24;
			this->button22->Text = L"tg";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(237, 199);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(34, 33);
			this->button23->TabIndex = 25;
			this->button23->Text = L"ctg";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(283, 120);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(34, 33);
			this->button24->TabIndex = 26;
			this->button24->Text = L"1/x";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(283, 159);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(34, 33);
			this->button25->TabIndex = 27;
			this->button25->Text = L"x^2";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(283, 198);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(34, 33);
			this->button26->TabIndex = 28;
			this->button26->Text = L"√x";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Form1::button26_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(536, 331);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->Name = L"Form1";
			this->Text = L"Яхненко.О М-24";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ TorZ; // Крапка або кома
		private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
			 {
				 bool TZFound = false; // Розділовий знак знайдений
				 if (Char::IsDigit(e->KeyChar) == true) return;
				 if (e->KeyChar == (char)Keys::Back)  return;
				 if (textBox1->Text->IndexOf(TorZ) != -1)
				 TZFound = true;
				 if (TZFound == true) { e->Handled = true; return; }
				 if (e->KeyChar.ToString() == TorZ) return;
				 e->Handled = true; 
			 }
			 	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 // З'ясовуємо що встановлено в настройках як роздільник крапка або кома
				TorZ = Globalization::NumberFormatInfo::CurrentInfo->NumberDecimalSeparator;
			 }
//введення чисел з клавіатури
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text+="1";
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text+="2";
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text+="3";
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text+="4";
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text+="5";
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text+="6";
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text+="7";
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text+="8";
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text+="9";
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text+="0";
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text+=",";
		 }
		 //логічні операціїї
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 try
			 {
			 first=textBox1->Text; 
			 operation='+';
			 textBox2->Text+=textBox1->Text;
			 textBox1->Text="";
			 textBox2->Text+="+";
			 	 } 
			catch(System::FormatException^e) 
			{ 
			MessageBox::Show("помилкa, не вірний формат введення"); 
			}

		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 first=textBox1->Text; 
			 operation='-';
			 textBox2->Text+=textBox1->Text;
			 textBox1->Text="";
			 textBox2->Text+="-";
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 first=textBox1->Text; 
			 operation='*';
			 textBox2->Text+=textBox1->Text;
			 textBox1->Text="";
			 textBox2->Text+="*";
		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			 first=textBox1->Text; 
			 operation='/';
			 textBox2->Text+=textBox1->Text;
			 textBox1->Text="";
			 textBox2->Text+="/";

		 }	
		 //тригеонометричні функції
		 //логарифм
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 try 
			 { 
			 tmp=Convert::ToDouble(textBox1->Text);
			 textBox1->Text=Convert::ToString(log(tmp));
			 textBox2->Text+=("\r\nln("+tmp+")="+log(tmp)+"\r\n"); 
			 } 
			catch(System::FormatException^e) 
			{ 
			MessageBox::Show("помилкa, не вірний формат введення"); 
			}
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 try 
			 {//сінус
			 tmp=Convert::ToDouble(textBox1->Text);
			 textBox1->Text=Convert::ToString(sin(tmp));
			 textBox2->Text+=("\r\nsin("+tmp+")="+sin(tmp)+"\r\n"); 
			 } 
			catch(System::FormatException^e) 
			{ 
			MessageBox::Show("помилкa, не вірний формат введення"); 
			}
		 }
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			 try 
			 {//косінус
			 tmp=Convert::ToDouble(textBox1->Text);
			 textBox1->Text=Convert::ToString(cos(tmp));
			 textBox2->Text+=("\r\ncos("+tmp+")="+cos(tmp)+"\r\n");
			 } 
			catch(System::FormatException^e) 
			{ 
			MessageBox::Show("помилкa, не вірний формат введення"); 
			}
		 }
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			 try 
			 {//тангенс
			 tmp=Convert::ToDouble(textBox1->Text);
			 textBox1->Text=Convert::ToString(tan(tmp));
			 textBox2->Text+=("\r\ntan("+tmp+")="+tan(tmp)+"\r\n");
			 } 
			catch(System::FormatException^e) 
			{ 
			MessageBox::Show("помилкa, не вірний формат введення"); 
			}
		 }
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
			 try 
			 {//котангенс
			 tmp=Convert::ToDouble(textBox1->Text);
			 textBox1->Text=Convert::ToString(cos(tmp)/sin(tmp));
			 textBox2->Text+=("\r\nctg("+tmp+")="+(cos(tmp)/sin(tmp))+"\r\n");
			 } 
				catch(System::FormatException^e) 
				{ 
				MessageBox::Show("помилкa, не вірний формат введення"); 
				}
		 }
		 //додаткові функції
		 private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
			 try 
			 {//одиниця поділено на довільне число
			 tmp=Convert::ToDouble(textBox1->Text);
			 textBox1->Text=Convert::ToString(1/tmp);
			 textBox2->Text+=("\r\n1/"+tmp+"="+(1/tmp)+"\r\n"); 
			 } 
			catch(System::FormatException^e) 
			{ 
			MessageBox::Show("помилкa, не вірний формат введення"); 
			}

		 }
				  
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
			 try 
			 {//корінь квадратний
			 tmp=Convert::ToDouble(textBox1->Text);
			 textBox1->Text=Convert::ToString(sqrt(tmp));
			 textBox2->Text+=("\r\nsqrt("+tmp+")="+(sqrt(tmp))+"\r\n"); 
			 } 
			catch(System::FormatException^e) 
			{ 
			MessageBox::Show("помилкa, не вірний формат введення"); 
			}
		 }
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
			 try 
			 {//піднесення до квадратного степеня
			 tmp=Convert::ToDouble(textBox1->Text);
			 textBox1->Text=Convert::ToString(pow(tmp,2));
			 textBox2->Text+=("\r\n"+tmp+"^2="+(pow(tmp,2))+"\r\n"); 
			 } 
			catch(System::FormatException^e) 
			{ 
			MessageBox::Show("помилкa, не вірний формат введення"); 
			}
		 }

			//кнопка "=" та обробка логічних операцій методом switch
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			try 
			{ //переприсвоєння змінних, зміна типу данних
			second=textBox1->Text;
			double firstFloat, secondFloat, result;
			firstFloat=Convert::ToDouble(first);
			secondFloat=Convert::ToDouble(second);
			textBox2->Text+=textBox1->Text;
			switch(operation) 
			{ 
			case '+':result=(firstFloat+secondFloat); break; 
			case '-':result=(firstFloat-secondFloat); break; 
			case '*':result=(firstFloat*secondFloat); break; 
			case '/':result=(firstFloat/secondFloat);
				if(secondFloat==0)MessageBox::Show("Ділення на 0 неможливе"); break; 
			} 
			textBox1->Text=Convert::ToString(result);
			textBox2->Text+="=";
			textBox2->Text+=Convert::ToString(result);
			textBox2->Text+="\r\n";
			} 
			catch(System::FormatException^e) 
			{ 
			MessageBox::Show("помилкa, не вірний формат введення"); 
			}
		 }
		 //очищення полей
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Clear();
			 textBox2->Clear();
		 }
		 //меню
private: System::Void спправкаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Виконав як індивідуальне завдання студент групи М-24 Яхненко Олександр");
		 }

		 //меню
private: System::Void проПрограмуToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Данна програма калькулятор максимально наближена до функціоналу звичайного калькулятора Windows, включає в себе стандартні функції та історію виконаних дій. Примітка(перед початком нових обчислень рекомендовано очищати поле)");
		 }
		 //видалення останнього символа "←"
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text !="")
				 textBox1->Text=textBox1->Text->Remove(textBox1->Text->Length -1, 1);
		 }

};
}

