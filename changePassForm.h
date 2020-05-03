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

	private: System::Windows::Forms::TextBox^ tb2ndPass;

	private: System::Windows::Forms::Button^ btAcc;
	private: System::Windows::Forms::Button^ btCancel;
	private: System::Windows::Forms::TextBox^ tbNoti;
	private: System::Windows::Forms::Button^ btOk;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::PictureBox^ pictureBox2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(changePassForm::typeid));
			this->tb1stPass = (gcnew System::Windows::Forms::TextBox());
			this->tb2ndPass = (gcnew System::Windows::Forms::TextBox());
			this->btAcc = (gcnew System::Windows::Forms::Button());
			this->btCancel = (gcnew System::Windows::Forms::Button());
			this->tbNoti = (gcnew System::Windows::Forms::TextBox());
			this->btOk = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// tb1stPass
			// 
			this->tb1stPass->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb1stPass->Location = System::Drawing::Point(325, 62);
			this->tb1stPass->Margin = System::Windows::Forms::Padding(4);
			this->tb1stPass->Name = L"tb1stPass";
			this->tb1stPass->Size = System::Drawing::Size(212, 33);
			this->tb1stPass->TabIndex = 0;
			this->tb1stPass->TextChanged += gcnew System::EventHandler(this, &changePassForm::tb1stPass_TextChanged);
			// 
			// tb2ndPass
			// 
			this->tb2ndPass->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb2ndPass->Location = System::Drawing::Point(325, 133);
			this->tb2ndPass->Margin = System::Windows::Forms::Padding(4);
			this->tb2ndPass->Name = L"tb2ndPass";
			this->tb2ndPass->Size = System::Drawing::Size(212, 33);
			this->tb2ndPass->TabIndex = 0;
			this->tb2ndPass->TextChanged += gcnew System::EventHandler(this, &changePassForm::tb2ndPass_TextChanged);
			// 
			// btAcc
			// 
			this->btAcc->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btAcc->Location = System::Drawing::Point(389, 236);
			this->btAcc->Margin = System::Windows::Forms::Padding(4);
			this->btAcc->Name = L"btAcc";
			this->btAcc->Size = System::Drawing::Size(100, 28);
			this->btAcc->TabIndex = 2;
			this->btAcc->Text = L"Accept";
			this->btAcc->UseVisualStyleBackColor = true;
			this->btAcc->Click += gcnew System::EventHandler(this, &changePassForm::btAcc_Click);
			// 
			// btCancel
			// 
			this->btCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btCancel->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btCancel->Location = System::Drawing::Point(497, 236);
			this->btCancel->Margin = System::Windows::Forms::Padding(4);
			this->btCancel->Name = L"btCancel";
			this->btCancel->Size = System::Drawing::Size(100, 28);
			this->btCancel->TabIndex = 2;
			this->btCancel->Text = L"Cancel";
			this->btCancel->UseVisualStyleBackColor = true;
			// 
			// tbNoti
			// 
			this->tbNoti->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbNoti->Location = System::Drawing::Point(172, 185);
			this->tbNoti->Margin = System::Windows::Forms::Padding(4);
			this->tbNoti->Name = L"tbNoti";
			this->tbNoti->Size = System::Drawing::Size(290, 33);
			this->tbNoti->TabIndex = 3;
			// 
			// btOk
			// 
			this->btOk->Font = (gcnew System::Drawing::Font(L"Montserrat", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btOk->Location = System::Drawing::Point(281, 236);
			this->btOk->Margin = System::Windows::Forms::Padding(4);
			this->btOk->Name = L"btOk";
			this->btOk->Size = System::Drawing::Size(100, 28);
			this->btOk->TabIndex = 4;
			this->btOk->Text = L"OK";
			this->btOk->UseVisualStyleBackColor = true;
			this->btOk->Visible = false;
			this->btOk->Click += gcnew System::EventHandler(this, &changePassForm::btOk_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(115, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 26);
			this->label1->TabIndex = 5;
			this->label1->Text = L"New Password:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(115, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 26);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Type Again:";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(544, 133);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(36, 33);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// changePassForm
			// 
			this->AcceptButton = this->btAcc;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->CancelButton = this->btCancel;
			this->ClientSize = System::Drawing::Size(647, 309);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btOk);
			this->Controls->Add(this->tbNoti);
			this->Controls->Add(this->btCancel);
			this->Controls->Add(this->btAcc);
			this->Controls->Add(this->tb2ndPass);
			this->Controls->Add(this->tb1stPass);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"changePassForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"changePassForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
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




	private: System::Void tb2ndPass_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		tb2ndPass->PasswordChar = '*';
	}
	
	private: System::Void tb1stPass_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		tb1stPass->PasswordChar = '*';
	}
};
}
