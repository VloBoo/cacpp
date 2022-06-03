#pragma once
namespace CACPP {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::Text::RegularExpressions;

	ref class Analyzer
	{
	private:
		List<String^>^ initKeyword() {
			List<String^>^ buf = gcnew List<String^>();
			buf->Add("int");
			buf->Add("char");
			buf->Add("wchar_t");
			buf->Add("long");
			buf->Add("bool");
			return buf;
		}

	public:
		Analyzer(String^ text) {
			cli::array<wchar_t>^ main = text->ToCharArray();
			List<String^>^ keyword = initKeyword();
			Dictionary<String^, int>^ dic = gcnew Dictionary<String^, int>();
			//препроцессинг
			{
				cli::array<wchar_t>^ buf = gcnew cli::array<wchar_t>(main->Length);
				int i = 0;
				bool in = false;
				bool nl = true;
				for each (wchar_t c in main) {
					if (c == '#' && nl) {
						in = true;
					}
					if (!in) {
						buf[i] = c;
						i++;
					}
					nl = false;
					if (c == '\n') {
						in = false;
						nl = true;
					}
				}
				while (i < buf->Length) {
					buf[i] = ' ';
					i++;
				}
				main = buf;
			}
			{
				for each (auto a in keyword) {
					Regex^ reg = gcnew Regex(a);
					int buf = 0;
					for each (auto b in reg->Matches(gcnew String(main))) {
						buf++;
					}
					dic->Add(a, buf);
				}
				//cli::array<wchar_t>^ buf = gcnew cli::array<wchar_t>(main->Length);
			}
			String^ g = "";
			for each (KeyValuePair<String^, int> a in dic) {
				g += a.Key + " \t" + a.Value + "\n";
			}
			Windows::Forms::MessageBox::Show(g);
			Windows::Forms::MessageBox::Show(gcnew String(main));
		}
	};
}
