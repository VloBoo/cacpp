#pragma once

#include "Registration.h"
#include "MainWindow.h"
namespace CACPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ RegestrationWindow
	/// </summary>

	//ref struct Users {
	//	String^ login;
	//	String^ hash;
	//};

	public ref class RegistrationWindow : public System::Windows::Forms::Form
	{
	public:
		RegistrationWindow(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~RegistrationWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::HelpProvider^ helpProvider1;
	private: System::Windows::Forms::Label^ TL5;
	private: System::Windows::Forms::Label^ TL4;
	private: System::Windows::Forms::Label^ TL3;
	private: System::Windows::Forms::Label^ TL2;
	private: System::Windows::Forms::Label^ TL1;



	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegistrationWindow::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->TL5 = (gcnew System::Windows::Forms::Label());
			this->TL4 = (gcnew System::Windows::Forms::Label());
			this->TL3 = (gcnew System::Windows::Forms::Label());
			this->TL2 = (gcnew System::Windows::Forms::Label());
			this->TL1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			resources->ApplyResources(this->tabControl1, L"tabControl1");
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->helpProvider1->SetShowHelp(this->tabControl1, (cli::safe_cast<System::Boolean>(resources->GetObject(L"tabControl1.ShowHelp"))));
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->TL5);
			this->tabPage1->Controls->Add(this->TL4);
			this->tabPage1->Controls->Add(this->TL3);
			this->tabPage1->Controls->Add(this->TL2);
			this->tabPage1->Controls->Add(this->TL1);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button1);
			resources->ApplyResources(this->tabPage1, L"tabPage1");
			this->tabPage1->Name = L"tabPage1";
			this->helpProvider1->SetShowHelp(this->tabPage1, (cli::safe_cast<System::Boolean>(resources->GetObject(L"tabPage1.ShowHelp"))));
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// TL5
			// 
			resources->ApplyResources(this->TL5, L"TL5");
			this->TL5->Name = L"TL5";
			this->helpProvider1->SetShowHelp(this->TL5, (cli::safe_cast<System::Boolean>(resources->GetObject(L"TL5.ShowHelp"))));
			// 
			// TL4
			// 
			resources->ApplyResources(this->TL4, L"TL4");
			this->TL4->Name = L"TL4";
			this->helpProvider1->SetShowHelp(this->TL4, (cli::safe_cast<System::Boolean>(resources->GetObject(L"TL4.ShowHelp"))));
			// 
			// TL3
			// 
			resources->ApplyResources(this->TL3, L"TL3");
			this->TL3->Name = L"TL3";
			this->helpProvider1->SetShowHelp(this->TL3, (cli::safe_cast<System::Boolean>(resources->GetObject(L"TL3.ShowHelp"))));
			// 
			// TL2
			// 
			resources->ApplyResources(this->TL2, L"TL2");
			this->TL2->Name = L"TL2";
			this->helpProvider1->SetShowHelp(this->TL2, (cli::safe_cast<System::Boolean>(resources->GetObject(L"TL2.ShowHelp"))));
			// 
			// TL1
			// 
			resources->ApplyResources(this->TL1, L"TL1");
			this->TL1->Name = L"TL1";
			this->helpProvider1->SetShowHelp(this->TL1, (cli::safe_cast<System::Boolean>(resources->GetObject(L"TL1.ShowHelp"))));
			// 
			// checkBox1
			// 
			resources->ApplyResources(this->checkBox1, L"checkBox1");
			this->checkBox1->Name = L"checkBox1";
			this->helpProvider1->SetShowHelp(this->checkBox1, (cli::safe_cast<System::Boolean>(resources->GetObject(L"checkBox1.ShowHelp"))));
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			this->helpProvider1->SetShowHelp(this->label3, (cli::safe_cast<System::Boolean>(resources->GetObject(L"label3.ShowHelp"))));
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			this->helpProvider1->SetShowHelp(this->label2, (cli::safe_cast<System::Boolean>(resources->GetObject(L"label2.ShowHelp"))));
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			this->helpProvider1->SetShowHelp(this->label1, (cli::safe_cast<System::Boolean>(resources->GetObject(L"label1.ShowHelp"))));
			// 
			// textBox2
			// 
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->Name = L"textBox2";
			this->helpProvider1->SetShowHelp(this->textBox2, (cli::safe_cast<System::Boolean>(resources->GetObject(L"textBox2.ShowHelp"))));
			// 
			// textBox1
			// 
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			this->helpProvider1->SetShowHelp(this->textBox1, (cli::safe_cast<System::Boolean>(resources->GetObject(L"textBox1.ShowHelp"))));
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->helpProvider1->SetShowHelp(this->button1, (cli::safe_cast<System::Boolean>(resources->GetObject(L"button1.ShowHelp"))));
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegistrationWindow::button1Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->label4);
			resources->ApplyResources(this->tabPage2, L"tabPage2");
			this->tabPage2->Name = L"tabPage2";
			this->helpProvider1->SetShowHelp(this->tabPage2, (cli::safe_cast<System::Boolean>(resources->GetObject(L"tabPage2.ShowHelp"))));
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label8->Name = L"label8";
			this->helpProvider1->SetShowHelp(this->label8, (cli::safe_cast<System::Boolean>(resources->GetObject(L"label8.ShowHelp"))));
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->Name = L"label7";
			this->helpProvider1->SetShowHelp(this->label7, (cli::safe_cast<System::Boolean>(resources->GetObject(L"label7.ShowHelp"))));
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Name = L"label6";
			this->helpProvider1->SetShowHelp(this->label6, (cli::safe_cast<System::Boolean>(resources->GetObject(L"label6.ShowHelp"))));
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			this->helpProvider1->SetShowHelp(this->label5, (cli::safe_cast<System::Boolean>(resources->GetObject(L"label5.ShowHelp"))));
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->helpProvider1->SetShowHelp(this->button2, (cli::safe_cast<System::Boolean>(resources->GetObject(L"button2.ShowHelp"))));
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RegistrationWindow::button2Click);
			// 
			// textBox5
			// 
			resources->ApplyResources(this->textBox5, L"textBox5");
			this->textBox5->Name = L"textBox5";
			this->helpProvider1->SetShowHelp(this->textBox5, (cli::safe_cast<System::Boolean>(resources->GetObject(L"textBox5.ShowHelp"))));
			// 
			// textBox4
			// 
			resources->ApplyResources(this->textBox4, L"textBox4");
			this->textBox4->Name = L"textBox4";
			this->helpProvider1->SetShowHelp(this->textBox4, (cli::safe_cast<System::Boolean>(resources->GetObject(L"textBox4.ShowHelp"))));
			// 
			// textBox3
			// 
			resources->ApplyResources(this->textBox3, L"textBox3");
			this->textBox3->Name = L"textBox3";
			this->helpProvider1->SetShowHelp(this->textBox3, (cli::safe_cast<System::Boolean>(resources->GetObject(L"textBox3.ShowHelp"))));
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			this->helpProvider1->SetShowHelp(this->label4, (cli::safe_cast<System::Boolean>(resources->GetObject(L"label4.ShowHelp"))));
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				resources->GetString(L"comboBox1.Items"), resources->GetString(L"comboBox1.Items1"),
					resources->GetString(L"comboBox1.Items2")
			});
			resources->ApplyResources(this->comboBox1, L"comboBox1");
			this->comboBox1->Name = L"comboBox1";
			this->helpProvider1->SetShowHelp(this->comboBox1, (cli::safe_cast<System::Boolean>(resources->GetObject(L"comboBox1.ShowHelp"))));
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &RegistrationWindow::selected);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// helpProvider1
			// 
			resources->ApplyResources(this->helpProvider1, L"helpProvider1");
			// 
			// RegistrationWindow
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->tabControl1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"RegistrationWindow";
			this->helpProvider1->SetShowHelp(this, (cli::safe_cast<System::Boolean>(resources->GetObject(L"$this.ShowHelp"))));
			this->ShowIcon = false;
			this->Load += gcnew System::EventHandler(this, &RegistrationWindow::regwinLoad);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	public: void show(bool logout) {
		logout ? this->Show() : this->Close();
	}
	private: System::Void button1Click(System::Object^ sender, System::EventArgs^ e) {
		if ((this->textBox1->Text->Length <= MAX_SIZE_REG && this->textBox1->Text->Length > 3) ||
			(this->textBox2->Text->Length <= MAX_SIZE_REG && this->textBox2->Text->Length > 3)) {
			Registration^ r = gcnew Registration();
			bool admin = false;

			if (r->login(this->textBox2->Text, this->textBox1->Text, 1, this->checkBox1->Checked)) {
				admin = true;
			}
			else {
				if (!r->login(this->textBox2->Text, this->textBox1->Text, 0, this->checkBox1->Checked)) {
					MessageBox::Show(this->TL1->Text);
					return;
				}
			}
			r->save();
			this->Hide();
			MainWindow^ mainWindow = gcnew MainWindow(admin,
				gcnew ReturnFun(this, &RegistrationWindow::show));
			mainWindow->Show();
		}
		else {
			MessageBox::Show(this->TL2->Text);
		}
	}
	private: System::Void button2Click(System::Object^ sender, System::EventArgs^ e) {
		bool regok = false;
		if ((this->textBox3->Text->Length <= 20 && this->textBox3->Text->Length > 3) ||
			(this->textBox4->Text->Length <= 20 && this->textBox4->Text->Length > 3) ||
			(this->textBox5->Text->Length <= 20 && this->textBox5->Text->Length > 3)) {
			Registration^ r = gcnew Registration();
			if (this->textBox5->Text == "    ") {
				if (r->addUser(this->textBox3->Text, this->textBox4->Text, 1)) {
					MessageBox::Show(this->TL3->Text);
					regok = true;
				}
				else {
					MessageBox::Show(this->TL4->Text);
				}
			}
			else {
				if (this->textBox4->Text == this->textBox5->Text) {
					if (r->addUser(this->textBox3->Text, this->textBox4->Text, 0)) {
						MessageBox::Show(this->TL3->Text);
						regok = true;
					}
					else {
						MessageBox::Show(this->TL4->Text);
					}
				}
				else {
					MessageBox::Show(this->TL5->Text);
				}
			}
			r->save();
		}
		else {
			MessageBox::Show(this->TL1->Text);
		}
		if (regok) {
			this->textBox3->Text = "";
			this->textBox4->Text = "";
			this->textBox5->Text = "";
			this->tabControl1->SelectTab(0);
		}
	}
	private: System::Void regwinLoad(System::Object^ sender, System::EventArgs^ e) {
		this->helpProvider1->SetShowHelp(this,true);
		Registration^ r = gcnew Registration();
		if (r->isLogin()) {
			this->textBox2->Text = r->getLogin();
			this->textBox1->Text = r->getPassword();
			this->checkBox1->Checked = true;
		}
	}
	private: System::Void selected(System::Object^ sender, System::EventArgs^ e) {
		switch (this->comboBox1->SelectedIndex)
		{
		case 0: {
			System::Threading::Thread::CurrentThread->CurrentUICulture = gcnew System::Globalization::CultureInfo("en");
			break;
		}
		case 1: {
			System::Threading::Thread::CurrentThread->CurrentUICulture = gcnew System::Globalization::CultureInfo("ru");
			break;
		}
		case 2: {
			System::Threading::Thread::CurrentThread->CurrentUICulture = gcnew System::Globalization::CultureInfo("be");
			break;
		}
		}
		String^ byf = this->textBox1->Text;
		String^ byf2 = this->textBox2->Text;
		String^ byf3 = this->textBox3->Text;
		String^ byf4 = this->textBox4->Text;
		String^ byf5 = this->textBox5->Text;
		bool byf6 = this->checkBox1->Checked;
		int buf7 = this->tabControl1->SelectedIndex;
		this->Controls->Clear();
		InitializeComponent();
		this->textBox1->Text = byf;
		this->textBox2->Text = byf2;
		this->textBox3->Text = byf3;
		this->textBox4->Text = byf4;
		this->textBox5->Text = byf5;
		this->checkBox1->Checked = byf6;
		this->tabControl1->SelectedIndex = buf7;
		
	}
	};
}
