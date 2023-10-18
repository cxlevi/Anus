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
















	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::TextBox^ textBox32;
	private: System::Windows::Forms::TextBox^ textBox33;
	private: System::Windows::Forms::TextBox^ textBox34;
	private: System::Windows::Forms::TextBox^ textBox35;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox4;

	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox8;

	private: System::Windows::Forms::CheckBox^ checkBox7;





	private: System::Windows::Forms::CheckBox^ checkBox6;


	private: System::Windows::Forms::CheckBox^ checkBox5;
private: System::Windows::Forms::CheckBox^ checkBox16;

private: System::Windows::Forms::CheckBox^ checkBox15;





private: System::Windows::Forms::CheckBox^ checkBox14;


private: System::Windows::Forms::CheckBox^ checkBox13;


private: System::Windows::Forms::CheckBox^ checkBox12;


private: System::Windows::Forms::CheckBox^ checkBox11;


private: System::Windows::Forms::CheckBox^ checkBox10;


private: System::Windows::Forms::CheckBox^ checkBox9;



private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::PictureBox^ pictureBox16;
private: System::Windows::Forms::ToolStripMenuItem^ изменитьФонToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ красныйToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ зеленыйToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ синийToolStripMenuItem;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;




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
			this->изменитьФонToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->красныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зеленыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->синийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->SuspendLayout();
			// 
			// LB_Заметки
			// 
			this->LB_Заметки->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->LB_Заметки->FormattingEnabled = true;
			this->LB_Заметки->Location = System::Drawing::Point(12, 47);
			this->LB_Заметки->Name = L"LB_Заметки";
			this->LB_Заметки->Size = System::Drawing::Size(360, 589);
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
			this->menuStrip1->Size = System::Drawing::Size(390, 24);
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
			this->настройкиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->изменитьФонToolStripMenuItem });
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->настройкиToolStripMenuItem->Text = L"Настройки";
			this->настройкиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::настройкиToolStripMenuItem_Click);
			// 
			// изменитьФонToolStripMenuItem
			// 
			this->изменитьФонToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->красныйToolStripMenuItem,
					this->зеленыйToolStripMenuItem, this->синийToolStripMenuItem
			});
			this->изменитьФонToolStripMenuItem->Name = L"изменитьФонToolStripMenuItem";
			this->изменитьФонToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->изменитьФонToolStripMenuItem->Text = L"Изменить фон";
			// 
			// красныйToolStripMenuItem
			// 
			this->красныйToolStripMenuItem->Name = L"красныйToolStripMenuItem";
			this->красныйToolStripMenuItem->Size = System::Drawing::Size(123, 22);
			this->красныйToolStripMenuItem->Text = L"Красный";
			this->красныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::красныйToolStripMenuItem_Click);
			// 
			// зеленыйToolStripMenuItem
			// 
			this->зеленыйToolStripMenuItem->Name = L"зеленыйToolStripMenuItem";
			this->зеленыйToolStripMenuItem->Size = System::Drawing::Size(123, 22);
			this->зеленыйToolStripMenuItem->Text = L"Зеленый";
			this->зеленыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::зеленыйToolStripMenuItem_Click);
			// 
			// синийToolStripMenuItem
			// 
			this->синийToolStripMenuItem->Name = L"синийToolStripMenuItem";
			this->синийToolStripMenuItem->Size = System::Drawing::Size(123, 22);
			this->синийToolStripMenuItem->Text = L"Синий";
			this->синийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::синийToolStripMenuItem_Click);
			// 
			// LB_СписокДел
			// 
			this->LB_СписокДел->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->LB_СписокДел->FormattingEnabled = true;
			this->LB_СписокДел->Location = System::Drawing::Point(12, 47);
			this->LB_СписокДел->Name = L"LB_СписокДел";
			this->LB_СписокДел->Size = System::Drawing::Size(375, 550);
			this->LB_СписокДел->TabIndex = 4;
			this->LB_СписокДел->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.8F));
			this->textBox1->Location = System::Drawing::Point(22, 120);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(339, 27);
			this->textBox1->TabIndex = 8;
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.8F));
			this->textBox2->Location = System::Drawing::Point(22, 146);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(339, 27);
			this->textBox2->TabIndex = 9;
			this->textBox2->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.8F));
			this->textBox3->Location = System::Drawing::Point(22, 172);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(339, 27);
			this->textBox3->TabIndex = 10;
			this->textBox3->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.8F));
			this->textBox4->Location = System::Drawing::Point(22, 198);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(339, 27);
			this->textBox4->TabIndex = 11;
			this->textBox4->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.8F));
			this->textBox5->Location = System::Drawing::Point(22, 302);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(339, 27);
			this->textBox5->TabIndex = 15;
			this->textBox5->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.8F));
			this->textBox6->Location = System::Drawing::Point(22, 276);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(339, 27);
			this->textBox6->TabIndex = 14;
			this->textBox6->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.8F));
			this->textBox7->Location = System::Drawing::Point(22, 250);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(339, 27);
			this->textBox7->TabIndex = 13;
			this->textBox7->Visible = false;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.8F));
			this->textBox8->Location = System::Drawing::Point(22, 224);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(339, 27);
			this->textBox8->TabIndex = 12;
			this->textBox8->Visible = false;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.8F));
			this->textBox9->Location = System::Drawing::Point(22, 406);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(339, 27);
			this->textBox9->TabIndex = 19;
			this->textBox9->Visible = false;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.8F));
			this->textBox10->Location = System::Drawing::Point(22, 380);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(339, 27);
			this->textBox10->TabIndex = 18;
			this->textBox10->Visible = false;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.8F));
			this->textBox11->Location = System::Drawing::Point(22, 354);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(339, 27);
			this->textBox11->TabIndex = 17;
			this->textBox11->Visible = false;
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.8F));
			this->textBox12->Location = System::Drawing::Point(22, 328);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(339, 27);
			this->textBox12->TabIndex = 16;
			this->textBox12->Visible = false;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.8F));
			this->textBox13->Location = System::Drawing::Point(22, 510);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(339, 27);
			this->textBox13->TabIndex = 23;
			this->textBox13->Visible = false;
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.8F));
			this->textBox14->Location = System::Drawing::Point(22, 484);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(339, 27);
			this->textBox14->TabIndex = 22;
			this->textBox14->Visible = false;
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.8F));
			this->textBox15->Location = System::Drawing::Point(22, 458);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(339, 27);
			this->textBox15->TabIndex = 21;
			this->textBox15->Visible = false;
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.8F));
			this->textBox16->Location = System::Drawing::Point(22, 432);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(339, 27);
			this->textBox16->TabIndex = 20;
			this->textBox16->Visible = false;
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.8F));
			this->textBox18->Location = System::Drawing::Point(22, 587);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(339, 27);
			this->textBox18->TabIndex = 26;
			this->textBox18->Visible = false;
			// 
			// textBox19
			// 
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.8F));
			this->textBox19->Location = System::Drawing::Point(22, 561);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(339, 27);
			this->textBox19->TabIndex = 25;
			this->textBox19->Visible = false;
			// 
			// textBox20
			// 
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.8F));
			this->textBox20->Location = System::Drawing::Point(22, 535);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(339, 27);
			this->textBox20->TabIndex = 24;
			this->textBox20->Visible = false;
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->textBox17->Location = System::Drawing::Point(47, 117);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(322, 26);
			this->textBox17->TabIndex = 43;
			this->textBox17->Visible = false;
			// 
			// textBox21
			// 
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->textBox21->Location = System::Drawing::Point(47, 149);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(322, 26);
			this->textBox21->TabIndex = 44;
			this->textBox21->Visible = false;
			// 
			// textBox22
			// 
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->textBox22->Location = System::Drawing::Point(47, 207);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(322, 26);
			this->textBox22->TabIndex = 46;
			this->textBox22->Visible = false;
			// 
			// textBox23
			// 
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->textBox23->Location = System::Drawing::Point(47, 178);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(322, 26);
			this->textBox23->TabIndex = 45;
			this->textBox23->Visible = false;
			// 
			// textBox24
			// 
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->textBox24->Location = System::Drawing::Point(47, 323);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(322, 26);
			this->textBox24->TabIndex = 50;
			this->textBox24->Visible = false;
			// 
			// textBox25
			// 
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->textBox25->Location = System::Drawing::Point(47, 294);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(322, 26);
			this->textBox25->TabIndex = 49;
			this->textBox25->Visible = false;
			// 
			// textBox26
			// 
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->textBox26->Location = System::Drawing::Point(47, 265);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(322, 26);
			this->textBox26->TabIndex = 48;
			this->textBox26->Visible = false;
			// 
			// textBox27
			// 
			this->textBox27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->textBox27->Location = System::Drawing::Point(47, 236);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(322, 26);
			this->textBox27->TabIndex = 47;
			this->textBox27->Visible = false;
			// 
			// textBox28
			// 
			this->textBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->textBox28->Location = System::Drawing::Point(47, 555);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(322, 26);
			this->textBox28->TabIndex = 54;
			this->textBox28->Visible = false;
			// 
			// textBox29
			// 
			this->textBox29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->textBox29->Location = System::Drawing::Point(47, 381);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(322, 26);
			this->textBox29->TabIndex = 53;
			this->textBox29->Visible = false;
			// 
			// textBox30
			// 
			this->textBox30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->textBox30->Location = System::Drawing::Point(47, 410);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(322, 26);
			this->textBox30->TabIndex = 52;
			this->textBox30->Visible = false;
			// 
			// textBox31
			// 
			this->textBox31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->textBox31->Location = System::Drawing::Point(47, 352);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(322, 26);
			this->textBox31->TabIndex = 51;
			this->textBox31->Visible = false;
			// 
			// textBox32
			// 
			this->textBox32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->textBox32->Location = System::Drawing::Point(47, 526);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(322, 26);
			this->textBox32->TabIndex = 58;
			this->textBox32->Visible = false;
			// 
			// textBox33
			// 
			this->textBox33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->textBox33->Location = System::Drawing::Point(47, 497);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(322, 26);
			this->textBox33->TabIndex = 57;
			this->textBox33->Visible = false;
			// 
			// textBox34
			// 
			this->textBox34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->textBox34->Location = System::Drawing::Point(47, 468);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(322, 26);
			this->textBox34->TabIndex = 56;
			this->textBox34->Visible = false;
			// 
			// textBox35
			// 
			this->textBox35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->textBox35->Location = System::Drawing::Point(47, 439);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(322, 26);
			this->textBox35->TabIndex = 55;
			this->textBox35->Visible = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(27, 122);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 59;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(27, 151);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 60;
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->Visible = false;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(27, 209);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 62;
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->Visible = false;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(27, 180);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 61;
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->Visible = false;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(27, 328);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(15, 14);
			this->checkBox8->TabIndex = 66;
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->Visible = false;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(27, 299);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(15, 14);
			this->checkBox7->TabIndex = 65;
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->Visible = false;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(27, 270);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(15, 14);
			this->checkBox6->TabIndex = 64;
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->Visible = false;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(27, 241);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(15, 14);
			this->checkBox5->TabIndex = 63;
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->Visible = false;
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->Location = System::Drawing::Point(27, 560);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(15, 14);
			this->checkBox16->TabIndex = 74;
			this->checkBox16->UseVisualStyleBackColor = true;
			this->checkBox16->Visible = false;
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Location = System::Drawing::Point(27, 531);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(15, 14);
			this->checkBox15->TabIndex = 73;
			this->checkBox15->UseVisualStyleBackColor = true;
			this->checkBox15->Visible = false;
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Location = System::Drawing::Point(27, 502);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(15, 14);
			this->checkBox14->TabIndex = 72;
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->Visible = false;
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Location = System::Drawing::Point(27, 473);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(15, 14);
			this->checkBox13->TabIndex = 71;
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->Visible = false;
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(27, 441);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(15, 14);
			this->checkBox12->TabIndex = 70;
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->Visible = false;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(27, 412);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(15, 14);
			this->checkBox11->TabIndex = 69;
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->Visible = false;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(27, 383);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(15, 14);
			this->checkBox10->TabIndex = 68;
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->Visible = false;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(27, 354);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(15, 14);
			this->checkBox9->TabIndex = 67;
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox1->Location = System::Drawing::Point(47, 131);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(323, 2);
			this->pictureBox1->TabIndex = 75;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox2->Location = System::Drawing::Point(48, 160);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(323, 2);
			this->pictureBox2->TabIndex = 76;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox3->Location = System::Drawing::Point(48, 189);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(323, 2);
			this->pictureBox3->TabIndex = 77;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox4->Location = System::Drawing::Point(47, 218);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(323, 2);
			this->pictureBox4->TabIndex = 78;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox5->Location = System::Drawing::Point(48, 245);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(323, 2);
			this->pictureBox5->TabIndex = 79;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox6->Location = System::Drawing::Point(47, 274);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(323, 2);
			this->pictureBox6->TabIndex = 80;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox7->Location = System::Drawing::Point(48, 305);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(323, 2);
			this->pictureBox7->TabIndex = 81;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox8->Location = System::Drawing::Point(48, 334);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(323, 2);
			this->pictureBox8->TabIndex = 82;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Visible = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox9->Location = System::Drawing::Point(48, 363);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(323, 2);
			this->pictureBox9->TabIndex = 83;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Visible = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox10->Location = System::Drawing::Point(48, 391);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(323, 2);
			this->pictureBox10->TabIndex = 84;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Visible = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox11->Location = System::Drawing::Point(48, 421);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(323, 2);
			this->pictureBox11->TabIndex = 85;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Visible = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox12->Location = System::Drawing::Point(47, 450);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(323, 2);
			this->pictureBox12->TabIndex = 86;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Visible = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox13->Location = System::Drawing::Point(48, 479);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(323, 2);
			this->pictureBox13->TabIndex = 87;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Visible = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox14->Location = System::Drawing::Point(47, 507);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(323, 2);
			this->pictureBox14->TabIndex = 88;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Visible = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox15->Location = System::Drawing::Point(48, 536);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(323, 2);
			this->pictureBox15->TabIndex = 89;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Visible = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox16->Location = System::Drawing::Point(48, 563);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(323, 2);
			this->pictureBox16->TabIndex = 90;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(129, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 31);
			this->label1->TabIndex = 91;
			this->label1->Text = L"Заметки";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(123, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 31);
			this->label2->TabIndex = 92;
			this->label2->Text = L"Список дел";
			this->label2->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(390, 639);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->textBox32);
			this->Controls->Add(this->textBox33);
			this->Controls->Add(this->textBox34);
			this->Controls->Add(this->textBox35);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->checkBox16);
			this->Controls->Add(this->checkBox15);
			this->Controls->Add(this->checkBox14);
			this->Controls->Add(this->checkBox13);
			this->Controls->Add(this->checkBox12);
			this->Controls->Add(this->checkBox11);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
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

	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox9_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox10_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox11_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox12_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox13_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox14_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox15_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void красныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void зеленыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void синийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);



	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void pictureBox17_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
