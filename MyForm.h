#pragma once
#include<iostream>
#include<fstream>
#include "MyForm1.h"
namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(379, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(336, 37);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Giao diện đăng nhập";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(397, 279);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 36);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Đăng nhập";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(213, 226);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 25);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Mật khẩu";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(188, 185);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 25);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Tên đăng nhập";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(361, 227);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(377, 26);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(361, 184);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(377, 26);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(110, 43);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1325, 717);
			this->panel1->TabIndex = 12;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(130, 360);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(930, 573);
			this->panel2->TabIndex = 13;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(390, 245);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(377, 26);
			this->textBox3->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(408, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(293, 37);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Giao diện đăng ký";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(390, 202);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(377, 26);
			this->textBox4->TabIndex = 12;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(483, 297);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 36);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Đăng ký";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(217, 203);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(158, 25);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Tên đăng nhập";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(242, 244);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(101, 25);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Mật khẩu";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(567, 279);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(164, 36);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Đăng ký";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1521, 807);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		char* ConvertSystemStringToStdString(System::String^ systemString) {
			char* temp = new char[systemString->Length+1];
			int n = systemString->Length;
			for (int i = 0; i < n; i++)
			{
				temp[i] = systemString[i];
			}
			temp[n] = '\0';
			return temp;
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length == 0 || textBox2->Text->Length == 0 )
		{
			MessageBox::Show("Nhập thông tin đăng nhập", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		int length = textBox1->Text->Length;
		char* name = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			name[i] = textBox1->Text[i];
		}
		name[length] = '\0';
		length = textBox2->Text->Length;
		char* pass = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			pass[i] = textBox2->Text[i];
		}
		pass[length] = '\0';
		std::ifstream myFile;
		myFile.open("account.txt");
		if (myFile.is_open() == false)
		{
			MessageBox::Show("Fail");
			return;
		}
		char* next_token = nullptr;
		char temp[300];

		while (myFile.getline(temp, 300))
		{
			int check = 0;
			char* token = strtok_s(temp, "|", &next_token);
			if (strcmp(name, token) == 0)
			{
				check++;
			}
			token = strtok_s(nullptr, "|", &next_token);
			if (strcmp(pass, token) == 0)
			{
				check++;
			}
			if (check == 2)
			{
				MessageBox::Show("Nhap chinh xac", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				this->Hide(); // Ẩn form đăng nhập
			CppWinFormsApp1::MyForm1^homepage = gcnew CppWinFormsApp1::MyForm1();
				//homepage->ShowDialog();
				this->Close();
				return;
			}
		}
		MessageBox::Show("Ten dang nhap hoac mat khau khong dung", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Warning);

}
	
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox2->PasswordChar = '*';
	textBox2->UseSystemPasswordChar = true;

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	panel2->Visible = false;
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//Check tính hợp lệ ->Để sau
	panel2->Visible = false;
	std::ofstream dataFile;
	dataFile.open("account.txt",std::ios_base::app);
	if (dataFile.is_open() == false)
	{
		MessageBox::Show("Đăng kí thất bại", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	if (textBox3->Text->Length == 0 || textBox4->Text->Length == 0)
	{
		MessageBox::Show("Nhập thông tin đăng kí", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
	{
			dataFile << ConvertSystemStringToStdString(textBox4->Text) << "|" << ConvertSystemStringToStdString(textBox3->Text) << "\n";
			panel2->Visible = false;
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Visible = true;
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
