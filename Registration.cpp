 #include "Registration.h"

namespace CACPP {
	Registration::Registration() {
		this->path = ".\\Users.dat";
		this->users = gcnew List<User^>();
		this->nameL = gcnew String("");
		this->passL = gcnew String("");
		try {
			StreamReader^ sr = gcnew StreamReader(this->path);
			String^ line = sr->ReadLine();
			if (line == "true") {
				this->logF = true;
				this->nameL = sr->ReadLine();
				this->passL = sr->ReadLine();
			}
			line = sr->ReadLine();
			while (line != nullptr) {
				User^ user = gcnew User();
				user->login = line;
				line = sr->ReadLine();
				user->hash = line;
				line = sr->ReadLine();
				this->users->Add(user);
			}
			sr->Close();
		}
		catch (FileNotFoundException^ e) {
			//Ñòàíäàðòíàÿ îøèáêà ïðè îòñóòñòâèè ôàéëà. Èãíîðèðîâàòü.
		}
	}

	void Registration::save() {
			StreamWriter^ sw = gcnew StreamWriter(this->path);
			String^ a = (this->logF) ? "true" : "false";
			sw->WriteLine(a);
			if (logF) {
				sw->WriteLine(this->nameL);
				sw->WriteLine(this->passL);
			}
			for each (User^ u in this->users) {
				sw->WriteLine(u->login);
				sw->WriteLine(u->hash);
			}
			sw->Close();
	}

	bool Registration::login(String^ name, String^ password, bool admin, bool loggedin) {
		for each (User ^ u in this->users) {
			if (u->login == name) {
				String^ a = password->Copy(password) + ((admin) ? ("+") : ("-"));///ÒÓÒ ÍÅÎÁÕÎÄÈÌÎ ÕÅØÈÐÎÂÀÍÈÅ
				if (u->hash==a) {
					if (loggedin) {
						this->logF = true;
						this->nameL = name;
						this->passL = password;
					}
					return true;
				}
			}
		}
		return false;
	}

	bool Registration::addUser(String^ name, String^ password, bool admin) {
		for each (User^ u in this->users) {
			if (u->login == name) {
				return false;
			}
		}
		User^ user = gcnew User();
		user->login = name;
		user->hash = password->Copy(password) + ((admin) ? ("+") : ("-"));///ÒÓÒ ÍÅÎÁÕÎÄÈÌÎ ÕÅØÈÐÎÂÀÍÈÅ
		this->users->Add(user);
		return true;
	}

	bool Registration::isLogin() {
		return this->logF;
	}

	String^ Registration::getPassword() {
		return this->passL;
	}

	String^ Registration::getLogin() {
		return this->nameL;
	}
}
