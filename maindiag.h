#pragma once
#include "a2_form.h"

namespace netmath {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для maindiag
	/// </summary>
	public ref class maindiag : public System::Windows::Forms::Form
	{
	public:
		maindiag(void)
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
		~maindiag()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ a2_b;
	protected:

	private: System::Windows::Forms::Button^ exit_b;
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
			this->a2_b = (gcnew System::Windows::Forms::Button());
			this->exit_b = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// a2_b
			// 
			this->a2_b->Location = System::Drawing::Point(13, 13);
			this->a2_b->Name = L"a2_b";
			this->a2_b->Size = System::Drawing::Size(257, 34);
			this->a2_b->TabIndex = 0;
			this->a2_b->Text = L"Квадратичная функция";
			this->a2_b->UseVisualStyleBackColor = true;
			this->a2_b->Click += gcnew System::EventHandler(this, &maindiag::a2_b_Click);
			// 
			// exit_b
			// 
			this->exit_b->Location = System::Drawing::Point(13, 95);
			this->exit_b->Name = L"exit_b";
			this->exit_b->Size = System::Drawing::Size(257, 33);
			this->exit_b->TabIndex = 1;
			this->exit_b->Text = L"Выход";
			this->exit_b->UseVisualStyleBackColor = true;
			this->exit_b->Click += gcnew System::EventHandler(this, &maindiag::exit_b_Click);
			// 
			// maindiag
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 140);
			this->Controls->Add(this->exit_b);
			this->Controls->Add(this->a2_b);
			this->Name = L"maindiag";
			this->Text = L"Net Math";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void exit_b_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void a2_b_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
