#include "FileCPP.h"

namespace CACPP {
	//инициализация класса
	FileCPP::FileCPP(String^ name) {
		this->path = name;//сохраняем путь к файлу
		this->text = gcnew String("");//инициализируем содержимое файла
		if (path != "New") {//проверка, если файл новый
			try {
				StreamReader^ sr = gcnew StreamReader(this->path);//создаем поток чтения файла
				String^ line = sr->ReadLine();//читаем первую строку
				while (line != nullptr) {//продолжаем цикл, пока строка не пуста
					this->text += (line + "\r\n");//сохраняем строку 
					line = sr->ReadLine();//читаем следующую линию
				}
				sr->Close();//закрываем поток
			}
			catch (FileNotFoundException^ ) {
				//исключение, если файл не обнаружен
				//данное исключение не нарушает работу программы и должно игнорироваться
			}
			catch (UnauthorizedAccessException^ ) {
				//исключение на доступ к файлу
				//в случаи исключения вызываем предупреждение
				System::Windows::Forms::MessageBox::Show("Access denied, you must have administrator rights.");
			}
		}
	}
	//сохранение файла
	void FileCPP::save() {
		if (this->path == "New") {//Если файл новый, то его сохранять не нужно
			return;
		}
		try {
			StreamWriter^ sw = gcnew StreamWriter(this->path);//создаем поток записи файла
			sw->Write(this->text);//записываем содержимое файла
			sw->Close();//закрываем поток
		}
		catch (UnauthorizedAccessException^ ) {
			//исключение на доступ к файлу
			//в случаи исключения вызываем предупреждение
			System::Windows::Forms::MessageBox::Show("Access denied, you must have administrator rights.");
		}
	}
}
