#include "MyForm.h"

using namespace System; // Указывает пространство имен для использования  
using namespace System::Windows::Forms; // Указывает пространство имен для Windows Forms  

[STAThreadAttribute] // позволяет работать с текстом  

int main(array<String^>^ args) { // Точка входа в приложение, принимает массив строк в качестве аргументов  
    Application::SetCompatibleTextRenderingDefault(false); // Устанавливает совместимость с отображением текста по умолчанию в значение false  
    Application::EnableVisualStyles(); // Включает визуальные стили для приложения  
    Project5::MyForm form; // Создает экземпляр класса MyForm из пространства имен Project5(Project5 - название проекта)  
    Application::Run(% form); // Запускает приложение и запускает основной цикл обработки сообщений для указанной формы  
}

Project5::MyForm::MyForm(void) {

    InitializeComponent();

}
System::Void Project5::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
System::Void Project5::MyForm::ЗаметкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

    label1->Visible = true;
    label2->Visible = false;
    label3->Visible = false;


    LB_Заметки->Visible = true;
    LB_СписокДел->Visible = false;
    textBox1->Visible = true;
    textBox2->Visible = true;
    textBox3->Visible = true;
    textBox4->Visible = true;
    textBox5->Visible = true;
    textBox6->Visible = true;
    textBox7->Visible = true;
    textBox8->Visible = true;
    textBox9->Visible = true;
    textBox10->Visible = true;
    textBox11->Visible = true;
    textBox12->Visible = true;
    textBox13->Visible = true;
    textBox14->Visible = true;
    textBox15->Visible = true;
    textBox16->Visible = true;
    textBox18->Visible = true;
    textBox19->Visible = true;
    textBox20->Visible = true;

    textBox17->Visible = false;
    textBox21->Visible = false;
    textBox23->Visible = false;
    textBox22->Visible = false;
    textBox24->Visible = false;
    textBox25->Visible = false;
    textBox26->Visible = false;
    textBox27->Visible = false;
    textBox28->Visible = false;
    textBox29->Visible = false;
    textBox30->Visible = false;
    textBox31->Visible = false;
    textBox34->Visible = false;
    textBox33->Visible = false;
    textBox32->Visible = false;
    textBox35->Visible = false;

    checkBox1->Visible = false;
    checkBox2->Visible = false;
    checkBox3->Visible = false;
    checkBox4->Visible = false;
    checkBox5->Visible = false;
    checkBox6->Visible = false;
    checkBox7->Visible = false;
    checkBox8->Visible = false;
    checkBox9->Visible = false;
    checkBox10->Visible = false;
    checkBox11->Visible = false;
    checkBox12->Visible = false;
    checkBox13->Visible = false;
    checkBox14->Visible = false;
    checkBox15->Visible = false;
    checkBox16->Visible = false;
}
System::Void Project5::MyForm::СписокДелToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

    label3->Visible = false;
    label2->Visible = true;
    label1->Visible = false;

    LB_СписокДел->Visible = true;
    LB_Заметки->Visible = false;
    textBox1->Visible = false;
    textBox2->Visible = false;
    textBox3->Visible = false;
    textBox4->Visible = false;
    textBox5->Visible = false;
    textBox6->Visible = false;
    textBox7->Visible = false;
    textBox8->Visible = false;
    textBox9->Visible = false;
    textBox10->Visible = false;
    textBox11->Visible = false;
    textBox12->Visible = false;
    textBox13->Visible = false;
    textBox14->Visible = false;
    textBox15->Visible = false;
    textBox16->Visible = false;
    textBox18->Visible = false;
    textBox19->Visible = false;
    textBox20->Visible = false;

    textBox17->Visible = true;
    textBox21->Visible = true;
    textBox23->Visible = true;
    textBox22->Visible = true;
    textBox24->Visible = true;
    textBox25->Visible = true;
    textBox26->Visible = true;
    textBox27->Visible = true;
    textBox28->Visible = true;
    textBox29->Visible = true;
    textBox30->Visible = true;
    textBox31->Visible = true;
    textBox34->Visible = true;
    textBox33->Visible = true;
    textBox32->Visible = true;
    textBox35->Visible = true;

    checkBox1->Visible = true;
    checkBox2->Visible = true;
    checkBox3->Visible = true;
    checkBox4->Visible = true;
    checkBox5->Visible = true;
    checkBox6->Visible = true;
    checkBox7->Visible = true;
    checkBox8->Visible = true;
    checkBox9->Visible = true;
    checkBox10->Visible = true;
    checkBox11->Visible = true;
    checkBox12->Visible = true;
    checkBox13->Visible = true;
    checkBox14->Visible = true;
    checkBox15->Visible = true;
    checkBox16->Visible = true;

    if (checkBox1->Checked) {
        pictureBox1->Visible = true;
    }
    else {
        pictureBox1->Visible = false;
    }
}

System::Void Project5::MyForm::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox1->Checked) {
        pictureBox1->Visible = true;
    }
    else {
        pictureBox1->Visible = false;
    }
}
System::Void Project5::MyForm::checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox2->Checked) {
        pictureBox2->Visible = true;
    }
    else {
        pictureBox2->Visible = false;
    }
}
System::Void Project5::MyForm::checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox3->Checked) {
        pictureBox3->Visible = true;
    }
    else {
        pictureBox3->Visible = false;
    }
}
System::Void Project5::MyForm::checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox4->Checked) {
        pictureBox4->Visible = true;
    }
    else {
        pictureBox4->Visible = false;
    }
}
System::Void Project5::MyForm::checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox5->Checked) {
        pictureBox5->Visible = true;
    }
    else {
        pictureBox5->Visible = false;
    }
}
System::Void Project5::MyForm::checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox6->Checked) {
        pictureBox6->Visible = true;
    }
    else {
        pictureBox6->Visible = false;
    }
}
System::Void Project5::MyForm::checkBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox7->Checked) {
        pictureBox7->Visible = true;
    }
    else {
        pictureBox7->Visible = false;
    }
}
System::Void Project5::MyForm::checkBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox8->Checked) {
        pictureBox8->Visible = true;
    }
    else {
        pictureBox8->Visible = false;
    }
}
System::Void Project5::MyForm::checkBox9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox9->Checked) {
        pictureBox9->Visible = true;
    }
    else {
        pictureBox9->Visible = false;
    }
}
System::Void Project5::MyForm::checkBox10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox10->Checked) {
        pictureBox10->Visible = true;
    }
    else {
        pictureBox10->Visible = false;
    }
}
System::Void Project5::MyForm::checkBox11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox11->Checked) {
        pictureBox11->Visible = true;
    }
    else {
        pictureBox11->Visible = false;
    }
}
System::Void Project5::MyForm::checkBox12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox12->Checked) {
        pictureBox12->Visible = true;
    }
    else {
        pictureBox12->Visible = false;
    }
}
System::Void Project5::MyForm::checkBox13_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox13->Checked) {
        pictureBox13->Visible = true;
    }
    else {
        pictureBox13->Visible = false;
    }
}
System::Void Project5::MyForm::checkBox14_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox14->Checked) {
        pictureBox14->Visible = true;
    }
    else {
        pictureBox14->Visible = false;
    }
}
System::Void Project5::MyForm::checkBox15_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox15->Checked) {
        pictureBox15->Visible = true;
    }
    else {
        pictureBox15->Visible = false;
    }
}


System::Void Project5::MyForm::красныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    LB_Заметки->BackColor = Color::Red;
    LB_СписокДел->BackColor = Color::Red;
    label1->BackColor = Color::Red;
    label2->BackColor = Color::Red;
    
}
System::Void Project5::MyForm::зеленыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    LB_Заметки->BackColor = Color::Green;
    LB_СписокДел->BackColor = Color::Green;
    label1->BackColor = Color::Green;
    label2->BackColor = Color::Green;
    
}
System::Void Project5::MyForm::синийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    LB_Заметки->BackColor = Color::Blue;
    LB_СписокДел->BackColor = Color::Blue;
    label1->BackColor = Color::Blue;
    label2->BackColor = Color::Blue;
    
}
    System::Void Project5::MyForm::RedToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        BackColor = Color::Red;
    }
    System::Void Project5::MyForm::GreenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        BackColor = Color::Green;
    }
    System::Void Project5::MyForm::BlueToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
        BackColor = Color::Blue;
    }

