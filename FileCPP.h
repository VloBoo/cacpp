#pragma once
namespace CACPP {
	using namespace System;
	using namespace System::IO;
	using namespace System::Collections::Generic;
	ref class FileCPP
	{
	private:
		String^ path;
		bool chanched = false;
		String^ text;		
	public:
		FileCPP(String^ name);
		void save();
		property bool Status {
			bool get() { return chanched; }
			void set(bool value) { chanched = value; }
		}
		property String^ Path {
			String^ get() { return path; }
			void set(String^ value) { path = value; }
		}
		property String^ Text {
			String^ get() { return text; }
			void set(String^ value) { text = value; }
		}
	
	};
	
}

