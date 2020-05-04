#pragma once
#include <map>
#include <string>
#include <fstream>
#include "changePassForm.h"
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
	private: System::Windows::Forms::Panel^ panelLogin;
	private: System::Windows::Forms::Button^ tbLogin;

	protected:




	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Panel^ panelBtProfile;

	private: System::Windows::Forms::Button^ btProfile;




	private: System::Windows::Forms::Button^ btClass;
	private: System::Windows::Forms::Panel^ panelLogo;

	private: System::Windows::Forms::Panel^ panelMain;
	private: System::Windows::Forms::TextBox^ tbProfileHead;

	private: System::Windows::Forms::Panel^ panelProfile;









	private: System::Windows::Forms::Button^ btLogout;


	private: System::Windows::Forms::TextBox^ tbProfileClass;

	private: System::Windows::Forms::TextBox^ tbProfileSid;

	private: System::Windows::Forms::TextBox^ tbProfileDob;
	private: System::Windows::Forms::TextBox^ tbProfileUserPass;


	private: System::Windows::Forms::TextBox^ tbProfileUserid;

	private: System::Windows::Forms::TextBox^ tbProfileFullname;
	private: System::Windows::Forms::Button^ tbChangePass;
	private: System::Windows::Forms::TextBox^ tbProfileEmail;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panelLeft;



	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::TextBox^ tbUserPass;
	private: System::Windows::Forms::TextBox^ tbUserId;

	private: System::Windows::Forms::Button^ btStudentList;
	private: System::Windows::Forms::Button^ btClassList;
	private: System::Windows::Forms::PictureBox^ pictureBox5;









	private: System::ComponentModel::IContainer^ components;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->panelLogin = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tbUserPass = (gcnew System::Windows::Forms::TextBox());
			this->tbLogin = (gcnew System::Windows::Forms::Button());
			this->tbUserId = (gcnew System::Windows::Forms::TextBox());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->btClassList = (gcnew System::Windows::Forms::Button());
			this->btStudentList = (gcnew System::Windows::Forms::Button());
			this->btClass = (gcnew System::Windows::Forms::Button());
			this->panelBtProfile = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->btProfile = (gcnew System::Windows::Forms::Button());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->panelProfile = (gcnew System::Windows::Forms::Panel());
			this->panelLeft = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbChangePass = (gcnew System::Windows::Forms::Button());
			this->btLogout = (gcnew System::Windows::Forms::Button());
			this->tbProfileClass = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileSid = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileDob = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileUserPass = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileUserid = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileFullname = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileHead = (gcnew System::Windows::Forms::TextBox());
			this->panelLogin->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panelMenu->SuspendLayout();
			this->panelBtProfile->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panelMain->SuspendLayout();
			this->panelProfile->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelLogin
			// 
			this->panelLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelLogin->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panelLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->panelLogin->Controls->Add(this->panel3);
			this->panelLogin->Controls->Add(this->panel2);
			this->panelLogin->Controls->Add(this->pictureBox4);
			this->panelLogin->Controls->Add(this->pictureBox3);
			this->panelLogin->Controls->Add(this->label10);
			this->panelLogin->Controls->Add(this->tbUserPass);
			this->panelLogin->Controls->Add(this->tbLogin);
			this->panelLogin->Controls->Add(this->tbUserId);
			this->panelLogin->Location = System::Drawing::Point(856, 523);
			this->panelLogin->Margin = System::Windows::Forms::Padding(4);
			this->panelLogin->Name = L"panelLogin";
			this->panelLogin->Size = System::Drawing::Size(20, 12);
			this->panelLogin->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(111, 331);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(279, 1);
			this->panel3->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(109, 268);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(279, 1);
			this->panel2->TabIndex = 6;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(109, 299);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(24, 24);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(107, 238);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(24, 24);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Consolas", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(210, 126);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(77, 28);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Login";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbUserPass
			// 
			this->tbUserPass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbUserPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbUserPass->Font = (gcnew System::Drawing::Font(L"Consolas", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUserPass->ForeColor = System::Drawing::Color::White;
			this->tbUserPass->Location = System::Drawing::Point(140, 301);
			this->tbUserPass->Margin = System::Windows::Forms::Padding(4);
			this->tbUserPass->Name = L"tbUserPass";
			this->tbUserPass->Size = System::Drawing::Size(278, 22);
			this->tbUserPass->TabIndex = 0;
			this->tbUserPass->Text = L"Password";
			this->tbUserPass->Click += gcnew System::EventHandler(this, &mainForm::tbUserId_Click);
			this->tbUserPass->TextChanged += gcnew System::EventHandler(this, &mainForm::tbUserPass_TextChanged);
			// 
			// tbLogin
			// 
			this->tbLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->tbLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tbLogin->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbLogin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbLogin->Location = System::Drawing::Point(111, 379);
			this->tbLogin->Margin = System::Windows::Forms::Padding(4);
			this->tbLogin->Name = L"tbLogin";
			this->tbLogin->Size = System::Drawing::Size(279, 40);
			this->tbLogin->TabIndex = 1;
			this->tbLogin->Text = L"Login";
			this->tbLogin->UseVisualStyleBackColor = false;
			this->tbLogin->Click += gcnew System::EventHandler(this, &mainForm::btLogin_Click);
			// 
			// tbUserId
			// 
			this->tbUserId->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbUserId->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbUserId->Font = (gcnew System::Drawing::Font(L"Consolas", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUserId->ForeColor = System::Drawing::Color::White;
			this->tbUserId->Location = System::Drawing::Point(138, 238);
			this->tbUserId->Margin = System::Windows::Forms::Padding(4);
			this->tbUserId->Name = L"tbUserId";
			this->tbUserId->Size = System::Drawing::Size(278, 22);
			this->tbUserId->TabIndex = 0;
			this->tbUserId->Text = L"Username";
			this->tbUserId->Click += gcnew System::EventHandler(this, &mainForm::tbUserId_Click);
			this->tbUserId->TextChanged += gcnew System::EventHandler(this, &mainForm::tbUserId_TextChanged);
			// 
			// panelMenu
			// 
			this->panelMenu->AutoScroll = true;
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->panelMenu->Controls->Add(this->btClassList);
			this->panelMenu->Controls->Add(this->btStudentList);
			this->panelMenu->Controls->Add(this->btClass);
			this->panelMenu->Controls->Add(this->panelBtProfile);
			this->panelMenu->Controls->Add(this->panelLogo);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Font = (gcnew System::Drawing::Font(L"Montserrat", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Margin = System::Windows::Forms::Padding(4);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(200, 721);
			this->panelMenu->TabIndex = 1;
			// 
			// btClassList
			// 
			this->btClassList->Dock = System::Windows::Forms::DockStyle::Top;
			this->btClassList->FlatAppearance->BorderSize = 0;
			this->btClassList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btClassList->Font = (gcnew System::Drawing::Font(L"Montserrat", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btClassList->ForeColor = System::Drawing::Color::Gainsboro;
			this->btClassList->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btClassList->Location = System::Drawing::Point(0, 464);
			this->btClassList->Margin = System::Windows::Forms::Padding(4);
			this->btClassList->Name = L"btClassList";
			this->btClassList->Size = System::Drawing::Size(200, 101);
			this->btClassList->TabIndex = 0;
			this->btClassList->Text = L"View class list";
			this->btClassList->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btClassList->UseVisualStyleBackColor = false;
			this->btClassList->Click += gcnew System::EventHandler(this, &mainForm::btClassList_Click);
			// 
			// btStudentList
			// 
			this->btStudentList->Dock = System::Windows::Forms::DockStyle::Top;
			this->btStudentList->FlatAppearance->BorderSize = 0;
			this->btStudentList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btStudentList->Font = (gcnew System::Drawing::Font(L"Montserrat", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btStudentList->ForeColor = System::Drawing::Color::Gainsboro;
			this->btStudentList->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btStudentList->Location = System::Drawing::Point(0, 363);
			this->btStudentList->Margin = System::Windows::Forms::Padding(4);
			this->btStudentList->Name = L"btStudentList";
			this->btStudentList->Size = System::Drawing::Size(200, 101);
			this->btStudentList->TabIndex = 1;
			this->btStudentList->Text = L"View student list";
			this->btStudentList->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btStudentList->UseVisualStyleBackColor = false;
			this->btStudentList->Click += gcnew System::EventHandler(this, &mainForm::btStudentList_Click);
			// 
			// btClass
			// 
			this->btClass->Dock = System::Windows::Forms::DockStyle::Top;
			this->btClass->FlatAppearance->BorderSize = 0;
			this->btClass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btClass->Font = (gcnew System::Drawing::Font(L"Montserrat", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btClass->ForeColor = System::Drawing::Color::Gainsboro;
			this->btClass->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btClass->Location = System::Drawing::Point(0, 262);
			this->btClass->Margin = System::Windows::Forms::Padding(4);
			this->btClass->Name = L"btClass";
			this->btClass->Size = System::Drawing::Size(200, 101);
			this->btClass->TabIndex = 1;
			this->btClass->Text = L"Class";
			this->btClass->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btClass->UseVisualStyleBackColor = false;
			this->btClass->Click += gcnew System::EventHandler(this, &mainForm::btClass_Click);
			// 
			// panelBtProfile
			// 
			this->panelBtProfile->Controls->Add(this->pictureBox5);
			this->panelBtProfile->Controls->Add(this->btProfile);
			this->panelBtProfile->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelBtProfile->Location = System::Drawing::Point(0, 161);
			this->panelBtProfile->Margin = System::Windows::Forms::Padding(4);
			this->panelBtProfile->Name = L"panelBtProfile";
			this->panelBtProfile->Size = System::Drawing::Size(200, 101);
			this->panelBtProfile->TabIndex = 0;
			// 
			// pictureBox5
			// 
			this->pictureBox5->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.ErrorImage")));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(66, 17);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(61, 47);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 1;
			this->pictureBox5->TabStop = false;
			// 
			// btProfile
			// 
			this->btProfile->FlatAppearance->BorderSize = 0;
			this->btProfile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btProfile->Font = (gcnew System::Drawing::Font(L"Montserrat", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btProfile->ForeColor = System::Drawing::Color::Gainsboro;
			this->btProfile->Location = System::Drawing::Point(0, 0);
			this->btProfile->Margin = System::Windows::Forms::Padding(4);
			this->btProfile->Name = L"btProfile";
			this->btProfile->Size = System::Drawing::Size(200, 101);
			this->btProfile->TabIndex = 0;
			this->btProfile->Text = L"My Profile";
			this->btProfile->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btProfile->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btProfile->UseVisualStyleBackColor = false;
			this->btProfile->Click += gcnew System::EventHandler(this, &mainForm::btProfile_Click);
			// 
			// panelLogo
			// 
			this->panelLogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->ForeColor = System::Drawing::Color::Aquamarine;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Margin = System::Windows::Forms::Padding(4);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(200, 161);
			this->panelLogo->TabIndex = 2;
			// 
			// panelMain
			// 
			this->panelMain->Controls->Add(this->panelProfile);
			this->panelMain->Controls->Add(this->panelLogin);
			this->panelMain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelMain->Location = System::Drawing::Point(200, 0);
			this->panelMain->Margin = System::Windows::Forms::Padding(4);
			this->panelMain->Name = L"panelMain";
			this->panelMain->Size = System::Drawing::Size(1229, 721);
			this->panelMain->TabIndex = 2;
			// 
			// panelProfile
			// 
			this->panelProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->panelProfile->Controls->Add(this->panelLeft);
			this->panelProfile->Controls->Add(this->pictureBox2);
			this->panelProfile->Controls->Add(this->pictureBox1);
			this->panelProfile->Controls->Add(this->label5);
			this->panelProfile->Controls->Add(this->label4);
			this->panelProfile->Controls->Add(this->label3);
			this->panelProfile->Controls->Add(this->label2);
			this->panelProfile->Controls->Add(this->label7);
			this->panelProfile->Controls->Add(this->label6);
			this->panelProfile->Controls->Add(this->label1);
			this->panelProfile->Controls->Add(this->tbChangePass);
			this->panelProfile->Controls->Add(this->btLogout);
			this->panelProfile->Controls->Add(this->tbProfileClass);
			this->panelProfile->Controls->Add(this->tbProfileEmail);
			this->panelProfile->Controls->Add(this->tbProfileSid);
			this->panelProfile->Controls->Add(this->tbProfileDob);
			this->panelProfile->Controls->Add(this->tbProfileUserPass);
			this->panelProfile->Controls->Add(this->tbProfileUserid);
			this->panelProfile->Controls->Add(this->tbProfileFullname);
			this->panelProfile->Controls->Add(this->tbProfileHead);
			this->panelProfile->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panelProfile->ForeColor = System::Drawing::Color::White;
			this->panelProfile->ImeMode = System::Windows::Forms::ImeMode::Katakana;
			this->panelProfile->Location = System::Drawing::Point(0, 0);
			this->panelProfile->Margin = System::Windows::Forms::Padding(4);
			this->panelProfile->Name = L"panelProfile";
			this->panelProfile->Size = System::Drawing::Size(1229, 721);
			this->panelProfile->TabIndex = 1;
			this->panelProfile->Visible = false;
			// 
			// panelLeft
			// 
			this->panelLeft->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->panelLeft->Location = System::Drawing::Point(0, 160);
			this->panelLeft->Name = L"panelLeft";
			this->panelLeft->Size = System::Drawing::Size(7, 78);
			this->panelLeft->TabIndex = 7;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1141, 272);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(35, 33);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1141, 217);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(35, 33);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(53, 457);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 26);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Class:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(53, 391);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 26);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Student ID:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(53, 331);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 26);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Email:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(53, 272);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 26);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Date of Birth:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(702, 272);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 26);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Password:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(702, 217);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 26);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Username:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(53, 212);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 26);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Full Name:";
			// 
			// tbChangePass
			// 
			this->tbChangePass->BackColor = System::Drawing::Color::SpringGreen;
			this->tbChangePass->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->tbChangePass->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbChangePass->ForeColor = System::Drawing::Color::Black;
			this->tbChangePass->Location = System::Drawing::Point(775, 331);
			this->tbChangePass->Margin = System::Windows::Forms::Padding(4);
			this->tbChangePass->Name = L"tbChangePass";
			this->tbChangePass->Padding = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->tbChangePass->Size = System::Drawing::Size(232, 37);
			this->tbChangePass->TabIndex = 3;
			this->tbChangePass->Text = L"Change password";
			this->tbChangePass->UseVisualStyleBackColor = false;
			this->tbChangePass->Click += gcnew System::EventHandler(this, &mainForm::tbChangePass_Click);
			// 
			// btLogout
			// 
			this->btLogout->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btLogout->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btLogout->ForeColor = System::Drawing::Color::Black;
			this->btLogout->Location = System::Drawing::Point(1089, 657);
			this->btLogout->Margin = System::Windows::Forms::Padding(4);
			this->btLogout->Name = L"btLogout";
			this->btLogout->Size = System::Drawing::Size(116, 39);
			this->btLogout->TabIndex = 2;
			this->btLogout->Text = L"Logout";
			this->btLogout->UseVisualStyleBackColor = true;
			this->btLogout->Click += gcnew System::EventHandler(this, &mainForm::btLogout_Click);
			// 
			// tbProfileClass
			// 
			this->tbProfileClass->BackColor = System::Drawing::Color::White;
			this->tbProfileClass->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProfileClass->ForeColor = System::Drawing::Color::Black;
			this->tbProfileClass->Location = System::Drawing::Point(283, 457);
			this->tbProfileClass->Margin = System::Windows::Forms::Padding(4);
			this->tbProfileClass->Name = L"tbProfileClass";
			this->tbProfileClass->Size = System::Drawing::Size(259, 33);
			this->tbProfileClass->TabIndex = 1;
			this->tbProfileClass->Text = L"Class";
			// 
			// tbProfileEmail
			// 
			this->tbProfileEmail->BackColor = System::Drawing::Color::White;
			this->tbProfileEmail->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProfileEmail->ForeColor = System::Drawing::Color::Black;
			this->tbProfileEmail->Location = System::Drawing::Point(283, 331);
			this->tbProfileEmail->Margin = System::Windows::Forms::Padding(4);
			this->tbProfileEmail->Name = L"tbProfileEmail";
			this->tbProfileEmail->Size = System::Drawing::Size(259, 33);
			this->tbProfileEmail->TabIndex = 1;
			this->tbProfileEmail->Text = L"Email";
			// 
			// tbProfileSid
			// 
			this->tbProfileSid->BackColor = System::Drawing::Color::White;
			this->tbProfileSid->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProfileSid->ForeColor = System::Drawing::Color::Black;
			this->tbProfileSid->Location = System::Drawing::Point(283, 391);
			this->tbProfileSid->Margin = System::Windows::Forms::Padding(4);
			this->tbProfileSid->Name = L"tbProfileSid";
			this->tbProfileSid->Size = System::Drawing::Size(259, 33);
			this->tbProfileSid->TabIndex = 1;
			this->tbProfileSid->Text = L"Student ID";
			// 
			// tbProfileDob
			// 
			this->tbProfileDob->BackColor = System::Drawing::Color::White;
			this->tbProfileDob->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProfileDob->ForeColor = System::Drawing::Color::Black;
			this->tbProfileDob->Location = System::Drawing::Point(283, 272);
			this->tbProfileDob->Margin = System::Windows::Forms::Padding(4);
			this->tbProfileDob->Name = L"tbProfileDob";
			this->tbProfileDob->Size = System::Drawing::Size(259, 33);
			this->tbProfileDob->TabIndex = 1;
			this->tbProfileDob->Text = L"Date of birth";
			// 
			// tbProfileUserPass
			// 
			this->tbProfileUserPass->BackColor = System::Drawing::Color::White;
			this->tbProfileUserPass->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProfileUserPass->ForeColor = System::Drawing::Color::Black;
			this->tbProfileUserPass->Location = System::Drawing::Point(875, 272);
			this->tbProfileUserPass->Margin = System::Windows::Forms::Padding(4);
			this->tbProfileUserPass->Name = L"tbProfileUserPass";
			this->tbProfileUserPass->Size = System::Drawing::Size(246, 33);
			this->tbProfileUserPass->TabIndex = 1;
			this->tbProfileUserPass->Text = L"Password";
			// 
			// tbProfileUserid
			// 
			this->tbProfileUserid->BackColor = System::Drawing::Color::White;
			this->tbProfileUserid->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProfileUserid->ForeColor = System::Drawing::Color::Black;
			this->tbProfileUserid->Location = System::Drawing::Point(875, 217);
			this->tbProfileUserid->Margin = System::Windows::Forms::Padding(4);
			this->tbProfileUserid->Name = L"tbProfileUserid";
			this->tbProfileUserid->Size = System::Drawing::Size(246, 33);
			this->tbProfileUserid->TabIndex = 1;
			this->tbProfileUserid->Text = L"User name";
			// 
			// tbProfileFullname
			// 
			this->tbProfileFullname->BackColor = System::Drawing::Color::White;
			this->tbProfileFullname->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProfileFullname->ForeColor = System::Drawing::Color::Black;
			this->tbProfileFullname->Location = System::Drawing::Point(283, 205);
			this->tbProfileFullname->Margin = System::Windows::Forms::Padding(4);
			this->tbProfileFullname->Name = L"tbProfileFullname";
			this->tbProfileFullname->Size = System::Drawing::Size(259, 33);
			this->tbProfileFullname->TabIndex = 1;
			this->tbProfileFullname->Text = L"Full name";
			// 
			// tbProfileHead
			// 
			this->tbProfileHead->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->tbProfileHead->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbProfileHead->Dock = System::Windows::Forms::DockStyle::Top;
			this->tbProfileHead->Font = (gcnew System::Drawing::Font(L"Montserrat", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProfileHead->ForeColor = System::Drawing::Color::White;
			this->tbProfileHead->Location = System::Drawing::Point(0, 0);
			this->tbProfileHead->Margin = System::Windows::Forms::Padding(4);
			this->tbProfileHead->Name = L"tbProfileHead";
			this->tbProfileHead->Size = System::Drawing::Size(1229, 29);
			this->tbProfileHead->TabIndex = 0;
			this->tbProfileHead->Text = L"My Profile";
			this->tbProfileHead->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(1429, 721);
			this->Controls->Add(this->panelMain);
			this->Controls->Add(this->panelMenu);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"mainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"mainForm";
			this->panelLogin->ResumeLayout(false);
			this->panelLogin->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panelMenu->ResumeLayout(false);
			this->panelBtProfile->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panelMain->ResumeLayout(false);
			this->panelProfile->ResumeLayout(false);
			this->panelProfile->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//
	public: List<classInfo^> classList;
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
				  u->no = gcnew String(s.c_str());
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
			  panelProfile->Visible = false;
			  tmp->Dock = DockStyle(5);
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
		}
	}
	public: System::Void btProfile_Click(System::Object^ sender, System::EventArgs^ e) {
		panelLeft->Height = panelBtProfile->Height;
		panelLeft->Top = panelBtProfile->Top;
		
		
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
		btProfile->PerformClick();
	}
		   //thieu phan load lai file data sau khi update password
		   // xong task 1 - 6

	private: System::Void tbUserId_Click(System::Object^ sender, System::EventArgs^ e)
	{
		tbUserId->Clear();
		panel2->ForeColor = Color::FromArgb(21, 170, 191);
		tbUserId->ForeColor = Color::FromArgb(21, 170, 191);

		panel3->ForeColor = Color::WhiteSmoke;
		tbUserPass->ForeColor = Color::WhiteSmoke;
		

	}
	private: System::Void tbUserPass_Click(System::Object^ sender, System::EventArgs^ e)
	{
		tbUserPass->Clear();
		tbUserPass->PasswordChar = '*';
		panel3->ForeColor = Color::FromArgb(21, 170, 191);
		tbUserPass->ForeColor = Color::FromArgb(21, 170, 191);

		panel2->ForeColor = Color::WhiteSmoke;
		tbUserId->ForeColor = Color::WhiteSmoke;

	}

	private: System::Void btClass_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panelLeft->Height = btClass->Height;
		panelLeft->Top = btClass->Top;
	}


	private: System::Void btClassList_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		panelLeft->Height = btClassList->Height;
		panelLeft->Top = btClassList->Top;
	}

	private: System::Void btStudentList_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panelLeft->Height = btStudentList->Height;
		panelLeft->Top = btStudentList->Top;
	}

	private: System::Void tbUserPass_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		tbUserPass->PasswordChar = '*';
		panel3->ForeColor = Color::FromArgb(21, 170, 191);
		tbUserPass->ForeColor = Color::FromArgb(21, 170, 191);

		panel2->ForeColor = Color::WhiteSmoke;
		tbUserId->ForeColor = Color::WhiteSmoke;
	}
	
	private: System::Void tbUserId_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		panel2->ForeColor = Color::FromArgb(21, 170, 191);
		tbUserId->ForeColor = Color::FromArgb(21, 170, 191);

		panel3->ForeColor = Color::WhiteSmoke;
		tbUserPass->ForeColor = Color::WhiteSmoke;
	}
};
}