#pragma once
#include <map>
#include <string>
#include <fstream>
#include <sstream>

#include <msclr/marshal_cppstd.h>


namespace check {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		public: ref class classInfo
		{
			public: String^ name, ^ detail;
		};
		public: ref class userInfo
		{
			public: String^ fullName, ^ dob, ^ email, ^ userid, ^ userpass, ^ cls;
		};
		public: ref class checkinInfo
		{
			public: String^ No, ^ IdSubject, ^ Subject;
		};
	public:
		MyForm(void)
		{
			InitializeComponent();
			openPanel(MenuPanel);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ MenuPanel;
	protected:
	private: System::Windows::Forms::Button^ Checkin;
	private: System::Windows::Forms::Panel^ CheckinPanel;
	private: System::Windows::Forms::DataGridView^ dgvCheckinList;
	private: System::Windows::Forms::ContextMenuStrip^ Rightclick;












	private: System::Windows::Forms::ToolStripMenuItem^ addToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ removeToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvCheckinListNo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvCheckinListIdSubject;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvCheckinListSubject;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Day1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Day2;






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
			this->MenuPanel = (gcnew System::Windows::Forms::Panel());
			this->Checkin = (gcnew System::Windows::Forms::Button());
			this->CheckinPanel = (gcnew System::Windows::Forms::Panel());
			this->dgvCheckinList = (gcnew System::Windows::Forms::DataGridView());
			this->dgvCheckinListNo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvCheckinListIdSubject = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvCheckinListSubject = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Day1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Day2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Rightclick = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuPanel->SuspendLayout();
			this->CheckinPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCheckinList))->BeginInit();
			this->Rightclick->SuspendLayout();
			this->SuspendLayout();
			// 
			// MenuPanel
			// 
			this->MenuPanel->Controls->Add(this->Checkin);
			this->MenuPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->MenuPanel->Location = System::Drawing::Point(0, 0);
			this->MenuPanel->Name = L"MenuPanel";
			this->MenuPanel->Size = System::Drawing::Size(227, 503);
			this->MenuPanel->TabIndex = 0;
			// 
			// Checkin
			// 
			this->Checkin->Location = System::Drawing::Point(0, 145);
			this->Checkin->Name = L"Checkin";
			this->Checkin->Size = System::Drawing::Size(227, 103);
			this->Checkin->TabIndex = 0;
			this->Checkin->Text = L"Check-in result";
			this->Checkin->UseVisualStyleBackColor = true;
			this->Checkin->Click += gcnew System::EventHandler(this, &MyForm::Checkin_Click);
			// 
			// CheckinPanel
			// 
			this->CheckinPanel->Controls->Add(this->dgvCheckinList);
			this->CheckinPanel->Location = System::Drawing::Point(233, 0);
			this->CheckinPanel->Name = L"CheckinPanel";
			this->CheckinPanel->Size = System::Drawing::Size(1088, 452);
			this->CheckinPanel->TabIndex = 1;
			// 
			// dgvCheckinList
			// 
			this->dgvCheckinList->AllowUserToAddRows = false;
			this->dgvCheckinList->AllowUserToDeleteRows = false;
			this->dgvCheckinList->AllowUserToOrderColumns = true;
			this->dgvCheckinList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCheckinList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dgvCheckinListNo,
					this->dgvCheckinListIdSubject, this->dgvCheckinListSubject, this->Day1, this->Day2
			});
			this->dgvCheckinList->Location = System::Drawing::Point(0, 78);
			this->dgvCheckinList->Name = L"dgvCheckinList";
			this->dgvCheckinList->RowHeadersWidth = 51;
			this->dgvCheckinList->RowTemplate->Height = 24;
			this->dgvCheckinList->Size = System::Drawing::Size(1135, 425);
			this->dgvCheckinList->TabIndex = 0;
			// 
			// dgvCheckinListNo
			// 
			this->dgvCheckinListNo->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->dgvCheckinListNo->HeaderText = L"No";
			this->dgvCheckinListNo->MinimumWidth = 6;
			this->dgvCheckinListNo->Name = L"dgvCheckinListNo";
			this->dgvCheckinListNo->ToolTipText = L"Add";
			this->dgvCheckinListNo->Width = 55;
			// 
			// dgvCheckinListIdSubject
			// 
			this->dgvCheckinListIdSubject->HeaderText = L"ID Subject";
			this->dgvCheckinListIdSubject->MinimumWidth = 6;
			this->dgvCheckinListIdSubject->Name = L"dgvCheckinListIdSubject";
			this->dgvCheckinListIdSubject->Width = 250;
			// 
			// dgvCheckinListSubject
			// 
			this->dgvCheckinListSubject->HeaderText = L"Subject";
			this->dgvCheckinListSubject->MinimumWidth = 6;
			this->dgvCheckinListSubject->Name = L"dgvCheckinListSubject";
			this->dgvCheckinListSubject->Width = 350;
			// 
			// Day1
			// 
			this->Day1->HeaderText = L"24/05/2020";
			this->Day1->MinimumWidth = 6;
			this->Day1->Name = L"Day1";
			this->Day1->Width = 125;
			// 
			// Day2
			// 
			this->Day2->HeaderText = L"26/05/2020";
			this->Day2->MinimumWidth = 6;
			this->Day2->Name = L"Day2";
			this->Day2->Width = 125;
			// 
			// Rightclick
			// 
			this->Rightclick->ImageScalingSize = System::Drawing::Size(20, 20);
			this->Rightclick->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addToolStripMenuItem,
					this->removeToolStripMenuItem
			});
			this->Rightclick->Name = L"contextMenuStrip1";
			this->Rightclick->Size = System::Drawing::Size(133, 52);
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(132, 24);
			this->addToolStripMenuItem->Text = L"Add";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addToolStripMenuItem_Click);
			// 
			// removeToolStripMenuItem
			// 
			this->removeToolStripMenuItem->Name = L"removeToolStripMenuItem";
			this->removeToolStripMenuItem->Size = System::Drawing::Size(132, 24);
			this->removeToolStripMenuItem->Text = L"Remove";
			this->removeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::removeToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1363, 503);
			this->Controls->Add(this->CheckinPanel);
			this->Controls->Add(this->MenuPanel);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->MenuPanel->ResumeLayout(false);
			this->CheckinPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCheckinList))->EndInit();
			this->Rightclick->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion


		int panelCheckinList_load = 0, user = 1;
		void dgvCheckinListLoad()
		{
			std::ifstream f;
			std::string s;
			int x = 0;
			dgvCheckinList->Rows->Clear();
			f.open("checkin_list.txt");
			getline(f, s, '\n');
			while (f.good())
			{
				dgvCheckinList->Rows->Add();
				dgvCheckinList->Rows[x]->Cells[0]->Value = x + 1;
				getline(f, s, '\n');
				dgvCheckinList->Rows[x]->Cells[1]->Value = gcnew String(s.c_str());
				getline(f, s, '\n');
				dgvCheckinList->Rows[x]->Cells[2]->Value = gcnew String(s.c_str());
				getline(f, s, '\n');
				dgvCheckinList->Rows[x]->Cells[3]->Value = gcnew String(s.c_str());
				getline(f, s, '\n');

				if (dgvCheckinList->Rows[x]->Cells[3]->Value == "")
				{
					dgvCheckinList->Rows[x]->Cells[3]->Style->BackColor = Color::Red;
				}
				dgvCheckinList->Rows[x]->Cells[4]->Value = gcnew String(s.c_str());
				x++;
			}
			f.close();
		}

		void openPanel(Panel^ tmp) //hide all panels and open 1 panel
		{
			if (tmp->Visible) return;
			CheckinPanel->Visible = false;
			MenuPanel->Visible = true;
			tmp->Dock = DockStyle(5);
			tmp->Visible = true;
			tmp->Focus();
			tmp->Select();
		}

		void showDataPanel() 
		{
			
			openPanel(CheckinPanel);
			
		}
	// show panel

		
	private: System::Void Checkin_Click(System::Object^ sender, System::EventArgs^ e) {
		showDataPanel();
		CheckinPanel->Select();

		dgvCheckinListLoad();
	}

	
	private: System::Void addToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		dgvCheckinList->Rows->Add();
		dgvCheckinList->Rows[dgvCheckinList->RowCount - 1]->Cells[0]->Value = "";
		dgvCheckinList->Rows[dgvCheckinList->RowCount - 1]->Cells[1]->Value = "";
		dgvCheckinList->Rows[dgvCheckinList->RowCount - 1]->Cells[2]->Value = "";
		dgvCheckinList->ClearSelection();
		dgvCheckinList->Rows[dgvCheckinList->RowCount - 1]->Cells[0]->Value = dgvCheckinList->RowCount;
	}



	private: System::Void removeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			System::Windows::Forms::DialogResult d = MessageBox::Show(this, "Do you want to remove course "
				+ dgvCheckinList->SelectedCells[1]->Value + "?", "WARNING!", MessageBoxButtons::YesNo);
			if (d == System::Windows::Forms::DialogResult::Yes)
			{
				dgvCheckinList->Rows->RemoveAt(dgvCheckinList->SelectedCells[0]->RowIndex);
				for (int i = 0; i < dgvCheckinList->RowCount; i++)
					dgvCheckinList->Rows[i]->Cells[0]->Value = i + 1;
				dgvCheckinList->Focus();
			}
		}
		catch (Exception^ ex)
		{
			return;
		}
	}
};
}
