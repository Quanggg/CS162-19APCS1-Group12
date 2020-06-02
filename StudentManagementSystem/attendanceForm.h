#pragma once
#include <msclr/marshal_cppstd.h>
#include <fstream>
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
	/// Summary for attendanceForm
	/// </summary>
	public ref class attendanceForm : public System::Windows::Forms::Form
	{
	public:
		attendanceForm(String ^s)
		{
			InitializeComponent();
			classname = s;
			this->Text = s;
			dgvAttLoad();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	public:
	private: System::Windows::Forms::ToolStripMenuItem^ exportToCSVFileToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListNo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListLastname;
	public: String^ classname;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~attendanceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvAtt;
	protected:



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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dgvAtt = (gcnew System::Windows::Forms::DataGridView());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->exportToCSVFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dgvStudentListNo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListLastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAtt))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvAtt
			// 
			this->dgvAtt->AllowUserToAddRows = false;
			this->dgvAtt->AllowUserToDeleteRows = false;
			this->dgvAtt->AllowUserToResizeColumns = false;
			this->dgvAtt->AllowUserToResizeRows = false;
			this->dgvAtt->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->dgvAtt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvAtt->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvAtt->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvAtt->ColumnHeadersHeight = 30;
			this->dgvAtt->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvAtt->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dgvStudentListNo,
					this->dgvStudentListID, this->dgvStudentListLastname
			});
			this->dgvAtt->ContextMenuStrip = this->contextMenuStrip1;
			this->dgvAtt->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dgvAtt->EnableHeadersVisualStyles = false;
			this->dgvAtt->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvAtt->Location = System::Drawing::Point(0, 58);
			this->dgvAtt->MultiSelect = false;
			this->dgvAtt->Name = L"dgvAtt";
			this->dgvAtt->RowHeadersVisible = false;
			this->dgvAtt->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->dgvAtt->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->dgvAtt->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvAtt->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::Control;
			this->dgvAtt->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			this->dgvAtt->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->dgvAtt->RowTemplate->Height = 25;
			this->dgvAtt->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvAtt->Size = System::Drawing::Size(819, 353);
			this->dgvAtt->TabIndex = 5;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exportToCSVFileToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(166, 26);
			// 
			// exportToCSVFileToolStripMenuItem
			// 
			this->exportToCSVFileToolStripMenuItem->Name = L"exportToCSVFileToolStripMenuItem";
			this->exportToCSVFileToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->exportToCSVFileToolStripMenuItem->Text = L"Export to CSV file";
			this->exportToCSVFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &attendanceForm::exportToCSVFileToolStripMenuItem_Click);
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
			this->dgvStudentListID->HeaderText = L"STUDENT ID";
			this->dgvStudentListID->Name = L"dgvStudentListID";
			this->dgvStudentListID->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvStudentListID->Width = 130;
			// 
			// dgvStudentListLastname
			// 
			this->dgvStudentListLastname->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dgvStudentListLastname->HeaderText = L"STUDENT NAME";
			this->dgvStudentListLastname->Name = L"dgvStudentListLastname";
			this->dgvStudentListLastname->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvStudentListLastname->Width = 250;
			// 
			// attendanceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->ClientSize = System::Drawing::Size(819, 411);
			this->Controls->Add(this->dgvAtt);
			this->Name = L"attendanceForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"attendanceForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAtt))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		void dgvAttLoad()
		{
			std::ifstream f(msclr::interop::marshal_as<std::string>(classname->ToString()) + ".l");
			dgvAtt->Rows->Clear();
			int x = 0;
			std::string s;
			getline(f, s, '\n');
			while (f.good())
			{
				getline(f, s, '\n');
				dgvAtt->Rows->Add();
				dgvAtt->Rows[x]->Cells[0]->Value = x + 1;
				getline(f, s, '\n');
				dgvAtt->Rows[x]->Cells[1]->Value = gcnew String(s.c_str());
				getline(f, s, '\n');
				dgvAtt->Rows[x]->Cells[2]->Value = gcnew String(s.c_str());
				getline(f, s, '\n');
				dgvAtt->Rows[x]->Cells[2]->Value += " " + gcnew String(s.c_str());
				getline(f, s, '\n');
				getline(f, s, '\n');
				x++;
			}
			f.close();
			f.open(msclr::interop::marshal_as<std::string>(classname->ToString()) + "_att.l");
			int i = 3;
			getline(f, s, '\n');
			while (f.good())
			{
				getline(f, s, '\n');
				s.insert(2, "/").insert(5, "/");
				dgvAtt->Columns->Add("col" + i, gcnew String(s.c_str()));
				dgvAtt->Columns[i]->MinimumWidth = 130;
				f >> x;
				int* a = new int[x]{ 0 };
				for (int j = 0; j < x; j++)
				{
					f >> a[j];
				}
				f.ignore(1);
				for (int j = 0; j < dgvAtt->RowCount; j++)
				{
					int k = int::Parse(dgvAtt->Rows[j]->Cells[1]->Value->ToString());
					for (int p = 0; p < x; p++)
						if (k == a[p])
						{
							k = -1;
							break;
						}
					if (k > 0)
					{
						dgvAtt->Rows[j]->Cells[i]->Style->BackColor = Color::Red;
						dgvAtt->Rows[j]->Cells[i]->Style->Alignment = DataGridViewContentAlignment(32);
						dgvAtt->Rows[j]->Cells[i]->Value = "X";
					}
				}
				i++;
				delete[] a;
			}
			f.close();
			dgvAtt->ClearSelection();
		}
	private: System::Void exportToCSVFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ofstream f(msclr::interop::marshal_as<std::string>(classname->ToString()) + "_attendance.csv");
		for (int i = 0; i < dgvAtt->ColumnCount; i++)
			if (i < dgvAtt->ColumnCount - 1) f << msclr::interop::marshal_as<std::string>(dgvAtt->Columns[i]->HeaderText->ToString()) << ",";
			else  f << msclr::interop::marshal_as<std::string>(dgvAtt->Columns[i]->HeaderText->ToString());
		for (int i = 0; i < dgvAtt->RowCount; i++)
		{
			f << endl;
			for (int j = 0; j < dgvAtt->ColumnCount; j++)
			{
				if (dgvAtt->Rows[i]->Cells[j]->Value == nullptr) f << "yes";
				else if (dgvAtt->Rows[i]->Cells[j]->Value == "X") f << "no";
				else f << msclr::interop::marshal_as<std::string>(dgvAtt->Rows[i]->Cells[j]->Value->ToString());
				if (j < dgvAtt->ColumnCount - 1) f << ",";
			}
		}
		f.close();
	}
};
}
