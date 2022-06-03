#pragma once

#define MAX_SIZE_REG 20//Ìאךסטלאכüםאÿ הכטםםא ןמנמכÿ
/// <summary>
/// ÀÕÀÕÀÕÀÕÀÕÀÕ 
/// ‗ ÃÅÍÈÉ, ‗ ÁÅÇÓÌÅÍ, ÎÁÅÐÍÈ ÑÂÎÈ ÍÅÄÎÑÒÀÒÊÈ Â ÑÂÎÈ ÄÎÑÒÎÈÍÑÒÂÀ, 
/// ÀÕÀÕÕÀÕÀÕÀÕÕÀÕÀÕÕÀÕÀÕÀÕÀÕÀÕ
/// ÀÕÕÀÕÀÕÀÕÀÕÀÕÀÕÀÕÀÕÀÕÀÕÀÕÀÕÀÕ
/// ÀÕÀÕÀÕÀÕÀÕÀÕÀÕ
/// ÀÕÀÕÀÕÀÕ
/// ÀÕÀÕÀÕÀÕÀÕÀÕÀÕ
/// ÀÕÀÕÀÕÀÕÀÕÀÕÀ
/// ÀÕÀÕÀÕÀÕÀÕÀÕÀÕÕÀÕÀ
/// ÕÀÕÀÕÕÀÕÀÕÀÕÀÕÀÕÀÕÕÀÕÀÕÀ
/// Åסכט זטחםü חאסעאגכÿוע עובÿ ןטסאעü םא ןמךמכוקוםםûץ ןכ‏סא סמ סלוסü‏ ראנןא, עמ םו ןûעאיסÿ ןטסאעü םא ןכ‏סאץ, ןטרט םא ראנןו.
/// </summary>
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
		String^ passL;//20 (20 ‎עמ ךכ‏ק אהלטםא)
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