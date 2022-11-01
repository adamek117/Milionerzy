#include "pch.h"
#include <string>
using namespace System;
using namespace std;

//int main(array<System::String ^> ^args)
//{
//    return 0;
//}

#include "Form1.h"

using namespace System::Windows::Forms;

[STAThread]
int main() {
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLRWinformsProjekt::Form1()); 
	
	return 0;
}