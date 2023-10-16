#pragma once

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);
		

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ LB_Заметки;
	protected:


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ЗаметкиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ СписокДелToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^ настройкиToolStripMenuItem;
	private: System::Windows::Forms::ListBox^ LB_СписокДел;



	private: System::Windows::Forms::Button^ btn_Заметки;
	private: System::Windows::Forms::Button^ btn_СписокДел;
	private: System::Windows::Forms::ToolStripMenuItem^ цветToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ цветТекстаToolStripMenuItem;




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
			this->LB_Заметки = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ЗаметкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->СписокДелToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LB_СписокДел = (gcnew System::Windows::Forms::ListBox());
			this->btn_Заметки = (gcnew System::Windows::Forms::Button());
			this->btn_СписокДел = (gcnew System::Windows::Forms::Button());
			this->цветToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветТекстаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// LB_Заметки
			// 
			this->LB_Заметки->FormattingEnabled = true;
			this->LB_Заметки->Location = System::Drawing::Point(12, 27);
			this->LB_Заметки->Name = L"LB_Заметки";
			this->LB_Заметки->Size = System::Drawing::Size(369, 602);
			this->LB_Заметки->TabIndex = 0;
			this->LB_Заметки->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->выходToolStripMenuItem,
					this->менюToolStripMenuItem, this->настройкиToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1210, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ЗаметкиToolStripMenuItem,
					this->СписокДелToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->менюToolStripMenuItem->Text = L"Меню";
			this->менюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::менюToolStripMenuItem_Click);
			// 
			// ЗаметкиToolStripMenuItem
			// 
			this->ЗаметкиToolStripMenuItem->Name = L"ЗаметкиToolStripMenuItem";
			this->ЗаметкиToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->ЗаметкиToolStripMenuItem->Text = L"Заметки";
			this->ЗаметкиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ЗаметкиToolStripMenuItem_Click);
			// 
			// СписокДелToolStripMenuItem
			// 
			this->СписокДелToolStripMenuItem->Name = L"СписокДелToolStripMenuItem";
			this->СписокДелToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->СписокДелToolStripMenuItem->Text = L"Список дел";
			this->СписокДелToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::СписокДелToolStripMenuItem_Click);
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->цветToolStripMenuItem,
					this->цветТекстаToolStripMenuItem
			});
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->настройкиToolStripMenuItem->Text = L"Настройки";
			this->настройкиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::настройкиToolStripMenuItem_Click);
			// 
			// LB_СписокДел
			// 
			this->LB_СписокДел->FormattingEnabled = true;
			this->LB_СписокДел->Location = System::Drawing::Point(429, 27);
			this->LB_СписокДел->Name = L"LB_СписокДел";
			this->LB_СписокДел->Size = System::Drawing::Size(369, 602);
			this->LB_СписокДел->TabIndex = 4;
			this->LB_СписокДел->Visible = false;
			// 
			// btn_Заметки
			// 
			this->btn_Заметки->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->btn_Заметки->Location = System::Drawing::Point(321, 568);
			this->btn_Заметки->Name = L"btn_Заметки";
			this->btn_Заметки->Size = System::Drawing::Size(50, 50);
			this->btn_Заметки->TabIndex = 6;
			this->btn_Заметки->Text = L"+";
			this->btn_Заметки->UseVisualStyleBackColor = true;
			this->btn_Заметки->Visible = false;
			this->btn_Заметки->Click += gcnew System::EventHandler(this, &MyForm::btn_Заметки_Click);
			// 
			// btn_СписокДел
			// 
			this->btn_СписокДел->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->btn_СписокДел->Location = System::Drawing::Point(732, 568);
			this->btn_СписокДел->Name = L"btn_СписокДел";
			this->btn_СписокДел->Size = System::Drawing::Size(50, 50);
			this->btn_СписокДел->TabIndex = 7;
			this->btn_СписокДел->Text = L"+";
			this->btn_СписокДел->UseVisualStyleBackColor = true;
			this->btn_СписокДел->Visible = false;
			this->btn_СписокДел->Click += gcnew System::EventHandler(this, &MyForm::btn_СписокДел_Click);
			// 
			// цветToolStripMenuItem
			// 
			this->цветToolStripMenuItem->Name = L"цветToolStripMenuItem";
			this->цветToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->цветToolStripMenuItem->Text = L"Цвет фона";
			// 
			// цветТекстаToolStripMenuItem
			// 
			this->цветТекстаToolStripMenuItem->Name = L"цветТекстаToolStripMenuItem";
			this->цветТекстаToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->цветТекстаToolStripMenuItem->Text = L"Цвет текста";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1210, 773);
			this->Controls->Add(this->btn_СписокДел);
			this->Controls->Add(this->btn_Заметки);
			this->Controls->Add(this->LB_СписокДел);
			this->Controls->Add(this->LB_Заметки);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int textBoxIndex = 0;
	int CheckBoxIndex = 0;
private: textBox_Appear();
private: CheckBox_Appear();


private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void менюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ЗаметкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void СписокДелToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void настройкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_Заметки_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_СписокДел_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	   }


};
}
