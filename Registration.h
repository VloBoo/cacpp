#pragma once

#define MAX_SIZE_REG 20//Максимальная длинна пороля
namespace CACPP {
	using namespace System;
	using namespace System::IO;	
	using namespace System::Collections::Generic;
	using namespace System::Security::Cryptography;
	ref struct User {//структура пользователь
		String^ login;//логин пользователя
		String^ hash;//хешированный пароль
	};

	ref class Registration {
	private:
		String^ path;//путь к файлу
		String^ nameL;//логин пользователя
		String^ passL;//пароль пользователя
		bool logF = false;//флаг входа в систему
		List<User^>^ users;//список пользователей
	public:
		//Определение функций класса
		Registration();
		void save();
		bool login(String^ name, String^ password, bool admin, bool loggedin);
		bool addUser(String^ name, String^ password, bool admin);
		bool isLogin();
		String^ getPassword();
		String^ getLogin();
	};
}