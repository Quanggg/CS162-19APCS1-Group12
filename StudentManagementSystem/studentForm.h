#pragma once
#include <fstream>
#include <msclr/marshal_cppstd.h>
namespace StudentManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;
	/// <summary>
	/// Summary for studentForm
	/// </summary>
	public ref class studentForm : public System::Windows::Forms::Form
	{
	public:
		studentForm(String^ s)
		{
			InitializeComponent();
			this->Text = s;
			classname = s;
			dgvStudentListLoad();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListNo;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListLastname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListFirstname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListGender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListDob;
		   String^ classname;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~studentForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	private: System::Windows::Forms::ContextMenuStrip^ dgvStudentListMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ addNewStudentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ removeToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dgvStudentList;






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
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dgvStudentListMenu = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->addNewStudentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dgvStudentList = (gcnew System::Windows::Forms::DataGridView());
			this->dgvStudentListNo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListLastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListFirstname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListGender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListDob = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStudentList))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvStudentListMenu
			// 
			this->dgvStudentListMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addNewStudentToolStripMenuItem,
					this->removeToolStripMenuItem
			});
			this->dgvStudentListMenu->Name = L"dgvStudentListMenu";
			this->dgvStudentListMenu->Size = System::Drawing::Size(166, 48);
			// 
			// addNewStudentToolStripMenuItem
			// 
			this->addNewStudentToolStripMenuItem->Name = L"addNewStudentToolStripMenuItem";
			this->addNewStudentToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->addNewStudentToolStripMenuItem->Text = L"Add new Student";
			this->addNewStudentToolStripMenuItem->Click += gcnew System::EventHandler(this, &studentForm::addNewStudentToolStripMenuItem_Click);
			// 
			// removeToolStripMenuItem
			// 
			this->removeToolStripMenuItem->Name = L"removeToolStripMenuItem";
			this->removeToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->removeToolStripMenuItem->Text = L"Remove";
			this->removeToolStripMenuItem->Click += gcnew System::EventHandler(this, &studentForm::removeToolStripMenuItem_Click);
			// 
			// dgvStudentList
			// 
			this->dgvStudentList->AllowUserToAddRows = false;
			this->dgvStudentList->AllowUserToDeleteRows = false;
			this->dgvStudentList->AllowUserToResizeColumns = false;
			this->dgvStudentList->AllowUserToResizeRows = false;
			this->dgvStudentList->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->dgvStudentList->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvStudentList->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvStudentList->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvStudentList->ColumnHeadersHeight = 30;
			this->dgvStudentList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvStudentList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dgvStudentListNo,
					this->dgvStudentListID, this->dgvStudentListLastname, this->dgvStudentListFirstname, this->dgvStudentListGender, this->dgvStudentListDob
			});
			this->dgvStudentList->ContextMenuStrip = this->dgvStudentListMenu;
			this->dgvStudentList->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dgvStudentList->EnableHeadersVisualStyles = false;
			this->dgvStudentList->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvStudentList->Location = System::Drawing::Point(0, 58);
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
			this->dgvStudentList->Size = System::Drawing::Size(814, 353);
			this->dgvStudentList->TabIndex = 3;
			this->dgvStudentList->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &studentForm::dgvStudentList_CellEndEdit);
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
			this->dgvStudentListID->HeaderText = L"STUDENT ID";
			this->dgvStudentListID->Name = L"dgvStudentListID";
			this->dgvStudentListID->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvStudentListID->Width = 130;
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
			// studentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->ClientSize = System::Drawing::Size(814, 411);
			this->Controls->Add(this->dgvStudentList);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"studentForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"studentForm";
			this->dgvStudentListMenu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStudentList))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void dgvStudentListLoad()
		{
			ifstream f(msclr::interop::marshal_as<std::string>(classname->ToString()) + ".l");
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
			dgvStudentList->ClearSelection();
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
				f.open(msclr::interop::marshal_as<std::string>(classname->ToString()) + ".l");
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
	private: System::Void dgvStudentList_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try
		{
			std::ofstream f;
			f.open(msclr::interop::marshal_as<std::string>(classname->ToString()) + ".l");
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
	};
}
