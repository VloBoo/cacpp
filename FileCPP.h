#pragma once
namespace CACPP {
	using namespace System;
	using namespace System::IO;
	using namespace System::Collections::Generic;
	ref class FileCPP
	{
	private:
		String^ path;//путь файла
		bool chanched = false;//статус файла
		String^ text;//содержимое файла
	public:
		//Определение функций класса
		FileCPP(String^ name);
		void save();
		//свойства статуса файла
		property bool Status {
			bool get() { return chanched; }//вернуть состояние
			void set(bool value) { chanched = value; }//установить состояния
		}
		//свойства пути файла
		property String^ Path {
			String^ get() { return path; }//вернуть путь
			void set(String^ value) { path = value; }//установить путь
		}
		//свойства содержимого файла
		property String^ Text {
			String^ get() { return text; }//вернуть содержимое
			void set(String^ value) { text = value; }//установить содержимое
		}
	
	};
	
}

