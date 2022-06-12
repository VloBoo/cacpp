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
					this->text += (line + "\r\n");
					line = sr->ReadLine();
				}
				sr->Close();
			}
			catch (FileNotFoundException^ e) {
				
			}
			catch (UnauthorizedAccessException^ e) {
				System::Windows::Forms::MessageBox::Show("Access denied, you must have administrator rights.");
			}
		}
	}
	void FileCPP::save() {
		if (this->path == "New") {
			return;
		}
		try {
			StreamWriter^ sw = gcnew StreamWriter(this->path);
			sw->Write(this->text);
			sw->Close();
		}
		catch (FileNotFoundException^ e) {
			
		}
		catch (UnauthorizedAccessException^ e) {
			System::Windows::Forms::MessageBox::Show("Access denied, you must have administrator rights.");
		}
	}
}
