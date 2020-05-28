#pragma once

namespace StudentManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for attendanceForm
	/// </summary>
	public ref class attendanceForm : public System::Windows::Forms::Form
	{
	public:
		attendanceForm(void)
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
		~attendanceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dateChoose;
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
			this->dateChoose = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// dateChoose
			// 
			this->dateChoose->Location = System::Drawing::Point(500, 27);
			this->dateChoose->Name = L"dateChoose";
			this->dateChoose->Size = System::Drawing::Size(200, 20);
			this->dateChoose->TabIndex = 0;
			// 
			// attendanceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(712, 348);
			this->Controls->Add(this->dateChoose);
			this->Name = L"attendanceForm";
			this->Text = L"attendanceForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
