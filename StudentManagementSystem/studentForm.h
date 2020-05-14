#pragma once

namespace StudentManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for studentForm
	/// </summary>
	public ref class studentForm : public System::Windows::Forms::Form
	{
	public:
		studentForm(void)
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
		~studentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvStudentList;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListNo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListLastname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListFirstname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListGender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListDob;
	private: System::Windows::Forms::ContextMenuStrip^ dgvStudentListMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ addNewStudentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ removeToolStripMenuItem;
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
			this->dgvStudentList = (gcnew System::Windows::Forms::DataGridView());
			this->dgvStudentListNo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListLastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListFirstname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListGender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListDob = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListMenu = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->addNewStudentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStudentList))->BeginInit();
			this->dgvStudentListMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvStudentList
			// 
			this->dgvStudentList->AllowUserToAddRows = false;
			this->dgvStudentList->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgvStudentList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStudentList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dgvStudentListNo,
					this->dgvStudentListID, this->dgvStudentListLastname, this->dgvStudentListFirstname, this->dgvStudentListGender, this->dgvStudentListDob
			});
			this->dgvStudentList->ContextMenuStrip = this->dgvStudentListMenu;
			this->dgvStudentList->Location = System::Drawing::Point(12, 12);
			this->dgvStudentList->Name = L"dgvStudentList";
			this->dgvStudentList->RowHeadersVisible = false;
			this->dgvStudentList->Size = System::Drawing::Size(790, 343);
			this->dgvStudentList->TabIndex = 3;
			this->dgvStudentList->CellMouseDown += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &studentForm::dgvStudentList_CellMouseDown);
			// 
			// dgvStudentListNo
			// 
			this->dgvStudentListNo->HeaderText = L"No";
			this->dgvStudentListNo->Name = L"dgvStudentListNo";
			this->dgvStudentListNo->ReadOnly = true;
			this->dgvStudentListNo->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvStudentListNo->Width = 50;
			// 
			// dgvStudentListID
			// 
			this->dgvStudentListID->HeaderText = L"STUDEN ID";
			this->dgvStudentListID->Name = L"dgvStudentListID";
			this->dgvStudentListID->Resizable = System::Windows::Forms::DataGridViewTriState::False;
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
			// studentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(814, 410);
			this->Controls->Add(this->dgvStudentList);
			this->Name = L"studentForm";
			this->Text = L"studentForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStudentList))->EndInit();
			this->dgvStudentListMenu->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void addNewStudentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		dgvStudentList->Rows->Add();
		dgvStudentList->Rows[dgvStudentList->RowCount - 1]->Cells[0]->Value = dgvStudentList->RowCount;
	}
	private: System::Void removeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			System::Windows::Forms::DialogResult d = MessageBox::Show(this, "Do you want to remove student "
				+ dgvStudentList->SelectedCells[1]->Value + "?", "WARNING!", MessageBoxButtons::YesNo);
			if (d == System::Windows::Forms::DialogResult::Yes)
			{
				dgvStudentList->Rows->RemoveAt(dgvStudentList->SelectedCells[0]->RowIndex);
				for (int i = 0; i < dgvStudentList->RowCount; i++)
					dgvStudentList->Rows[i]->Cells[0]->Value = i + 1;
				dgvStudentList->Focus();
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
	};
}
