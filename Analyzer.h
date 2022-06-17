#pragma once
namespace CACPP {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::Text::RegularExpressions;

	//описываем класс и наследуем от класса IComparable для реализации сортировки
	ref class Ctring : IComparable {
	private:
		String^ str;//название
		int index;//индекс указателя
	public:
		//определяем функцию сравнения
		int virtual CompareTo(Object^ obj) {
			String^ str1 = ((Ctring^)obj)->Text;//Приводим тип к нашему классу для сравнения
			return String::Compare(this->str, str1);//сравниваем строки по алфавитному порядку
		}
		//свойства названия
		property String^ Text {
			String^ get() { return this->str; }//вернуть строку
			void set(String^ value) { this->str = value; }//установить строку
		}
		//свойство индекса указателя
		property int Index {
			int get() { return this->index; }//вернуть индекс
			void set(int value) { this->index = value; }//установить индекс
		}
	};

	List<String^>^ initKeyword() {//инициализируем список с ключевыми словами языка программирования С++
		List<String^>^ buf = gcnew List<String^>();
		buf->Add("alignas");
		buf->Add("alignof");
		buf->Add("and");
		buf->Add("and_eq");
		buf->Add("asm");
		buf->Add("auto");
		buf->Add("bitand");
		buf->Add("bitor");
		buf->Add("bool");
		buf->Add("break");
		buf->Add("case");
		buf->Add("catch");
		buf->Add("char");
		buf->Add("char8_t");
		buf->Add("char16_t");
		buf->Add("char32_t");
		buf->Add("class");
		buf->Add("compl");
		buf->Add("concept");
		buf->Add("const");
		buf->Add("const_cast");
		buf->Add("consteval");
		buf->Add("constexpr");
		buf->Add("constinit");
		buf->Add("continue");
		buf->Add("co_await");
		buf->Add("co_return");
		buf->Add("co_yield");
		buf->Add("decltype");
		buf->Add("default");
		buf->Add("delete");
		buf->Add("do");
		buf->Add("double");
		buf->Add("dynamic_cast");
		buf->Add("else");
		buf->Add("enum");
		buf->Add("expicit");
		buf->Add("export");
		buf->Add("extern");
		buf->Add("false");
		buf->Add("float");
		buf->Add("for");
		buf->Add("friend");
		buf->Add("goto");
		buf->Add("if");
		buf->Add("inline");
		buf->Add("int");
		buf->Add("long");
		buf->Add("mutable");
		buf->Add("namespace");
		buf->Add("new");
		buf->Add("noexcept");
		buf->Add("not");
		buf->Add("not_eq");
		buf->Add("nullptr");
		buf->Add("operator");
		buf->Add("or");
		buf->Add("or_eq");
		buf->Add("private");
		buf->Add("protected");
		buf->Add("public");
		buf->Add("register");
		buf->Add("reinterpret_cast");
		buf->Add("requires");
		buf->Add("return");
		buf->Add("short");
		buf->Add("signed");
		buf->Add("sizeof");
		buf->Add("static");
		buf->Add("static_assert");
		buf->Add("static_cast");
		buf->Add("struct");
		buf->Add("switch");
		buf->Add("template");
		buf->Add("this");
		buf->Add("thread_local");
		buf->Add("throw");
		buf->Add("true");
		buf->Add("try");
		buf->Add("typedef");
		buf->Add("typeid");
		buf->Add("typename");
		buf->Add("union");
		buf->Add("unsigned");
		buf->Add("using");
		buf->Add("virtual");
		buf->Add("void");
		buf->Add("volatile");
		buf->Add("wchar_t");
		buf->Add("while");
		buf->Add("xor");
		buf->Add("xor_eq");
		return buf;
	}

}
