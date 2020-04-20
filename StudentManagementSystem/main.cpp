//#include "changePassForm.h"
#include "mainForm.h"

using namespace StudentManagementSystem;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	mainForm form;
	Application::Run(% form);
}