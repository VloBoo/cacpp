#include "RegistrationWindow.h"
#include <Windows.h>

using namespace CACPP;

[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, INT) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew RegistrationWindow);
	return 0;
}
