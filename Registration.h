#pragma once

#define MAX_SIZE_REG 20//������������ ������ ������
namespace CACPP {
	using namespace System;
	using namespace System::IO;	
	using namespace System::Collections::Generic;
	using namespace System::Security::Cryptography;
	ref struct User {//��������� ������������
		String^ login;//����� ������������
		String^ hash;//������������ ������
	};

	ref class Registration {
	private:
		String^ path;//���� � �����
		String^ nameL;//����� ������������
		String^ passL;//������ ������������
		bool logF = false;//���� ����� � �������
		List<User^>^ users;//������ �������������
	public:
		//����������� ������� ������
		Registration();
		void save();
		bool login(String^ name, String^ password, bool admin, bool loggedin);
		bool addUser(String^ name, String^ password, bool admin);
		bool isLogin();
		String^ getPassword();
		String^ getLogin();
	};
}