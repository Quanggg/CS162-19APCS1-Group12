#pragma once

namespace StudentManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for changePassForm
	/// </summary>
	public ref class changePassForm : public System::Windows::Forms::Form
	{
	public:
		changePassForm(void)
		{
			//mainF = f;
			this->Visible = false;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~changePassForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tb1stPass;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ tb2ndPass;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ btAcc;
	private: System::Windows::Forms::Button^ btCancel;
	private: System::Windows::Forms::TextBox^ tbNoti;
	private: System::Windows::Forms::Button^ btOk;


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
			this->tb1stPass = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->tb2ndPass = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->btAcc = (gcnew System::Windows::Forms::Button());
			this->btCancel = (gcnew System::Windows::Forms::Button());
			this->tbNoti = (gcnew System::Windows::Forms::TextBox());
			this->btOk = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tb1stPass
			// 
			this->tb1stPass->Location = System::Drawing::Point(244, 50);
			this->tb1stPass->Name = L"tb1stPass";
			this->tb1stPass->Size = System::Drawing::Size(100, 20);
			this->tb1stPass->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(96, 49);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"New password";
			// 
			// tb2ndPass
			// 
			this->tb2ndPass->Location = System::Drawing::Point(244, 108);
			this->tb2ndPass->Name = L"tb2ndPass";
			this->tb2ndPass->Size = System::Drawing::Size(100, 20);
			this->tb2ndPass->TabIndex = 0;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(96, 107);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 1;
			this->textBox4->Text = L"Type again";
			// 
			// btAcc
			// 
			this->btAcc->Location = System::Drawing::Point(292, 192);
			this->btAcc->Name = L"btAcc";
			this->btAcc->Size = System::Drawing::Size(75, 23);
			this->btAcc->TabIndex = 2;
			this->btAcc->Text = L"Accept";
			this->btAcc->UseVisualStyleBackColor = true;
			this->btAcc->Click += gcnew System::EventHandler(this, &changePassForm::btAcc_Click);
			// 
			// btCancel
			// 
			this->btCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btCancel->Location = System::Drawing::Point(373, 192);
			this->btCancel->Name = L"btCancel";
			this->btCancel->Size = System::Drawing::Size(75, 23);
			this->btCancel->TabIndex = 2;
			this->btCancel->Text = L"Cancel";
			this->btCancel->UseVisualStyleBackColor = true;
			// 
			// tbNoti
			// 
			this->tbNoti->Location = System::Drawing::Point(208, 148);
			this->tbNoti->Name = L"tbNoti";
			this->tbNoti->Size = System::Drawing::Size(165, 20);
			this->tbNoti->TabIndex = 3;
			// 
			// btOk
			// 
			this->btOk->Location = System::Drawing::Point(211, 191);
			this->btOk->Name = L"btOk";
			this->btOk->Size = System::Drawing::Size(75, 23);
			this->btOk->TabIndex = 4;
			this->btOk->Text = L"OK";
			this->btOk->UseVisualStyleBackColor = true;
			this->btOk->Visible = false;
			this->btOk->Click += gcnew System::EventHandler(this, &changePassForm::btOk_Click);
			// 
			// changePassForm
			// 
			this->AcceptButton = this->btAcc;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btCancel;
			this->ClientSize = System::Drawing::Size(485, 237);
			this->Controls->Add(this->btOk);
			this->Controls->Add(this->tbNoti);
			this->Controls->Add(this->btCancel);
			this->Controls->Add(this->btAcc);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->tb2ndPass);
			this->Controls->Add(this->tb1stPass);
			this->Name = L"changePassForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"changePassForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: String^ newPass;
		private: System::Void btAcc_Click(System::Object^ sender, System::EventArgs^ e) {
			if (tb1stPass->Text == tb2ndPass->Text && tb1stPass->Text != "")
			{
				tbNoti->Text = "Password changed";
				btOk->Visible = true;
				newPass = tb1stPass->Text;
			}
		}
		private: System::Void btOk_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}

};
}
