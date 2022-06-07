#pragma once

#define MAX_SIZE_REG 20//Максимальная длинна пороля
namespace CACPP {
	using namespace System;
	using namespace System::IO;	
	using namespace System::Collections::Generic;
	using namespace System::Security::Cryptography;
	ref struct User {
		String^ login;
		String^ hash;
	};

	ref class Registration {
	private:
		String^ path;
		String^ nameL;//20
		String^ passL;//20 (20 это ключ админа)
		bool logF = false;
		List<User^>^ users;
	public:
		Registration();
		void save();
		bool login(String^ name, String^ password, bool admin, bool loggedin);
		bool addUser(String^ name, String^ password, bool admin);
		bool isLogin();
		String^ getPassword();
		String^ getLogin();
	};
}