#include "FileCPP.h"

namespace CACPP {
	FileCPP::FileCPP(String^ name) {
		this->path = name;
		this->text = gcnew String("");
		if (path != "New") {
			try {
				StreamReader^ sr = gcnew StreamReader(this->path);
				String^ line = sr->ReadLine();
				while (line != nullptr) {
					this->text += (line+"\r\n");
					line = sr->ReadLine();
				}
				sr->Close();
			}
			catch (FileNotFoundException^ e) {
			}
		}
	}
	void FileCPP::save() {
		if (this->path == "New") {
			return;
		}
		StreamWriter^ sw = gcnew StreamWriter(this->path);
		sw->Write(this->text);
		sw->Close();
	}
}
