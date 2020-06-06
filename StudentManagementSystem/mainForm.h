#pragma once

#include <algorithm>
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
//#include <time.h>
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
	struct user_info
	{
		string id, pass;
	};
	struct student
	{
		string id, lname, fname, dob, cls, gender;
	};
	struct att
	{
		string date;
		int row;
		bool c;
	};
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







	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label13;





	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ btImport;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ timecol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column24;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column25;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column26;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column27;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column28;
	private: System::Windows::Forms::DataGridView^ dgvCheckIn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;







































































































































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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
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
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->panelCheckIn = (gcnew System::Windows::Forms::Panel());
			this->dgvCheckIn = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
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
			this->timecol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->btImport = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panelLogin->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panelMenu->SuspendLayout();
			this->panelBtProfile->SuspendLayout();
			this->panelLogo->SuspendLayout();
			this->panelMain->SuspendLayout();
			this->panelCheckIn->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCheckIn))->BeginInit();
			this->panelScore->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScore))->BeginInit();
			this->panelSchedule->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSchedule))->BeginInit();
			this->panelLecturer->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLecturer))->BeginInit();
			this->dgvLecturerMenu->SuspendLayout();
			this->panelClassList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStudentList))->BeginInit();
			this->dgvStudentListMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClassList))->BeginInit();
			this->panelCourse->SuspendLayout();
			this->panelSemester->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourseList))->BeginInit();
			this->dgvCourseListMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAY))->BeginInit();
			this->ayMenu->SuspendLayout();
			this->panelProfile->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelLogin
			// 
			this->panelLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelLogin->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panelLogin->Controls->Add(this->panel2);
			this->panelLogin->Location = System::Drawing::Point(6, 176);
			this->panelLogin->Name = L"panelLogin";
			this->panelLogin->Size = System::Drawing::Size(94, 71);
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
			this->panel2->Location = System::Drawing::Point(0, -207);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(94, 278);
			this->panel2->TabIndex = 5;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel4->Location = System::Drawing::Point(38, 176);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(304, 1);
			this->panel4->TabIndex = 6;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel3->Location = System::Drawing::Point(38, 101);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(304, 1);
			this->panel3->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label2->Location = System::Drawing::Point(35, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 15);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label1->Location = System::Drawing::Point(35, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username";
			// 
			// lbLogin
			// 
			this->lbLogin->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbLogin->ForeColor = System::Drawing::Color::Firebrick;
			this->lbLogin->Location = System::Drawing::Point(35, 194);
			this->lbLogin->Name = L"lbLogin";
			this->lbLogin->Size = System::Drawing::Size(307, 23);
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
			this->btLogin->Location = System::Drawing::Point(128, 220);
			this->btLogin->Name = L"btLogin";
			this->btLogin->Size = System::Drawing::Size(128, 39);
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
			this->tbUserId->Location = System::Drawing::Point(38, 81);
			this->tbUserId->Name = L"tbUserId";
			this->tbUserId->Size = System::Drawing::Size(304, 18);
			this->tbUserId->TabIndex = 1;
			// 
			// tbUserPass
			// 
			this->tbUserPass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->tbUserPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbUserPass->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F));
			this->tbUserPass->ForeColor = System::Drawing::SystemColors::Window;
			this->tbUserPass->Location = System::Drawing::Point(38, 156);
			this->tbUserPass->Name = L"tbUserPass";
			this->tbUserPass->Size = System::Drawing::Size(304, 18);
			this->tbUserPass->TabIndex = 2;
			this->tbUserPass->UseSystemPasswordChar = true;
			// 
			// panelMenu
			// 
			this->panelMenu->AutoScroll = true;
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
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(176, 589);
			this->panelMenu->TabIndex = 1;
			// 
			// btScore
			// 
			this->btScore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->btScore->Dock = System::Windows::Forms::DockStyle::Top;
			this->btScore->FlatAppearance->BorderSize = 0;
			this->btScore->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btScore->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btScore->ForeColor = System::Drawing::SystemColors::Control;
			this->btScore->Location = System::Drawing::Point(0, 416);
			this->btScore->Name = L"btScore";
			this->btScore->Size = System::Drawing::Size(176, 43);
			this->btScore->TabIndex = 8;
			this->btScore->Text = L"Score";
			this->btScore->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btScore->UseVisualStyleBackColor = false;
			this->btScore->Visible = false;
			this->btScore->Click += gcnew System::EventHandler(this, &mainForm::btScore_Click);
			// 
			// btSchedule
			// 
			this->btSchedule->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->btSchedule->Dock = System::Windows::Forms::DockStyle::Top;
			this->btSchedule->FlatAppearance->BorderSize = 0;
			this->btSchedule->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btSchedule->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btSchedule->ForeColor = System::Drawing::SystemColors::Control;
			this->btSchedule->Location = System::Drawing::Point(0, 373);
			this->btSchedule->Name = L"btSchedule";
			this->btSchedule->Size = System::Drawing::Size(176, 43);
			this->btSchedule->TabIndex = 7;
			this->btSchedule->Text = L"Schedule";
			this->btSchedule->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btSchedule->UseVisualStyleBackColor = false;
			this->btSchedule->Visible = false;
			this->btSchedule->Click += gcnew System::EventHandler(this, &mainForm::btSchedule_Click);
			// 
			// btCheckIn
			// 
			this->btCheckIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->btCheckIn->Dock = System::Windows::Forms::DockStyle::Top;
			this->btCheckIn->FlatAppearance->BorderSize = 0;
			this->btCheckIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btCheckIn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btCheckIn->ForeColor = System::Drawing::SystemColors::Control;
			this->btCheckIn->Location = System::Drawing::Point(0, 330);
			this->btCheckIn->Name = L"btCheckIn";
			this->btCheckIn->Size = System::Drawing::Size(176, 43);
			this->btCheckIn->TabIndex = 6;
			this->btCheckIn->Text = L"Check-in Result";
			this->btCheckIn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btCheckIn->UseVisualStyleBackColor = false;
			this->btCheckIn->Visible = false;
			this->btCheckIn->Click += gcnew System::EventHandler(this, &mainForm::btCheckIn_Click);
			// 
			// btLecturer
			// 
			this->btLecturer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->btLecturer->Dock = System::Windows::Forms::DockStyle::Top;
			this->btLecturer->FlatAppearance->BorderSize = 0;
			this->btLecturer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btLecturer->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btLecturer->ForeColor = System::Drawing::SystemColors::Control;
			this->btLecturer->Location = System::Drawing::Point(0, 287);
			this->btLecturer->Name = L"btLecturer";
			this->btLecturer->Size = System::Drawing::Size(176, 43);
			this->btLecturer->TabIndex = 5;
			this->btLecturer->Text = L"Lecturer";
			this->btLecturer->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btLecturer->UseVisualStyleBackColor = false;
			this->btLecturer->Click += gcnew System::EventHandler(this, &mainForm::btLecturer_Click);
			// 
			// btCourse
			// 
			this->btCourse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->btCourse->Dock = System::Windows::Forms::DockStyle::Top;
			this->btCourse->FlatAppearance->BorderSize = 0;
			this->btCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btCourse->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btCourse->ForeColor = System::Drawing::SystemColors::Control;
			this->btCourse->Location = System::Drawing::Point(0, 244);
			this->btCourse->Name = L"btCourse";
			this->btCourse->Size = System::Drawing::Size(176, 43);
			this->btCourse->TabIndex = 4;
			this->btCourse->Text = L"Course";
			this->btCourse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btCourse->UseVisualStyleBackColor = false;
			this->btCourse->Click += gcnew System::EventHandler(this, &mainForm::btCourse_Click);
			// 
			// btClass
			// 
			this->btClass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->btClass->Dock = System::Windows::Forms::DockStyle::Top;
			this->btClass->FlatAppearance->BorderSize = 0;
			this->btClass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btClass->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btClass->ForeColor = System::Drawing::SystemColors::Control;
			this->btClass->Location = System::Drawing::Point(0, 201);
			this->btClass->Name = L"btClass";
			this->btClass->Size = System::Drawing::Size(176, 43);
			this->btClass->TabIndex = 1;
			this->btClass->Text = L"Class";
			this->btClass->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->button1->Location = System::Drawing::Point(0, 199);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(176, 2);
			this->button1->TabIndex = 2;
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			// 
			// panelBtProfile
			// 
			this->panelBtProfile->Controls->Add(this->btProfile);
			this->panelBtProfile->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelBtProfile->Location = System::Drawing::Point(0, 100);
			this->panelBtProfile->Name = L"panelBtProfile";
			this->panelBtProfile->Size = System::Drawing::Size(176, 99);
			this->panelBtProfile->TabIndex = 0;
			// 
			// btProfile
			// 
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
			this->btProfile->Name = L"btProfile";
			this->btProfile->Size = System::Drawing::Size(176, 99);
			this->btProfile->TabIndex = 0;
			this->btProfile->UseVisualStyleBackColor = false;
			this->btProfile->Click += gcnew System::EventHandler(this, &mainForm::btProfile_Click);
			// 
			// panelLogo
			// 
			this->panelLogo->Controls->Add(this->button10);
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(176, 100);
			this->panelLogo->TabIndex = 2;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::Control;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(0, 0);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(176, 100);
			this->button10->TabIndex = 1;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &mainForm::button10_Click);
			// 
			// panelMain
			// 
			this->panelMain->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->panelMain->Controls->Add(this->panelCheckIn);
			this->panelMain->Controls->Add(this->panelScore);
			this->panelMain->Controls->Add(this->panelSchedule);
			this->panelMain->Controls->Add(this->panelLecturer);
			this->panelMain->Controls->Add(this->panelClassList);
			this->panelMain->Controls->Add(this->panelCourse);
			this->panelMain->Controls->Add(this->panelProfile);
			this->panelMain->Controls->Add(this->panelLogin);
			this->panelMain->Controls->Add(this->btImport);
			this->panelMain->Controls->Add(this->button9);
			this->panelMain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelMain->Location = System::Drawing::Point(176, 0);
			this->panelMain->Name = L"panelMain";
			this->panelMain->Size = System::Drawing::Size(898, 589);
			this->panelMain->TabIndex = 2;
			this->panelMain->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::panelMain_MouseMove);
			// 
			// panelCheckIn
			// 
			this->panelCheckIn->Controls->Add(this->dgvCheckIn);
			this->panelCheckIn->Controls->Add(this->button8);
			this->panelCheckIn->Controls->Add(this->label14);
			this->panelCheckIn->Location = System::Drawing::Point(6, 90);
			this->panelCheckIn->Name = L"panelCheckIn";
			this->panelCheckIn->Size = System::Drawing::Size(149, 78);
			this->panelCheckIn->TabIndex = 5;
			// 
			// dgvCheckIn
			// 
			this->dgvCheckIn->AllowUserToAddRows = false;
			this->dgvCheckIn->AllowUserToDeleteRows = false;
			this->dgvCheckIn->AllowUserToResizeColumns = false;
			this->dgvCheckIn->AllowUserToResizeRows = false;
			this->dgvCheckIn->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->dgvCheckIn->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvCheckIn->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvCheckIn->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvCheckIn->ColumnHeadersHeight = 30;
			this->dgvCheckIn->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvCheckIn->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn3 });
			this->dgvCheckIn->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dgvCheckIn->EnableHeadersVisualStyles = false;
			this->dgvCheckIn->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvCheckIn->Location = System::Drawing::Point(0, -411);
			this->dgvCheckIn->MultiSelect = false;
			this->dgvCheckIn->Name = L"dgvCheckIn";
			this->dgvCheckIn->ReadOnly = true;
			this->dgvCheckIn->RowHeadersVisible = false;
			this->dgvCheckIn->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->dgvCheckIn->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->dgvCheckIn->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvCheckIn->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::Control;
			this->dgvCheckIn->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			this->dgvCheckIn->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->dgvCheckIn->RowTemplate->Height = 25;
			this->dgvCheckIn->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvCheckIn->Size = System::Drawing::Size(149, 489);
			this->dgvCheckIn->TabIndex = 8;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn3->HeaderText = L"COURSE";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn3->Width = 300;
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
			this->button8->Location = System::Drawing::Point(0, 59);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(149, 2);
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
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(149, 59);
			this->label14->TabIndex = 6;
			this->label14->Text = L"       Check-in Result";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panelScore
			// 
			this->panelScore->Controls->Add(this->button7);
			this->panelScore->Controls->Add(this->label13);
			this->panelScore->Controls->Add(this->dgvScore);
			this->panelScore->Location = System::Drawing::Point(171, 4);
			this->panelScore->Name = L"panelScore";
			this->panelScore->Size = System::Drawing::Size(188, 76);
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
			this->button7->Location = System::Drawing::Point(0, 59);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(188, 2);
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
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(188, 59);
			this->label13->TabIndex = 6;
			this->label13->Text = L"       Scoreboard";
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
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvScore->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dgvScore->ColumnHeadersHeight = 30;
			this->dgvScore->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvScore->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column24, this->Column25,
					this->Column26, this->Column27, this->Column28
			});
			this->dgvScore->EnableHeadersVisualStyles = false;
			this->dgvScore->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvScore->Location = System::Drawing::Point(0, -413);
			this->dgvScore->Name = L"dgvScore";
			this->dgvScore->ReadOnly = true;
			this->dgvScore->RowHeadersVisible = false;
			this->dgvScore->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dgvScore->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->dgvScore->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvScore->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::Control;
			this->dgvScore->RowTemplate->Height = 25;
			this->dgvScore->Size = System::Drawing::Size(188, 489);
			this->dgvScore->TabIndex = 1;
			// 
			// Column24
			// 
			this->Column24->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column24->HeaderText = L"Course";
			this->Column24->Name = L"Column24";
			this->Column24->ReadOnly = true;
			// 
			// Column25
			// 
			this->Column25->HeaderText = L"Midterm";
			this->Column25->Name = L"Column25";
			this->Column25->ReadOnly = true;
			// 
			// Column26
			// 
			this->Column26->HeaderText = L"Final";
			this->Column26->Name = L"Column26";
			this->Column26->ReadOnly = true;
			// 
			// Column27
			// 
			this->Column27->HeaderText = L"Bonus";
			this->Column27->Name = L"Column27";
			this->Column27->ReadOnly = true;
			// 
			// Column28
			// 
			this->Column28->HeaderText = L"Total";
			this->Column28->Name = L"Column28";
			this->Column28->ReadOnly = true;
			// 
			// panelSchedule
			// 
			this->panelSchedule->Controls->Add(this->button6);
			this->panelSchedule->Controls->Add(this->label12);
			this->panelSchedule->Controls->Add(this->dgvSchedule);
			this->panelSchedule->Location = System::Drawing::Point(365, 3);
			this->panelSchedule->Name = L"panelSchedule";
			this->panelSchedule->Size = System::Drawing::Size(162, 75);
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
			this->button6->Location = System::Drawing::Point(0, 59);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(162, 2);
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
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(162, 59);
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
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvSchedule->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dgvSchedule->ColumnHeadersHeight = 30;
			this->dgvSchedule->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvSchedule->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->timecol,
					this->Column17, this->Column18, this->Column19, this->Column20, this->Column21, this->Column22
			});
			this->dgvSchedule->EnableHeadersVisualStyles = false;
			this->dgvSchedule->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvSchedule->Location = System::Drawing::Point(0, -414);
			this->dgvSchedule->MultiSelect = false;
			this->dgvSchedule->Name = L"dgvSchedule";
			this->dgvSchedule->ReadOnly = true;
			this->dgvSchedule->RowHeadersVisible = false;
			this->dgvSchedule->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dgvSchedule->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->dgvSchedule->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvSchedule->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::Control;
			this->dgvSchedule->RowTemplate->Height = 70;
			this->dgvSchedule->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvSchedule->Size = System::Drawing::Size(162, 489);
			this->dgvSchedule->TabIndex = 1;
			// 
			// timecol
			// 
			this->timecol->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timecol->DefaultCellStyle = dataGridViewCellStyle4;
			this->timecol->HeaderText = L"TIME";
			this->timecol->Name = L"timecol";
			this->timecol->ReadOnly = true;
			this->timecol->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->timecol->Width = 120;
			// 
			// Column17
			// 
			this->Column17->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column17->HeaderText = L"MONDAY";
			this->Column17->Name = L"Column17";
			this->Column17->ReadOnly = true;
			this->Column17->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column17->Width = 131;
			// 
			// Column18
			// 
			this->Column18->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column18->HeaderText = L"TUESDAY";
			this->Column18->Name = L"Column18";
			this->Column18->ReadOnly = true;
			this->Column18->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column18->Width = 131;
			// 
			// Column19
			// 
			this->Column19->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column19->HeaderText = L"WEDNESDAY";
			this->Column19->Name = L"Column19";
			this->Column19->ReadOnly = true;
			this->Column19->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column19->Width = 131;
			// 
			// Column20
			// 
			this->Column20->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column20->HeaderText = L"THURSDAY";
			this->Column20->Name = L"Column20";
			this->Column20->ReadOnly = true;
			this->Column20->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column20->Width = 131;
			// 
			// Column21
			// 
			this->Column21->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column21->HeaderText = L"FRIDAY";
			this->Column21->Name = L"Column21";
			this->Column21->ReadOnly = true;
			this->Column21->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column21->Width = 131;
			// 
			// Column22
			// 
			this->Column22->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column22->HeaderText = L"SATURDAY";
			this->Column22->Name = L"Column22";
			this->Column22->ReadOnly = true;
			this->Column22->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column22->Width = 131;
			// 
			// panelLecturer
			// 
			this->panelLecturer->Controls->Add(this->button5);
			this->panelLecturer->Controls->Add(this->label11);
			this->panelLecturer->Controls->Add(this->dgvLecturer);
			this->panelLecturer->Location = System::Drawing::Point(6, 454);
			this->panelLecturer->Name = L"panelLecturer";
			this->panelLecturer->Size = System::Drawing::Size(196, 80);
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
			this->button5->Location = System::Drawing::Point(0, 59);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(196, 2);
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
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(196, 59);
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
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvLecturer->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dgvLecturer->ColumnHeadersHeight = 30;
			this->dgvLecturer->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvLecturer->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column12,
					this->Column13, this->Column14, this->Column16, this->Column15
			});
			this->dgvLecturer->ContextMenuStrip = this->dgvLecturerMenu;
			this->dgvLecturer->EnableHeadersVisualStyles = false;
			this->dgvLecturer->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvLecturer->Location = System::Drawing::Point(0, -409);
			this->dgvLecturer->MultiSelect = false;
			this->dgvLecturer->Name = L"dgvLecturer";
			this->dgvLecturer->RowHeadersVisible = false;
			this->dgvLecturer->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->dgvLecturer->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->dgvLecturer->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvLecturer->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::Control;
			this->dgvLecturer->RowTemplate->Height = 25;
			this->dgvLecturer->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvLecturer->Size = System::Drawing::Size(196, 489);
			this->dgvLecturer->TabIndex = 1;
			this->dgvLecturer->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &mainForm::dgvLecturer_CellEndEdit);
			this->dgvLecturer->CellMouseDown += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &mainForm::dgvLecturer_CellMouseDown);
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"No";
			this->Column12->Name = L"Column12";
			this->Column12->Width = 50;
			// 
			// Column13
			// 
			this->Column13->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column13->HeaderText = L"FULL NAME";
			this->Column13->Name = L"Column13";
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"DEGREE";
			this->Column14->Name = L"Column14";
			this->Column14->Width = 150;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"USERNAME";
			this->Column16->Name = L"Column16";
			this->Column16->Width = 150;
			// 
			// Column15
			// 
			this->Column15->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column15->HeaderText = L"DETAIL";
			this->Column15->Name = L"Column15";
			// 
			// dgvLecturerMenu
			// 
			this->dgvLecturerMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem2
			});
			this->dgvLecturerMenu->Name = L"ayMenu";
			this->dgvLecturerMenu->Size = System::Drawing::Size(109, 48);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(108, 22);
			this->toolStripMenuItem1->Text = L"Create";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &mainForm::toolStripMenuItem1_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(108, 22);
			this->toolStripMenuItem2->Text = L"Delete";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &mainForm::toolStripMenuItem2_Click);
			// 
			// panelClassList
			// 
			this->panelClassList->Controls->Add(this->dgvStudentList);
			this->panelClassList->Controls->Add(this->button3);
			this->panelClassList->Controls->Add(this->panelClassHeader);
			this->panelClassList->Controls->Add(this->dgvClassList);
			this->panelClassList->Location = System::Drawing::Point(633, 17);
			this->panelClassList->Name = L"panelClassList";
			this->panelClassList->Size = System::Drawing::Size(163, 83);
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
			this->dgvStudentList->Location = System::Drawing::Point(0, 100);
			this->dgvStudentList->MultiSelect = false;
			this->dgvStudentList->Name = L"dgvStudentList";
			this->dgvStudentList->RowHeadersVisible = false;
			this->dgvStudentList->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->dgvStudentList->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->dgvStudentList->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvStudentList->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::Control;
			this->dgvStudentList->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			this->dgvStudentList->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->dgvStudentList->RowTemplate->Height = 25;
			this->dgvStudentList->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvStudentList->Size = System::Drawing::Size(163, 0);
			this->dgvStudentList->TabIndex = 2;
			this->dgvStudentList->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &mainForm::dgvStudentList_CellEndEdit);
			this->dgvStudentList->CellMouseDown += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &mainForm::dgvStudentList_CellMouseDown);
			// 
			// dgvStudentListNo
			// 
			this->dgvStudentListNo->HeaderText = L"No";
			this->dgvStudentListNo->Name = L"dgvStudentListNo";
			this->dgvStudentListNo->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvStudentListNo->Width = 50;
			// 
			// dgvStudentListID
			// 
			this->dgvStudentListID->ContextMenuStrip = this->dgvStudentListMenu;
			this->dgvStudentListID->HeaderText = L"STUDEN ID";
			this->dgvStudentListID->Name = L"dgvStudentListID";
			this->dgvStudentListID->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvStudentListID->Width = 130;
			// 
			// dgvStudentListMenu
			// 
			this->dgvStudentListMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->addNewStudentToolStripMenuItem,
					this->removeToolStripMenuItem, this->changeClassToolStripMenuItem
			});
			this->dgvStudentListMenu->Name = L"dgvStudentListMenu";
			this->dgvStudentListMenu->Size = System::Drawing::Size(166, 70);
			// 
			// addNewStudentToolStripMenuItem
			// 
			this->addNewStudentToolStripMenuItem->Name = L"addNewStudentToolStripMenuItem";
			this->addNewStudentToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->addNewStudentToolStripMenuItem->Text = L"Add new Student";
			this->addNewStudentToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::addNewStudentToolStripMenuItem_Click);
			// 
			// removeToolStripMenuItem
			// 
			this->removeToolStripMenuItem->Name = L"removeToolStripMenuItem";
			this->removeToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->removeToolStripMenuItem->Text = L"Remove";
			this->removeToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::removeToolStripMenuItem_Click);
			// 
			// changeClassToolStripMenuItem
			// 
			this->changeClassToolStripMenuItem->Name = L"changeClassToolStripMenuItem";
			this->changeClassToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->changeClassToolStripMenuItem->Text = L"Change class";
			this->changeClassToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::changeClassToolStripMenuItem_Click);
			// 
			// dgvStudentListLastname
			// 
			this->dgvStudentListLastname->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dgvStudentListLastname->HeaderText = L"LASTNAME";
			this->dgvStudentListLastname->Name = L"dgvStudentListLastname";
			this->dgvStudentListLastname->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// dgvStudentListFirstname
			// 
			this->dgvStudentListFirstname->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dgvStudentListFirstname->HeaderText = L"FIRSTNAME";
			this->dgvStudentListFirstname->Name = L"dgvStudentListFirstname";
			this->dgvStudentListFirstname->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// dgvStudentListGender
			// 
			this->dgvStudentListGender->HeaderText = L"GENDER";
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
			this->dgvClassList->Location = System::Drawing::Point(0, 100);
			this->dgvClassList->MultiSelect = false;
			this->dgvClassList->Name = L"dgvClassList";
			this->dgvClassList->ReadOnly = true;
			this->dgvClassList->RowHeadersVisible = false;
			this->dgvClassList->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
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
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::MidnightBlue;
			this->dgvClassNo->DefaultCellStyle = dataGridViewCellStyle8;
			this->dgvClassNo->HeaderText = L"No";
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
			this->Column30->Name = L"Column30";
			this->Column30->ReadOnly = true;
			this->Column30->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// panelCourse
			// 
			this->panelCourse->Controls->Add(this->panelSemester);
			this->panelCourse->Controls->Add(this->button4);
			this->panelCourse->Controls->Add(this->panelCourseHeader);
			this->panelCourse->Controls->Add(this->dgvCourseList);
			this->panelCourse->Controls->Add(this->dgvAY);
			this->panelCourse->Location = System::Drawing::Point(10, 268);
			this->panelCourse->Name = L"panelCourse";
			this->panelCourse->Size = System::Drawing::Size(66, 45);
			this->panelCourse->TabIndex = 3;
			// 
			// panelSemester
			// 
			this->panelSemester->Controls->Add(this->btSemester2);
			this->panelSemester->Controls->Add(this->btSemester3);
			this->panelSemester->Controls->Add(this->btSemester1);
			this->panelSemester->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelSemester->Location = System::Drawing::Point(0, -444);
			this->panelSemester->Name = L"panelSemester";
			this->panelSemester->Size = System::Drawing::Size(66, 489);
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
			this->btSemester2->Location = System::Drawing::Point(299, 0);
			this->btSemester2->Name = L"btSemester2";
			this->btSemester2->Size = System::Drawing::Size(0, 489);
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
			this->btSemester3->Location = System::Drawing::Point(-233, 0);
			this->btSemester3->Name = L"btSemester3";
			this->btSemester3->Size = System::Drawing::Size(299, 489);
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
			this->btSemester1->Name = L"btSemester1";
			this->btSemester1->Size = System::Drawing::Size(299, 489);
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
			this->button4->Location = System::Drawing::Point(0, 59);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(66, 2);
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
			this->panelCourseHeader->Name = L"panelCourseHeader";
			this->panelCourseHeader->Size = System::Drawing::Size(66, 59);
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
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvCourseList->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle11;
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
			this->dgvCourseList->Location = System::Drawing::Point(0, -444);
			this->dgvCourseList->MultiSelect = false;
			this->dgvCourseList->Name = L"dgvCourseList";
			this->dgvCourseList->RowHeadersVisible = false;
			this->dgvCourseList->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->dgvCourseList->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->dgvCourseList->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvCourseList->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::Control;
			this->dgvCourseList->RowTemplate->Height = 25;
			this->dgvCourseList->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvCourseList->Size = System::Drawing::Size(66, 489);
			this->dgvCourseList->TabIndex = 3;
			this->dgvCourseList->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &mainForm::dgvCourseList_CellEndEdit);
			this->dgvCourseList->CellMouseDown += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &mainForm::dgvCourseList_CellMouseDown);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"No";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"COURSE ID";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 130;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"COURSE NAME";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 300;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"CLASS";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 80;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"LECTURER ACCOUNT";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"START DATE";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"END DATE";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 150;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"DAY OF WEEK";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"START AT";
			this->Column9->Name = L"Column9";
			this->Column9->Width = 80;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"END AT";
			this->Column10->Name = L"Column10";
			this->Column10->Width = 80;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"ROOM";
			this->Column11->Name = L"Column11";
			this->Column11->Width = 70;
			// 
			// dgvCourseListMenu
			// 
			this->dgvCourseListMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->addToolStripMenuItem,
					this->removeToolStripMenuItem1, this->viewStudentToolStripMenuItem, this->viewScoreboardToolStripMenuItem, this->viewAttendanceListToolStripMenuItem
			});
			this->dgvCourseListMenu->Name = L"dgvCourseListMenu";
			this->dgvCourseListMenu->Size = System::Drawing::Size(185, 114);
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->addToolStripMenuItem->Text = L"Add";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::addToolStripMenuItem_Click);
			// 
			// removeToolStripMenuItem1
			// 
			this->removeToolStripMenuItem1->Name = L"removeToolStripMenuItem1";
			this->removeToolStripMenuItem1->Size = System::Drawing::Size(184, 22);
			this->removeToolStripMenuItem1->Text = L"Remove";
			this->removeToolStripMenuItem1->Click += gcnew System::EventHandler(this, &mainForm::removeToolStripMenuItem1_Click);
			// 
			// viewStudentToolStripMenuItem
			// 
			this->viewStudentToolStripMenuItem->Name = L"viewStudentToolStripMenuItem";
			this->viewStudentToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->viewStudentToolStripMenuItem->Text = L"View Student";
			this->viewStudentToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::viewStudentToolStripMenuItem_Click);
			// 
			// viewScoreboardToolStripMenuItem
			// 
			this->viewScoreboardToolStripMenuItem->Name = L"viewScoreboardToolStripMenuItem";
			this->viewScoreboardToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->viewScoreboardToolStripMenuItem->Text = L"View Scoreboard";
			this->viewScoreboardToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::viewScoreboardToolStripMenuItem_Click);
			// 
			// viewAttendanceListToolStripMenuItem
			// 
			this->viewAttendanceListToolStripMenuItem->Name = L"viewAttendanceListToolStripMenuItem";
			this->viewAttendanceListToolStripMenuItem->Size = System::Drawing::Size(184, 22);
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
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvAY->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle12;
			this->dgvAY->ColumnHeadersHeight = 40;
			this->dgvAY->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvAY->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->ayClumn });
			this->dgvAY->ContextMenuStrip = this->ayMenu;
			this->dgvAY->EnableHeadersVisualStyles = false;
			this->dgvAY->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvAY->Location = System::Drawing::Point(0, -444);
			this->dgvAY->MultiSelect = false;
			this->dgvAY->Name = L"dgvAY";
			this->dgvAY->RowHeadersVisible = false;
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvAY->RowsDefaultCellStyle = dataGridViewCellStyle13;
			this->dgvAY->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dgvAY->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->dgvAY->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvAY->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::Control;
			this->dgvAY->RowTemplate->Height = 100;
			this->dgvAY->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvAY->Size = System::Drawing::Size(66, 489);
			this->dgvAY->TabIndex = 1;
			this->dgvAY->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &mainForm::dgvAY_CellDoubleClick);
			this->dgvAY->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &mainForm::dgvAY_CellEndEdit);
			this->dgvAY->CellMouseDown += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &mainForm::dgvAY_CellMouseDown);
			// 
			// ayClumn
			// 
			this->ayClumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ayClumn->HeaderText = L"ACADEMIC YEARS";
			this->ayClumn->Name = L"ayClumn";
			// 
			// ayMenu
			// 
			this->ayMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->createToolStripMenuItem,
					this->deleteToolStripMenuItem
			});
			this->ayMenu->Name = L"ayMenu";
			this->ayMenu->Size = System::Drawing::Size(109, 48);
			// 
			// createToolStripMenuItem
			// 
			this->createToolStripMenuItem->Name = L"createToolStripMenuItem";
			this->createToolStripMenuItem->Size = System::Drawing::Size(108, 22);
			this->createToolStripMenuItem->Text = L"Create";
			this->createToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::createToolStripMenuItem_Click);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(108, 22);
			this->deleteToolStripMenuItem->Text = L"Delete";
			this->deleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::deleteToolStripMenuItem_Click);
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
			this->tbProfileSid->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->tbProfileSid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbProfileSid->Enabled = false;
			this->tbProfileSid->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbProfileSid->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->tbProfileSid->Location = System::Drawing::Point(9, 312);
			this->tbProfileSid->Name = L"tbProfileSid";
			this->tbProfileSid->ReadOnly = true;
			this->tbProfileSid->Size = System::Drawing::Size(335, 19);
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
			this->button2->Location = System::Drawing::Point(0, 59);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 2);
			this->button2->TabIndex = 5;
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label3->Dock = System::Windows::Forms::DockStyle::Top;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 59);
			this->label3->TabIndex = 4;
			this->label3->Text = L"       Profile";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btImport
			// 
			this->btImport->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->btImport->FlatAppearance->BorderSize = 0;
			this->btImport->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btImport->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btImport->ForeColor = System::Drawing::SystemColors::Control;
			this->btImport->Location = System::Drawing::Point(391, 501);
			this->btImport->Name = L"btImport";
			this->btImport->Size = System::Drawing::Size(249, 85);
			this->btImport->TabIndex = 8;
			this->btImport->Text = L"IMPORT NEW FILE";
			this->btImport->UseVisualStyleBackColor = false;
			this->btImport->Visible = false;
			this->btImport->Click += gcnew System::EventHandler(this, &mainForm::btImport_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::Control;
			this->button9->Location = System::Drawing::Point(646, 501);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(249, 85);
			this->button9->TabIndex = 9;
			this->button9->Text = L"CHECK-IN";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &mainForm::button9_Click);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1074, 589);
			this->Controls->Add(this->panelMain);
			this->Controls->Add(this->panelMenu);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"mainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->panelLogin->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panelMenu->ResumeLayout(false);
			this->panelBtProfile->ResumeLayout(false);
			this->panelLogo->ResumeLayout(false);
			this->panelMain->ResumeLayout(false);
			this->panelCheckIn->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCheckIn))->EndInit();
			this->panelScore->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScore))->EndInit();
			this->panelSchedule->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSchedule))->EndInit();
			this->panelLecturer->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLecturer))->EndInit();
			this->dgvLecturerMenu->ResumeLayout(false);
			this->panelClassList->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStudentList))->EndInit();
			this->dgvStudentListMenu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClassList))->EndInit();
			this->panelCourse->ResumeLayout(false);
			this->panelSemester->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourseList))->EndInit();
			this->dgvCourseListMenu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAY))->EndInit();
			this->ayMenu->ResumeLayout(false);
			this->panelProfile->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
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
		void reloadSemester()
		{
			ifstream f1;
			string s1;
			f1.open("general\\class_list.txt");
			getline(f1, s1, '\n');
			while (f1.good())
			{
				getline(f1, s1, '\n');
				ifstream f3("general\\semester.txt");
				string s2, s3;
				getline(f3, s3, '\n');
				while (f3.good())
				{
					getline(f3, s3, '\n');
					ifstream f2("general\\class\\" + s1 + ".txt");
					if (f2.is_open())
					{
						f2.close();
						ofstream f4;
						ifstream f5;
						string s5;
						f5.open("general\\semester\\schedule\\" + s3 + "-hk1-schedule.txt");
						getline(f5, s5, '\n');
						while (f5.good())
						{
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							string tmp = s5;
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							if (s1 == s5)
								f4.open("general\\semester\\student\\" + s3 + "-hk1-" + tmp + "-" + s1 + ".txt");
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							f2.open("general\\class\\" + s1 + ".txt");
							getline(f2, s2, '\n');
							while (f2.good())
							{
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
							}
							f2.close();
							f4.close();
						}
						f5.close();
						f5.open("general\\semester\\schedule\\" + s3 + "-hk2-schedule.txt");
						getline(f5, s5, '\n');
						while (f5.good())
						{
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							string tmp = s5;
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							if (s1 == s5)
								f4.open("general\\semester\\student\\" + s3 + "-hk2-" + tmp + "-" + s1 + ".txt");
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							f2.open("general\\class\\" + s1 + ".txt");
							getline(f2, s2, '\n');
							while (f2.good())
							{
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
							}
							f2.close();
							f4.close();
						}
						f5.close();
						f5.open("general\\semester\\schedule\\" + s3 + "-hk3-schedule.txt");
						getline(f5, s5, '\n');
						while (f5.good())
						{
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							string tmp = s5;
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							if (s1 == s5)
								f4.open("general\\semester\\student\\" + s3 + "-hk3-" + tmp + "-" + s1 + ".txt");
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							getline(f5, s5, '\n');
							f2.open("general\\class\\" + s1 + ".txt");
							getline(f2, s2, '\n');
							while (f2.good())
							{
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
								getline(f2, s2, '\n');
								f4 << endl
									<< s2;
							}
							f2.close();
							f4.close();
						}
						f5.close();
					}
				}
				f3.close();
				getline(f1, s1, '\n');
			}
			f1.close();
		}
		static bool cmp1(user_info u1, user_info u2)
		{
			return u1.id < u2.id;
		}
		static bool cmp2(student& si1, student& si2)
		{
			return si1.id < si2.id;
		};
		void reloadUserLogin()
		{
			ifstream f1("general\\user_login.txt");
			string s1;
			user_info* u = new user_info[10000];
			getline(f1, s1, '\n');
			int i = 0;
			while (f1.good())
			{
				getline(f1, s1, '\n');
				getline(f1, s1, '\n');
				getline(f1, s1, '\n');
				getline(f1, s1, '\n');
				u[i].id = s1;
				getline(f1, s1, '\n');
				u[i++].pass = s1;
				getline(f1, s1, '\n');
			}
			int user_size = i;
			sort(u, u + i, cmp1);//[](user_info &u1, user_info &u2) { return u1.id < u2.id; });
			f1.close();
			f1.open("general\\class_list.txt");
			i = 0;
			getline(f1, s1, '\n');
			student* si = new student[10000];
			while (f1.good())
			{
				getline(f1, s1, '\n');
				ifstream f2("general\\class\\" + s1 + ".txt");
				string s2, s6;
				getline(f2, s2, '\n');
				while (f2.good())
				{
					getline(f2, s2, '\n');
					getline(f2, s2, '\n');
					si[i].id = s2;
					getline(f2, s2, '\n');
					si[i].lname = s2;
					getline(f2, s2, '\n');
					si[i].fname = s2;
					getline(f2, s2, '\n');
					si[i].gender = s2;
					getline(f2, s2, '\n');
					si[i].dob = s2;
					getline(f2, s2, '\n');
					si[i++].cls = s2;
				}
				f2.close();
				getline(f1, s1, '\n');
			}
			f1.close();
			f1.open("general\\Lecturer.txt");
			getline(f1, s1, '\n');
			while (f1.good())
			{
				getline(f1, s1, '\n');
				si[i].lname = s1;
				si[i].fname = "";
				getline(f1, s1, '\n');
				si[i].id = s1;
				getline(f1, s1, '\n');
				si[i].dob = s1;
				si[i].gender = "NONE";
				si[i++].cls = "Lecturer";
			}
			f1.close();
			f1.open("general\\Staff.txt");
			getline(f1, s1, '\n');
			while (f1.good())
			{
				getline(f1, s1, '\n');
				si[i].lname = s1;
				si[i].fname = "";
				getline(f1, s1, '\n');
				si[i].id = s1;
				getline(f1, s1, '\n');
				si[i].dob = s1;
				si[i].gender = "NONE";
				si[i++].cls = "Staff";
			}
			f1.close();
			int student_size = i;
			sort(si, si + i, cmp2);//[](student& si1, student& si2) { return si1.id < si2.id; });
			int j = i = 0;
			ofstream f2("general\\user_login.txt");
			while (j < student_size)
			{
				if (u[i].id == si[j].id)
				{
					if (si[j].cls == "Lecturer" || si[j].cls == "Staff")
					{
						f2 << endl
							<< si[j].lname << endl
							<< "NONE\nNONE\n"
							<< si[j].id << endl
							<< u[i].pass << endl
							<< si[j].cls;
					}
					else
					{
						f2 << endl
							<< si[j].lname + " " + si[j].fname << endl
							<< si[j].dob << endl
							<< "NONE\n"
							<< si[j].id << endl
							<< u[i].pass << endl
							<< si[j].cls;
					}
					i++;
					j++;
				}
				else if (u[i].id < si[j].id)
					i++;
				else if (u[i].id > si[j].id)
				{
					if (si[j].cls == "Lecturer" || si[j].cls == "Staff")
					{
						f2 << endl
							<< si[j].lname << endl
							<< "NONE\nNONE\n"
							<< si[j].id << endl
							<< si[j].dob << endl
							<< si[j].cls;
					}
					else
					{
						f2 << endl
							<< si[j].lname + " " + si[j].fname << endl
							<< si[j].dob << endl
							<< "NONE\n"
							<< si[j].id << endl;
						if (si[j].dob.length() < 8)
							f2 << si[j].dob << endl
							<< si[j].cls;
						else
							f2 << si[j].dob.erase(4, 1).erase(6, 1) << endl
							<< si[j].cls;
					}
					j++;
				}
			}
			f2.close();
			delete[] u;
			delete[] si;
			reloadSemester();
		}
		void importData()
		{
			ifstream f1("general\\class_list.txt");
			//read student
			ofstream f4("general\\user_login.txt");
			string s1;
			int i1, i2, i3;
			bool c = false;
			i1 = i2 = i3 = 1;
			getline(f1, s1, '\n');
			while (f1.good())
			{
				getline(f1, s1, '\n');
				string s2, s5;
				ifstream f2("import\\" + s1 + "-Student.csv");
				if (f2.is_open())
				{
					c = true;
					ofstream f3("general\\class\\" + s1 + ".txt");
					getline(f2, s2, '\n');
					while (f2.good())
					{
						string tmp;
						getline(f2, s2, ',');
						f3 << endl
							<< s2;
						getline(f2, s2, ',');
						f3 << endl
							<< s2;
						tmp = s2;
						getline(f2, s2, ',');
						f3 << endl
							<< s2;
						f4 << endl
							<< s2 << " ";
						getline(f2, s2, ',');
						f3 << endl
							<< s2;
						f4 << s2;
						getline(f2, s2, ',');
						f3 << endl
							<< s2;
						getline(f2, s2, ',');
						f3 << endl
							<< s2;
						f4 << endl
							<< s2;
						f4 << endl
							<< "NONE";
						f4 << endl
							<< tmp;
						f4 << endl
							<< s2.erase(4, 1).erase(6, 1);
						getline(f2, s2, '\n');
						f3 << endl
							<< s2;
						f4 << endl
							<< s2;
					}
					f2.close();
					f3.close();
				}
				ifstream f5("general\\semester.txt");
				ofstream f3;
				getline(f5, s5, '\n');
				while (f5.good())
				{
					getline(f5, s5, '\n');
					f2.open("import\\" + s5 + "-hk1-schedule-" + s1 + ".csv");
					if (f2.is_open())
					{
						if (i1)
						{
							f3.open("general\\semester\\schedule\\" + s5 + "-hk1-schedule.txt");
							i1 = 0;
						}
						else
							f3.open("general\\semester\\schedule\\" + s5 + "-hk1-schedule.txt", ios::app);
						getline(f2, s2, '\n');
						while (f2.good())
						{
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, '\n');
							f3 << endl
								<< s2;
						}
						f3.close();
						f2.close();
					}
					f2.open("import\\" + s5 + "-hk2-schedule-" + s1 + ".csv");
					if (f2.is_open())
					{
						if (i2)
						{
							f3.open("general\\semester\\schedule\\" + s5 + "-hk2-schedule.txt");
							i2 = 0;
						}
						else
							f3.open("general\\semester\\schedule\\" + s5 + "-hk2-schedule.txt", ios::app);
						getline(f2, s2, '\n');
						while (f2.good())
						{
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, '\n');
							f3 << endl
								<< s2;
						}
						f3.close();
						f2.close();
					}
					f2.open("import\\" + s5 + "-hk3-schedule-" + s1 + ".csv");
					if (f2.is_open())
					{
						if (i3)
						{
							f3.open("general\\semester\\schedule\\" + s5 + "-hk3-schedule.txt");
							i3 = 0;
						}
						else
							f3.open("general\\semester\\schedule\\" + s5 + "-hk3-schedule.txt", ios::app);
						getline(f2, s2, '\n');
						while (f2.good())
						{
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, ',');
							f3 << endl
								<< s2;
							getline(f2, s2, '\n');
							f3 << endl
								<< s2;
						}
						f3.close();
						f2.close();
					}
				}
				f5.close();
				getline(f1, s1, '\n');
			}
			f1.close();
			f1.open("general\\staff.txt");
			//read staff
			getline(f1, s1, '\n');
			while (f1.good())
			{
				getline(f1, s1, '\n');
				f4 << endl
					<< s1;
				f4 << "\nNONE\nNONE";
				getline(f1, s1, '\n');
				f4 << endl
					<< s1;
				getline(f1, s1, '\n');
				f4 << endl
					<< s1;
				f4 << "\nStaff";
			}
			f1.close();
			f1.open("general\\lecturer.txt");
			//read staff
			getline(f1, s1, '\n');
			while (f1.good())
			{
				getline(f1, s1, '\n');
				f4 << endl
					<< s1;
				f4 << "\nNONE\nNONE";
				getline(f1, s1, '\n');
				f4 << endl
					<< s1;
				getline(f1, s1, '\n');
				f4 << endl
					<< s1;
				f4 << "\nLecturer";
			}
			f1.close();
			f4.close();
			if (c) reloadUserLogin();
		}
		//xong
#pragma region Login & Profile
		bool loginCheck(String^ id, String^ pass)
		{
			std::ifstream f;
			std::string s;
			userInfo^ u = gcnew userInfo;
			f.open("general\\user_login.txt");
			getline(f, s, '\n');
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
					user_class = u->cls;
					user_id = u->userid;
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
			btImport->Visible = true;
			button9->Visible = false;
			if (user > 1)
			{
				btClass->Visible = false;
				btLecturer->Visible = false;
				if (user > 2)
				{
					btImport->Visible = false;
					btCourse->Visible = false;
					btCheckIn->Visible = true;
					btScore->Visible = true;
					btSchedule->Visible = true;
					label7->Visible = true;
					label8->Visible = true;
					tbProfileClass->Visible = true;
					tbProfileSid->Visible = true;
					button9->Visible = true;
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
		changePassForm^ f = gcnew changePassForm(user, uInfo->userid, uInfo->userpass);
		f->ShowDialog();
		uInfo->userpass = f->ol;
		btProfile->PerformClick();
	}
#pragma endregion
		   //xong
#pragma region Class & Student
		   void dgvClassListLoad()
		   {
			   std::ifstream f;
			   std::string s;
			   int x = 0;
			   dgvClassList->Rows->Clear();
			   f.open("general\\class_list.txt");
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
				   dgvStudentList->Rows[x]->Cells[5]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
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
			f.open("general\\class\\" + msclr::interop::marshal_as<std::string>(s) + ".txt");
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
		dgvStudentList->Rows[dgvStudentList->RowCount - 1]->Cells[5]->Value = "";
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
				f.open("general\\class\\" + msclr::interop::marshal_as<std::string>(panelClassHeader->Text->Substring(11)) + ".txt");
				dgvStudentList->Rows->RemoveAt(dgvStudentList->SelectedCells[0]->RowIndex);
				for (int i = 0; i < dgvStudentList->RowCount; i++)
				{
					dgvStudentList->Rows[i]->Cells[0]->Value = i + 1;
					f << endl <<
						msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[0]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[1]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[2]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[3]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[4]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[5]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(panelClassHeader->Text->Substring(11));
				}
				f.close();
				dgvStudentList->ClearSelection();
				reloadUserLogin();
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
			f.open("general\\class\\" + msclr::interop::marshal_as<std::string>(panelClassHeader->Text->Substring(11)) + ".txt");
			for (int i = 0; i < dgvStudentList->RowCount; i++)
			{
				if (dgvStudentList->Rows[i]->Cells[0]->Value == nullptr) dgvStudentList->Rows[i]->Cells[0]->Value = "";
				if (dgvStudentList->Rows[i]->Cells[1]->Value == nullptr) dgvStudentList->Rows[i]->Cells[1]->Value = "";
				if (dgvStudentList->Rows[i]->Cells[2]->Value == nullptr) dgvStudentList->Rows[i]->Cells[2]->Value = "";
				if (dgvStudentList->Rows[i]->Cells[3]->Value == nullptr) dgvStudentList->Rows[i]->Cells[3]->Value = "";
				if (dgvStudentList->Rows[i]->Cells[4]->Value == nullptr) dgvStudentList->Rows[i]->Cells[4]->Value = "";
				if (dgvStudentList->Rows[i]->Cells[5]->Value == nullptr) dgvStudentList->Rows[i]->Cells[5]->Value = "";
				f << endl <<
					msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[0]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[1]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[2]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[3]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[4]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[5]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(panelClassHeader->Text->Substring(11));
			}
			f.close();
			//	LOAD LAI FILE user_login.txt
			reloadUserLogin();
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
				fi.open("general\\class\\" + msclr::interop::marshal_as<std::string>(panelClassHeader->Text->Substring(11)) + ".txt");
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
						msclr::interop::marshal_as<std::string>(dgvStudentList->Rows[i]->Cells[5]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(panelClassHeader->Text->Substring(11));
				}
				fi.close();
				dgvStudentList->ClearSelection();
				//update lai file user_login
				reloadUserLogin();
			}
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
#pragma endregion
		   //xong
#pragma region Course
		   //fix panel course header
		   String^ course_file, ^ course_path;
		   void dgvAYload()
		   {
			   ifstream f("general\\semester.txt");
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
			   course_file = dgvAY->SelectedCells[0]->Value->ToString() + "-" + gcnew String(st.c_str()) + ".txt";
			   course_path = dgvAY->SelectedCells[0]->Value->ToString() + "-" + gcnew String(st.c_str());
			   ifstream f("general\\semester\\schedule\\" + msclr::interop::marshal_as<std::string>(dgvAY->SelectedCells[0]->Value->ToString()) + "-" + st + "-schedule.txt");
			   string s;
			   getline(f, s, '\n');
			   int x = 0;
			   dgvCourseList->Rows->Clear();
			   while (f.good())
			   {
				   dgvCourseList->Rows->Add();
				   getline(f, s, '\n');
				   dgvCourseList->Rows[x]->Cells[0]->Value = x + 1;
				   getline(f, s, '\n');
				   dgvCourseList->Rows[x]->Cells[1]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   dgvCourseList->Rows[x]->Cells[2]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   dgvCourseList->Rows[x]->Cells[3]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   dgvCourseList->Rows[x]->Cells[4]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   dgvCourseList->Rows[x]->Cells[5]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   dgvCourseList->Rows[x]->Cells[6]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   dgvCourseList->Rows[x]->Cells[7]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   dgvCourseList->Rows[x]->Cells[8]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   dgvCourseList->Rows[x]->Cells[9]->Value = gcnew String(s.c_str());
				   getline(f, s, '\n');
				   dgvCourseList->Rows[x]->Cells[10]->Value = gcnew String(s.c_str());
				   x++;
			   }
			   f.close();
			   dgvCourseList->ClearSelection();
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
			dgvAY->Rows->Clear();
			dgvAY->Rows->Add();
			dgvAY->SelectAll();
			dgvAY->SelectedCells[0]->Value = "2019-2020";
			dgvCourseLoad("hk2");
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
				f.open("general\\semester.txt");
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
			f.open("general\\semester.txt");
			for (int i = 0; i < dgvAY->RowCount; i++)
			{
				if (dgvAY->Rows[i]->Cells[0]->Value == nullptr) dgvAY->Rows[i]->Cells[0]->Value = "";
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
			panelCourseHeader->Text = "     " + dgvAY->SelectedCells[0]->Value->ToString();
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
		dgvCourseList->Rows[dgvCourseList->RowCount - 1]->Cells[0]->Value = "";
		dgvCourseList->Rows[dgvCourseList->RowCount - 1]->Cells[1]->Value = "";
		dgvCourseList->Rows[dgvCourseList->RowCount - 1]->Cells[2]->Value = "";
		dgvCourseList->Rows[dgvCourseList->RowCount - 1]->Cells[3]->Value = "";
		dgvCourseList->Rows[dgvCourseList->RowCount - 1]->Cells[4]->Value = "";
		dgvCourseList->Rows[dgvCourseList->RowCount - 1]->Cells[5]->Value = "";
		dgvCourseList->Rows[dgvCourseList->RowCount - 1]->Cells[6]->Value = "";
		dgvCourseList->Rows[dgvCourseList->RowCount - 1]->Cells[7]->Value = "";
		dgvCourseList->Rows[dgvCourseList->RowCount - 1]->Cells[8]->Value = "";
		dgvCourseList->Rows[dgvCourseList->RowCount - 1]->Cells[9]->Value = "";
		dgvCourseList->Rows[dgvCourseList->RowCount - 1]->Cells[10]->Value = "";
		dgvCourseList->Rows[dgvCourseList->RowCount - 1]->Cells[0]->Value = dgvCourseList->RowCount;
	}
	private: System::Void removeToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			System::Windows::Forms::DialogResult d = MessageBox::Show(this, "Do you want to remove course "
				+ dgvCourseList->SelectedCells[1]->Value + "?", "WARNING!", MessageBoxButtons::YesNo);
			if (d == System::Windows::Forms::DialogResult::Yes)
			{
				std::ofstream f;
				f.open("general\\semester\\schedule\\" + msclr::interop::marshal_as<std::string>(course_path->ToString()) + "-schedule.txt");
				dgvCourseList->Rows->RemoveAt(dgvCourseList->SelectedCells[0]->RowIndex);
				for (int i = 0; i < dgvCourseList->RowCount; i++)
				{
					dgvCourseList->Rows[i]->Cells[0]->Value = i + 1;
					f << endl <<
						msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[0]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[1]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[2]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[3]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[4]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[5]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[6]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[7]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[8]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[9]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[10]->Value->ToString());
				}
				f.close();
				dgvCourseList->ClearSelection();
			}
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
	private: System::Void dgvCourseList_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try
		{
			std::ofstream f;
			f.open("general\\semester\\schedule\\" + msclr::interop::marshal_as<std::string>(course_path->ToString()) + "-schedule.txt");
			for (int i = 0; i < dgvCourseList->RowCount; i++)
			{
				if (dgvCourseList->Rows[i]->Cells[0]->Value == nullptr) dgvCourseList->Rows[i]->Cells[0]->Value = "";
				if (dgvCourseList->Rows[i]->Cells[1]->Value == nullptr) dgvCourseList->Rows[i]->Cells[1]->Value = "";
				if (dgvCourseList->Rows[i]->Cells[2]->Value == nullptr) dgvCourseList->Rows[i]->Cells[2]->Value = "";
				if (dgvCourseList->Rows[i]->Cells[3]->Value == nullptr) dgvCourseList->Rows[i]->Cells[3]->Value = "";
				if (dgvCourseList->Rows[i]->Cells[4]->Value == nullptr) dgvCourseList->Rows[i]->Cells[4]->Value = "";
				if (dgvCourseList->Rows[i]->Cells[5]->Value == nullptr) dgvCourseList->Rows[i]->Cells[5]->Value = "";
				if (dgvCourseList->Rows[i]->Cells[6]->Value == nullptr) dgvCourseList->Rows[i]->Cells[6]->Value = "";
				if (dgvCourseList->Rows[i]->Cells[7]->Value == nullptr) dgvCourseList->Rows[i]->Cells[7]->Value = "";
				if (dgvCourseList->Rows[i]->Cells[8]->Value == nullptr) dgvCourseList->Rows[i]->Cells[8]->Value = "";
				if (dgvCourseList->Rows[i]->Cells[9]->Value == nullptr) dgvCourseList->Rows[i]->Cells[9]->Value = "";
				if (dgvCourseList->Rows[i]->Cells[10]->Value == nullptr) dgvCourseList->Rows[i]->Cells[10]->Value = "";
				f << endl <<
					msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[0]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[1]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[2]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[3]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[4]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[5]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[6]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[7]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[8]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[9]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvCourseList->Rows[i]->Cells[10]->Value->ToString());
			}
			f.close();
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
	private: System::Void viewStudentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ course = course_path + "-" + dgvCourseList->SelectedCells[1]->Value->ToString() + "-";
			studentForm^ f = gcnew studentForm(user, dgvCourseList->SelectedCells[3]->Value->ToString(), course);
			f->ShowDialog();
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
	private: System::Void viewScoreboardToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ course = course_path + "-" + dgvCourseList->SelectedCells[1]->Value->ToString() + "-";
			scoreboardForm^ f = gcnew scoreboardForm(user, dgvCourseList->SelectedCells[3]->Value->ToString(), course);
			f->ShowDialog();
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
	private: System::Void viewAttendanceListToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ course = course_path + "-" + dgvCourseList->SelectedCells[1]->Value->ToString() + "-";
			attendanceForm^ f = gcnew attendanceForm(user, dgvCourseList->SelectedCells[3]->Value->ToString(), course);
			f->ShowDialog();
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
#pragma endregion
		   //xong
#pragma region Lecturer
		   string* lecturer_pass;
		   void dgvLecturerLoad()
		   {
			   ifstream f("general\\lecturer.txt");
			   string s;
			   getline(f, s, '\n');
			   if (dgvLecturer->RowCount > 0) delete[] lecturer_pass;
			   lecturer_pass = new string[100];
			   int x = 0;
			   dgvLecturer->Rows->Clear();
			   while (f.good())
			   {
				   dgvLecturer->Rows->Add();
				   getline(f, s, '\n');
				   dgvLecturer->Rows[x]->Cells[0]->Value = x + 1;
				   dgvLecturer->Rows[x]->Cells[1]->Value = gcnew String(s.c_str());
				   dgvLecturer->Rows[x]->Cells[2]->Value = "N/A";
				   getline(f, s, '\n');
				   dgvLecturer->Rows[x]->Cells[3]->Value = gcnew String(s.c_str());
				   dgvLecturer->Rows[x]->Cells[4]->Value = "N/A";
				   getline(f, s, '\n');
				   lecturer_pass[x] = s;
				   x++;
			   }
			   f.close();
			   dgvLecturer->ClearSelection();
		   }
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		dgvLecturer->Rows->Add();
		dgvLecturer->Rows[dgvLecturer->RowCount - 1]->Cells[0]->Value = dgvLecturer->RowCount;
		dgvLecturer->Rows[dgvLecturer->RowCount - 1]->Cells[1]->Value = "";
		dgvLecturer->Rows[dgvLecturer->RowCount - 1]->Cells[2]->Value = "";
		dgvLecturer->Rows[dgvLecturer->RowCount - 1]->Cells[3]->Value = "";
		dgvLecturer->Rows[dgvLecturer->RowCount - 1]->Cells[4]->Value = "";
		dgvLecturer->ClearSelection();
	}
	private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			System::Windows::Forms::DialogResult d = MessageBox::Show(this, "Do you want to remove lecturer "
				+ dgvLecturer->SelectedCells[1]->Value + "?", "WARNING!", MessageBoxButtons::YesNo);
			if (d == System::Windows::Forms::DialogResult::Yes)
			{
				std::ofstream f;
				f.open("general\\lecturer.txt");
				dgvLecturer->Rows->RemoveAt(dgvLecturer->SelectedCells[0]->RowIndex);
				for (int i = 0; i < dgvLecturer->RowCount; i++)
				{
					dgvCourseList->Rows[i]->Cells[0]->Value = i + 1;
					f << endl <<
						msclr::interop::marshal_as<std::string>(dgvLecturer->Rows[i]->Cells[1]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(dgvLecturer->Rows[i]->Cells[3]->Value->ToString()) << endl <<
						lecturer_pass[i];
				}
				f.close();
				// LOAD LAI FILE user_login.txt
				dgvLecturer->ClearSelection();
				reloadUserLogin();
			}
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
	private: System::Void dgvLecturer_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try
		{
			std::ofstream f;
			f.open("general\\lecturer.txt");
			for (int i = 0; i < dgvLecturer->RowCount; i++)
			{
				f << endl <<
					msclr::interop::marshal_as<std::string>(dgvLecturer->Rows[i]->Cells[1]->Value->ToString()) << endl <<
					msclr::interop::marshal_as<std::string>(dgvLecturer->Rows[i]->Cells[3]->Value->ToString()) << endl <<
					lecturer_pass[i];
			}
			f.close();
			// LOAD LAI FILE user_login.txt
			reloadUserLogin();
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
	private: System::Void btLecturer_Click(System::Object^ sender, System::EventArgs^ e) {
		openPanel(panelLecturer);
		dgvLecturerLoad();
		//load dgvLecturer
	}
	private: System::Void dgvLecturer_CellMouseDown(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		try
		{
			dgvLecturer->ClearSelection();
			dgvLecturer->Rows[e->RowIndex]->Selected = true;
		}
		catch (Exception^ ex)
		{
			return;
		}
	}

#pragma endregion
		   static bool cmp3(att& ar1, att& ar2)
		   {
			   return ar1.date < ar2.date;
		   }
		   void checkInLoad()
		   {
			   dgvCheckIn->Rows->Clear();
			   while (dgvCheckIn->ColumnCount > 1)
			   {
				   dgvCheckIn->Columns->RemoveAt(1);
			   }
			   ifstream f;
			   f.open("general\\semester\\schedule\\2019-2020-hk2-schedule.txt");
			   string s, course_name, class_name, st;
			   int x, i = 0;
			   att* ar = new att[1000];
			   getline(f, s, '\n');
			   while (f.good())
			   {
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   course_name = s;
				   getline(f, s, '\n');
				   st = course_name + " - " + s;
				   getline(f, s, '\n');
				   class_name = s;
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   if (checkExist(course_name + "-" + class_name, user_id))
				   {
					   ifstream fi("general\\semester\\attendance\\2019-2020-hk2-" + course_name + "-" + class_name + "-attendance.txt");
					   string si;
					   String^ tmp;
					   dgvCheckIn->Rows->Add();
					   dgvCheckIn->Rows[x]->Cells[0]->Value = gcnew String(st.c_str());
					   getline(fi, si, '\n');
					   while (fi.good())
					   {
						   getline(fi, si, '\n');
						   ar[i].date = si;
						   ar[i].row = x;
						   ar[i].c = false;
						   int k;
						   fi >> k;
						   int tmp;
						   for (int j = 0; j < k; j++)
						   {
							   fi >> tmp;
							   if (tmp.ToString() == user_id)
							   {
								   ar[i].c = true;
							   };
						   } 
						   i++;
						   fi.ignore(1);
					   }
					   fi.close();
					   x++;
				   }
			   }
			   f.close();
			   sort(ar, ar + i, cmp3);
			   st = "";
			   x = 1;
			   for (int j = 0; j < i; j++)
			   {
				   if (ar[j].date != st)
				   {
					   dgvCheckIn->Columns->Add("coll" + x, gcnew String(ar[j].date.c_str()));
					   dgvCheckIn->Columns[x]->MinimumWidth = 130;
					   st = ar[j].date;
					   x++;
				   }
				   if (!ar[j].c)
				   {
					   dgvCheckIn->Rows[ar[j].row]->Cells[x - 1]->Style->BackColor = Color::Red;
					   dgvCheckIn->Rows[ar[j].row]->Cells[x - 1]->Style->Alignment = DataGridViewContentAlignment(32);
					   dgvCheckIn->Rows[ar[j].row]->Cells[x - 1]->Value = "X";
				   }
				   else dgvCheckIn->Rows[ar[j].row]->Cells[x - 1]->Value = "";
			   }			   
			   dgvCheckIn->ClearSelection();
		   }
	private: System::Void btCheckIn_Click(System::Object^ sender, System::EventArgs^ e) {
		openPanel(panelCheckIn);
		checkInLoad();
		//load dgvCheckIn
	}
		   //
		   int findwDay(string& s)
		   {
			   if (s == "MON")
				   return 1;
			   if (s == "TUE")
				   return 2;
			   if (s == "WED")
				   return 3;
			   if (s == "THU")
				   return 4;
			   if (s == "FRI")
				   return 5;
			   if (s == "SAT")
				   return 6;
			   return 0;
		   }
		   int findRow1(string& s)
		   {
			   if (s == "07:30") return 0;
			   if (s == "09:30") return 1;
			   if (s == "13:30") return 2;
			   if (s == "15:30") return 3;
		   }
		   int findRow2(string& s)
		   {
			   if (s == "09:30") return 0;
			   if (s == "11:30") return 1;
			   if (s == "15:30") return 2;
			   if (s == "17:30") return 3;
		   }
		   bool checkExist(string s1, String^ s2)
		   {
			   string real_id = msclr::interop::marshal_as<std::string>(s2);
			   ifstream f("general\\semester\\student\\2019-2020-hk2-" + s1 + ".txt");
			   string s;
			   getline(f, s, '\n');
			   while (f.good())
			   {
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   if (s == real_id) return true;
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   getline(f, s, '\n');
			   }
			   f.close();
			   return false;
		   }
		   void dgvScheduleLoad()
		   {
			   dgvSchedule->Rows->Clear();
			   dgvSchedule->Rows->Add();
			   dgvSchedule->Rows[0]->Cells[0]->Value = "07:30-09:30";
			   dgvSchedule->Rows->Add();
			   dgvSchedule->Rows[1]->Cells[0]->Value = "09:30-11:30";
			   dgvSchedule->Rows->Add();
			   dgvSchedule->Rows[2]->Cells[0]->Value = "13:30-15:30";
			   dgvSchedule->Rows->Add();
			   dgvSchedule->Rows[3]->Cells[0]->Value = "15:30-17:30";
			   ifstream f("general\\semester\\schedule\\2019-2020-hk2-schedule.txt");
			   string s, course_name, class_name, room;
			   int i, j, k;
			   getline(f, s, '\n');
			   while (f.good())
			   {
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   course_name = s;
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   class_name = s;
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   i = findwDay(s);
				   getline(f, s, '\n');
				   j = findRow1(s);
				   getline(f, s, '\n');
				   k = findRow2(s);
				   getline(f, s, '\n');
				   room = s;
				   if (checkExist(course_name + "-" + class_name, user_id))
				   {
					   course_name += " (" + room + ")";
					   dgvSchedule->Rows[j]->Cells[i]->Value = gcnew String(course_name.c_str());
					   dgvSchedule->Rows[k]->Cells[i]->Value = gcnew String(course_name.c_str());
				   }
			   }
			   f.close();
			   dgvSchedule->ClearSelection();
		   }
	private: System::Void btSchedule_Click(System::Object^ sender, System::EventArgs^ e) {
		openPanel(panelSchedule);
		dgvScheduleLoad();
		//load dgvSchedule
	}
		   //
		   void dgvScoreLoad()
		   {
			   dgvScore->Rows->Clear();
			   ifstream f("general\\semester\\schedule\\2019-2020-hk2-schedule.txt");
			   string s, course_name, class_name, st;
			   int x = 0;
			   getline(f, s, '\n');
			   while (f.good())
			   {
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   course_name = s;
				   getline(f, s, '\n');
				   st = course_name + " - " + s;
				   getline(f, s, '\n');
				   class_name = s;
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   getline(f, s, '\n');
				   if (checkExist(course_name + "-" + class_name, user_id))
				   {
					   dgvScore->Rows->Add();
					   dgvScore->Rows[x]->Cells[0]->Value = gcnew String(st.c_str());
					   ifstream fi("general\\semester\\scoreboard\\2019-2020-hk2-" + course_name + "-" + class_name + "-scoreboard.txt");
					   string si;
					   String^ tmp;
					   getline(fi, si, '\n');
					   while (fi.good())
					   {
						   getline(fi, si, '\n');
						   getline(fi, si, '\n');
						   tmp = gcnew String(si.c_str());
						   getline(fi, si, '\n');
						   getline(fi, si, '\n');
						   if (tmp == user_id) dgvScore->Rows[x]->Cells[1]->Value = gcnew String(si.c_str());
						   getline(fi, si, '\n');
						   if (tmp == user_id) dgvScore->Rows[x]->Cells[2]->Value = gcnew String(si.c_str());
						   getline(fi, si, '\n');
						   if (tmp == user_id) dgvScore->Rows[x]->Cells[3]->Value = gcnew String(si.c_str());
						   getline(fi, si, '\n');
						   if (tmp == user_id) dgvScore->Rows[x]->Cells[4]->Value = gcnew String(si.c_str());
					   }
					   fi.close();
					   x++;
				   }
			   }
			   f.close();
			   dgvScore->ClearSelection();
		   }
	private: System::Void btScore_Click(System::Object^ sender, System::EventArgs^ e) {
		openPanel(panelScore);
		dgvScoreLoad();
		//load dgvScore
	}
	private: System::Void panelMain_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->X < 50) panelMenu->Visible = true;
		if (e->X > 50) panelMenu->Visible = false;
	}
	private: System::Void btImport_Click(System::Object^ sender, System::EventArgs^ e) {
		importData();
		MessageBox::Show(this, "IMPORT SUCCESS ", "NOTIFICATION", MessageBoxButtons::OK);
	}

	public: String^ user_class, ^ user_id;
		  /*
				void stot(string& s, tm*& t)
				{
					t->tm_year = stoi(s.substr(6, 4)) - 1900;
					t->tm_mon = stoi(s.substr(3, 2)) - 1;
					t->tm_mday = stoi(s.substr(0, 2));
					t->tm_hour = 0;
					t->tm_min = 0;
					t->tm_sec = 0;
					mktime(t);
				}
				void insertId(string& s, string& st, int& x)
				{
					ostringstream text;
					ifstream in_file(s);
					text << in_file.rdbuf();
					string str = text.str();
					string str_found = st;
					string str_replace = to_string(x + 1);
					size_t pos = str.find(str_found);
					str.replace(pos + str_found.length() + 1, str_replace.length(), str_replace);
					in_file.close();
					ofstream out_file(s);
					out_file << str << endl
						<< msclr::interop::marshal_as<std::string>(user_id->ToString());
					out_file.close();
				}
				void checkinStudent(string& s, string& st)
				{
					ifstream f1;
					f1.open("general\\semester\\attendance\\2019-2020-hk2-" + s + "-attendance.txt");
					if (!f1.is_open())
					{
						ofstream f2;
						f2.open("general\\semester\\attendance\\2019-2020-hk2-" + s + "-attendance.txt");
						f2 << endl
							<< st << endl
							<< 1 << endl
							<< msclr::interop::marshal_as<std::string>(user_id->ToString());
						f2.close();
					}
					else
					{
						string s1;
						getline(f1, s1, '\n');
						while (f1.good())
						{
							int x;
							getline(f1, s1, '\n');
							f1 >> x;
							if (s1 == st)
							{
								f1.close();
								insertId("general\\semester\\attendance\\2019-2020-hk2-" + s + "-attendance.txt", st, x);
								break;
							}
							f1.ignore(1);
							for (int i = 0; i < x; i++) getline(f1, s1, '\n');
						}
						if (f1.is_open())
						{
							f1.close();
							ofstream f2;
							f2.open("general\\semester\\attendance\\2019-2020-hk2-" + s + "-attendance.txt", ios::app);
							f2 << endl
								<< st << endl
								<< 1 << endl
								<< msclr::interop::marshal_as<std::string>(user_id->ToString());
							f2.close();
						}
					}
				}*/
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		/*time_t t = time(0);
		tm* now = new tm, * t1 = new tm, * t2 = new tm;
		now = localtime(&t);
		ifstream f1;
		string s1, path, class_name, hour, st1, st2, dmy;
		hour = to_string(now->tm_hour);
		if (hour.length() == 1) hour = "0" + hour;
		hour += ":";
		if (now->tm_min < 10) hour += "0";
		hour += to_string(now->tm_min);
		if (now->tm_mday < 10) dmy = "0" + to_string(now->tm_mday) + "/";
		else dmy = to_string(now->tm_mday) + "/";
		if (now->tm_mon < 10) dmy += "0" + to_string(now->tm_mon + 1) + "/";
		else dmy += to_string(now->tm_mon) + "/";
		dmy += to_string(now->tm_year + 1900);
		f1.open("general\\semester\\schedule\\2019-2020-hk2-schedule.txt");
		getline(f1, s1, '\n');
		bool c = true;
		while (f1.good())
		{
			c = true;
			getline(f1, s1, '\n');
			getline(f1, s1, '\n');
			path = s1;
			getline(f1, s1, '\n');
			getline(f1, s1, '\n');
			path += "-" + s1;
			class_name = s1;
			getline(f1, s1, '\n');
			getline(f1, s1, '\n');
			stot(s1, t1);
			getline(f1, s1, '\n');
			stot(s1, t2);
			getline(f1, s1, '\n');
			getline(f1, s1, '\n');
			st1 = s1;
			getline(f1, s1, '\n');
			st2 = s1;
			getline(f1, s1, '\n');
			if (gcnew String(class_name.c_str()) != user_class) c = false;
			if (!c || t1->tm_wday != now->tm_wday) c = false;
			if (!c || !(t1->tm_year < now->tm_year || t1->tm_yday <= now->tm_yday)) c = false;
			if (!c || !(t2->tm_year > now->tm_year || t2->tm_yday >= now->tm_yday)) c = false;
			if (!c || !(st1 <= hour && hour <= st2)) c = false;
			if (c)
			{
				checkinStudent(path, dmy);
				MessageBox::Show(this, "CHECK-IN SUCCESSFULLY!", "", MessageBoxButtons::OK);
				break;
			}
		}
		if (!c) MessageBox::Show(this, "CHECK-IN NOT SUCCESSFULLY!", "WARNING", MessageBoxButtons::OK);
		f1.close();*/
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		panelLecturer->Visible = false;
		panelSchedule->Visible = false;
		panelScore->Visible = false;
		panelCheckIn->Visible = false;
		panelClassList->Visible = false;
		panelProfile->Visible = false;
		panelCourse->Visible = false;
	}
	};
}
