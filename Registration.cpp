#include "Registration.h"

namespace CACPP {
	Registration::Registration() {
		this->path = System::Environment::GetEnvironmentVariable("USERPROFILE")+"\\users.cacpp";//определяем путь к файлу с паролями
		this->users = gcnew List<User^>();//инициализируем список пользователей
		this->nameL = gcnew String("");//инициализируем логин
		this->passL = gcnew String("");//инициализируем пароль
		try {
			StreamReader^ sr = gcnew StreamReader(this->path);//создаем поток чтения файла
			String^ line = sr->ReadLine();//читаем первую строку
			if (line == "true") {//проверяем, если пользователь в системе
				this->logF = true;//устанавливаем флаг входа
				this->nameL = sr->ReadLine();//устанавливаем логин
				this->passL = sr->ReadLine();//устанавливаем пароль
			}
			line = sr->ReadLine(); //читаем следующую строку
			while (line != nullptr) {//продолжаем цикл, пока строка не пуста
				User^ user = gcnew User();//инициализируем пользователя
				user->login = line;//задаем логин
				line = sr->ReadLine();//читаем строку
				user->hash = line;//задаем пароль
				line = sr->ReadLine();//читаем строку
				this->users->Add(user);//добавляем пользователя в список
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

	//сохранение пользователей в файл
	void Registration::save() {
		try {
			StreamWriter^ sw = gcnew StreamWriter(this->path);//создаем поток записи файла
			String^ a = (this->logF) ? "true" : "false"; //определяем первую строку файла
			sw->WriteLine(a);//записывает первую строку файла
			if (logF) {//если флаг вход истинный, то сохраняем пользователя 
				sw->WriteLine(this->nameL);//записываем логин
				sw->WriteLine(this->passL);//записывает пароль
			}
			for each (User ^ u in this->users) {//проходимся по всему списков пользователей
				sw->WriteLine(u->login);//записываем логим
				sw->WriteLine(u->hash);//записывае пароль
			}
			sw->Close();//закрываем поток
		} 
		catch (UnauthorizedAccessException^ ) {
			//исключение на доступ к файлу
			//в случаи исключения вызываем предупреждение
			System::Windows::Forms::MessageBox::Show("Access denied, you must have administrator rights.");
		}
	}
	//вход пользователя в систему
	bool Registration::login(String^ name, String^ password, bool admin, bool loggedin) {
		for each (User ^ u in this->users) {//перебираем пользователей в списке
			if (u->login == name) {//если логин совпадает напичаем вход
				String^ a = (gcnew String(password->Copy(password) + ((admin) ? ("+") : ("-"))))->GetHashCode().ToString();//определяем параметры входа администратора и хешируем    
				if (u->hash == a) {//сравниваем пароли
					if (loggedin) {//если пользователь хочет остаться в системе
						this->logF = true;//устанавливаем флаг входа в систему
						this->nameL = name;//сохраняем логин
						this->passL = password;//сохраняем пароль
					}
					else {
						this->logF = false;//устанавливаем флаг входа в систему
					}
					return true;//возращаем успешный результат входа
				}
			}
		}
		return false;//возращаем отрицательный результат входа
	}
	//регистрация пользователя
	bool Registration::addUser(String^ name, String^ password, bool admin) {
		for each (User ^ u in this->users) {//перебираем пользователей и ищим совпадению по логину
			if (u->login == name) {
				return false;//если логин совпадает, отменяем регистрацию
			}
		}
		User^ user = gcnew User();//создаем пользователя
		user->login = name;//задаем логин
		user->hash = (gcnew String(password->Copy(password) + ((admin) ? ("+") : ("-"))))->GetHashCode().ToString();//задаем пароль и хешируем                         
		this->users->Add(user);//добавляем пользователя в список
		return true;//возращаем успешный результат регистрации
	}
	//возращает параметры входа
	bool Registration::isLogin() {
		return this->logF;
	}
	//возращает пароль
	String^ Registration::getPassword() {
		return this->passL;
	}
	//возращает логин
	String^ Registration::getLogin() {
		return this->nameL;
	}
}
