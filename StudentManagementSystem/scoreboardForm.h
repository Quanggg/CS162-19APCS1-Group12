#pragma once

namespace StudentManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for scoreboardForm
	/// </summary>
	public ref class scoreboardForm : public System::Windows::Forms::Form
	{
	public:
		scoreboardForm(String^ s)
		{
			InitializeComponent();
			classname = s;
			this->Text = s;
			//
			//TODO: Add the constructor code here
			//
		}
	public: String^ classname;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~scoreboardForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvScore;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListNo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListLastname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListGender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvStudentListDob;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
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
			this->dgvScore = (gcnew System::Windows::Forms::DataGridView());
			this->dgvStudentListNo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListLastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListGender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvStudentListDob = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScore))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvScore
			// 
			this->dgvScore->AllowUserToAddRows = false;
			this->dgvScore->AllowUserToDeleteRows = false;
			this->dgvScore->AllowUserToResizeColumns = false;
			this->dgvScore->AllowUserToResizeRows = false;
			this->dgvScore->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->dgvScore->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvScore->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvScore->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvScore->ColumnHeadersHeight = 30;
			this->dgvScore->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvScore->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dgvStudentListNo,
					this->dgvStudentListID, this->dgvStudentListLastname, this->dgvStudentListGender, this->dgvStudentListDob, this->Column1, this->Column2
			});
			this->dgvScore->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dgvScore->EnableHeadersVisualStyles = false;
			this->dgvScore->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvScore->Location = System::Drawing::Point(0, 51);
			this->dgvScore->MultiSelect = false;
			this->dgvScore->Name = L"dgvScore";
			this->dgvScore->RowHeadersVisible = false;
			this->dgvScore->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->dgvScore->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->dgvScore->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvScore->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::Control;
			this->dgvScore->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			this->dgvScore->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->dgvScore->RowTemplate->Height = 25;
			this->dgvScore->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvScore->Size = System::Drawing::Size(796, 353);
			this->dgvScore->TabIndex = 4;
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
			this->dgvStudentListLastname->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dgvStudentListLastname->HeaderText = L"STUDENT NAME";
			this->dgvStudentListLastname->Name = L"dgvStudentListLastname";
			this->dgvStudentListLastname->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// dgvStudentListGender
			// 
			this->dgvStudentListGender->HeaderText = L"MIDTERM";
			this->dgvStudentListGender->Name = L"dgvStudentListGender";
			this->dgvStudentListGender->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// dgvStudentListDob
			// 
			this->dgvStudentListDob->HeaderText = L"FINAL";
			this->dgvStudentListDob->Name = L"dgvStudentListDob";
			this->dgvStudentListDob->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"BONUS";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"TOTAL";
			this->Column2->Name = L"Column2";
			// 
			// scoreboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->ClientSize = System::Drawing::Size(796, 404);
			this->Controls->Add(this->dgvScore);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"scoreboardForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"scoreboardForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScore))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
