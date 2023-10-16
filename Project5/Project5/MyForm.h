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
	private: System::Windows::Forms::ToolStripMenuItem^ BG_colorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Text_colorToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ красныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ желтыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ зеленыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ синийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ черныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ белыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ красныйToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ желтыйToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ зеленыйToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ синийToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ черныйToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ белыйToolStripMenuItem1;




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
			this->BG_colorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->красныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->желтыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зеленыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->синийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->черныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->белыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Text_colorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->красныйToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->желтыйToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зеленыйToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->синийToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->черныйToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->белыйToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LB_СписокДел = (gcnew System::Windows::Forms::ListBox());
			this->btn_Заметки = (gcnew System::Windows::Forms::Button());
			this->btn_СписокДел = (gcnew System::Windows::Forms::Button());
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
			this->ЗаметкиToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ЗаметкиToolStripMenuItem->Text = L"Заметки";
			this->ЗаметкиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ЗаметкиToolStripMenuItem_Click);
			// 
			// СписокДелToolStripMenuItem
			// 
			this->СписокДелToolStripMenuItem->Name = L"СписокДелToolStripMenuItem";
			this->СписокДелToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->СписокДелToolStripMenuItem->Text = L"Список дел";
			this->СписокДелToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::СписокДелToolStripMenuItem_Click);
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->BG_colorToolStripMenuItem,
					this->Text_colorToolStripMenuItem
			});
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->настройкиToolStripMenuItem->Text = L"Настройки";
			this->настройкиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::настройкиToolStripMenuItem_Click);
			// 
			// BG_colorToolStripMenuItem
			// 
			this->BG_colorToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->красныйToolStripMenuItem,
					this->желтыйToolStripMenuItem, this->зеленыйToolStripMenuItem, this->синийToolStripMenuItem, this->черныйToolStripMenuItem, this->белыйToolStripMenuItem
			});
			this->BG_colorToolStripMenuItem->Name = L"BG_colorToolStripMenuItem";
			this->BG_colorToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->BG_colorToolStripMenuItem->Text = L"Цвет фона";
			this->BG_colorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::BG_colorToolStripMenuItem_Click);
			// 
			// красныйToolStripMenuItem
			// 
			this->красныйToolStripMenuItem->Name = L"красныйToolStripMenuItem";
			this->красныйToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->красныйToolStripMenuItem->Text = L"Красный";
			this->красныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::красныйToolStripMenuItem_Click);
			// 
			// желтыйToolStripMenuItem
			// 
			this->желтыйToolStripMenuItem->Name = L"желтыйToolStripMenuItem";
			this->желтыйToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->желтыйToolStripMenuItem->Text = L"Желтый";
			this->желтыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::желтыйToolStripMenuItem_Click);
			// 
			// зеленыйToolStripMenuItem
			// 
			this->зеленыйToolStripMenuItem->Name = L"зеленыйToolStripMenuItem";
			this->зеленыйToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->зеленыйToolStripMenuItem->Text = L"Зеленый";
			this->зеленыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::зеленыйToolStripMenuItem_Click);
			// 
			// синийToolStripMenuItem
			// 
			this->синийToolStripMenuItem->Name = L"синийToolStripMenuItem";
			this->синийToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->синийToolStripMenuItem->Text = L"Синий";
			this->синийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::синийToolStripMenuItem_Click);
			// 
			// черныйToolStripMenuItem
			// 
			this->черныйToolStripMenuItem->Name = L"черныйToolStripMenuItem";
			this->черныйToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->черныйToolStripMenuItem->Text = L"Черный";
			this->черныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::черныйToolStripMenuItem_Click);
			// 
			// белыйToolStripMenuItem
			// 
			this->белыйToolStripMenuItem->Name = L"белыйToolStripMenuItem";
			this->белыйToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->белыйToolStripMenuItem->Text = L"Белый";
			this->белыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::белыйToolStripMenuItem_Click);
			// 
			// Text_colorToolStripMenuItem
			// 
			this->Text_colorToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->красныйToolStripMenuItem1,
					this->желтыйToolStripMenuItem1, this->зеленыйToolStripMenuItem1, this->синийToolStripMenuItem1, this->черныйToolStripMenuItem1,
					this->белыйToolStripMenuItem1
			});
			this->Text_colorToolStripMenuItem->Name = L"Text_colorToolStripMenuItem";
			this->Text_colorToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->Text_colorToolStripMenuItem->Text = L"Цвет текста";
			this->Text_colorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::Text_colorToolStripMenuItem_Click);
			// 
			// красныйToolStripMenuItem1
			// 
			this->красныйToolStripMenuItem1->Name = L"красныйToolStripMenuItem1";
			this->красныйToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->красныйToolStripMenuItem1->Text = L"Красный";
			this->красныйToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::красныйToolStripMenuItem1_Click);
			// 
			// желтыйToolStripMenuItem1
			// 
			this->желтыйToolStripMenuItem1->Name = L"желтыйToolStripMenuItem1";
			this->желтыйToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->желтыйToolStripMenuItem1->Text = L"Желтый";
			this->желтыйToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::желтыйToolStripMenuItem1_Click);
			// 
			// зеленыйToolStripMenuItem1
			// 
			this->зеленыйToolStripMenuItem1->Name = L"зеленыйToolStripMenuItem1";
			this->зеленыйToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->зеленыйToolStripMenuItem1->Text = L"Зеленый";
			this->зеленыйToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::зеленыйToolStripMenuItem1_Click);
			// 
			// синийToolStripMenuItem1
			// 
			this->синийToolStripMenuItem1->Name = L"синийToolStripMenuItem1";
			this->синийToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->синийToolStripMenuItem1->Text = L"Синий";
			this->синийToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::синийToolStripMenuItem1_Click);
			// 
			// черныйToolStripMenuItem1
			// 
			this->черныйToolStripMenuItem1->Name = L"черныйToolStripMenuItem1";
			this->черныйToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->черныйToolStripMenuItem1->Text = L"Черный";
			this->черныйToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::черныйToolStripMenuItem1_Click);
			// 
			// белыйToolStripMenuItem1
			// 
			this->белыйToolStripMenuItem1->Name = L"белыйToolStripMenuItem1";
			this->белыйToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->белыйToolStripMenuItem1->Text = L"Белый";
			this->белыйToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::белыйToolStripMenuItem1_Click);
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
private: System::Void BG_colorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Text_colorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void красныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void желтыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void зеленыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void синийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void черныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void белыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void красныйToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void желтыйToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void зеленыйToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void синийToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void черныйToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void белыйToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);


private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	   }





};
}
