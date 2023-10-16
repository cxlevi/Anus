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

Project5::MyForm::MyForm(void)
{
    throw gcnew System::NotImplementedException();
}

Project5::MyForm::MyForm(void) {

    InitializeComponent();

}

 void::Project5::MyForm::textBox_Appear() {
     //Создание нового экземпляра TextBox
     TextBox^ newTextBox = gcnew TextBox();

     // Назначение уникального имени TextBox
     newTextBox->Name = "textBox" + textBoxIndex;
     textBoxIndex++;

     // Назначение позиции и размера TextBox
     newTextBox->Location = System::Drawing::Point(10, 10 + (25 * textBoxIndex));
     newTextBox->Size = System::Drawing::Size(100, 20);

     // Добавление TextBox на панель
     LB_Заметки->Controls->Add(newTextBox);
}
 void::Project5::MyForm::CheckBox_Appear() {

     CheckBox^ newCheckBox = gcnew CheckBox();

     newCheckBox->Name = "textBox" + CheckBoxIndex;
     CheckBoxIndex++;

     newCheckBox->Location = System::Drawing::Point(10, 10 + (25 * textBoxIndex));
     newCheckBox->Size = System::Drawing::Size(100, 20);

     LB_СписокДел->Controls->Add(newCheckBox);
     
 }


 System::Void Project5::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

 }
System::Void Project5::MyForm::менюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
System::Void Project5::MyForm::ЗаметкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
 System::Void Project5::MyForm:: СписокДелToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
System::Void Project5::MyForm::настройкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
System::Void Project5::MyForm::btn_Заметки_Click(System::Object^ sender, System::EventArgs^ e) {
    textBox_Appear();
}
System::Void Project5::MyForm::btn_СписокДел_Click(System::Object^ sender, System::EventArgs^ e) {
    CheckBox_Appear();
}
