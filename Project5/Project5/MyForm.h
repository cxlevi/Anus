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





	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::CheckBox^ checkBox12;
	private: System::Windows::Forms::CheckBox^ checkBox13;
	private: System::Windows::Forms::CheckBox^ checkBox14;
	private: System::Windows::Forms::CheckBox^ checkBox15;
	private: System::Windows::Forms::CheckBox^ checkBox16;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(26, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(339, 20);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(26, 75);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(339, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(26, 101);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(339, 20);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(26, 127);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(339, 20);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(26, 231);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(339, 20);
			this->textBox5->TabIndex = 15;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(26, 205);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(339, 20);
			this->textBox6->TabIndex = 14;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(26, 179);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(339, 20);
			this->textBox7->TabIndex = 13;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(26, 153);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(339, 20);
			this->textBox8->TabIndex = 12;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(26, 335);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(339, 20);
			this->textBox9->TabIndex = 19;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(26, 309);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(339, 20);
			this->textBox10->TabIndex = 18;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(26, 283);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(339, 20);
			this->textBox11->TabIndex = 17;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(26, 257);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(339, 20);
			this->textBox12->TabIndex = 16;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(26, 439);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(339, 20);
			this->textBox13->TabIndex = 23;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(26, 413);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(339, 20);
			this->textBox14->TabIndex = 22;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(26, 387);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(339, 20);
			this->textBox15->TabIndex = 21;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(26, 361);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(339, 20);
			this->textBox16->TabIndex = 20;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(26, 516);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(339, 20);
			this->textBox18->TabIndex = 26;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(26, 490);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(339, 20);
			this->textBox19->TabIndex = 25;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(26, 464);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(339, 20);
			this->textBox20->TabIndex = 24;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(446, 55);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 27;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(446, 81);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 28;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(446, 133);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 30;
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(446, 107);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 29;
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(446, 237);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(15, 14);
			this->checkBox5->TabIndex = 34;
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(446, 211);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(15, 14);
			this->checkBox6->TabIndex = 33;
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(446, 185);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(15, 14);
			this->checkBox7->TabIndex = 32;
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(446, 159);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(15, 14);
			this->checkBox8->TabIndex = 31;
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(446, 341);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(15, 14);
			this->checkBox9->TabIndex = 38;
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(446, 315);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(15, 14);
			this->checkBox10->TabIndex = 37;
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(446, 289);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(15, 14);
			this->checkBox11->TabIndex = 36;
			this->checkBox11->UseVisualStyleBackColor = true;
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(446, 263);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(15, 14);
			this->checkBox12->TabIndex = 35;
			this->checkBox12->UseVisualStyleBackColor = true;
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Location = System::Drawing::Point(446, 445);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(15, 14);
			this->checkBox13->TabIndex = 42;
			this->checkBox13->UseVisualStyleBackColor = true;
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Location = System::Drawing::Point(446, 419);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(15, 14);
			this->checkBox14->TabIndex = 41;
			this->checkBox14->UseVisualStyleBackColor = true;
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Location = System::Drawing::Point(446, 393);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(15, 14);
			this->checkBox15->TabIndex = 40;
			this->checkBox15->UseVisualStyleBackColor = true;
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->Location = System::Drawing::Point(446, 367);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(15, 14);
			this->checkBox16->TabIndex = 39;
			this->checkBox16->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1210, 773);
			this->Controls->Add(this->checkBox13);
			this->Controls->Add(this->checkBox14);
			this->Controls->Add(this->checkBox15);
			this->Controls->Add(this->checkBox16);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->checkBox11);
			this->Controls->Add(this->checkBox12);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->LB_Заметки);
			this->Controls->Add(this->LB_СписокДел);
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
	private: void textBox_Appear();
	private: void CheckBox_Appear();

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
