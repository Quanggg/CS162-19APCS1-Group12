<<<<<<< Updated upstream
﻿#pragma once
#include <map>
#include <string>
#include <fstream>
namespace StudentManagementSystem {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for mainForm
	/// </summary>
	
	
	public ref class mainForm : public System::Windows::Forms::Form
	{
		ref class classInfo
		{
		};
		ref class userInfo
		{
		public: String^ fullName, ^ dob, ^ email, ^userid, ^userpass;
		};
	public:
		mainForm(void)
		{
			InitializeComponent();	
			loadData();
			showLoginPanel();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelLogin;
	private: System::Windows::Forms::TextBox^ tbUserPass;
	protected:

	private: System::Windows::Forms::TextBox^ tbUserId;
	private: System::Windows::Forms::Button^ btLogin;
	private: System::Windows::Forms::TextBox^ tbLogin;
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Panel^ panelBtProfile;

	private: System::Windows::Forms::Button^ btProfile;
	private: System::Windows::Forms::Panel^ panelMenuClass;

	private: System::Windows::Forms::Button^ btStudentList;
	private: System::Windows::Forms::Button^ btClassList;
	private: System::Windows::Forms::Button^ btClass;
	private: System::Windows::Forms::Panel^ panelLogo;

	private: System::Windows::Forms::Panel^ panelMain;
	private: System::Windows::Forms::TextBox^ tbProfileHead;

	private: System::Windows::Forms::Panel^ panelProfile;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ btLogout;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ tbProfileClass;

	private: System::Windows::Forms::TextBox^ tbProfileSid;

	private: System::Windows::Forms::TextBox^ tbProfileDob;
	private: System::Windows::Forms::TextBox^ tbProfileUserPass;


	private: System::Windows::Forms::TextBox^ tbProfileUserid;

	private: System::Windows::Forms::TextBox^ tbProfileFullname;
	private: System::Windows::Forms::Button^ tbChangePass;
	private: System::Windows::Forms::TextBox^ tbProfileEmail;
	private: System::Windows::Forms::TextBox^ textBox11;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->panelLogin = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tbLogin = (gcnew System::Windows::Forms::TextBox());
			this->btLogin = (gcnew System::Windows::Forms::Button());
			this->tbUserPass = (gcnew System::Windows::Forms::TextBox());
			this->tbUserId = (gcnew System::Windows::Forms::TextBox());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelMenuClass = (gcnew System::Windows::Forms::Panel());
			this->btStudentList = (gcnew System::Windows::Forms::Button());
			this->btClassList = (gcnew System::Windows::Forms::Button());
			this->btClass = (gcnew System::Windows::Forms::Button());
			this->panelBtProfile = (gcnew System::Windows::Forms::Panel());
			this->btProfile = (gcnew System::Windows::Forms::Button());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->panelProfile = (gcnew System::Windows::Forms::Panel());
			this->tbChangePass = (gcnew System::Windows::Forms::Button());
			this->btLogout = (gcnew System::Windows::Forms::Button());
			this->tbProfileClass = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileSid = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileDob = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileUserPass = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileUserid = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileFullname = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileHead = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileEmail = (gcnew System::Windows::Forms::TextBox());
			this->panelLogin->SuspendLayout();
			this->panelMenu->SuspendLayout();
			this->panelMenuClass->SuspendLayout();
			this->panelBtProfile->SuspendLayout();
			this->panelMain->SuspendLayout();
			this->panelProfile->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelLogin
			// 
			this->panelLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelLogin->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panelLogin->Controls->Add(this->textBox2);
			this->panelLogin->Controls->Add(this->textBox1);
			this->panelLogin->Controls->Add(this->tbLogin);
			this->panelLogin->Controls->Add(this->btLogin);
			this->panelLogin->Controls->Add(this->tbUserPass);
			this->panelLogin->Controls->Add(this->tbUserId);
			this->panelLogin->Location = System::Drawing::Point(845, 461);
			this->panelLogin->Name = L"panelLogin";
			this->panelLogin->Size = System::Drawing::Size(10, 13);
			this->panelLogin->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(29, 165);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(87, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"Password:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(29, 125);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(87, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"ID:";
			// 
			// tbLogin
			// 
			this->tbLogin->Location = System::Drawing::Point(60, 213);
			this->tbLogin->Name = L"tbLogin";
			this->tbLogin->Size = System::Drawing::Size(241, 20);
			this->tbLogin->TabIndex = 2;
			// 
			// btLogin
			// 
			this->btLogin->Location = System::Drawing::Point(214, 259);
			this->btLogin->Name = L"btLogin";
			this->btLogin->Size = System::Drawing::Size(128, 55);
			this->btLogin->TabIndex = 1;
			this->btLogin->Text = L"Login";
			this->btLogin->UseVisualStyleBackColor = true;
			this->btLogin->Click += gcnew System::EventHandler(this, &mainForm::btLogin_Click);
			// 
			// tbUserPass
			// 
			this->tbUserPass->Location = System::Drawing::Point(152, 165);
			this->tbUserPass->Name = L"tbUserPass";
			this->tbUserPass->PasswordChar = '*';
			this->tbUserPass->Size = System::Drawing::Size(149, 20);
			this->tbUserPass->TabIndex = 0;
			// 
			// tbUserId
			// 
			this->tbUserId->Location = System::Drawing::Point(152, 125);
			this->tbUserId->Name = L"tbUserId";
			this->tbUserId->Size = System::Drawing::Size(149, 20);
			this->tbUserId->TabIndex = 0;
			// 
			// panelMenu
			// 
			this->panelMenu->AutoScroll = true;
			this->panelMenu->Controls->Add(this->button1);
			this->panelMenu->Controls->Add(this->panelMenuClass);
			this->panelMenu->Controls->Add(this->btClass);
			this->panelMenu->Controls->Add(this->panelBtProfile);
			this->panelMenu->Controls->Add(this->panelLogo);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(156, 589);
			this->panelMenu->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->Location = System::Drawing::Point(0, 293);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 43);
			this->button1->TabIndex = 4;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panelMenuClass
			// 
			this->panelMenuClass->Controls->Add(this->btStudentList);
			this->panelMenuClass->Controls->Add(this->btClassList);
			this->panelMenuClass->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelMenuClass->Location = System::Drawing::Point(0, 227);
			this->panelMenuClass->Name = L"panelMenuClass";
			this->panelMenuClass->Size = System::Drawing::Size(156, 66);
			this->panelMenuClass->TabIndex = 3;
			// 
			// btStudentList
			// 
			this->btStudentList->Dock = System::Windows::Forms::DockStyle::Top;
			this->btStudentList->Location = System::Drawing::Point(0, 33);
			this->btStudentList->Name = L"btStudentList";
			this->btStudentList->Size = System::Drawing::Size(156, 33);
			this->btStudentList->TabIndex = 1;
			this->btStudentList->Text = L"View student list";
			this->btStudentList->UseVisualStyleBackColor = true;
			// 
			// btClassList
			// 
			this->btClassList->Dock = System::Windows::Forms::DockStyle::Top;
			this->btClassList->Location = System::Drawing::Point(0, 0);
			this->btClassList->Name = L"btClassList";
			this->btClassList->Size = System::Drawing::Size(156, 33);
			this->btClassList->TabIndex = 0;
			this->btClassList->Text = L"View class list";
			this->btClassList->UseVisualStyleBackColor = true;
			// 
			// btClass
			// 
			this->btClass->Dock = System::Windows::Forms::DockStyle::Top;
			this->btClass->Location = System::Drawing::Point(0, 184);
			this->btClass->Name = L"btClass";
			this->btClass->Size = System::Drawing::Size(156, 43);
			this->btClass->TabIndex = 1;
			this->btClass->Text = L"Class";
			this->btClass->UseVisualStyleBackColor = true;
			// 
			// panelBtProfile
			// 
			this->panelBtProfile->Controls->Add(this->btProfile);
			this->panelBtProfile->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelBtProfile->Location = System::Drawing::Point(0, 100);
			this->panelBtProfile->Name = L"panelBtProfile";
			this->panelBtProfile->Size = System::Drawing::Size(156, 84);
			this->panelBtProfile->TabIndex = 0;
			// 
			// btProfile
			// 
			this->btProfile->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btProfile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btProfile.Image")));
			this->btProfile->Location = System::Drawing::Point(0, 0);
			this->btProfile->Name = L"btProfile";
			this->btProfile->Size = System::Drawing::Size(156, 84);
			this->btProfile->TabIndex = 0;
			this->btProfile->UseVisualStyleBackColor = true;
			this->btProfile->Click += gcnew System::EventHandler(this, &mainForm::btProfile_Click);
			// 
			// panelLogo
			// 
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(156, 100);
			this->panelLogo->TabIndex = 2;
			// 
			// panelMain
			// 
			this->panelMain->Controls->Add(this->panelProfile);
			this->panelMain->Controls->Add(this->panelLogin);
			this->panelMain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelMain->Location = System::Drawing::Point(156, 0);
			this->panelMain->Name = L"panelMain";
			this->panelMain->Size = System::Drawing::Size(918, 589);
			this->panelMain->TabIndex = 2;
			// 
			// panelProfile
			// 
			this->panelProfile->Controls->Add(this->tbChangePass);
			this->panelProfile->Controls->Add(this->btLogout);
			this->panelProfile->Controls->Add(this->tbProfileClass);
			this->panelProfile->Controls->Add(this->textBox7);
			this->panelProfile->Controls->Add(this->tbProfileEmail);
			this->panelProfile->Controls->Add(this->tbProfileSid);
			this->panelProfile->Controls->Add(this->textBox11);
			this->panelProfile->Controls->Add(this->textBox6);
			this->panelProfile->Controls->Add(this->tbProfileDob);
			this->panelProfile->Controls->Add(this->textBox5);
			this->panelProfile->Controls->Add(this->tbProfileUserPass);
			this->panelProfile->Controls->Add(this->textBox10);
			this->panelProfile->Controls->Add(this->tbProfileUserid);
			this->panelProfile->Controls->Add(this->textBox8);
			this->panelProfile->Controls->Add(this->tbProfileFullname);
			this->panelProfile->Controls->Add(this->textBox4);
			this->panelProfile->Controls->Add(this->textBox9);
			this->panelProfile->Controls->Add(this->textBox3);
			this->panelProfile->Controls->Add(this->tbProfileHead);
			this->panelProfile->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelProfile->Location = System::Drawing::Point(0, 0);
			this->panelProfile->Name = L"panelProfile";
			this->panelProfile->Size = System::Drawing::Size(918, 589);
			this->panelProfile->TabIndex = 1;
			this->panelProfile->Visible = false;
			// 
			// tbChangePass
			// 
			this->tbChangePass->Location = System::Drawing::Point(609, 270);
			this->tbChangePass->Name = L"tbChangePass";
			this->tbChangePass->Size = System::Drawing::Size(166, 23);
			this->tbChangePass->TabIndex = 3;
			this->tbChangePass->Text = L"Change password";
			this->tbChangePass->UseVisualStyleBackColor = true;
			// 
			// btLogout
			// 
			this->btLogout->Location = System::Drawing::Point(831, 554);
			this->btLogout->Name = L"btLogout";
			this->btLogout->Size = System::Drawing::Size(75, 23);
			this->btLogout->TabIndex = 2;
			this->btLogout->Text = L"Logout";
			this->btLogout->UseVisualStyleBackColor = true;
			this->btLogout->Click += gcnew System::EventHandler(this, &mainForm::btLogout_Click);
			// 
			// tbProfileClass
			// 
			this->tbProfileClass->Location = System::Drawing::Point(182, 359);
			this->tbProfileClass->Name = L"tbProfileClass";
			this->tbProfileClass->Size = System::Drawing::Size(100, 20);
			this->tbProfileClass->TabIndex = 1;
			this->tbProfileClass->Text = L"Class";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(34, 359);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 1;
			this->textBox7->Text = L"Class";
			// 
			// tbProfileSid
			// 
			this->tbProfileSid->Location = System::Drawing::Point(182, 316);
			this->tbProfileSid->Name = L"tbProfileSid";
			this->tbProfileSid->Size = System::Drawing::Size(100, 20);
			this->tbProfileSid->TabIndex = 1;
			this->tbProfileSid->Text = L"Student ID";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(34, 316);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 1;
			this->textBox6->Text = L"Student ID";
			// 
			// tbProfileDob
			// 
			this->tbProfileDob->Location = System::Drawing::Point(182, 215);
			this->tbProfileDob->Name = L"tbProfileDob";
			this->tbProfileDob->Size = System::Drawing::Size(100, 20);
			this->tbProfileDob->TabIndex = 1;
			this->tbProfileDob->Text = L"Date of birth";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(34, 215);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 1;
			this->textBox5->Text = L"Date of birth";
			// 
			// tbProfileUserPass
			// 
			this->tbProfileUserPass->Location = System::Drawing::Point(664, 215);
			this->tbProfileUserPass->Name = L"tbProfileUserPass";
			this->tbProfileUserPass->Size = System::Drawing::Size(100, 20);
			this->tbProfileUserPass->TabIndex = 1;
			this->tbProfileUserPass->Text = L"Password";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(516, 215);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 1;
			this->textBox10->Text = L"Password";
			// 
			// tbProfileUserid
			// 
			this->tbProfileUserid->Location = System::Drawing::Point(664, 172);
			this->tbProfileUserid->Name = L"tbProfileUserid";
			this->tbProfileUserid->Size = System::Drawing::Size(100, 20);
			this->tbProfileUserid->TabIndex = 1;
			this->tbProfileUserid->Text = L"User name";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(516, 172);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 1;
			this->textBox8->Text = L"User name";
			// 
			// tbProfileFullname
			// 
			this->tbProfileFullname->Location = System::Drawing::Point(182, 172);
			this->tbProfileFullname->Name = L"tbProfileFullname";
			this->tbProfileFullname->Size = System::Drawing::Size(100, 20);
			this->tbProfileFullname->TabIndex = 1;
			this->tbProfileFullname->Text = L"Full name";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(34, 172);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 1;
			this->textBox4->Text = L"Full name";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(516, 99);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 1;
			this->textBox9->Text = L"Login info";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(34, 99);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 1;
			this->textBox3->Text = L"Profile ";
			// 
			// tbProfileHead
			// 
			this->tbProfileHead->Dock = System::Windows::Forms::DockStyle::Top;
			this->tbProfileHead->Location = System::Drawing::Point(0, 0);
			this->tbProfileHead->Name = L"tbProfileHead";
			this->tbProfileHead->Size = System::Drawing::Size(918, 20);
			this->tbProfileHead->TabIndex = 0;
			this->tbProfileHead->Text = L"PROFILE";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(34, 267);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 1;
			this->textBox11->Text = L"Email";
			// 
			// tbProfileEmail
			// 
			this->tbProfileEmail->Location = System::Drawing::Point(182, 267);
			this->tbProfileEmail->Name = L"tbProfileEmail";
			this->tbProfileEmail->Size = System::Drawing::Size(100, 20);
			this->tbProfileEmail->TabIndex = 1;
			this->tbProfileEmail->Text = L"Email";
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1074, 589);
			this->Controls->Add(this->panelMain);
			this->Controls->Add(this->panelMenu);
			this->Name = L"mainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"mainForm";
			this->panelLogin->ResumeLayout(false);
			this->panelLogin->PerformLayout();
			this->panelMenu->ResumeLayout(false);
			this->panelMenuClass->ResumeLayout(false);
			this->panelBtProfile->ResumeLayout(false);
			this->panelMain->ResumeLayout(false);
			this->panelProfile->ResumeLayout(false);
			this->panelProfile->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//
		List<classInfo^> classList;
		List<userInfo^> userInfoList;
		userInfo^ uInfo;
		//
		void showLoginPanel() //open Login screen
		{
			panelMenu->Visible = false;
			this->Left = (this->Left * 2 - 380 + 1100) / 2;
			this->Top = (this->Top * 2 - 500 + 650) / 2;
			this->Height = 500;
			this->Width = 380;
			panelLogin->Dock = DockStyle(5);
		}
		void loadData()
		{
			// import accounts file
			std::ifstream f;
			std::string s;
			userInfo^ u = gcnew userInfo;
			f.open("user.csv");
			while (f.good())
			{
				getline(f, s, ',');
				u->fullName = gcnew String(s.c_str());
				getline(f, s, ',');
				u->dob = gcnew String(s.c_str());
				getline(f, s, ',');
				u->email = gcnew String(s.c_str());
				getline(f, s, ',');
				u->userid = gcnew String(s.c_str());
				getline(f, s, '\n');
				u->userpass = gcnew String(s.c_str());
				userInfoList.Add(u);
			}
		}
		bool loginCheck(String^ id, String^ pass) //check when user login
		{
			for each (userInfo^ i in userInfoList)
			{
				if (i->userid == id && i->userpass == pass)
				{
					uInfo = i;
					return true;
				}
			}
			return false;
		}
		void openPanel(Panel^ tmp) //hide all panels and open 1 panel
		{
			panelProfile->Visible = false;
			tmp->Visible = true;
		}
		private: System::Void btLogin_Click(System::Object^ sender, System::EventArgs^ e) {
			if (loginCheck(tbUserId->Text, tbUserPass->Text))
			{
				panelLogin->Visible = false;
				this->Left = (this->Left * 2 + 380 - 1100) / 2;
				this->Top = (this->Top * 2 + 500 - 650) / 2;
				this->Width = 1100;
				this->Height = 650;
				panelMenu->Visible = true;
				tbUserPass->Text = "";
				tbLogin->Text = "";
			}
			else
			{
				tbLogin->Text = "WRONG ID OR PASSWORD. PLEASE TRY AGAIN!";
				tbLogin->Text = userInfoList[1]->userpass->Length.ToString();
			}
		}			   
		public: System::Void btProfile_Click(System::Object^ sender, System::EventArgs^ e) {
			openPanel(panelProfile);
			tbProfileFullname->Text = uInfo->fullName;
			tbProfileDob->Text = uInfo->dob;
			tbProfileEmail->Text = uInfo->email;
			tbProfileUserid->Text = uInfo->userid;
			tbProfileUserPass->Text = uInfo->userpass;
		}
		private: System::Void btLogout_Click(System::Object^ sender, System::EventArgs^ e) {
			showLoginPanel();
			openPanel(panelLogin);
		}
	};
}
=======
﻿#pragma once
#include <map>
#include <string>
#include <fstream>
#include "changePassForm.h"
#include "stdafx.h"
#include <msclr/marshal_cppstd.h>
namespace StudentManagementSystem {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for mainForm
	/// </summary>


	public ref class mainForm : public System::Windows::Forms::Form
	{
	public: ref class classInfo
	{
	public: String^ name, ^ detail;
	};
	public: ref class userInfo
	{
	public: String^ fullName, ^ dob, ^ email, ^ userid, ^ userpass, ^ no;
	};
	public:
		mainForm(void)
		{
			InitializeComponent();
			loadData();
			showLoginPanel();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
#pragma region Windows Form Designer generated code
	private: System::Windows::Forms::Panel^ panelLogin;
	private: System::Windows::Forms::TextBox^ tbUserPass;
	protected:

	private: System::Windows::Forms::TextBox^ tbUserId;
	private: System::Windows::Forms::Button^ btLogin;
	private: System::Windows::Forms::TextBox^ tbLogin;
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Panel^ panelBtProfile;

	private: System::Windows::Forms::Button^ btProfile;




	private: System::Windows::Forms::Button^ btClass;
	private: System::Windows::Forms::Panel^ panelLogo;

	private: System::Windows::Forms::Panel^ panelMain;
	private: System::Windows::Forms::TextBox^ tbProfileHead;

	private: System::Windows::Forms::Panel^ panelProfile;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ btLogout;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ tbProfileClass;

	private: System::Windows::Forms::TextBox^ tbProfileSid;

	private: System::Windows::Forms::TextBox^ tbProfileDob;
	private: System::Windows::Forms::TextBox^ tbProfileUserPass;


	private: System::Windows::Forms::TextBox^ tbProfileUserid;

	private: System::Windows::Forms::TextBox^ tbProfileFullname;
	private: System::Windows::Forms::Button^ tbChangePass;
	private: System::Windows::Forms::TextBox^ tbProfileEmail;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Panel^ panelClassList;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::DataGridView^ dgvClassList;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvClassNo;
	private: System::Windows::Forms::DataGridViewButtonColumn^ dgvClassName;
	private: System::Windows::Forms::DataGridViewButtonColumn^ dgvClassDetail;
	private: System::Windows::Forms::DataGridView^ dgvStudentList;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListNo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListLastname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListFirstname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListGender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListDob;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ dgvStudentListAction;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->panelLogin = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tbLogin = (gcnew System::Windows::Forms::TextBox());
			this->btLogin = (gcnew System::Windows::Forms::Button());
			this->tbUserPass = (gcnew System::Windows::Forms::TextBox());
			this->tbUserId = (gcnew System::Windows::Forms::TextBox());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btClass = (gcnew System::Windows::Forms::Button());
			this->panelBtProfile = (gcnew System::Windows::Forms::Panel());
			this->btProfile = (gcnew System::Windows::Forms::Button());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->panelClassList = (gcnew System::Windows::Forms::Panel());
			this->dgvStudentList = (gcnew System::Windows::Forms::DataGridView());
			this->dgvStudentListNo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListLastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListFirstname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListGender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListDob = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListAction = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->dgvClassList = (gcnew System::Windows::Forms::DataGridView());
			this->dgvClassNo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvClassName = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->dgvClassDetail = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->panelProfile = (gcnew System::Windows::Forms::Panel());
			this->tbChangePass = (gcnew System::Windows::Forms::Button());
			this->btLogout = (gcnew System::Windows::Forms::Button());
			this->tbProfileClass = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileSid = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileDob = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileUserPass = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileUserid = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileFullname = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileHead = (gcnew System::Windows::Forms::TextBox());
			this->panelLogin->SuspendLayout();
			this->panelMenu->SuspendLayout();
			this->panelBtProfile->SuspendLayout();
			this->panelMain->SuspendLayout();
			this->panelClassList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStudentList))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClassList))->BeginInit();
			this->panelProfile->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelLogin
			// 
			this->panelLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelLogin->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panelLogin->Controls->Add(this->textBox2);
			this->panelLogin->Controls->Add(this->textBox1);
			this->panelLogin->Controls->Add(this->tbLogin);
			this->panelLogin->Controls->Add(this->btLogin);
			this->panelLogin->Controls->Add(this->tbUserPass);
			this->panelLogin->Controls->Add(this->tbUserId);
			this->panelLogin->Location = System::Drawing::Point(560, 542);
			this->panelLogin->Name = L"panelLogin";
			this->panelLogin->Size = System::Drawing::Size(10, 10);
			this->panelLogin->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(29, 165);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(87, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"Password:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(29, 125);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(87, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"ID:";
			// 
			// tbLogin
			// 
			this->tbLogin->Location = System::Drawing::Point(60, 213);
			this->tbLogin->Name = L"tbLogin";
			this->tbLogin->Size = System::Drawing::Size(241, 20);
			this->tbLogin->TabIndex = 2;
			// 
			// btLogin
			// 
			this->btLogin->Location = System::Drawing::Point(214, 259);
			this->btLogin->Name = L"btLogin";
			this->btLogin->Size = System::Drawing::Size(128, 55);
			this->btLogin->TabIndex = 1;
			this->btLogin->Text = L"Login";
			this->btLogin->UseVisualStyleBackColor = true;
			this->btLogin->Click += gcnew System::EventHandler(this, &mainForm::btLogin_Click);
			// 
			// tbUserPass
			// 
			this->tbUserPass->Location = System::Drawing::Point(152, 165);
			this->tbUserPass->Name = L"tbUserPass";
			this->tbUserPass->PasswordChar = '*';
			this->tbUserPass->Size = System::Drawing::Size(149, 20);
			this->tbUserPass->TabIndex = 0;
			// 
			// tbUserId
			// 
			this->tbUserId->Location = System::Drawing::Point(152, 125);
			this->tbUserId->Name = L"tbUserId";
			this->tbUserId->Size = System::Drawing::Size(149, 20);
			this->tbUserId->TabIndex = 0;
			// 
			// panelMenu
			// 
			this->panelMenu->AutoScroll = true;
			this->panelMenu->Controls->Add(this->button1);
			this->panelMenu->Controls->Add(this->btClass);
			this->panelMenu->Controls->Add(this->panelBtProfile);
			this->panelMenu->Controls->Add(this->panelLogo);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(156, 589);
			this->panelMenu->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->Location = System::Drawing::Point(0, 227);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 43);
			this->button1->TabIndex = 4;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// btClass
			// 
			this->btClass->Dock = System::Windows::Forms::DockStyle::Top;
			this->btClass->Location = System::Drawing::Point(0, 184);
			this->btClass->Name = L"btClass";
			this->btClass->Size = System::Drawing::Size(156, 43);
			this->btClass->TabIndex = 1;
			this->btClass->Text = L"Class";
			this->btClass->UseVisualStyleBackColor = true;
			this->btClass->Click += gcnew System::EventHandler(this, &mainForm::btClass_Click);
			// 
			// panelBtProfile
			// 
			this->panelBtProfile->Controls->Add(this->btProfile);
			this->panelBtProfile->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelBtProfile->Location = System::Drawing::Point(0, 100);
			this->panelBtProfile->Name = L"panelBtProfile";
			this->panelBtProfile->Size = System::Drawing::Size(156, 84);
			this->panelBtProfile->TabIndex = 0;
			// 
			// btProfile
			// 
			this->btProfile->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btProfile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btProfile.Image")));
			this->btProfile->Location = System::Drawing::Point(0, 0);
			this->btProfile->Name = L"btProfile";
			this->btProfile->Size = System::Drawing::Size(156, 84);
			this->btProfile->TabIndex = 0;
			this->btProfile->UseVisualStyleBackColor = true;
			this->btProfile->Click += gcnew System::EventHandler(this, &mainForm::btProfile_Click);
			// 
			// panelLogo
			// 
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(156, 100);
			this->panelLogo->TabIndex = 2;
			// 
			// panelMain
			// 
			this->panelMain->Controls->Add(this->panelClassList);
			this->panelMain->Controls->Add(this->panelProfile);
			this->panelMain->Controls->Add(this->panelLogin);
			this->panelMain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelMain->Location = System::Drawing::Point(156, 0);
			this->panelMain->Name = L"panelMain";
			this->panelMain->Size = System::Drawing::Size(918, 589);
			this->panelMain->TabIndex = 2;
			// 
			// panelClassList
			// 
			this->panelClassList->Controls->Add(this->dgvStudentList);
			this->panelClassList->Controls->Add(this->dgvClassList);
			this->panelClassList->Controls->Add(this->textBox12);
			this->panelClassList->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelClassList->Location = System::Drawing::Point(0, 0);
			this->panelClassList->Name = L"panelClassList";
			this->panelClassList->Size = System::Drawing::Size(918, 589);
			this->panelClassList->TabIndex = 2;
			// 
			// dgvStudentList
			// 
			this->dgvStudentList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStudentList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dgvStudentListNo,
					this->dgvStudentListID, this->dgvStudentListLastname, this->dgvStudentListFirstname, this->dgvStudentListGender, this->dgvStudentListDob,
					this->dgvStudentListAction
			});
			this->dgvStudentList->Location = System::Drawing::Point(74, 127);
			this->dgvStudentList->Name = L"dgvStudentList";
			this->dgvStudentList->RowHeadersVisible = false;
			this->dgvStudentList->Size = System::Drawing::Size(633, 343);
			this->dgvStudentList->TabIndex = 2;
			this->dgvStudentList->Visible = false;
			// 
			// dgvStudentListNo
			// 
			this->dgvStudentListNo->HeaderText = L"No";
			this->dgvStudentListNo->Name = L"dgvStudentListNo";
			this->dgvStudentListNo->ReadOnly = true;
			this->dgvStudentListNo->Width = 50;
			// 
			// dgvStudentListID
			// 
			this->dgvStudentListID->HeaderText = L"STUDEN ID";
			this->dgvStudentListID->Name = L"dgvStudentListID";
			// 
			// dgvStudentListLastname
			// 
			this->dgvStudentListLastname->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dgvStudentListLastname->HeaderText = L"LASTNAME";
			this->dgvStudentListLastname->Name = L"dgvStudentListLastname";
			// 
			// dgvStudentListFirstname
			// 
			this->dgvStudentListFirstname->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dgvStudentListFirstname->HeaderText = L"FIRSTNAME";
			this->dgvStudentListFirstname->Name = L"dgvStudentListFirstname";
			// 
			// dgvStudentListGender
			// 
			this->dgvStudentListGender->HeaderText = L"GENDER";
			this->dgvStudentListGender->Name = L"dgvStudentListGender";
			// 
			// dgvStudentListDob
			// 
			this->dgvStudentListDob->HeaderText = L"DoB";
			this->dgvStudentListDob->Name = L"dgvStudentListDob";
			// 
			// dgvStudentListAction
			// 
			this->dgvStudentListAction->DisplayStyle = System::Windows::Forms::DataGridViewComboBoxDisplayStyle::ComboBox;
			this->dgvStudentListAction->HeaderText = L"ACTION";
			this->dgvStudentListAction->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Remove", L"Edit", L"Move" });
			this->dgvStudentListAction->Name = L"dgvStudentListAction";
			// 
			// dgvClassList
			// 
			this->dgvClassList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvClassList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dgvClassNo,
					this->dgvClassName, this->dgvClassDetail
			});
			this->dgvClassList->Location = System::Drawing::Point(18, 45);
			this->dgvClassList->Name = L"dgvClassList";
			this->dgvClassList->RowHeadersVisible = false;
			this->dgvClassList->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvClassList->Size = System::Drawing::Size(884, 494);
			this->dgvClassList->TabIndex = 1;
			this->dgvClassList->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &mainForm::dgvClassList_CellContentClick);
			// 
			// dgvClassNo
			// 
			this->dgvClassNo->HeaderText = L"No";
			this->dgvClassNo->Name = L"dgvClassNo";
			this->dgvClassNo->ReadOnly = true;
			this->dgvClassNo->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvClassNo->Width = 50;
			// 
			// dgvClassName
			// 
			this->dgvClassName->HeaderText = L"CLASS NAME";
			this->dgvClassName->Name = L"dgvClassName";
			this->dgvClassName->Width = 150;
			// 
			// dgvClassDetail
			// 
			this->dgvClassDetail->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dgvClassDetail->HeaderText = L"DETAIL";
			this->dgvClassDetail->Name = L"dgvClassDetail";
			// 
			// textBox12
			// 
			this->textBox12->Dock = System::Windows::Forms::DockStyle::Top;
			this->textBox12->Location = System::Drawing::Point(0, 0);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(918, 20);
			this->textBox12->TabIndex = 0;
			this->textBox12->Text = L"Class List";
			// 
			// panelProfile
			// 
			this->panelProfile->Controls->Add(this->tbChangePass);
			this->panelProfile->Controls->Add(this->btLogout);
			this->panelProfile->Controls->Add(this->tbProfileClass);
			this->panelProfile->Controls->Add(this->textBox7);
			this->panelProfile->Controls->Add(this->tbProfileEmail);
			this->panelProfile->Controls->Add(this->tbProfileSid);
			this->panelProfile->Controls->Add(this->textBox11);
			this->panelProfile->Controls->Add(this->textBox6);
			this->panelProfile->Controls->Add(this->tbProfileDob);
			this->panelProfile->Controls->Add(this->textBox5);
			this->panelProfile->Controls->Add(this->tbProfileUserPass);
			this->panelProfile->Controls->Add(this->textBox10);
			this->panelProfile->Controls->Add(this->tbProfileUserid);
			this->panelProfile->Controls->Add(this->textBox8);
			this->panelProfile->Controls->Add(this->tbProfileFullname);
			this->panelProfile->Controls->Add(this->textBox4);
			this->panelProfile->Controls->Add(this->textBox9);
			this->panelProfile->Controls->Add(this->textBox3);
			this->panelProfile->Controls->Add(this->tbProfileHead);
			this->panelProfile->Location = System::Drawing::Point(679, 160);
			this->panelProfile->Name = L"panelProfile";
			this->panelProfile->Size = System::Drawing::Size(68, 45);
			this->panelProfile->TabIndex = 1;
			this->panelProfile->Visible = false;
			// 
			// tbChangePass
			// 
			this->tbChangePass->Location = System::Drawing::Point(609, 270);
			this->tbChangePass->Name = L"tbChangePass";
			this->tbChangePass->Size = System::Drawing::Size(166, 23);
			this->tbChangePass->TabIndex = 3;
			this->tbChangePass->Text = L"Change password";
			this->tbChangePass->UseVisualStyleBackColor = true;
			this->tbChangePass->Click += gcnew System::EventHandler(this, &mainForm::tbChangePass_Click);
			// 
			// btLogout
			// 
			this->btLogout->Location = System::Drawing::Point(831, 554);
			this->btLogout->Name = L"btLogout";
			this->btLogout->Size = System::Drawing::Size(75, 23);
			this->btLogout->TabIndex = 2;
			this->btLogout->Text = L"Logout";
			this->btLogout->UseVisualStyleBackColor = true;
			this->btLogout->Click += gcnew System::EventHandler(this, &mainForm::btLogout_Click);
			// 
			// tbProfileClass
			// 
			this->tbProfileClass->Location = System::Drawing::Point(182, 359);
			this->tbProfileClass->Name = L"tbProfileClass";
			this->tbProfileClass->Size = System::Drawing::Size(100, 20);
			this->tbProfileClass->TabIndex = 1;
			this->tbProfileClass->Text = L"Class";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(34, 359);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 1;
			this->textBox7->Text = L"Class";
			// 
			// tbProfileEmail
			// 
			this->tbProfileEmail->Location = System::Drawing::Point(182, 267);
			this->tbProfileEmail->Name = L"tbProfileEmail";
			this->tbProfileEmail->Size = System::Drawing::Size(100, 20);
			this->tbProfileEmail->TabIndex = 1;
			this->tbProfileEmail->Text = L"Email";
			// 
			// tbProfileSid
			// 
			this->tbProfileSid->Location = System::Drawing::Point(182, 316);
			this->tbProfileSid->Name = L"tbProfileSid";
			this->tbProfileSid->Size = System::Drawing::Size(100, 20);
			this->tbProfileSid->TabIndex = 1;
			this->tbProfileSid->Text = L"Student ID";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(34, 267);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 1;
			this->textBox11->Text = L"Email";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(34, 316);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 1;
			this->textBox6->Text = L"Student ID";
			// 
			// tbProfileDob
			// 
			this->tbProfileDob->Location = System::Drawing::Point(182, 215);
			this->tbProfileDob->Name = L"tbProfileDob";
			this->tbProfileDob->Size = System::Drawing::Size(100, 20);
			this->tbProfileDob->TabIndex = 1;
			this->tbProfileDob->Text = L"Date of birth";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(34, 215);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 1;
			this->textBox5->Text = L"Date of birth";
			// 
			// tbProfileUserPass
			// 
			this->tbProfileUserPass->Location = System::Drawing::Point(664, 215);
			this->tbProfileUserPass->Name = L"tbProfileUserPass";
			this->tbProfileUserPass->Size = System::Drawing::Size(100, 20);
			this->tbProfileUserPass->TabIndex = 1;
			this->tbProfileUserPass->Text = L"Password";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(516, 215);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 1;
			this->textBox10->Text = L"Password";
			// 
			// tbProfileUserid
			// 
			this->tbProfileUserid->Location = System::Drawing::Point(664, 172);
			this->tbProfileUserid->Name = L"tbProfileUserid";
			this->tbProfileUserid->Size = System::Drawing::Size(100, 20);
			this->tbProfileUserid->TabIndex = 1;
			this->tbProfileUserid->Text = L"User name";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(516, 172);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 1;
			this->textBox8->Text = L"User name";
			// 
			// tbProfileFullname
			// 
			this->tbProfileFullname->Location = System::Drawing::Point(182, 172);
			this->tbProfileFullname->Name = L"tbProfileFullname";
			this->tbProfileFullname->Size = System::Drawing::Size(100, 20);
			this->tbProfileFullname->TabIndex = 1;
			this->tbProfileFullname->Text = L"Full name";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(34, 172);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 1;
			this->textBox4->Text = L"Full name";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(516, 99);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 1;
			this->textBox9->Text = L"Login info";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(34, 99);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 1;
			this->textBox3->Text = L"Profile ";
			// 
			// tbProfileHead
			// 
			this->tbProfileHead->Dock = System::Windows::Forms::DockStyle::Top;
			this->tbProfileHead->Location = System::Drawing::Point(0, 0);
			this->tbProfileHead->Name = L"tbProfileHead";
			this->tbProfileHead->Size = System::Drawing::Size(68, 20);
			this->tbProfileHead->TabIndex = 0;
			this->tbProfileHead->Text = L"PROFILE";
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1074, 589);
			this->Controls->Add(this->panelMain);
			this->Controls->Add(this->panelMenu);
			this->Name = L"mainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"mainForm";
			this->panelLogin->ResumeLayout(false);
			this->panelLogin->PerformLayout();
			this->panelMenu->ResumeLayout(false);
			this->panelBtProfile->ResumeLayout(false);
			this->panelMain->ResumeLayout(false);
			this->panelClassList->ResumeLayout(false);
			this->panelClassList->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStudentList))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClassList))->EndInit();
			this->panelProfile->ResumeLayout(false);
			this->panelProfile->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//
		List<classInfo^> classList;
		List<userInfo^> userInfoList;
		userInfo^ uInfo;
		int panelClassList_load = 0;
		//
		void showLoginPanel() //open Login screen
		{
			panelMenu->Visible = false;
			this->Left = (this->Left * 2 - 380 + 1100) / 2;
			this->Top = (this->Top * 2 - 500 + 650) / 2;
			this->Height = 500;
			this->Width = 380;
			openPanel(panelLogin);
		}
		void loadData()
		{
			// import accounts file
			std::ifstream f;
			std::string s;
			userInfo^ u;
			f.open("user_login.txt");
			while (f.good())
			{
				u = gcnew userInfo;
				getline(f, s, '\n');
				u->no = gcnew String(s.c_str());
				getline(f, s, '\n');
				u->fullName = gcnew String(s.c_str());
				getline(f, s, '\n');
				u->dob = gcnew String(s.c_str());
				getline(f, s, '\n');
				u->email = gcnew String(s.c_str());
				getline(f, s, '\n');
				u->userid = gcnew String(s.c_str());
				getline(f, s, '\n');
				u->userpass = gcnew String(s.c_str());
				userInfoList.Add(u);
			}
			f.close();
			//import class list file
			f.open("class_list.txt");
			classInfo^ u1;
			while (f.good())
			{
				u1 = gcnew classInfo;
				getline(f, s, '\n');
				u1->name = gcnew String(s.c_str());
				getline(f, s, '\n');
				u1->detail = gcnew String(s.c_str());
				classList.Add(u1);
			}
			f.close();
		}
		bool loginCheck(String^ id, String^ pass) //check when user login
		{
			for each (userInfo ^ i in userInfoList)
			{
				if (i->userid == id && i->userpass == pass)
				{
					uInfo = i;
					return true;
				}
			}
			return false;
		}
		void openPanel(Panel^ tmp) //hide all panels and open 1 panel
		{
			if (tmp->Visible) return;
			panelClassList->Visible = false;
			panelProfile->Visible = false;
			tmp->Dock = DockStyle(5);
			tmp->Visible = true;
		}
		void dgvClassListLoad()
		{
			int x = 0;
			for each (classInfo ^ i in classList)
			{
				int y = 1;
				dgvClassList->Rows->Add();
				dgvClassList->Rows[x]->Cells[0]->Value = x + 1;
				dgvClassList->Rows[x]->Cells[1]->Value = i->name;
				dgvClassList->Rows[x]->Cells[2]->Value = i->detail;
				x++;
			}
			if (!x) MessageBox::Show(this, "NO DATA! \n PLEASE IMPORT", "WARNING", MessageBoxButtons::OK);
			panelClassList_load = 1;
		}
		//
	private: System::Void btLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		if (loginCheck(tbUserId->Text, tbUserPass->Text))
		{
			panelLogin->Visible = false;
			this->Left = (this->Left * 2 + 380 - 1100) / 2;
			this->Top = (this->Top * 2 + 500 - 650) / 2;
			this->Width = 1100;
			this->Height = 650;
			panelMenu->Visible = true;
			tbUserPass->Text = "";
			tbLogin->Text = "";
		}
		else
		{
			tbLogin->Text = "WRONG ID OR PASSWORD. PLEASE TRY AGAIN!";
		}
	}
	public: System::Void btProfile_Click(System::Object^ sender, System::EventArgs^ e) {
		openPanel(panelProfile);
		tbProfileFullname->Text = uInfo->fullName;
		tbProfileDob->Text = uInfo->dob;
		tbProfileEmail->Text = uInfo->email;
		tbProfileUserid->Text = uInfo->userid;
		tbProfileUserPass->Text = uInfo->userpass;
	}
	private: System::Void btLogout_Click(System::Object^ sender, System::EventArgs^ e) {
		showLoginPanel();
		openPanel(panelLogin);
	}
	private: System::Void tbChangePass_Click(System::Object^ sender, System::EventArgs^ e) {
		changePassForm^ f = gcnew changePassForm;
		f->ShowDialog();
		uInfo->userpass = f->newPass;
		//update file user_login.txt
		btProfile->PerformClick();
	}
		   //thieu phan load lai file data sau khi update password
		   // xong task 1 - 6

	private: System::Void btClass_Click(System::Object^ sender, System::EventArgs^ e) {
		openPanel(panelClassList);
		if (!panelClassList_load) dgvClassListLoad();
	}
	private: System::Void dgvClassList_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		std::ifstream f;
		String^ s = dgvClassList->Rows[e->RowIndex]->Cells[1]->Value->ToString();
		f.open(msclr::interop::marshal_as<std::string>(s));
	}
	};
}
>>>>>>> Stashed changes
