#include "MyForm.h"
using namespace WindowsForm; // ��� �������.
[STAThreadAttribute]
int main(array<System::String ^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm()); // ��� �����.
	return 0;
}

//using namespace System;
//using namespace System::Windows::Forms;
//[STAThread]
//void main(array<String^>^ arg) {
//	Application::EnableVisualStyles();
//	Application::SetCompatibleTextRenderingDefault(false);
//	WindowsForm::MyForm form;   // ������ Project - ��� �������
//	Application::Run(%form);
//}

