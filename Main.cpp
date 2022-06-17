#include "RegistrationWindow.h"
#include <Windows.h>

using namespace CACPP;//основное пространства имён программы
//подключаем артибут для корректной работы программы в потоке
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, INT) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew RegistrationWindow);//запускаем форму регистрации
	return 0;
}
