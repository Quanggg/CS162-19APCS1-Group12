
#pragma once
#include <fstream>
#include <sstream>
#include <string>
#include "stdafx.h"
#include <msclr/marshal_cppstd.h>
namespace StudentManagementSystem {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for changePassForm
	/// </summary>
	public ref class changePassForm : public System::Windows::Forms::Form
	{
	public:

		changePassForm(String^ st, String^ s)
		{
			ol = s;
			id = st;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
#pragma region Windows Form Designer generated code

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~changePassForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tb1stPass;
	protected:

	private: System::Windows::Forms::TextBox^ tb2ndPass;

	private: System::Windows::Forms::Button^ btAcc;
	private: System::Windows::Forms::Button^ btCancel;

	private: System::Windows::Forms::Button^ btOk;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lbNoti;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(changePassForm::typeid));
			this->tb1stPass = (gcnew System::Windows::Forms::TextBox());
			this->tb2ndPass = (gcnew System::Windows::Forms::TextBox());
			this->btAcc = (gcnew System::Windows::Forms::Button());
			this->btCancel = (gcnew System::Windows::Forms::Button());
			this->btOk = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lbNoti = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tb1stPass
			// 

			this->tb1stPass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));

			this->tb1stPass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));

			this->tb1stPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb1stPass->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb1stPass->ForeColor = System::Drawing::SystemColors::Window;
			this->tb1stPass->Location = System::Drawing::Point(227, 49);
			this->tb1stPass->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tb1stPass->Name = L"tb1stPass";
			this->tb1stPass->Size = System::Drawing::Size(263, 22);
			this->tb1stPass->TabIndex = 1;
			this->tb1stPass->UseSystemPasswordChar = true;
			// 
			// tb2ndPass
			// 
			this->tb2ndPass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->tb2ndPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb2ndPass->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F));
			this->tb2ndPass->ForeColor = System::Drawing::SystemColors::Window;
			this->tb2ndPass->Location = System::Drawing::Point(227, 129);
			this->tb2ndPass->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tb2ndPass->Name = L"tb2ndPass";
			this->tb2ndPass->Size = System::Drawing::Size(263, 22);
			this->tb2ndPass->TabIndex = 2;
			this->tb2ndPass->UseSystemPasswordChar = true;
			// 
			// btAcc
			// 
			this->btAcc->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btAcc->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->btAcc->FlatAppearance->BorderSize = 0;
			this->btAcc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btAcc->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btAcc->ForeColor = System::Drawing::SystemColors::Control;
			this->btAcc->Location = System::Drawing::Point(317, 226);
			this->btAcc->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btAcc->Name = L"btAcc";

			this->btAcc->Size = System::Drawing::Size(148, 52);

			this->btAcc->Size = System::Drawing::Size(111, 42);

			this->btAcc->TabIndex = 2;
			this->btAcc->Text = L"Accept";
			this->btAcc->UseVisualStyleBackColor = false;
			this->btAcc->Click += gcnew System::EventHandler(this, &changePassForm::btAcc_Click);
			// 
			// btCancel
			// 
			this->btCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btCancel->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->btCancel->FlatAppearance->BorderSize = 0;
			this->btCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btCancel->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btCancel->ForeColor = System::Drawing::SystemColors::Control;
			this->btCancel->Location = System::Drawing::Point(473, 226);
			this->btCancel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btCancel->Name = L"btCancel";

			this->btCancel->Size = System::Drawing::Size(148, 52);

			this->btCancel->Size = System::Drawing::Size(111, 42);

			this->btCancel->TabIndex = 2;
			this->btCancel->Text = L"Cancel";
			this->btCancel->UseVisualStyleBackColor = true;
			// 
			// btOk
			// 
			this->btOk->FlatAppearance->BorderSize = 0;
			this->btOk->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btOk->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btOk->ForeColor = System::Drawing::SystemColors::Control;
			this->btOk->Location = System::Drawing::Point(161, 226);
			this->btOk->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btOk->Name = L"btOk";

			this->btOk->Size = System::Drawing::Size(148, 52);

			this->btOk->Size = System::Drawing::Size(111, 42);

			this->btOk->TabIndex = 4;
			this->btOk->Text = L"OK";
			this->btOk->UseVisualStyleBackColor = true;
			this->btOk->Visible = false;
			this->btOk->Click += gcnew System::EventHandler(this, &changePassForm::btOk_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(43, 62);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 23);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Current password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(43, 142);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 23);
			this->label2->TabIndex = 5;
			this->label2->Text = L"New password";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(227, 156);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(262, 1);
			this->panel1->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Location = System::Drawing::Point(227, 76);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(262, 1);
			this->panel2->TabIndex = 6;
			// 
			// lbNoti
			// 
			this->lbNoti->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNoti->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbNoti->Location = System::Drawing::Point(169, 187);
			this->lbNoti->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNoti->Name = L"lbNoti";
			this->lbNoti->Size = System::Drawing::Size(320, 21);
			this->lbNoti->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(497, 39);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(43, 39);
			this->button1->TabIndex = 7;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &changePassForm::button1_MouseDown);
			this->button1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &changePassForm::button1_MouseUp);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(497, 118);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(43, 39);
			this->button2->TabIndex = 7;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &changePassForm::button2_MouseDown);
			this->button2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &changePassForm::button2_MouseUp);
			// 
			// changePassForm
			// 
			this->AcceptButton = this->btAcc;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;

			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->CancelButton = this->btCancel;
			this->ClientSize = System::Drawing::Size(637, 293);

			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->CancelButton = this->btCancel;
			this->ClientSize = System::Drawing::Size(478, 238);

			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lbNoti);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btOk);
			this->Controls->Add(this->btCancel);
			this->Controls->Add(this->btAcc);
			this->Controls->Add(this->tb2ndPass);
			this->Controls->Add(this->tb1stPass);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"changePassForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ ol, ^ id;
	private: System::Void btAcc_Click(System::Object^ sender, System::EventArgs^ e) {
		if (tb1stPass->Text == ol && tb2ndPass->Text != "")
		{
			btOk->Visible = true;
			lbNoti->Text = "Change successfully!";
			ol = tb2ndPass->Text;
			ostringstream text;
			ifstream in_file("user_login.txt");
			text << in_file.rdbuf();
			string str = text.str();
			string str_found = msclr::interop::marshal_as<std::string>(id->ToString());
			string str_replace = msclr::interop::marshal_as<std::string>(ol->ToString());
			size_t pos = str.find(str_found);
			str.replace(pos + str_found.length() + 1, msclr::interop::marshal_as<std::string>(tb1stPass->Text->ToString()).length(), str_replace);
			in_file.close();
			ofstream out_file("user_login.txt");
			out_file << str;
			out_file.close();
		}
		else
		{
			btOk->Visible = false;
			lbNoti->Text = "Please check again!";
		}
	}
	private: System::Void btOk_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		tb1stPass->UseSystemPasswordChar = false;
	}
	private: System::Void button1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		tb1stPass->UseSystemPasswordChar = true;
	}
	private: System::Void button2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		tb2ndPass->UseSystemPasswordChar = false;
	}
	private: System::Void button2_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		tb2ndPass->UseSystemPasswordChar = true;
	}

};

}

