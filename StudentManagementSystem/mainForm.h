﻿#pragma once

#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include "changePassForm.h"
#include "changeClassForm.h"
#include "attendanceForm.h"
#include "scoreboardForm.h"
#include "studentForm.h"
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
	public: String^ fullName, ^ dob, ^ email, ^ userid, ^ userpass, ^ cls;
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

	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Panel^ panelBtProfile;
	private: System::Windows::Forms::Button^ btProfile;
	private: System::Windows::Forms::Button^ btClass;
	private: System::Windows::Forms::Panel^ panelLogo;
	private: System::Windows::Forms::Panel^ panelMain;

	private: System::Windows::Forms::Panel^ panelProfile;


	private: System::Windows::Forms::Button^ btCourse;







	private: System::Windows::Forms::Button^ btLogout;


	private: System::Windows::Forms::TextBox^ tbProfileClass;
	private: System::Windows::Forms::TextBox^ tbProfileSid;
	private: System::Windows::Forms::TextBox^ tbProfileDob;
	private: System::Windows::Forms::TextBox^ tbProfileUserPass;
	private: System::Windows::Forms::TextBox^ tbProfileUserid;
	private: System::Windows::Forms::TextBox^ tbProfileFullname;
	private: System::Windows::Forms::Button^ tbChangePass;
	private: System::Windows::Forms::TextBox^ tbProfileEmail;

	private: System::Windows::Forms::Panel^ panelClassList;

	private: System::Windows::Forms::DataGridView^ dgvClassList;



	private: System::Windows::Forms::DataGridView^ dgvStudentList;






	private: System::Windows::Forms::ContextMenuStrip^ dgvStudentListMenu;











	private: System::Windows::Forms::ToolStripMenuItem^ removeToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ addNewStudentToolStripMenuItem;








	private: System::Windows::Forms::ToolStripMenuItem^ changeClassToolStripMenuItem;






	private: System::Windows::Forms::Panel^ panelCourse;
	private: System::Windows::Forms::DataGridView^ dgvAY;



	private: System::Windows::Forms::ContextMenuStrip^ ayMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ createToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ayClumn;
	private: System::Windows::Forms::Button^ btSemester3;
	private: System::Windows::Forms::Button^ btSemester2;
	private: System::Windows::Forms::Button^ btSemester1;
	private: System::Windows::Forms::DataGridView^ dgvCourseList;











	private: System::Windows::Forms::ContextMenuStrip^ dgvCourseListMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ addToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ removeToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ viewStudentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewScoreboardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewAttendanceListToolStripMenuItem;











	private: System::Windows::Forms::Button^ btLecturer;
	private: System::Windows::Forms::Panel^ panelLecturer;
	private: System::Windows::Forms::DataGridView^ dgvLecturer;






	private: System::Windows::Forms::ContextMenuStrip^ dgvLecturerMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;





	private: System::Windows::Forms::Button^ btScore;
	private: System::Windows::Forms::Button^ btSchedule;
	private: System::Windows::Forms::Button^ btCheckIn;
	private: System::Windows::Forms::Panel^ panelCheckIn;



	private: System::Windows::Forms::DataGridView^ dgvCheckIn;
	private: System::Windows::Forms::Panel^ panelSchedule;
	private: System::Windows::Forms::DataGridView^ dgvSchedule;








	private: System::Windows::Forms::Panel^ panelScore;
	private: System::Windows::Forms::DataGridView^ dgvScore;






	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lbLogin;


	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ panelClassHeader;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvClassNo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column29;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column30;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListNo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListLastname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListFirstname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListGender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListDob;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ panelCourseHeader;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::Panel^ panelSemester;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column23;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column24;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column25;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column26;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column27;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column28;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label14;


























	private: System::ComponentModel::IContainer^ components;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panelLogin = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbLogin = (gcnew System::Windows::Forms::Label());
			this->btLogin = (gcnew System::Windows::Forms::Button());
			this->tbUserId = (gcnew System::Windows::Forms::TextBox());
			this->tbUserPass = (gcnew System::Windows::Forms::TextBox());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->btScore = (gcnew System::Windows::Forms::Button());
			this->btSchedule = (gcnew System::Windows::Forms::Button());
			this->btCheckIn = (gcnew System::Windows::Forms::Button());
			this->btLecturer = (gcnew System::Windows::Forms::Button());
			this->btCourse = (gcnew System::Windows::Forms::Button());
			this->btClass = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelBtProfile = (gcnew System::Windows::Forms::Panel());
			this->btProfile = (gcnew System::Windows::Forms::Button());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->panelMain = (gcnew System::Windows::Forms::Panel());

			this->panelProfile = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tbProfileUserid = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileUserPass = (gcnew System::Windows::Forms::TextBox());
			this->btLogout = (gcnew System::Windows::Forms::Button());
			this->tbChangePass = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbProfileEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileClass = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileFullname = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileDob = (gcnew System::Windows::Forms::TextBox());
			this->tbProfileSid = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());

			this->panelCourse = (gcnew System::Windows::Forms::Panel());
			this->panelSemester = (gcnew System::Windows::Forms::Panel());
			this->btSemester2 = (gcnew System::Windows::Forms::Button());
			this->btSemester3 = (gcnew System::Windows::Forms::Button());
			this->btSemester1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panelCourseHeader = (gcnew System::Windows::Forms::Label());
			this->dgvCourseList = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvCourseListMenu = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removeToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewStudentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewScoreboardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewAttendanceListToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dgvAY = (gcnew System::Windows::Forms::DataGridView());
			this->ayClumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ayMenu = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->createToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panelClassList = (gcnew System::Windows::Forms::Panel());
			this->dgvStudentList = (gcnew System::Windows::Forms::DataGridView());
			this->dgvStudentListNo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListMenu = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->addNewStudentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeClassToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dgvStudentListLastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListFirstname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListGender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListDob = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panelClassHeader = (gcnew System::Windows::Forms::Label());
			this->dgvClassList = (gcnew System::Windows::Forms::DataGridView());
			this->dgvClassNo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panelCheckIn = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dgvCheckIn = (gcnew System::Windows::Forms::DataGridView());
			this->panelScore = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dgvScore = (gcnew System::Windows::Forms::DataGridView());
			this->Column24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panelSchedule = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dgvSchedule = (gcnew System::Windows::Forms::DataGridView());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panelLecturer = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dgvLecturer = (gcnew System::Windows::Forms::DataGridView());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvLecturerMenu = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panelLogin->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panelMenu->SuspendLayout();
			this->panelBtProfile->SuspendLayout();
			this->panelMain->SuspendLayout();
			this->panelProfile->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panelCourse->SuspendLayout();
			this->panelSemester->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourseList))->BeginInit();
			this->dgvCourseListMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAY))->BeginInit();
			this->ayMenu->SuspendLayout();
			this->panelClassList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStudentList))->BeginInit();
			this->dgvStudentListMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClassList))->BeginInit();
			this->panelCheckIn->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCheckIn))->BeginInit();
			this->panelScore->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScore))->BeginInit();
			this->panelSchedule->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSchedule))->BeginInit();
			this->panelLecturer->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLecturer))->BeginInit();
			this->dgvLecturerMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelLogin
			// 
			this->panelLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelLogin->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panelLogin->Controls->Add(this->panel2);
			this->panelLogin->Location = System::Drawing::Point(848, 266);
			this->panelLogin->Margin = System::Windows::Forms::Padding(4);
			this->panelLogin->Name = L"panelLogin";
			this->panelLogin->Size = System::Drawing::Size(125, 87);
			this->panelLogin->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->lbLogin);
			this->panel2->Controls->Add(this->btLogin);
			this->panel2->Controls->Add(this->tbUserId);
			this->panel2->Controls->Add(this->tbUserPass);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, -255);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(125, 342);
			this->panel2->TabIndex = 5;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &mainForm::panel2_Paint);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel4->Location = System::Drawing::Point(51, 217);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(405, 1);
			this->panel4->TabIndex = 6;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel3->Location = System::Drawing::Point(51, 124);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(405, 1);
			this->panel3->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label2->Location = System::Drawing::Point(47, 161);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 17);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label1->Location = System::Drawing::Point(47, 69);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username";
			// 
			// lbLogin
			// 
			this->lbLogin->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbLogin->ForeColor = System::Drawing::Color::Firebrick;
			this->lbLogin->Location = System::Drawing::Point(47, 239);
			this->lbLogin->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbLogin->Name = L"lbLogin";
			this->lbLogin->Size = System::Drawing::Size(409, 28);
			this->lbLogin->TabIndex = 0;
			this->lbLogin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btLogin
			// 
			this->btLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->btLogin->FlatAppearance->BorderSize = 0;
			this->btLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btLogin->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btLogin->ForeColor = System::Drawing::Color::White;
			this->btLogin->Location = System::Drawing::Point(171, 271);
			this->btLogin->Margin = System::Windows::Forms::Padding(4);
			this->btLogin->Name = L"btLogin";
			this->btLogin->Size = System::Drawing::Size(171, 48);
			this->btLogin->TabIndex = 3;
			this->btLogin->Text = L"Login";
			this->btLogin->UseVisualStyleBackColor = false;
			this->btLogin->Click += gcnew System::EventHandler(this, &mainForm::btLogin_Click);
			// 
			// tbUserId
			// 
			this->tbUserId->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->tbUserId->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbUserId->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUserId->ForeColor = System::Drawing::SystemColors::Window;
			this->tbUserId->Location = System::Drawing::Point(51, 100);
			this->tbUserId->Margin = System::Windows::Forms::Padding(4);
			this->tbUserId->Name = L"tbUserId";
			this->tbUserId->Size = System::Drawing::Size(405, 22);
			this->tbUserId->TabIndex = 1;
			// 
			// tbUserPass
			// 
			this->tbUserPass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->tbUserPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbUserPass->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F));
			this->tbUserPass->ForeColor = System::Drawing::SystemColors::Window;
			this->tbUserPass->Location = System::Drawing::Point(51, 192);
			this->tbUserPass->Margin = System::Windows::Forms::Padding(4);
			this->tbUserPass->Name = L"tbUserPass";
			this->tbUserPass->Size = System::Drawing::Size(405, 22);
			this->tbUserPass->TabIndex = 2;
			this->tbUserPass->UseSystemPasswordChar = true;
			// 
			// panelMenu
			// 
			this->panelMenu->AutoScroll = true;

			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));

			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));

			this->panelMenu->Controls->Add(this->btScore);
			this->panelMenu->Controls->Add(this->btSchedule);
			this->panelMenu->Controls->Add(this->btCheckIn);
			this->panelMenu->Controls->Add(this->btLecturer);
			this->panelMenu->Controls->Add(this->btCourse);
			this->panelMenu->Controls->Add(this->btClass);
			this->panelMenu->Controls->Add(this->button1);
			this->panelMenu->Controls->Add(this->panelBtProfile);
			this->panelMenu->Controls->Add(this->panelLogo);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Margin = System::Windows::Forms::Padding(4);
			this->panelMenu->Name = L"panelMenu";

			this->panelMenu->Size = System::Drawing::Size(235, 725);

			this->panelMenu->Size = System::Drawing::Size(176, 589);

			this->panelMenu->TabIndex = 1;
			// 
			// btScore
			// 
			this->btScore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->btScore->Dock = System::Windows::Forms::DockStyle::Top;
			this->btScore->FlatAppearance->BorderSize = 0;
			this->btScore->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btScore->Font = (gcnew System::Drawing::Font(L"Consolas", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btScore->ForeColor = System::Drawing::SystemColors::Control;
			this->btScore->Location = System::Drawing::Point(0, 512);
			this->btScore->Margin = System::Windows::Forms::Padding(4);
			this->btScore->Name = L"btScore";
			this->btScore->Size = System::Drawing::Size(235, 53);
			this->btScore->TabIndex = 8;
			this->btScore->Text = L"Score";
			this->btScore->UseVisualStyleBackColor = false;
			this->btScore->Visible = false;
			this->btScore->Click += gcnew System::EventHandler(this, &mainForm::btScore_Click);
			// 
			// btSchedule
			// 
			this->btSchedule->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->btSchedule->Dock = System::Windows::Forms::DockStyle::Top;
			this->btSchedule->FlatAppearance->BorderSize = 0;
			this->btSchedule->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btSchedule->Font = (gcnew System::Drawing::Font(L"Consolas", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btSchedule->ForeColor = System::Drawing::SystemColors::Control;
			this->btSchedule->Location = System::Drawing::Point(0, 459);
			this->btSchedule->Margin = System::Windows::Forms::Padding(4);
			this->btSchedule->Name = L"btSchedule";
			this->btSchedule->Size = System::Drawing::Size(235, 53);
			this->btSchedule->TabIndex = 7;
			this->btSchedule->Text = L"Schedule";
			this->btSchedule->UseVisualStyleBackColor = false;
			this->btSchedule->Visible = false;
			this->btSchedule->Click += gcnew System::EventHandler(this, &mainForm::btSchedule_Click);
			// 
			// btCheckIn
			// 
			this->btCheckIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->btCheckIn->Dock = System::Windows::Forms::DockStyle::Top;
			this->btCheckIn->FlatAppearance->BorderSize = 0;
			this->btCheckIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btCheckIn->Font = (gcnew System::Drawing::Font(L"Consolas", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btCheckIn->ForeColor = System::Drawing::SystemColors::Control;
			this->btCheckIn->Location = System::Drawing::Point(0, 406);
			this->btCheckIn->Margin = System::Windows::Forms::Padding(4);
			this->btCheckIn->Name = L"btCheckIn";
			this->btCheckIn->Size = System::Drawing::Size(235, 53);
			this->btCheckIn->TabIndex = 6;
			this->btCheckIn->Text = L"Check-in Result";
			this->btCheckIn->UseVisualStyleBackColor = false;
			this->btCheckIn->Visible = false;
			this->btCheckIn->Click += gcnew System::EventHandler(this, &mainForm::btCheckIn_Click);
			// 
			// btLecturer
			// 
			this->btLecturer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->btLecturer->Dock = System::Windows::Forms::DockStyle::Top;
			this->btLecturer->FlatAppearance->BorderSize = 0;
			this->btLecturer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btLecturer->Font = (gcnew System::Drawing::Font(L"Consolas", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btLecturer->ForeColor = System::Drawing::SystemColors::Control;
			this->btLecturer->Location = System::Drawing::Point(0, 353);
			this->btLecturer->Margin = System::Windows::Forms::Padding(4);
			this->btLecturer->Name = L"btLecturer";
			this->btLecturer->Size = System::Drawing::Size(235, 53);
			this->btLecturer->TabIndex = 5;
			this->btLecturer->Text = L"Lecturer";
			this->btLecturer->UseVisualStyleBackColor = false;
			this->btLecturer->Click += gcnew System::EventHandler(this, &mainForm::btLecturer_Click);
			// 
			// btCourse
			// 
			this->btCourse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->btCourse->Dock = System::Windows::Forms::DockStyle::Top;
			this->btCourse->FlatAppearance->BorderSize = 0;
			this->btCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btCourse->Font = (gcnew System::Drawing::Font(L"Consolas", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btCourse->ForeColor = System::Drawing::SystemColors::Control;
			this->btCourse->Location = System::Drawing::Point(0, 300);
			this->btCourse->Margin = System::Windows::Forms::Padding(4);
			this->btCourse->Name = L"btCourse";
			this->btCourse->Size = System::Drawing::Size(235, 53);
			this->btCourse->TabIndex = 4;
			this->btCourse->Text = L"Course";
			this->btCourse->UseVisualStyleBackColor = false;
			this->btCourse->Click += gcnew System::EventHandler(this, &mainForm::btCourse_Click);
			// 
			// btClass
			// 
			this->btClass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->btClass->Dock = System::Windows::Forms::DockStyle::Top;
			this->btClass->FlatAppearance->BorderSize = 0;
			this->btClass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btClass->Font = (gcnew System::Drawing::Font(L"Consolas", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btClass->ForeColor = System::Drawing::SystemColors::Control;
			this->btClass->Location = System::Drawing::Point(0, 247);
			this->btClass->Margin = System::Windows::Forms::Padding(4);
			this->btClass->Name = L"btClass";
			this->btClass->Size = System::Drawing::Size(235, 53);
			this->btClass->TabIndex = 1;
			this->btClass->Text = L"Class";
			this->btClass->UseVisualStyleBackColor = false;
			this->btClass->Click += gcnew System::EventHandler(this, &mainForm::btClass_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(0, 245);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(235, 2);
			this->button1->TabIndex = 2;
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			// 
			// panelBtProfile
			// 
			this->panelBtProfile->Controls->Add(this->btProfile);
			this->panelBtProfile->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelBtProfile->Location = System::Drawing::Point(0, 123);
			this->panelBtProfile->Margin = System::Windows::Forms::Padding(4);
			this->panelBtProfile->Name = L"panelBtProfile";

			this->panelBtProfile->Size = System::Drawing::Size(235, 122);

			this->panelBtProfile->Size = System::Drawing::Size(176, 99);

			this->panelBtProfile->TabIndex = 0;
			// 
			// btProfile
			// 

			this->btProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));

			this->btProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));

			this->btProfile->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btProfile->FlatAppearance->BorderSize = 0;
			this->btProfile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btProfile->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btProfile->ForeColor = System::Drawing::SystemColors::Control;
			this->btProfile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btProfile.Image")));
			this->btProfile->Location = System::Drawing::Point(0, 0);
			this->btProfile->Margin = System::Windows::Forms::Padding(4);
			this->btProfile->Name = L"btProfile";
			this->btProfile->Size = System::Drawing::Size(235, 122);
			this->btProfile->TabIndex = 0;
			this->btProfile->UseVisualStyleBackColor = false;
			this->btProfile->Click += gcnew System::EventHandler(this, &mainForm::btProfile_Click);
			// 
			// panelLogo
			// 
			this->panelLogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Margin = System::Windows::Forms::Padding(4);
			this->panelLogo->Name = L"panelLogo";

			this->panelLogo->Size = System::Drawing::Size(235, 123);

			this->panelLogo->Size = System::Drawing::Size(176, 100);

			this->panelLogo->TabIndex = 2;
			// 
			// panelMain
			// 

			this->panelMain->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->panelMain->Controls->Add(this->panelProfile);

			this->panelMain->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));

			this->panelMain->Controls->Add(this->panelCourse);
			this->panelMain->Controls->Add(this->dgvSchedule);
			this->panelMain->Controls->Add(this->dgvScore);
			this->panelMain->Controls->Add(this->panelClassList);
			this->panelMain->Controls->Add(this->panelCheckIn);
			this->panelMain->Controls->Add(this->panelScore);
			this->panelMain->Controls->Add(this->panelSchedule);
			this->panelMain->Controls->Add(this->panelLecturer);
			this->panelMain->Controls->Add(this->panelLogin);
			this->panelMain->Dock = System::Windows::Forms::DockStyle::Fill;

			this->panelMain->Location = System::Drawing::Point(235, 0);
			this->panelMain->Margin = System::Windows::Forms::Padding(4);
			this->panelMain->Name = L"panelMain";
			this->panelMain->Size = System::Drawing::Size(1197, 725);

			this->panelMain->Location = System::Drawing::Point(176, 0);
			this->panelMain->Name = L"panelMain";
			this->panelMain->Size = System::Drawing::Size(898, 589);

			this->panelMain->TabIndex = 2;
			this->panelMain->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::panelMain_MouseMove);
			// 
			// panelProfile
			// 
			this->panelProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->panelProfile->Controls->Add(this->groupBox2);
			this->panelProfile->Controls->Add(this->groupBox1);
			this->panelProfile->Controls->Add(this->button2);
			this->panelProfile->Controls->Add(this->label3);
			this->panelProfile->Location = System::Drawing::Point(293, 353);
			this->panelProfile->Margin = System::Windows::Forms::Padding(4);
			this->panelProfile->Name = L"panelProfile";
			this->panelProfile->Size = System::Drawing::Size(82, 93);
			this->panelProfile->TabIndex = 1;
			this->panelProfile->Visible = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->tbProfileUserid);
			this->groupBox2->Controls->Add(this->tbProfileUserPass);
			this->groupBox2->Controls->Add(this->btLogout);
			this->groupBox2->Controls->Add(this->tbChangePass);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::Control;
			this->groupBox2->Location = System::Drawing::Point(611, 123);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(504, 556);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Login information";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(21, 160);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(116, 28);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Password";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(21, 66);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(116, 28);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Username";
			// 
			// tbProfileUserid
			// 
			this->tbProfileUserid->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbProfileUserid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbProfileUserid->Enabled = false;
			this->tbProfileUserid->Font = (gcnew System::Drawing::Font(L"Courier New", 12));
			this->tbProfileUserid->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->tbProfileUserid->Location = System::Drawing::Point(8, 97);
			this->tbProfileUserid->Margin = System::Windows::Forms::Padding(4);
			this->tbProfileUserid->Name = L"tbProfileUserid";
			this->tbProfileUserid->ReadOnly = true;
			this->tbProfileUserid->Size = System::Drawing::Size(440, 23);
			this->tbProfileUserid->TabIndex = 1;
			this->tbProfileUserid->Text = L"User name";
			this->tbProfileUserid->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tbProfileUserPass
			// 
			this->tbProfileUserPass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbProfileUserPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbProfileUserPass->Enabled = false;
			this->tbProfileUserPass->Font = (gcnew System::Drawing::Font(L"Courier New", 12));
			this->tbProfileUserPass->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->tbProfileUserPass->Location = System::Drawing::Point(8, 191);
			this->tbProfileUserPass->Margin = System::Windows::Forms::Padding(4);
			this->tbProfileUserPass->Name = L"tbProfileUserPass";
			this->tbProfileUserPass->ReadOnly = true;
			this->tbProfileUserPass->Size = System::Drawing::Size(440, 23);
			this->tbProfileUserPass->TabIndex = 1;
			this->tbProfileUserPass->Text = L"Password";
			this->tbProfileUserPass->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->tbProfileUserPass->UseSystemPasswordChar = true;
			// 
			// btLogout
			// 
			this->btLogout->FlatAppearance->BorderSize = 0;
			this->btLogout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btLogout->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btLogout->Location = System::Drawing::Point(361, 484);
			this->btLogout->Margin = System::Windows::Forms::Padding(4);
			this->btLogout->Name = L"btLogout";
			this->btLogout->Size = System::Drawing::Size(135, 65);
			this->btLogout->TabIndex = 2;
			this->btLogout->Text = L"Logout";
			this->btLogout->UseVisualStyleBackColor = true;
			this->btLogout->Click += gcnew System::EventHandler(this, &mainForm::btLogout_Click);
			// 
			// tbChangePass
			// 
			this->tbChangePass->FlatAppearance->BorderSize = 0;
			this->tbChangePass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tbChangePass->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbChangePass->Location = System::Drawing::Point(115, 484);
			this->tbChangePass->Margin = System::Windows::Forms::Padding(4);
			this->tbChangePass->Name = L"tbChangePass";
			this->tbChangePass->Size = System::Drawing::Size(221, 65);
			this->tbChangePass->TabIndex = 3;
			this->tbChangePass->Text = L"Change password";
			this->tbChangePass->UseVisualStyleBackColor = true;
			this->tbChangePass->Click += gcnew System::EventHandler(this, &mainForm::tbChangePass_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->tbProfileEmail);
			this->groupBox1->Controls->Add(this->tbProfileClass);
			this->groupBox1->Controls->Add(this->tbProfileFullname);
			this->groupBox1->Controls->Add(this->tbProfileDob);
			this->groupBox1->Controls->Add(this->tbProfileSid);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Location = System::Drawing::Point(45, 123);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(504, 556);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Your information";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 453);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(77, 28);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Class";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 352);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(142, 28);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Student ID";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 255);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 28);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 160);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(181, 28);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Date of Birth";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 66);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 28);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Full name";
			// 
			// tbProfileEmail
			// 
			this->tbProfileEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbProfileEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbProfileEmail->Enabled = false;
			this->tbProfileEmail->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProfileEmail->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->tbProfileEmail->Location = System::Drawing::Point(12, 284);
			this->tbProfileEmail->Margin = System::Windows::Forms::Padding(4);
			this->tbProfileEmail->Name = L"tbProfileEmail";
			this->tbProfileEmail->ReadOnly = true;
			this->tbProfileEmail->Size = System::Drawing::Size(447, 23);
			this->tbProfileEmail->TabIndex = 1;
			this->tbProfileEmail->Text = L"Email";
			this->tbProfileEmail->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tbProfileClass
			// 
			this->tbProfileClass->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystem;
			this->tbProfileClass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbProfileClass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbProfileClass->Enabled = false;
			this->tbProfileClass->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProfileClass->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->tbProfileClass->Location = System::Drawing::Point(12, 484);
			this->tbProfileClass->Margin = System::Windows::Forms::Padding(4);
			this->tbProfileClass->Name = L"tbProfileClass";
			this->tbProfileClass->ReadOnly = true;
			this->tbProfileClass->Size = System::Drawing::Size(447, 23);
			this->tbProfileClass->TabIndex = 1;
			this->tbProfileClass->Text = L"Class";
			this->tbProfileClass->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tbProfileFullname
			// 
			this->tbProfileFullname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbProfileFullname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbProfileFullname->Enabled = false;
			this->tbProfileFullname->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProfileFullname->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->tbProfileFullname->Location = System::Drawing::Point(12, 97);
			this->tbProfileFullname->Margin = System::Windows::Forms::Padding(4);
			this->tbProfileFullname->Name = L"tbProfileFullname";
			this->tbProfileFullname->ReadOnly = true;
			this->tbProfileFullname->Size = System::Drawing::Size(447, 23);
			this->tbProfileFullname->TabIndex = 1;
			this->tbProfileFullname->Text = L"Full name";
			this->tbProfileFullname->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tbProfileDob
			// 
			this->tbProfileDob->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbProfileDob->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbProfileDob->Enabled = false;
			this->tbProfileDob->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProfileDob->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->tbProfileDob->Location = System::Drawing::Point(12, 192);
			this->tbProfileDob->Margin = System::Windows::Forms::Padding(4);
			this->tbProfileDob->Name = L"tbProfileDob";
			this->tbProfileDob->ReadOnly = true;
			this->tbProfileDob->Size = System::Drawing::Size(447, 23);
			this->tbProfileDob->TabIndex = 1;
			this->tbProfileDob->Text = L"Date of birth";
			this->tbProfileDob->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tbProfileSid
			// 
			this->tbProfileSid->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->tbProfileSid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbProfileSid->Enabled = false;
			this->tbProfileSid->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProfileSid->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->tbProfileSid->Location = System::Drawing::Point(12, 384);
			this->tbProfileSid->Margin = System::Windows::Forms::Padding(4);
			this->tbProfileSid->Name = L"tbProfileSid";
			this->tbProfileSid->ReadOnly = true;
			this->tbProfileSid->Size = System::Drawing::Size(447, 23);
			this->tbProfileSid->TabIndex = 1;
			this->tbProfileSid->Text = L"Student ID";
			this->tbProfileSid->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(0, 73);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(82, 2);
			this->button2->TabIndex = 5;
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->label3->Dock = System::Windows::Forms::DockStyle::Top;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 73);
			this->label3->TabIndex = 4;
			this->label3->Text = L"       Profile";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panelCourse
			// 
			this->panelCourse->Controls->Add(this->panelSemester);
			this->panelCourse->Controls->Add(this->button4);
			this->panelCourse->Controls->Add(this->panelCourseHeader);
			this->panelCourse->Controls->Add(this->dgvCourseList);
			this->panelCourse->Controls->Add(this->dgvAY);
			this->panelCourse->Location = System::Drawing::Point(619, 423);
			this->panelCourse->Margin = System::Windows::Forms::Padding(4);
			this->panelCourse->Name = L"panelCourse";
			this->panelCourse->Size = System::Drawing::Size(578, 302);
			this->panelCourse->TabIndex = 3;
			// 
			// panelSemester
			// 
			this->panelSemester->Controls->Add(this->btSemester2);
			this->panelSemester->Controls->Add(this->btSemester3);
			this->panelSemester->Controls->Add(this->btSemester1);
			this->panelSemester->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelSemester->Location = System::Drawing::Point(0, 18);
			this->panelSemester->Margin = System::Windows::Forms::Padding(4);
			this->panelSemester->Name = L"panelSemester";
			this->panelSemester->Size = System::Drawing::Size(578, 284);
			this->panelSemester->TabIndex = 8;
			// 
			// btSemester2
			// 
			this->btSemester2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->btSemester2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btSemester2->FlatAppearance->BorderSize = 0;
			this->btSemester2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btSemester2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btSemester2->ForeColor = System::Drawing::SystemColors::Control;
			this->btSemester2->Location = System::Drawing::Point(399, 0);
			this->btSemester2->Margin = System::Windows::Forms::Padding(4);
			this->btSemester2->Name = L"btSemester2";
			this->btSemester2->Size = System::Drawing::Size(0, 284);
			this->btSemester2->TabIndex = 2;
			this->btSemester2->Text = L"SEMESTER II";
			this->btSemester2->UseVisualStyleBackColor = false;
			this->btSemester2->Click += gcnew System::EventHandler(this, &mainForm::btSemester2_Click);
			// 
			// btSemester3
			// 
			this->btSemester3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->btSemester3->Dock = System::Windows::Forms::DockStyle::Right;
			this->btSemester3->FlatAppearance->BorderSize = 0;
			this->btSemester3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btSemester3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btSemester3->ForeColor = System::Drawing::SystemColors::Control;
			this->btSemester3->Location = System::Drawing::Point(179, 0);
			this->btSemester3->Margin = System::Windows::Forms::Padding(4);
			this->btSemester3->Name = L"btSemester3";
			this->btSemester3->Size = System::Drawing::Size(399, 284);
			this->btSemester3->TabIndex = 2;
			this->btSemester3->Text = L"SEMESTER III";
			this->btSemester3->UseVisualStyleBackColor = false;
			this->btSemester3->Click += gcnew System::EventHandler(this, &mainForm::btSemester3_Click);
			// 
			// btSemester1
			// 
			this->btSemester1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->btSemester1->Dock = System::Windows::Forms::DockStyle::Left;
			this->btSemester1->FlatAppearance->BorderSize = 0;
			this->btSemester1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btSemester1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btSemester1->ForeColor = System::Drawing::SystemColors::Control;
			this->btSemester1->Location = System::Drawing::Point(0, 0);
			this->btSemester1->Margin = System::Windows::Forms::Padding(4);
			this->btSemester1->Name = L"btSemester1";
			this->btSemester1->Size = System::Drawing::Size(399, 284);
			this->btSemester1->TabIndex = 2;
			this->btSemester1->Text = L"SEMESTER I";
			this->btSemester1->UseVisualStyleBackColor = false;
			this->btSemester1->Click += gcnew System::EventHandler(this, &mainForm::btSemester1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Location = System::Drawing::Point(0, 73);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(578, 2);
			this->button4->TabIndex = 7;
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			// 
			// panelCourseHeader
			// 
			this->panelCourseHeader->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->panelCourseHeader->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelCourseHeader->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panelCourseHeader->ForeColor = System::Drawing::SystemColors::Control;
			this->panelCourseHeader->Location = System::Drawing::Point(0, 0);
			this->panelCourseHeader->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->panelCourseHeader->Name = L"panelCourseHeader";
			this->panelCourseHeader->Size = System::Drawing::Size(578, 73);
			this->panelCourseHeader->TabIndex = 6;
			this->panelCourseHeader->Text = L"       Academic years";
			this->panelCourseHeader->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dgvCourseList
			// 
			this->dgvCourseList->AllowUserToAddRows = false;
			this->dgvCourseList->AllowUserToDeleteRows = false;
			this->dgvCourseList->AllowUserToResizeColumns = false;
			this->dgvCourseList->AllowUserToResizeRows = false;
			this->dgvCourseList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvCourseList->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->dgvCourseList->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvCourseList->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvCourseList->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvCourseList->ColumnHeadersHeight = 50;
			this->dgvCourseList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvCourseList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11
			});
			this->dgvCourseList->ContextMenuStrip = this->dgvCourseListMenu;
			this->dgvCourseList->EnableHeadersVisualStyles = false;
			this->dgvCourseList->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvCourseList->Location = System::Drawing::Point(0, -300);
			this->dgvCourseList->Margin = System::Windows::Forms::Padding(4);
			this->dgvCourseList->MultiSelect = false;
			this->dgvCourseList->Name = L"dgvCourseList";
			this->dgvCourseList->RowHeadersVisible = false;
			this->dgvCourseList->RowHeadersWidth = 51;
			this->dgvCourseList->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dgvCourseList->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->dgvCourseList->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvCourseList->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::Control;
			this->dgvCourseList->RowTemplate->Height = 25;
			this->dgvCourseList->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvCourseList->Size = System::Drawing::Size(578, 602);
			this->dgvCourseList->TabIndex = 3;
			this->dgvCourseList->CellMouseDown += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &mainForm::dgvCourseList_CellMouseDown);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"No";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"COURSE ID";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 130;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"COURSE NAME";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 300;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"CLASS";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 80;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"LECTURER ACCOUNT";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"START DATE";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"END DATE";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 150;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"DAY OF WEEK";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"START AT";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 80;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"END AT";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 80;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"ROOM";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->Width = 70;
			// 
			// dgvCourseListMenu
			// 
			this->dgvCourseListMenu->ImageScalingSize = System::Drawing::Size(20, 20);
			this->dgvCourseListMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->addToolStripMenuItem,
					this->removeToolStripMenuItem1, this->viewStudentToolStripMenuItem, this->viewScoreboardToolStripMenuItem, this->viewAttendanceListToolStripMenuItem
			});
			this->dgvCourseListMenu->Name = L"dgvCourseListMenu";
			this->dgvCourseListMenu->Size = System::Drawing::Size(217, 124);
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(216, 24);
			this->addToolStripMenuItem->Text = L"Add";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::addToolStripMenuItem_Click);
			// 
			// removeToolStripMenuItem1
			// 
			this->removeToolStripMenuItem1->Name = L"removeToolStripMenuItem1";
			this->removeToolStripMenuItem1->Size = System::Drawing::Size(216, 24);
			this->removeToolStripMenuItem1->Text = L"Remove";
			this->removeToolStripMenuItem1->Click += gcnew System::EventHandler(this, &mainForm::removeToolStripMenuItem1_Click);
			// 
			// viewStudentToolStripMenuItem
			// 
			this->viewStudentToolStripMenuItem->Name = L"viewStudentToolStripMenuItem";
			this->viewStudentToolStripMenuItem->Size = System::Drawing::Size(216, 24);
			this->viewStudentToolStripMenuItem->Text = L"View Student";
			this->viewStudentToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::viewStudentToolStripMenuItem_Click);
			// 
			// viewScoreboardToolStripMenuItem
			// 
			this->viewScoreboardToolStripMenuItem->Name = L"viewScoreboardToolStripMenuItem";
			this->viewScoreboardToolStripMenuItem->Size = System::Drawing::Size(216, 24);
			this->viewScoreboardToolStripMenuItem->Text = L"View Scoreboard";
			this->viewScoreboardToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::viewScoreboardToolStripMenuItem_Click);
			// 
			// viewAttendanceListToolStripMenuItem
			// 
			this->viewAttendanceListToolStripMenuItem->Name = L"viewAttendanceListToolStripMenuItem";
			this->viewAttendanceListToolStripMenuItem->Size = System::Drawing::Size(216, 24);
			this->viewAttendanceListToolStripMenuItem->Text = L"View Attendance List";
			this->viewAttendanceListToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::viewAttendanceListToolStripMenuItem_Click);
			// 
			// dgvAY
			// 
			this->dgvAY->AllowUserToAddRows = false;
			this->dgvAY->AllowUserToDeleteRows = false;
			this->dgvAY->AllowUserToResizeColumns = false;
			this->dgvAY->AllowUserToResizeRows = false;
			this->dgvAY->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvAY->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->dgvAY->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvAY->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvAY->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dgvAY->ColumnHeadersHeight = 40;
			this->dgvAY->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvAY->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->ayClumn });
			this->dgvAY->ContextMenuStrip = this->ayMenu;
			this->dgvAY->EnableHeadersVisualStyles = false;
			this->dgvAY->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvAY->Location = System::Drawing::Point(0, -300);
			this->dgvAY->Margin = System::Windows::Forms::Padding(4);
			this->dgvAY->MultiSelect = false;
			this->dgvAY->Name = L"dgvAY";
			this->dgvAY->RowHeadersVisible = false;
			this->dgvAY->RowHeadersWidth = 51;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvAY->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->dgvAY->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dgvAY->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->dgvAY->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvAY->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::Control;
			this->dgvAY->RowTemplate->Height = 100;
			this->dgvAY->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvAY->Size = System::Drawing::Size(578, 602);
			this->dgvAY->TabIndex = 1;
			this->dgvAY->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &mainForm::dgvAY_CellDoubleClick);
			this->dgvAY->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &mainForm::dgvAY_CellEndEdit);
			this->dgvAY->CellMouseDown += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &mainForm::dgvAY_CellMouseDown);
			// 
			// ayClumn
			// 
			this->ayClumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ayClumn->HeaderText = L"ACADEMIC YEARS";
			this->ayClumn->MinimumWidth = 6;
			this->ayClumn->Name = L"ayClumn";
			// 
			// ayMenu
			// 
			this->ayMenu->ImageScalingSize = System::Drawing::Size(20, 20);
			this->ayMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->createToolStripMenuItem,
					this->deleteToolStripMenuItem
			});
			this->ayMenu->Name = L"ayMenu";
			this->ayMenu->Size = System::Drawing::Size(123, 52);
			// 
			// createToolStripMenuItem
			// 
			this->createToolStripMenuItem->Name = L"createToolStripMenuItem";
			this->createToolStripMenuItem->Size = System::Drawing::Size(122, 24);
			this->createToolStripMenuItem->Text = L"Create";
			this->createToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::createToolStripMenuItem_Click);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(122, 24);
			this->deleteToolStripMenuItem->Text = L"Delete";
			this->deleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::deleteToolStripMenuItem_Click);
			// 
			// panelClassList
			// 
			this->panelClassList->Controls->Add(this->dgvStudentList);
			this->panelClassList->Controls->Add(this->button3);
			this->panelClassList->Controls->Add(this->panelClassHeader);
			this->panelClassList->Controls->Add(this->dgvClassList);
			this->panelClassList->Location = System::Drawing::Point(158, 243);
			this->panelClassList->Margin = System::Windows::Forms::Padding(4);
			this->panelClassList->Name = L"panelClassList";
			this->panelClassList->Size = System::Drawing::Size(217, 102);
			this->panelClassList->TabIndex = 2;
			// 
			// dgvStudentList
			// 
			this->dgvStudentList->AllowUserToAddRows = false;
			this->dgvStudentList->AllowUserToDeleteRows = false;
			this->dgvStudentList->AllowUserToResizeColumns = false;
			this->dgvStudentList->AllowUserToResizeRows = false;
			this->dgvStudentList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvStudentList->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->dgvStudentList->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvStudentList->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvStudentList->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dgvStudentList->ColumnHeadersHeight = 30;
			this->dgvStudentList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvStudentList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dgvStudentListNo,
					this->dgvStudentListID, this->dgvStudentListLastname, this->dgvStudentListFirstname, this->dgvStudentListGender, this->dgvStudentListDob
			});
			this->dgvStudentList->ContextMenuStrip = this->dgvStudentListMenu;
			this->dgvStudentList->EnableHeadersVisualStyles = false;
			this->dgvStudentList->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvStudentList->Location = System::Drawing::Point(0, 123);
			this->dgvStudentList->Margin = System::Windows::Forms::Padding(4);
			this->dgvStudentList->MultiSelect = false;
			this->dgvStudentList->Name = L"dgvStudentList";
			this->dgvStudentList->RowHeadersVisible = false;
			this->dgvStudentList->RowHeadersWidth = 51;
			this->dgvStudentList->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dgvStudentList->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->dgvStudentList->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvStudentList->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::Control;
			this->dgvStudentList->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			this->dgvStudentList->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->dgvStudentList->RowTemplate->Height = 25;
			this->dgvStudentList->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;

			this->dgvStudentList->Size = System::Drawing::Size(217, 0);

			this->dgvStudentList->Size = System::Drawing::Size(163, 0);

			this->dgvStudentList->TabIndex = 2;
			this->dgvStudentList->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &mainForm::dgvStudentList_CellEndEdit);
			this->dgvStudentList->CellMouseDown += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &mainForm::dgvStudentList_CellMouseDown);
			// 
			// dgvStudentListNo
			// 
			this->dgvStudentListNo->HeaderText = L"No";

			this->dgvStudentListNo->MinimumWidth = 6;


			this->dgvStudentListNo->Name = L"dgvStudentListNo";
			this->dgvStudentListNo->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvStudentListNo->Width = 50;
			// 
			// dgvStudentListID
			// 
			this->dgvStudentListID->ContextMenuStrip = this->dgvStudentListMenu;
			this->dgvStudentListID->HeaderText = L"STUDEN ID";

			this->dgvStudentListID->MinimumWidth = 6;


			this->dgvStudentListID->Name = L"dgvStudentListID";
			this->dgvStudentListID->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvStudentListID->Width = 130;
			// 
			// dgvStudentListMenu
			// 

			this->dgvStudentListMenu->ImageScalingSize = System::Drawing::Size(20, 20);


			this->dgvStudentListMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->addNewStudentToolStripMenuItem,
					this->removeToolStripMenuItem, this->changeClassToolStripMenuItem
			});
			this->dgvStudentListMenu->Name = L"dgvStudentListMenu";

			this->dgvStudentListMenu->Size = System::Drawing::Size(193, 76);

			this->dgvStudentListMenu->Size = System::Drawing::Size(166, 70);
			// 
			// addNewStudentToolStripMenuItem
			// 
			this->addNewStudentToolStripMenuItem->Name = L"addNewStudentToolStripMenuItem";

			this->addNewStudentToolStripMenuItem->Size = System::Drawing::Size(192, 24);

			this->addNewStudentToolStripMenuItem->Size = System::Drawing::Size(165, 22);

			this->addNewStudentToolStripMenuItem->Text = L"Add new Student";
			this->addNewStudentToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::addNewStudentToolStripMenuItem_Click);
			// 
			// removeToolStripMenuItem
			// 
			this->removeToolStripMenuItem->Name = L"removeToolStripMenuItem";

			this->removeToolStripMenuItem->Size = System::Drawing::Size(192, 24);

			this->removeToolStripMenuItem->Size = System::Drawing::Size(165, 22);

			this->removeToolStripMenuItem->Text = L"Remove";
			this->removeToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::removeToolStripMenuItem_Click);
			// 
			// changeClassToolStripMenuItem
			// 
			this->changeClassToolStripMenuItem->Name = L"changeClassToolStripMenuItem";

			this->changeClassToolStripMenuItem->Size = System::Drawing::Size(192, 24);

			this->changeClassToolStripMenuItem->Size = System::Drawing::Size(165, 22);

			this->changeClassToolStripMenuItem->Text = L"Change class";
			this->changeClassToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::changeClassToolStripMenuItem_Click);
			// 
			// dgvStudentListLastname
			// 
			this->dgvStudentListLastname->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dgvStudentListLastname->HeaderText = L"LASTNAME";

			this->dgvStudentListLastname->MinimumWidth = 6;


			this->dgvStudentListLastname->Name = L"dgvStudentListLastname";
			this->dgvStudentListLastname->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// dgvStudentListFirstname
			// 
			this->dgvStudentListFirstname->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dgvStudentListFirstname->HeaderText = L"FIRSTNAME";

			this->dgvStudentListFirstname->MinimumWidth = 6;


			this->dgvStudentListFirstname->Name = L"dgvStudentListFirstname";
			this->dgvStudentListFirstname->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// dgvStudentListGender
			// 
			this->dgvStudentListGender->HeaderText = L"GENDER";

			this->dgvStudentListGender->MinimumWidth = 6;
			this->dgvStudentListGender->Name = L"dgvStudentListGender";
			this->dgvStudentListGender->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvStudentListGender->Width = 125;
			// 
			// dgvStudentListDob

			this->dgvStudentListGender->Name = L"dgvStudentListGender";
			this->dgvStudentListGender->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// dgvStudentListDob
			// 
			this->dgvStudentListDob->HeaderText = L"DoB";
			this->dgvStudentListDob->Name = L"dgvStudentListDob";
			this->dgvStudentListDob->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(0, 59);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(163, 2);
			this->button3->TabIndex = 6;
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			// 
			// panelClassHeader
			// 
			this->panelClassHeader->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->panelClassHeader->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelClassHeader->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panelClassHeader->ForeColor = System::Drawing::SystemColors::Control;
			this->panelClassHeader->Location = System::Drawing::Point(0, 0);
			this->panelClassHeader->Name = L"panelClassHeader";
			this->panelClassHeader->Size = System::Drawing::Size(163, 59);
			this->panelClassHeader->TabIndex = 5;
			this->panelClassHeader->Text = L"       Class list";
			this->panelClassHeader->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dgvClassList
			// 
			this->dgvClassList->AllowUserToAddRows = false;
			this->dgvClassList->AllowUserToDeleteRows = false;
			this->dgvClassList->AllowUserToResizeColumns = false;
			this->dgvClassList->AllowUserToResizeRows = false;
			this->dgvClassList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvClassList->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->dgvClassList->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvClassList->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvClassList->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dgvClassList->ColumnHeadersHeight = 30;
			this->dgvClassList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvClassList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dgvClassNo,
					this->Column29, this->Column30
			});
			this->dgvClassList->EnableHeadersVisualStyles = false;
			this->dgvClassList->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvClassList->Location = System::Drawing::Point(0, 100);
			this->dgvClassList->MultiSelect = false;
			this->dgvClassList->Name = L"dgvClassList";
			this->dgvClassList->ReadOnly = true;
			this->dgvClassList->RowHeadersVisible = false;
			this->dgvClassList->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dgvClassList->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->dgvClassList->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvClassList->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::Control;
			this->dgvClassList->RowTemplate->Height = 25;
			this->dgvClassList->RowTemplate->ReadOnly = true;
			this->dgvClassList->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvClassList->Size = System::Drawing::Size(163, 0);
			this->dgvClassList->TabIndex = 1;
			this->dgvClassList->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &mainForm::dgvClassList_CellClick);
			// 
			// dgvClassNo
			// 
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::MidnightBlue;
			this->dgvClassNo->DefaultCellStyle = dataGridViewCellStyle6;
			this->dgvClassNo->HeaderText = L"No";
			this->dgvClassNo->Name = L"dgvClassNo";
			this->dgvClassNo->ReadOnly = true;
			this->dgvClassNo->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvClassNo->Width = 50;
			// 
			// Column29
			// 
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::MidnightBlue;
			this->Column29->DefaultCellStyle = dataGridViewCellStyle7;
			this->Column29->HeaderText = L"CLASS NAME";
			this->Column29->Name = L"Column29";
			this->Column29->ReadOnly = true;
			this->Column29->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column29->Width = 150;
			// 
			// Column30
			// 
			this->Column30->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::MidnightBlue;
			this->Column30->DefaultCellStyle = dataGridViewCellStyle8;
			this->Column30->HeaderText = L"DETAIL";
			this->Column30->Name = L"Column30";
			this->Column30->ReadOnly = true;
			this->Column30->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// panelProfile
			// 
			this->panelProfile->Controls->Add(this->groupBox2);
			this->panelProfile->Controls->Add(this->groupBox1);
			this->panelProfile->Controls->Add(this->button2);
			this->panelProfile->Controls->Add(this->label3);
			this->panelProfile->Location = System::Drawing::Point(802, 12);
			this->panelProfile->Name = L"panelProfile";
			this->panelProfile->Size = System::Drawing::Size(84, 83);
			this->panelProfile->TabIndex = 1;
			this->panelProfile->Visible = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->tbProfileUserid);
			this->groupBox2->Controls->Add(this->tbProfileUserPass);
			this->groupBox2->Controls->Add(this->btLogout);
			this->groupBox2->Controls->Add(this->tbChangePass);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::Control;
			this->groupBox2->Location = System::Drawing::Point(458, 100);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(378, 452);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Login information";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(16, 130);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(90, 22);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Password";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(16, 54);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(90, 22);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Username";
			// 
			// tbProfileUserid
			// 
			this->tbProfileUserid->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->tbProfileUserid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbProfileUserid->Enabled = false;
			this->tbProfileUserid->Font = (gcnew System::Drawing::Font(L"Courier New", 12));
			this->tbProfileUserid->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->tbProfileUserid->Location = System::Drawing::Point(6, 79);
			this->tbProfileUserid->Name = L"tbProfileUserid";
			this->tbProfileUserid->ReadOnly = true;
			this->tbProfileUserid->Size = System::Drawing::Size(330, 19);
			this->tbProfileUserid->TabIndex = 1;
			this->tbProfileUserid->Text = L"User name";
			this->tbProfileUserid->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tbProfileUserPass
			// 
			this->tbProfileUserPass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->tbProfileUserPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbProfileUserPass->Enabled = false;
			this->tbProfileUserPass->Font = (gcnew System::Drawing::Font(L"Courier New", 12));
			this->tbProfileUserPass->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->tbProfileUserPass->Location = System::Drawing::Point(6, 155);
			this->tbProfileUserPass->Name = L"tbProfileUserPass";
			this->tbProfileUserPass->ReadOnly = true;
			this->tbProfileUserPass->Size = System::Drawing::Size(330, 19);
			this->tbProfileUserPass->TabIndex = 1;
			this->tbProfileUserPass->Text = L"Password";
			this->tbProfileUserPass->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->tbProfileUserPass->UseSystemPasswordChar = true;
			// 
			// btLogout
			// 
			this->btLogout->FlatAppearance->BorderSize = 0;
			this->btLogout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btLogout->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btLogout->Location = System::Drawing::Point(271, 402);
			this->btLogout->Name = L"btLogout";
			this->btLogout->Size = System::Drawing::Size(101, 44);
			this->btLogout->TabIndex = 2;
			this->btLogout->Text = L"Logout";
			this->btLogout->UseVisualStyleBackColor = true;
			this->btLogout->Click += gcnew System::EventHandler(this, &mainForm::btLogout_Click);
			// 
			// tbChangePass
			// 
			this->tbChangePass->FlatAppearance->BorderSize = 0;
			this->tbChangePass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tbChangePass->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbChangePass->Location = System::Drawing::Point(111, 402);
			this->tbChangePass->Name = L"tbChangePass";
			this->tbChangePass->Size = System::Drawing::Size(141, 44);
			this->tbChangePass->TabIndex = 3;
			this->tbChangePass->Text = L"Change password";
			this->tbChangePass->UseVisualStyleBackColor = true;
			this->tbChangePass->Click += gcnew System::EventHandler(this, &mainForm::tbChangePass_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->tbProfileEmail);
			this->groupBox1->Controls->Add(this->tbProfileClass);
			this->groupBox1->Controls->Add(this->tbProfileFullname);
			this->groupBox1->Controls->Add(this->tbProfileDob);
			this->groupBox1->Controls->Add(this->tbProfileSid);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Location = System::Drawing::Point(34, 100);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(378, 452);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Your information";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(9, 368);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 22);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Class";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(9, 286);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(110, 22);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Student ID";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(9, 207);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 22);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(9, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 22);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Date of Birth";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(9, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 22);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Full name";
			// 
			// tbProfileEmail
			// 
			this->tbProfileEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->tbProfileEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbProfileEmail->Enabled = false;
			this->tbProfileEmail->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProfileEmail->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->tbProfileEmail->Location = System::Drawing::Point(9, 231);
			this->tbProfileEmail->Name = L"tbProfileEmail";
			this->tbProfileEmail->ReadOnly = true;
			this->tbProfileEmail->Size = System::Drawing::Size(335, 19);
			this->tbProfileEmail->TabIndex = 1;
			this->tbProfileEmail->Text = L"Email";
			this->tbProfileEmail->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tbProfileClass
			// 
			this->tbProfileClass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->tbProfileClass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbProfileClass->Enabled = false;
			this->tbProfileClass->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProfileClass->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->tbProfileClass->Location = System::Drawing::Point(9, 393);
			this->tbProfileClass->Name = L"tbProfileClass";
			this->tbProfileClass->ReadOnly = true;
			this->tbProfileClass->Size = System::Drawing::Size(335, 19);
			this->tbProfileClass->TabIndex = 1;
			this->tbProfileClass->Text = L"Class";
			this->tbProfileClass->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tbProfileFullname
			// 
			this->tbProfileFullname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->tbProfileFullname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbProfileFullname->Enabled = false;
			this->tbProfileFullname->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProfileFullname->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->tbProfileFullname->Location = System::Drawing::Point(9, 79);
			this->tbProfileFullname->Name = L"tbProfileFullname";
			this->tbProfileFullname->ReadOnly = true;
			this->tbProfileFullname->Size = System::Drawing::Size(335, 19);
			this->tbProfileFullname->TabIndex = 1;
			this->tbProfileFullname->Text = L"Full name";
			this->tbProfileFullname->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tbProfileDob
			// 
			this->tbProfileDob->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->tbProfileDob->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbProfileDob->Enabled = false;
			this->tbProfileDob->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProfileDob->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->tbProfileDob->Location = System::Drawing::Point(9, 156);
			this->tbProfileDob->Name = L"tbProfileDob";
			this->tbProfileDob->ReadOnly = true;
			this->tbProfileDob->Size = System::Drawing::Size(335, 19);
			this->tbProfileDob->TabIndex = 1;
			this->tbProfileDob->Text = L"Date of birth";
			this->tbProfileDob->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tbProfileSid

			// 
			this->dgvStudentListDob->HeaderText = L"DoB";
			this->dgvStudentListDob->MinimumWidth = 6;
			this->dgvStudentListDob->Name = L"dgvStudentListDob";
			this->dgvStudentListDob->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvStudentListDob->Width = 125;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(0, 73);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(217, 2);
			this->button3->TabIndex = 6;
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			// 
			// panelClassHeader
			// 
			this->panelClassHeader->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->panelClassHeader->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelClassHeader->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panelClassHeader->ForeColor = System::Drawing::SystemColors::Control;
			this->panelClassHeader->Location = System::Drawing::Point(0, 0);
			this->panelClassHeader->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->panelClassHeader->Name = L"panelClassHeader";
			this->panelClassHeader->Size = System::Drawing::Size(217, 73);
			this->panelClassHeader->TabIndex = 5;
			this->panelClassHeader->Text = L"       Class list";
			this->panelClassHeader->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dgvClassList
			// 
			this->dgvClassList->AllowUserToAddRows = false;
			this->dgvClassList->AllowUserToDeleteRows = false;
			this->dgvClassList->AllowUserToResizeColumns = false;
			this->dgvClassList->AllowUserToResizeRows = false;
			this->dgvClassList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvClassList->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->dgvClassList->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvClassList->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvClassList->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dgvClassList->ColumnHeadersHeight = 30;
			this->dgvClassList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvClassList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dgvClassNo,
					this->Column29, this->Column30
			});
			this->dgvClassList->EnableHeadersVisualStyles = false;
			this->dgvClassList->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvClassList->Location = System::Drawing::Point(0, 123);
			this->dgvClassList->Margin = System::Windows::Forms::Padding(4);
			this->dgvClassList->MultiSelect = false;
			this->dgvClassList->Name = L"dgvClassList";
			this->dgvClassList->ReadOnly = true;
			this->dgvClassList->RowHeadersVisible = false;
			this->dgvClassList->RowHeadersWidth = 51;
			this->dgvClassList->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dgvClassList->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->dgvClassList->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvClassList->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::Control;
			this->dgvClassList->RowTemplate->Height = 25;
			this->dgvClassList->RowTemplate->ReadOnly = true;
			this->dgvClassList->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvClassList->Size = System::Drawing::Size(217, 0);
			this->dgvClassList->TabIndex = 1;
			this->dgvClassList->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &mainForm::dgvClassList_CellClick);
			// 
			// dgvClassNo
			// 
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::MidnightBlue;
			this->dgvClassNo->DefaultCellStyle = dataGridViewCellStyle8;
			this->dgvClassNo->HeaderText = L"No";
			this->dgvClassNo->MinimumWidth = 6;
			this->dgvClassNo->Name = L"dgvClassNo";
			this->dgvClassNo->ReadOnly = true;
			this->dgvClassNo->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvClassNo->Width = 50;
			// 
			// Column29
			// 
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::MidnightBlue;
			this->Column29->DefaultCellStyle = dataGridViewCellStyle9;
			this->Column29->HeaderText = L"CLASS NAME";
			this->Column29->MinimumWidth = 6;
			this->Column29->Name = L"Column29";
			this->Column29->ReadOnly = true;
			this->Column29->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column29->Width = 150;
			// 
			// Column30
			// 
			this->Column30->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::MidnightBlue;
			this->Column30->DefaultCellStyle = dataGridViewCellStyle10;
			this->Column30->HeaderText = L"DETAIL";
			this->Column30->MinimumWidth = 6;
			this->Column30->Name = L"Column30";
			this->Column30->ReadOnly = true;
			this->Column30->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// panelCheckIn
			// 
			this->panelCheckIn->Controls->Add(this->button8);
			this->panelCheckIn->Controls->Add(this->label14);
			this->panelCheckIn->Controls->Add(this->dgvCheckIn);
			this->panelCheckIn->Location = System::Drawing::Point(505, 300);
			this->panelCheckIn->Margin = System::Windows::Forms::Padding(4);
			this->panelCheckIn->Name = L"panelCheckIn";
			this->panelCheckIn->Size = System::Drawing::Size(335, 249);
			this->panelCheckIn->TabIndex = 5;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button8->Dock = System::Windows::Forms::DockStyle::Top;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::Control;
			this->button8->Location = System::Drawing::Point(0, 73);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(335, 2);
			this->button8->TabIndex = 7;
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Visible = false;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label14->Dock = System::Windows::Forms::DockStyle::Top;
			this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::Control;
			this->label14->Location = System::Drawing::Point(0, 0);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(335, 73);
			this->label14->TabIndex = 6;
			this->label14->Text = L"       Check-in Result";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dgvCheckIn
			// 
			this->dgvCheckIn->AllowUserToAddRows = false;
			this->dgvCheckIn->AllowUserToDeleteRows = false;
			this->dgvCheckIn->AllowUserToResizeColumns = false;
			this->dgvCheckIn->AllowUserToResizeRows = false;
			this->dgvCheckIn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvCheckIn->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->dgvCheckIn->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvCheckIn->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvCheckIn->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle11;
			this->dgvCheckIn->ColumnHeadersHeight = 30;
			this->dgvCheckIn->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvCheckIn->EnableHeadersVisualStyles = false;
			this->dgvCheckIn->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvCheckIn->Location = System::Drawing::Point(0, 107);
			this->dgvCheckIn->Margin = System::Windows::Forms::Padding(4);
			this->dgvCheckIn->Name = L"dgvCheckIn";
			this->dgvCheckIn->ReadOnly = true;
			this->dgvCheckIn->RowHeadersVisible = false;
			this->dgvCheckIn->RowHeadersWidth = 51;
			this->dgvCheckIn->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dgvCheckIn->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->dgvCheckIn->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvCheckIn->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::Control;
			this->dgvCheckIn->Size = System::Drawing::Size(335, 142);
			this->dgvCheckIn->TabIndex = 1;
			// 
			// panelScore
			// 
			this->panelScore->Controls->Add(this->button7);
			this->panelScore->Controls->Add(this->label13);
			this->panelScore->Location = System::Drawing::Point(619, 57);
			this->panelScore->Margin = System::Windows::Forms::Padding(4);
			this->panelScore->Name = L"panelScore";
			this->panelScore->Size = System::Drawing::Size(320, 138);
			this->panelScore->TabIndex = 7;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button7->Dock = System::Windows::Forms::DockStyle::Top;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::Control;
			this->button7->Location = System::Drawing::Point(0, 73);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(320, 2);
			this->button7->TabIndex = 7;
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Visible = false;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label13->Dock = System::Windows::Forms::DockStyle::Top;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::Control;
			this->label13->Location = System::Drawing::Point(0, 0);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(320, 73);
			this->label13->TabIndex = 6;
			this->label13->Text = L"       Score";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dgvScore
			// 
			this->dgvScore->AllowUserToAddRows = false;
			this->dgvScore->AllowUserToDeleteRows = false;
			this->dgvScore->AllowUserToResizeColumns = false;
			this->dgvScore->AllowUserToResizeRows = false;
			this->dgvScore->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvScore->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->dgvScore->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvScore->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvScore->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dgvScore->ColumnHeadersHeight = 30;
			this->dgvScore->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvScore->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column24, this->Column25,
					this->Column26, this->Column27, this->Column28
			});
			this->dgvScore->EnableHeadersVisualStyles = false;
			this->dgvScore->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvScore->Location = System::Drawing::Point(450, 27);
			this->dgvScore->Margin = System::Windows::Forms::Padding(4);
			this->dgvScore->Name = L"dgvScore";
			this->dgvScore->ReadOnly = true;
			this->dgvScore->RowHeadersVisible = false;
			this->dgvScore->RowHeadersWidth = 51;
			this->dgvScore->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dgvScore->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->dgvScore->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvScore->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::Control;
			this->dgvScore->RowTemplate->Height = 25;
			this->dgvScore->Size = System::Drawing::Size(124, 181);
			this->dgvScore->TabIndex = 1;
			// 
			// Column24
			// 
			this->Column24->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column24->HeaderText = L"Course";
			this->Column24->MinimumWidth = 6;
			this->Column24->Name = L"Column24";
			this->Column24->ReadOnly = true;
			// 
			// Column25
			// 
			this->Column25->HeaderText = L"Midterm";
			this->Column25->MinimumWidth = 6;
			this->Column25->Name = L"Column25";
			this->Column25->ReadOnly = true;
			this->Column25->Width = 125;
			// 
			// Column26
			// 
			this->Column26->HeaderText = L"Final";
			this->Column26->MinimumWidth = 6;
			this->Column26->Name = L"Column26";
			this->Column26->ReadOnly = true;
			this->Column26->Width = 125;
			// 
			// Column27
			// 
			this->Column27->HeaderText = L"Lab";
			this->Column27->MinimumWidth = 6;
			this->Column27->Name = L"Column27";
			this->Column27->ReadOnly = true;
			this->Column27->Width = 125;
			// 
			// Column28
			// 
			this->Column28->HeaderText = L"Bonus";
			this->Column28->MinimumWidth = 6;
			this->Column28->Name = L"Column28";
			this->Column28->ReadOnly = true;
			this->Column28->Width = 125;
			// 
			// panelSchedule
			// 
			this->panelSchedule->Controls->Add(this->button6);
			this->panelSchedule->Controls->Add(this->label12);
			this->panelSchedule->Location = System::Drawing::Point(80, 48);
			this->panelSchedule->Margin = System::Windows::Forms::Padding(4);
			this->panelSchedule->Name = L"panelSchedule";
			this->panelSchedule->Size = System::Drawing::Size(220, 181);
			this->panelSchedule->TabIndex = 6;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button6->Dock = System::Windows::Forms::DockStyle::Top;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Location = System::Drawing::Point(0, 73);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(220, 2);
			this->button6->TabIndex = 7;
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Visible = false;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label12->Dock = System::Windows::Forms::DockStyle::Top;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::Control;
			this->label12->Location = System::Drawing::Point(0, 0);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(220, 73);
			this->label12->TabIndex = 6;
			this->label12->Text = L"       Schedule";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dgvSchedule
			// 
			this->dgvSchedule->AllowUserToAddRows = false;
			this->dgvSchedule->AllowUserToDeleteRows = false;
			this->dgvSchedule->AllowUserToResizeColumns = false;
			this->dgvSchedule->AllowUserToResizeRows = false;
			this->dgvSchedule->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvSchedule->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->dgvSchedule->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvSchedule->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvSchedule->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dgvSchedule->ColumnHeadersHeight = 30;
			this->dgvSchedule->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvSchedule->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column17,
					this->Column18, this->Column19, this->Column20, this->Column21, this->Column22, this->Column23
			});
			this->dgvSchedule->EnableHeadersVisualStyles = false;
			this->dgvSchedule->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvSchedule->Location = System::Drawing::Point(397, 100);
			this->dgvSchedule->Margin = System::Windows::Forms::Padding(4);
			this->dgvSchedule->MultiSelect = false;
			this->dgvSchedule->Name = L"dgvSchedule";
			this->dgvSchedule->ReadOnly = true;
			this->dgvSchedule->RowHeadersVisible = false;
			this->dgvSchedule->RowHeadersWidth = 51;
			this->dgvSchedule->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dgvSchedule->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->dgvSchedule->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvSchedule->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::Control;
			this->dgvSchedule->RowTemplate->Height = 25;
			this->dgvSchedule->Size = System::Drawing::Size(95, 381);
			this->dgvSchedule->TabIndex = 1;
			// 
			// Column17
			// 
			this->Column17->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column17->HeaderText = L"MONDAY";
			this->Column17->MinimumWidth = 6;
			this->Column17->Name = L"Column17";
			this->Column17->ReadOnly = true;
			// 
			// Column18
			// 
			this->Column18->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column18->HeaderText = L"TUESDAY";
			this->Column18->MinimumWidth = 6;
			this->Column18->Name = L"Column18";
			this->Column18->ReadOnly = true;
			// 
			// Column19
			// 
			this->Column19->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column19->HeaderText = L"WEDNESDAY";
			this->Column19->MinimumWidth = 6;
			this->Column19->Name = L"Column19";
			this->Column19->ReadOnly = true;
			// 
			// Column20
			// 
			this->Column20->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column20->HeaderText = L"THURSDAY";
			this->Column20->MinimumWidth = 6;
			this->Column20->Name = L"Column20";
			this->Column20->ReadOnly = true;
			// 
			// Column21
			// 
			this->Column21->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column21->HeaderText = L"FRIDAY";
			this->Column21->MinimumWidth = 6;
			this->Column21->Name = L"Column21";
			this->Column21->ReadOnly = true;
			// 
			// Column22
			// 
			this->Column22->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column22->HeaderText = L"SATURDAY";
			this->Column22->MinimumWidth = 6;
			this->Column22->Name = L"Column22";
			this->Column22->ReadOnly = true;
			// 
			// Column23
			// 
			this->Column23->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column23->HeaderText = L"SUNDAY";
			this->Column23->MinimumWidth = 6;
			this->Column23->Name = L"Column23";
			this->Column23->ReadOnly = true;
			// 
			// panelLecturer
			// 
			this->panelLecturer->Controls->Add(this->button5);
			this->panelLecturer->Controls->Add(this->label11);
			this->panelLecturer->Controls->Add(this->dgvLecturer);
			this->panelLecturer->Location = System::Drawing::Point(925, 399);
			this->panelLecturer->Margin = System::Windows::Forms::Padding(4);
			this->panelLecturer->Name = L"panelLecturer";
			this->panelLecturer->Size = System::Drawing::Size(188, 116);
			this->panelLecturer->TabIndex = 4;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button5->Dock = System::Windows::Forms::DockStyle::Top;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Location = System::Drawing::Point(0, 73);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(188, 2);
			this->button5->TabIndex = 7;
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label11->Dock = System::Windows::Forms::DockStyle::Top;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::Control;
			this->label11->Location = System::Drawing::Point(0, 0);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(188, 73);
			this->label11->TabIndex = 6;
			this->label11->Text = L"       Lecturer list";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dgvLecturer
			// 
			this->dgvLecturer->AllowUserToAddRows = false;
			this->dgvLecturer->AllowUserToDeleteRows = false;
			this->dgvLecturer->AllowUserToResizeColumns = false;
			this->dgvLecturer->AllowUserToResizeRows = false;
			this->dgvLecturer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvLecturer->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->dgvLecturer->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvLecturer->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvLecturer->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle12;
			this->dgvLecturer->ColumnHeadersHeight = 30;
			this->dgvLecturer->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvLecturer->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column12,
					this->Column13, this->Column14, this->Column16, this->Column15
			});
			this->dgvLecturer->ContextMenuStrip = this->dgvLecturerMenu;
			this->dgvLecturer->EnableHeadersVisualStyles = false;
			this->dgvLecturer->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvLecturer->Location = System::Drawing::Point(0, -486);
			this->dgvLecturer->Margin = System::Windows::Forms::Padding(4);
			this->dgvLecturer->MultiSelect = false;
			this->dgvLecturer->Name = L"dgvLecturer";
			this->dgvLecturer->RowHeadersVisible = false;
			this->dgvLecturer->RowHeadersWidth = 51;
			this->dgvLecturer->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dgvLecturer->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->dgvLecturer->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvLecturer->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::Control;
			this->dgvLecturer->RowTemplate->Height = 25;
			this->dgvLecturer->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvLecturer->Size = System::Drawing::Size(188, 602);
			this->dgvLecturer->TabIndex = 1;
			this->dgvLecturer->CellMouseDown += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &mainForm::dgvLecturer_CellMouseDown);
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"No";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->Width = 50;
			// 
			// Column13
			// 
			this->Column13->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column13->HeaderText = L"FULL NAME";
			this->Column13->MinimumWidth = 6;
			this->Column13->Name = L"Column13";
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"DEGREE";
			this->Column14->MinimumWidth = 6;
			this->Column14->Name = L"Column14";
			this->Column14->Width = 150;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"USERNAME";
			this->Column16->MinimumWidth = 6;
			this->Column16->Name = L"Column16";
			this->Column16->Width = 150;
			// 
			// Column15
			// 
			this->Column15->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column15->HeaderText = L"DETAIL";
			this->Column15->MinimumWidth = 6;
			this->Column15->Name = L"Column15";
			// 
			// dgvLecturerMenu
			// 
			this->dgvLecturerMenu->ImageScalingSize = System::Drawing::Size(20, 20);
			this->dgvLecturerMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem2
			});
			this->dgvLecturerMenu->Name = L"ayMenu";
			this->dgvLecturerMenu->Size = System::Drawing::Size(123, 52);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(122, 24);
			this->toolStripMenuItem1->Text = L"Create";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &mainForm::toolStripMenuItem1_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(122, 24);
			this->toolStripMenuItem2->Text = L"Delete";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &mainForm::toolStripMenuItem2_Click);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1432, 725);
			this->Controls->Add(this->panelMain);
			this->Controls->Add(this->panelMenu);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;

			this->Margin = System::Windows::Forms::Padding(4);


			this->Name = L"mainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->panelLogin->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panelMenu->ResumeLayout(false);
			this->panelBtProfile->ResumeLayout(false);
			this->panelMain->ResumeLayout(false);
			this->panelProfile->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panelCourse->ResumeLayout(false);
			this->panelSemester->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourseList))->EndInit();
			this->dgvCourseListMenu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAY))->EndInit();
			this->ayMenu->ResumeLayout(false);
			this->panelClassList->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStudentList))->EndInit();
			this->dgvStudentListMenu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClassList))->EndInit();
			this->panelCheckIn->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCheckIn))->EndInit();
			this->panelScore->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScore))->EndInit();
			this->panelSchedule->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSchedule))->EndInit();
			this->panelLecturer->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLecturer))->EndInit();
			this->dgvLecturerMenu->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		//
		List<classInfo^> classList;
		List<userInfo^> userInfoList;
		userInfo^ uInfo;
		int panelClassList_load = 0, panelCourse_load = 0, user = 1;
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

			//create student account
		}

		void openPanel(Panel^ tmp) //hide all panels and open 1 panel
		{
			if (tmp->Visible) return;
			panelLecturer->Visible = false;
			panelSchedule->Visible = false;
			panelScore->Visible = false;
			panelCheckIn->Visible = false;
			panelClassList->Visible = false;
			panelProfile->Visible = false;
			panelCourse->Visible = false;
			tmp->Dock = DockStyle(5);
			tmp->Visible = true;
			tmp->Focus();
			tmp->Select();
		}





#pragma region Login & Profile
		bool loginCheck(String^ id, String^ pass)
		{
			std::ifstream f;
			std::string s;
			userInfo^ u = gcnew userInfo;
			f.open("user_login.txt");
			while (f.good())
			{
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
				getline(f, s, '\n');
				u->cls = gcnew String(s.c_str());
				if (u->userid == id && u->userpass == pass)
				{
					uInfo = u;
					if (u->cls == "Staff") user = 1;
					else
						if (u->cls == "Lecturer") user = 2;
						else user = 3;
					f.close();
					return true;
				}
			}
			f.close();
			return false;
		}
	private: System::Void btLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		if (loginCheck(tbUserId->Text, tbUserPass->Text))
		{
			panelLogin->Visible = false;
			this->Left = (this->Left * 2 + 380 - 1100) / 2;
			this->Top = (this->Top * 2 + 500 - 650) / 2;
			this->Width = 1100;
			this->Height = 650;
			panelMenu->Visible = false;
			tbUserPass->Text = "";
			lbLogin->Text = "";
			label7->Visible = false; // Student ID label
			label8->Visible = false; // Class ID label
			tbProfileClass->Visible = false;
			tbProfileSid->Visible = false;
			btClass->Visible = true;
			btLecturer->Visible = true;
			btCourse->Visible = true;
			btCheckIn->Visible = false;
			btScore->Visible = false;
			btSchedule->Visible = false;
			if (user > 1)
			{
				btClass->Visible = false;
				btLecturer->Visible = false;
				if (user > 2)
				{
					btCourse->Visible = false;
					btCheckIn->Visible = true;
					btScore->Visible = true;
					btSchedule->Visible = true;
					label7->Visible = true;
					label8->Visible = true;
					tbProfileClass->Visible = true;
					tbProfileSid->Visible = true;
				}
			}
		}
		else
		{
			lbLogin->Text = "Wrong ID or Password. Please try again!";
		}
	}
	public: System::Void btProfile_Click(System::Object^ sender, System::EventArgs^ e) {
		openPanel(panelProfile);
		tbProfileFullname->Text = uInfo->fullName;
		tbProfileDob->Text = uInfo->dob;
		tbProfileDob->Text = tbProfileDob->Text->Insert(2, "/");
		tbProfileDob->Text = tbProfileDob->Text->Insert(5, "/");
		tbProfileEmail->Text = uInfo->email;
		tbProfileSid->Text = uInfo->userid;
		tbProfileClass->Text = uInfo->cls;
		tbProfileUserid->Text = uInfo->userid;
		tbProfileUserPass->Text = uInfo->userpass;
	}
	private: System::Void btLogout_Click(System::Object^ sender, System::EventArgs^ e) {
		showLoginPanel();
		openPanel(panelLogin);
		tbUserPass->Focus();
	}
	private: System::Void tbChangePass_Click(System::Object^ sender, System::EventArgs^ e) {
		changePassForm^ f = gcnew changePassForm(uInfo->userid, uInfo->userpass);
		f->ShowDialog();
		uInfo->userpass = f->ol;
		btProfile->PerformClick();
	}
#pragma endregion
#pragma region Class & Student
		   void dgvClassListLoad()
		   {
			   std::ifstream f;
			   std::string s;
			   int x = 0;
			   dgvClassList->Rows->Clear();
			   f.open("class_list.txt");
			   getline(f, s, '\n');
			   while (f.good())
			   {
				   dgvClassList->Rows->Add();
				   dgvClassList->Rows[x]->Cells[0]->Value = x + 1;
				   getline(f, s, '\n');
				   dgvClassList->Rows[x]->Cells[1]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   dgvClassList->Rows[x]->Cells[2]->Value = gcnew String(s.c_str());
				   x++;
			   }
			   f.close();
		   }
		   void dgvStudentListLoad(std::ifstream& f)
		   {
			   dgvStudentList->Rows->Clear();
			   int x = 0;
			   std::string s;
			   getline(f, s, '\n');
			   while (f.good())
			   {
				   getline(f, s, '\n');
				   dgvStudentList->Rows->Add();
				   dgvStudentList->Rows[x]->Cells[0]->Value = x + 1;
				   getline(f, s, '\n');
				   dgvStudentList->Rows[x]->Cells[1]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   dgvStudentList->Rows[x]->Cells[2]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   dgvStudentList->Rows[x]->Cells[3]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   dgvStudentList->Rows[x]->Cells[4]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   s.insert(2, "/").insert(5, "/");
				   dgvStudentList->Rows[x]->Cells[5]->Value = gcnew String(s.c_str());
				   x++;
			   }
			   f.close();
		   }
	private: System::Void btClass_Click(System::Object^ sender, System::EventArgs^ e) {
		openPanel(panelClassList);
		dgvClassList->Visible = true;
		dgvStudentList->Visible = false;
		dgvClassListLoad();
		dgvClassList->ClearSelection();
		panelClassHeader->Text = "     Class list";
	}
	private: System::Void dgvClassList_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try
		{
			std::ifstream f;
			String^ s = dgvClassList->Rows[e->RowIndex]->Cells[1]->Value->ToString();
			panelClassHeader->Text = "     Class " + s;
			dgvClassList->Rows[e->RowIndex]->Selected = true;
			f.open(msclr::interop::marshal_as<std::string>(s) + ".l");
			try { dgvStudentListLoad(f); }
			catch (Exception^ ex) {};
			dgvClassList->Visible = false;
			dgvStudentList->Visible = true;
			panelClassList->Select();
			dgvStudentList->ClearSelection();
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
	private: System::Void addNewStudentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		dgvStudentList->Rows->Add();
		dgvStudentList->Rows[dgvStudentList->RowCount - 1]->Cells[0]->Value = "";
		dgvStudentList->Rows[dgvStudentList->RowCount - 1]->Cells[1]->Value = "";
		dgvStudentList->Rows[dgvStudentList->RowCount - 1]->Cells[2]->Value = "";
		dgvStudentList->Rows[dgvStudentList->RowCount - 1]->Cells[3]->Value = "";
		dgvStudentList->Rows[dgvStudentList->RowCount - 1]->Cells[4]->Value = "";
		dgvStudentList->Rows[dgvStudentList->RowCount - 1]->Cells[5]->Value = "      ";
		dgvStudentList->ClearSelection();
		dgvStudentList->Rows[dgvStudentList->RowCount - 1]->Cells[0]->Value = dgvStudentList->RowCount;
	}
	private: System::Void removeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			System::Windows::Forms::DialogResult d = MessageBox::Show(this, "Do you want to remove student "
				+ dgvStudentList->SelectedCells[1]->Value + "?", "WARNING!", MessageBoxButtons::YesNo);
			if (d == System::Windows::Forms::DialogResult::Yes)
			{
				std::ofstream f;
				f.open(msclr::interop::marshal_as<std::string>(panelClassHeader->Text->Substring(11)) + ".l");
				dgvStudentList->Rows->RemoveAt(dgvStudentList->SelectedCells[0]->RowIndex);
				for (int i = 0; i < dgvStudentList->RowCount; i++)
				{
					//if (i) f << endl;
					dgvStudentList->Rows[i]->Cells[0]->Value = i + 1;
					f << endl <<
						msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[0]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[1]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[2]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[3]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[4]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[5]->Value->ToString()->Remove(5, 1)->Remove(2, 1));
				}
				f.close();
				dgvStudentList->Focus();
				// LOAD LAI FILE user_login.txt
			}
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
	private: System::Void dgvStudentList_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try
		{
			std::ofstream f;
			f.open(msclr::interop::marshal_as<std::string>(panelClassHeader->Text->Substring(11)) + ".l");
			for (int i = 0; i < dgvStudentList->RowCount; i++)
			{
				//if (i) f << endl;
				f << endl <<
					msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[0]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[1]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[2]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[3]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[4]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[5]->Value->ToString()->Remove(5, 1)->Remove(2, 1));
			}
			f.close();
			//	LOAD LAI FILE user_login.txt
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
	private: System::Void dgvStudentList_CellMouseDown(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		try
		{
			dgvStudentList->ClearSelection();
			dgvStudentList->Rows[e->RowIndex]->Selected = true;
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
	private: System::Void changeClassToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			changeClassForm^ f = gcnew changeClassForm(dgvStudentList->SelectedCells[1]->Value->ToString(), dgvClassList->SelectedCells[1]->Value->ToString(), dgvClassList, dgvStudentList->Rows[dgvStudentList->SelectedCells[0]->RowIndex]);
			f->ShowDialog();
			if (f->change)
			{
				std::ofstream fi;
				fi.open(msclr::interop::marshal_as<std::string>(panelClassHeader->Text->Substring(11)) + ".l");
				dgvStudentList->Rows->RemoveAt(dgvStudentList->SelectedCells[0]->RowIndex);
				for (int i = 0; i < dgvStudentList->RowCount; i++)
				{
					//if (i) fi << endl;
					dgvStudentList->Rows[i]->Cells[0]->Value = i + 1;
					fi << endl <<
						msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[0]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[1]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[2]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[3]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[4]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[5]->Value->ToString()->Remove(5, 1)->Remove(2, 1));
				}
				fi.close();
				dgvStudentList->ClearSelection();
				//update lai file user_login
			}
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
#pragma endregion

		   void dgvAYload()
		   {
			   ifstream f("semester.txt");
			   string s;
			   getline(f, s, '\n');
			   int x = 0;
			   dgvAY->Rows->Clear();
			   while (f.good())
			   {
				   getline(f, s, '\n');
				   dgvAY->Rows->Add();
				   dgvAY->Rows[x]->Cells[0]->Value = gcnew String(s.c_str());
				   x++;
			   }
			   f.close();
			   dgvAY->ClearSelection();
		   }
		   void dgvCourseLoad(string st)
		   {
			   ifstream f(msclr::interop::marshal_as<std::string>(dgvAY->SelectedCells[0]->Value->ToString()) + "-" + st + ".txt");
			   string s;
			   getline(f, s, '\n');
			   int x = 0;
			   dgvCourseList->Rows->Clear();
			   while (f.good())
			   {
				   dgvCourseList->Rows->Add();
				   getline(f, s, '\n');
				   dgvCourseList->Rows[x]->Cells[0]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   dgvCourseList->Rows[x]->Cells[1]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   dgvCourseList->Rows[x]->Cells[2]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   dgvCourseList->Rows[x]->Cells[3]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   dgvCourseList->Rows[x]->Cells[4]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   s.insert(2, "/").insert(5, "/");
				   dgvCourseList->Rows[x]->Cells[5]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   s.insert(2, "/").insert(5, "/");
				   dgvCourseList->Rows[x]->Cells[6]->Value = gcnew String(s.c_str());				   
				   getline(f, s, '\n');
				   dgvCourseList->Rows[x]->Cells[7]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   s.insert(2, ":");
				   dgvCourseList->Rows[x]->Cells[8]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   s.insert(2, ":");
				   dgvCourseList->Rows[x]->Cells[9]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   dgvCourseList->Rows[x]->Cells[10]->Value = gcnew String(s.c_str());
				   x++;
			   }
			   f.close();
		   }
	private: System::Void btCourse_Click(System::Object^ sender, System::EventArgs^ e) {
		openPanel(panelCourse);
		dgvAY->ClearSelection();
		panelSemester->Visible = false;
		if (user < 2)
		{
			dgvAY->Visible = true;
			dgvCourseList->Visible = false;
			panelCourseHeader->Text = "Academic years";
			dgvAYload();
			dgvAY->ClearSelection();
			panelCourse->Focus();
		}
		else
		{
			dgvCourseList->Visible = true;
			dgvAY->Visible = false;
			panelCourseHeader->Text = "2019-2020 Semester II";
			//load courselist
		}
	}
	private: System::Void dgvAY_CellMouseDown(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		try
		{
			dgvAY->ClearSelection();
			dgvAY->Rows[e->RowIndex]->Selected = true;
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
	private: System::Void createToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		dgvAY->Rows->Add();
		dgvAY->Rows[dgvAY->RowCount - 1]->Cells[0]->Value = "";
		dgvAY->ClearSelection();
	}
	private: System::Void deleteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			System::Windows::Forms::DialogResult d = MessageBox::Show(this, "Do you want to remove academic year "
				+ dgvAY->SelectedCells[0]->Value + "?", "WARNING!", MessageBoxButtons::YesNo);
			if (d == System::Windows::Forms::DialogResult::Yes)
			{
				dgvAY->Rows->RemoveAt(dgvAY->SelectedCells[0]->RowIndex);
				std::ofstream f;
				f.open("semester.txt");
				for (int i = 0; i < dgvAY->RowCount; i++)
				{
					f << endl << msclr::interop::marshal_as<std::string>(dgvAY->Rows[i]->Cells[0]->Value->ToString());
				}
				f.close();
				dgvAY->Focus();
			}
			dgvAY->ClearSelection();
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
	private: System::Void dgvAY_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try
		{
			std::ofstream f;
			f.open("semester.txt");
			for (int i = 0; i < dgvAY->RowCount; i++)
			{
				f << endl << msclr::interop::marshal_as<std::string>(dgvAY->Rows[i]->Cells[0]->Value->ToString());
			}
			f.close();
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
	private: System::Void dgvAY_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try
		{
			dgvAY->EndEdit();
			panelCourseHeader->Text = dgvAY->SelectedCells[0]->Value->ToString();
			dgvAY->Visible = false;
			panelSemester->Visible = true;
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
	private: System::Void btSemester1_Click(System::Object^ sender, System::EventArgs^ e) {
		panelSemester->Visible = false;
		dgvCourseList->Visible = true;
		panelCourseHeader->Text += " Semester I";
		dgvCourseLoad("hk1");
	}
	private: System::Void btSemester2_Click(System::Object^ sender, System::EventArgs^ e) {
		panelSemester->Visible = false;
		dgvCourseList->Visible = true;
		panelCourseHeader->Text += " Semester II";
		dgvCourseLoad("hk2");
	}
	private: System::Void btSemester3_Click(System::Object^ sender, System::EventArgs^ e) {
		panelSemester->Visible = false;
		dgvCourseList->Visible = true;
		panelCourseHeader->Text += " Semester III";
		dgvCourseLoad("hk3");
	}
	private: System::Void dgvCourseList_CellMouseDown(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		try
		{
			dgvCourseList->ClearSelection();
			dgvCourseList->Rows[e->RowIndex]->Selected = true;
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
	private: System::Void addToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		dgvCourseList->Rows->Add();
		dgvCourseList->Rows[dgvCourseList->RowCount - 1]->Cells[0]->Value = dgvCourseList->RowCount;
	}
	private: System::Void removeToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			System::Windows::Forms::DialogResult d = MessageBox::Show(this, "Do you want to remove course "
				+ dgvCourseList->SelectedCells[1]->Value + "?", "WARNING!", MessageBoxButtons::YesNo);
			if (d == System::Windows::Forms::DialogResult::Yes)
			{
				dgvCourseList->Rows->RemoveAt(dgvCourseList->SelectedCells[0]->RowIndex);
				for (int i = 0; i < dgvCourseList->RowCount; i++)
					dgvCourseList->Rows[i]->Cells[0]->Value = i + 1;
				dgvCourseList->Focus();
			}
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
	private: System::Void viewStudentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		studentForm^ f = gcnew studentForm;
		f->ShowDialog();
	}
	private: System::Void viewScoreboardToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		scoreboardForm^ f = gcnew scoreboardForm;
		f->ShowDialog();
	}
	private: System::Void viewAttendanceListToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		attendanceForm^ f = gcnew attendanceForm;
		f->ShowDialog();
	}
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		dgvLecturer->Rows->Add();
		dgvLecturer->Rows[dgvLecturer->RowCount - 1]->Cells[0]->Value = dgvLecturer->RowCount;
	}
	private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			System::Windows::Forms::DialogResult d = MessageBox::Show(this, "Do you want to remove lecturer "
				+ dgvLecturer->SelectedCells[1]->Value + "?", "WARNING!", MessageBoxButtons::YesNo);
			if (d == System::Windows::Forms::DialogResult::Yes)
			{
				dgvLecturer->Rows->RemoveAt(dgvLecturer->SelectedCells[0]->RowIndex);
				for (int i = 0; i < dgvLecturer->RowCount; i++)
					dgvLecturer->Rows[i]->Cells[0]->Value = i + 1;
				dgvLecturer->Focus();
			}
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
	private: System::Void btLecturer_Click(System::Object^ sender, System::EventArgs^ e) {
		openPanel(panelLecturer);
		//load dgvLecturer
	}
	private: System::Void dgvLecturer_CellMouseDown(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		dgvLecturer->Rows[e->RowIndex]->Selected = true;
	}
	private: System::Void btCheckIn_Click(System::Object^ sender, System::EventArgs^ e) {
		openPanel(panelCheckIn);
		//load dgvCheckIn
	}
	private: System::Void btSchedule_Click(System::Object^ sender, System::EventArgs^ e) {
		openPanel(panelSchedule);
		//load dgvSchedule
	}
	private: System::Void btScore_Click(System::Object^ sender, System::EventArgs^ e) {
		openPanel(panelScore);
		//load dgvScore
	}
	private: System::Void panelMain_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->X < 50) panelMenu->Visible = true;
		if (e->X > 50) panelMenu->Visible = false;
	}



};
}
