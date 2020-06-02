#pragma once
#include <fstream>
#include <sstream>
#include <string>
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
	/// Summary for changeClassForm
	/// </summary>
	public ref class changeClassForm : public System::Windows::Forms::Form
	{
	public: String^ sid, ^ sclass;
		  DataGridViewRow^ r;
	private: System::Windows::Forms::DataGridView^ dgvClassList;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvClassNo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column29;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column30;
	private: System::Windows::Forms::Label^ lbChange;
	public: int change = 0;
	public:
		changeClassForm(String^ s1, String^ s2, DataGridView^ dgv, DataGridViewRow^ dgvr)
		{
			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			r = dgvr;
			sid = s1;
			sclass = s2;
			lbChange->Text = "Change Student " + s1 + " from Class " + s2 + " to: ";
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
			dgvClassList->ClearSelection();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~changeClassForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	protected:

	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dgvClassList = (gcnew System::Windows::Forms::DataGridView());
			this->dgvClassNo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lbChange = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClassList))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvClassList
			// 
			this->dgvClassList->AllowUserToAddRows = false;
			this->dgvClassList->AllowUserToDeleteRows = false;
			this->dgvClassList->AllowUserToResizeColumns = false;
			this->dgvClassList->AllowUserToResizeRows = false;
			this->dgvClassList->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->dgvClassList->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvClassList->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvClassList->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvClassList->ColumnHeadersHeight = 30;
			this->dgvClassList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvClassList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dgvClassNo,
					this->Column29, this->Column30
			});
			this->dgvClassList->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dgvClassList->EnableHeadersVisualStyles = false;
			this->dgvClassList->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvClassList->Location = System::Drawing::Point(0, 90);
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
			this->dgvClassList->Size = System::Drawing::Size(734, 278);
			this->dgvClassList->TabIndex = 4;
			this->dgvClassList->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &changeClassForm::dgvClassList_CellClick);
			// 
			// dgvClassNo
			// 
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::MidnightBlue;
			this->dgvClassNo->DefaultCellStyle = dataGridViewCellStyle2;
			this->dgvClassNo->HeaderText = L"No";
			this->dgvClassNo->Name = L"dgvClassNo";
			this->dgvClassNo->ReadOnly = true;
			this->dgvClassNo->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvClassNo->Width = 50;
			// 
			// Column29
			// 
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::MidnightBlue;
			this->Column29->DefaultCellStyle = dataGridViewCellStyle3;
			this->Column29->HeaderText = L"CLASS NAME";
			this->Column29->Name = L"Column29";
			this->Column29->ReadOnly = true;
			this->Column29->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column29->Width = 150;
			// 
			// Column30
			// 
			this->Column30->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::MidnightBlue;
			this->Column30->DefaultCellStyle = dataGridViewCellStyle4;
			this->Column30->HeaderText = L"DETAIL";
			this->Column30->Name = L"Column30";
			this->Column30->ReadOnly = true;
			this->Column30->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// lbChange
			// 
			this->lbChange->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbChange->ForeColor = System::Drawing::SystemColors::Control;
			this->lbChange->Location = System::Drawing::Point(12, 9);
			this->lbChange->Name = L"lbChange";
			this->lbChange->Size = System::Drawing::Size(710, 78);
			this->lbChange->TabIndex = 5;
			this->lbChange->Text = L"label1";
			this->lbChange->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// changeClassForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->ClientSize = System::Drawing::Size(734, 368);
			this->Controls->Add(this->lbChange);
			this->Controls->Add(this->dgvClassList);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"changeClassForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CHANGE CLASS";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClassList))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dgvClassList_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try
		{
			if (dgvClassList->Rows[e->RowIndex]->Cells[1]->Value->ToString() == sclass)
				MessageBox::Show(this, "CAN NOT MOVE TO THE SAME CLASS", "WARNING!");
			else
			{
				System::Windows::Forms::DialogResult d =
					MessageBox::Show(this, "Move to Class " + dgvClassList->Rows[e->RowIndex]->Cells[1]->Value->ToString() + "?", "WARNING!", MessageBoxButtons::YesNo);
				if (d == System::Windows::Forms::DialogResult::Yes)
				{
					change = 1;
					MessageBox::Show(this, "Move to Class " + dgvClassList->Rows[e->RowIndex]->Cells[1]->Value->ToString()
						+ " successfully", "Notification");
					std::ifstream fin;
					fin.open(msclr::interop::marshal_as<std::string>(dgvClassList->Rows[e->RowIndex]->Cells[1]->Value->ToString()) + ".l");
					std::ostringstream s;
					s << fin.rdbuf();
					fin.close();
					std::ofstream fout;
					fout.open(msclr::interop::marshal_as<std::string>(dgvClassList->Rows[e->RowIndex]->Cells[1]->Value->ToString()) + ".l");
					fout << s.str();
					fout << endl;
					fout <<
						msclr::interop::marshal_as<std::string>(r->Cells[0]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(r->Cells[1]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(r->Cells[2]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(r->Cells[3]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(r->Cells[4]->Value->ToString()) << endl <<
						msclr::interop::marshal_as<std::string>(r->Cells[5]->Value->ToString()->Remove(5, 1)->Remove(2, 1));
					fout.close();
				}
			}
		}
		catch (Exception^ ex)
		{

		}
	}
};
}
