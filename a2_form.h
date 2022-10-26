#pragma once
#include "checkx_form.h"
#include "findx_form.h"

namespace netmath {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для a2_form
	/// </summary>
	public ref class a2_form : public System::Windows::Forms::Form
	{
	public:
		a2_form(void)
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
		~a2_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ find_x;
	protected:
	private: System::Windows::Forms::Button^ check_x;

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
			this->find_x = (gcnew System::Windows::Forms::Button());
			this->check_x = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// find_x
			// 
			this->find_x->Location = System::Drawing::Point(13, 13);
			this->find_x->Name = L"find_x";
			this->find_x->Size = System::Drawing::Size(180, 34);
			this->find_x->TabIndex = 0;
			this->find_x->Text = L"Найти корни";
			this->find_x->UseVisualStyleBackColor = true;
			this->find_x->Click += gcnew System::EventHandler(this, &a2_form::find_x_Click);
			// 
			// check_x
			// 
			this->check_x->Location = System::Drawing::Point(200, 13);
			this->check_x->Name = L"check_x";
			this->check_x->Size = System::Drawing::Size(180, 34);
			this->check_x->TabIndex = 1;
			this->check_x->Text = L"Проверить корни";
			this->check_x->UseVisualStyleBackColor = true;
			this->check_x->Click += gcnew System::EventHandler(this, &a2_form::check_x_Click);
			// 
			// a2_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(393, 60);
			this->Controls->Add(this->check_x);
			this->Controls->Add(this->find_x);
			this->Name = L"a2_form";
			this->Text = L"Квадратичная функция";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void find_x_Click(System::Object^ sender, System::EventArgs^ e) {
		findx_form^ form = gcnew findx_form;
		form->ShowDialog();
	}
	private: System::Void check_x_Click(System::Object^ sender, System::EventArgs^ e) {
		checkx_form^ form = gcnew checkx_form;
		form->ShowDialog();
	}
	};
}
