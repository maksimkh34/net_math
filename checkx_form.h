#pragma once
#include <sstream>
#include <msclr\marshal_cppstd.h>
#include <string>

float getint(System::Windows::Forms::TextBox^ tb);

bool checkx(float x, float a, float b, float c);

namespace netmath {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для checkx_form
	/// </summary>
	public ref class checkx_form : public System::Windows::Forms::Form
	{
	public:
		checkx_form(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~checkx_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tb_x1;
	private: System::Windows::Forms::TextBox^ tb_x2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tb_a;
	private: System::Windows::Forms::TextBox^ tb_b;
	private: System::Windows::Forms::TextBox^ tb_c;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tb_funct;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tb_result;
	private: System::Windows::Forms::Button^ check_bt;
	private: System::Windows::Forms::Button^ exit_bt;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tb_x1 = (gcnew System::Windows::Forms::TextBox());
			this->tb_x2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tb_a = (gcnew System::Windows::Forms::TextBox());
			this->tb_b = (gcnew System::Windows::Forms::TextBox());
			this->tb_c = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tb_funct = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tb_result = (gcnew System::Windows::Forms::TextBox());
			this->check_bt = (gcnew System::Windows::Forms::Button());
			this->exit_bt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"x1";
			// 
			// tb_x1
			// 
			this->tb_x1->Location = System::Drawing::Point(12, 28);
			this->tb_x1->Name = L"tb_x1";
			this->tb_x1->Size = System::Drawing::Size(104, 22);
			this->tb_x1->TabIndex = 1;
			// 
			// tb_x2
			// 
			this->tb_x2->Location = System::Drawing::Point(122, 28);
			this->tb_x2->Name = L"tb_x2";
			this->tb_x2->Size = System::Drawing::Size(100, 22);
			this->tb_x2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(119, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"x2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"a";
			// 
			// tb_a
			// 
			this->tb_a->Location = System::Drawing::Point(12, 73);
			this->tb_a->Name = L"tb_a";
			this->tb_a->Size = System::Drawing::Size(66, 22);
			this->tb_a->TabIndex = 5;
			// 
			// tb_b
			// 
			this->tb_b->Location = System::Drawing::Point(84, 73);
			this->tb_b->Name = L"tb_b";
			this->tb_b->Size = System::Drawing::Size(66, 22);
			this->tb_b->TabIndex = 6;
			// 
			// tb_c
			// 
			this->tb_c->Location = System::Drawing::Point(156, 73);
			this->tb_c->Name = L"tb_c";
			this->tb_c->Size = System::Drawing::Size(66, 22);
			this->tb_c->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(84, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"b";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(153, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"c";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 132);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(142, 16);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Введенная функция:";
			// 
			// tb_funct
			// 
			this->tb_funct->Location = System::Drawing::Point(12, 151);
			this->tb_funct->Name = L"tb_funct";
			this->tb_funct->Size = System::Drawing::Size(210, 22);
			this->tb_funct->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(8, 177);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Результат";
			// 
			// tb_result
			// 
			this->tb_result->Location = System::Drawing::Point(13, 196);
			this->tb_result->Name = L"tb_result";
			this->tb_result->Size = System::Drawing::Size(209, 22);
			this->tb_result->TabIndex = 13;
			// 
			// check_bt
			// 
			this->check_bt->Location = System::Drawing::Point(11, 101);
			this->check_bt->Name = L"check_bt";
			this->check_bt->Size = System::Drawing::Size(209, 28);
			this->check_bt->TabIndex = 14;
			this->check_bt->Text = L"Проверить";
			this->check_bt->UseVisualStyleBackColor = true;
			this->check_bt->Click += gcnew System::EventHandler(this, &checkx_form::check_bt_Click);
			// 
			// exit_bt
			// 
			this->exit_bt->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->exit_bt->Location = System::Drawing::Point(11, 224);
			this->exit_bt->Name = L"exit_bt";
			this->exit_bt->Size = System::Drawing::Size(211, 35);
			this->exit_bt->TabIndex = 15;
			this->exit_bt->Text = L"Выйти";
			this->exit_bt->UseVisualStyleBackColor = true;
			this->exit_bt->Click += gcnew System::EventHandler(this, &checkx_form::exit_bt_Click);
			// 
			// checkx_form
			// 
			this->AcceptButton = this->check_bt;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->exit_bt;
			this->ClientSize = System::Drawing::Size(233, 271);
			this->Controls->Add(this->exit_bt);
			this->Controls->Add(this->check_bt);
			this->Controls->Add(this->tb_result);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tb_funct);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tb_c);
			this->Controls->Add(this->tb_b);
			this->Controls->Add(this->tb_a);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tb_x2);
			this->Controls->Add(this->tb_x1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"checkx_form";
			this->Text = L"checkx_form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void check_bt_Click(System::Object^ sender, System::EventArgs^ e) {
	float x1 = getint(tb_x1);
	float x2 = getint(tb_x2);

	float a = getint(tb_a);
	float b = getint(tb_b);
	float c = getint(tb_c);

	String^ funct = "";
	funct += a + "x^2";
	if (b > 0) funct += " + " + b + "x";
	if (b < 0) funct += " - " + -1*b + "x";
	if (c > 0) funct += " + " + c;
	if (c < 0) funct += " - " + -1*c;

	tb_funct->Text = funct;

	if (checkx(x1, a, b, c)) tb_result->Text += "x1: подходит; ";
	else tb_result->Text += "x1: не подходит; ";

	if (checkx(x2, a, b, c)) tb_result->Text += "x2: подходит; ";
	else tb_result->Text += "x2: не подходит; ";
}

private: System::Void exit_bt_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
