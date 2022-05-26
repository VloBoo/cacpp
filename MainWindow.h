#pragma once
#include "FileCPP.h"

namespace CACPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public delegate void ReturnFun(bool);
	/// <summary>
	/// Ñâîäêà äëÿ MainWindow
	/// </summary>

	public ref class MainWindow : public System::Windows::Forms::Form
	{
		ref struct GenSize {
			int WinH; //øèğèíà è âûñîòà îêíà
			int	WinW;
			int TextH; //øèğèíà è âûñîòà îêíà
			int	TextW;
			int PanelH; //Ğàñïîëîæåíèå ïàíåëè
			int PanelWPoint;
		};
	public:
		MainWindow(bool admin, ReturnFun^ rf) {
			InitializeComponent();
			this->admin = admin;
			this->rf = rf;
			this->filecpp = gcnew FileCPP("New");
			this->label1->Text = filecpp->Path + ((this->filecpp->Status) ? "*" : "");
			//	this->regWin = regWin;
		}


	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ settingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ langToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ russianĞóññêèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ englishEnglishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ belarussianÁåëàğóñê³ToolStripMenuItem;


	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;



	private: System::Windows::Forms::TabControl^ tabControl1;

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolStripMenuItem^ openFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ createFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ savaFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ savaFileAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;




	private: System::ComponentModel::IContainer^ components;


		   //private: RegestrationWindow^ regWin;
	private: bool admin;
	private: ReturnFun^ rf;
	private: FileCPP^ filecpp;
	private: GenSize^ size;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ backgroundToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ whiteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ blackToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ skyblueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^ logOutToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^ debugToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sizeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ locationToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
		   /// <summary>
		   /// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		   /// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->openFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->createFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			   this->savaFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->savaFileAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->settingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->langToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->russianĞóññêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->englishEnglishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->belarussianÁåëàğóñê³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->backgroundToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->whiteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->blackToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->skyblueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			   this->logOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			   this->debugToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->sizeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->locationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			   this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			   this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			   this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			   this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			   this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			   this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			   this->menuStrip1->SuspendLayout();
			   this->statusStrip1->SuspendLayout();
			   this->tabControl1->SuspendLayout();
			   this->tabPage1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->BackColor = System::Drawing::SystemColors::Window;
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->fileToolStripMenuItem,
					   this->settingToolStripMenuItem
			   });
			   resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			   this->menuStrip1->Name = L"menuStrip1";
			   // 
			   // fileToolStripMenuItem
			   // 
			   this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				   this->openFileToolStripMenuItem,
					   this->createFileToolStripMenuItem, this->toolStripSeparator1, this->savaFileToolStripMenuItem, this->savaFileAsToolStripMenuItem
			   });
			   this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			   resources->ApplyResources(this->fileToolStripMenuItem, L"fileToolStripMenuItem");
			   // 
			   // openFileToolStripMenuItem
			   // 
			   this->openFileToolStripMenuItem->Name = L"openFileToolStripMenuItem";
			   resources->ApplyResources(this->openFileToolStripMenuItem, L"openFileToolStripMenuItem");
			   this->openFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::openFileToolStripMenuItem_Click);
			   // 
			   // createFileToolStripMenuItem
			   // 
			   this->createFileToolStripMenuItem->Name = L"createFileToolStripMenuItem";
			   resources->ApplyResources(this->createFileToolStripMenuItem, L"createFileToolStripMenuItem");
			   this->createFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::createFileToolStripMenuItem_Click);
			   // 
			   // toolStripSeparator1
			   // 
			   this->toolStripSeparator1->Name = L"toolStripSeparator1";
			   resources->ApplyResources(this->toolStripSeparator1, L"toolStripSeparator1");
			   // 
			   // savaFileToolStripMenuItem
			   // 
			   this->savaFileToolStripMenuItem->Name = L"savaFileToolStripMenuItem";
			   resources->ApplyResources(this->savaFileToolStripMenuItem, L"savaFileToolStripMenuItem");
			   this->savaFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::savaFileToolStripMenuItem_Click);
			   // 
			   // savaFileAsToolStripMenuItem
			   // 
			   this->savaFileAsToolStripMenuItem->Name = L"savaFileAsToolStripMenuItem";
			   resources->ApplyResources(this->savaFileAsToolStripMenuItem, L"savaFileAsToolStripMenuItem");
			   this->savaFileAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::savaFileAsToolStripMenuItem_Click);
			   // 
			   // settingToolStripMenuItem
			   // 
			   this->settingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				   this->langToolStripMenuItem,
					   this->backgroundToolStripMenuItem, this->toolStripSeparator2, this->logOutToolStripMenuItem, this->toolStripSeparator3, this->debugToolStripMenuItem
			   });
			   this->settingToolStripMenuItem->Name = L"settingToolStripMenuItem";
			   resources->ApplyResources(this->settingToolStripMenuItem, L"settingToolStripMenuItem");
			   // 
			   // langToolStripMenuItem
			   // 
			   this->langToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				   this->russianĞóññêèéToolStripMenuItem,
					   this->englishEnglishToolStripMenuItem, this->belarussianÁåëàğóñê³ToolStripMenuItem
			   });
			   this->langToolStripMenuItem->Name = L"langToolStripMenuItem";
			   resources->ApplyResources(this->langToolStripMenuItem, L"langToolStripMenuItem");
			   // 
			   // russianĞóññêèéToolStripMenuItem
			   // 
			   this->russianĞóññêèéToolStripMenuItem->Name = L"russianĞóññêèéToolStripMenuItem";
			   resources->ApplyResources(this->russianĞóññêèéToolStripMenuItem, L"russianĞóññêèéToolStripMenuItem");
			   this->russianĞóññêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::menuSettingLanguageRu);
			   // 
			   // englishEnglishToolStripMenuItem
			   // 
			   this->englishEnglishToolStripMenuItem->Name = L"englishEnglishToolStripMenuItem";
			   resources->ApplyResources(this->englishEnglishToolStripMenuItem, L"englishEnglishToolStripMenuItem");
			   this->englishEnglishToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::menuSettingLanguageEn);
			   // 
			   // belarussianÁåëàğóñê³ToolStripMenuItem
			   // 
			   this->belarussianÁåëàğóñê³ToolStripMenuItem->Name = L"belarussianÁåëàğóñê³ToolStripMenuItem";
			   resources->ApplyResources(this->belarussianÁåëàğóñê³ToolStripMenuItem, L"belarussianÁåëàğóñê³ToolStripMenuItem");
			   this->belarussianÁåëàğóñê³ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::menuSettingLanguageBy);
			   // 
			   // backgroundToolStripMenuItem
			   // 
			   this->backgroundToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				   this->whiteToolStripMenuItem,
					   this->blackToolStripMenuItem, this->skyblueToolStripMenuItem
			   });
			   this->backgroundToolStripMenuItem->Name = L"backgroundToolStripMenuItem";
			   resources->ApplyResources(this->backgroundToolStripMenuItem, L"backgroundToolStripMenuItem");
			   // 
			   // whiteToolStripMenuItem
			   // 
			   this->whiteToolStripMenuItem->Name = L"whiteToolStripMenuItem";
			   resources->ApplyResources(this->whiteToolStripMenuItem, L"whiteToolStripMenuItem");
			   this->whiteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::whiteToolStripMenuItem_Click);
			   // 
			   // blackToolStripMenuItem
			   // 
			   this->blackToolStripMenuItem->Name = L"blackToolStripMenuItem";
			   resources->ApplyResources(this->blackToolStripMenuItem, L"blackToolStripMenuItem");
			   this->blackToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::blackToolStripMenuItem_Click);
			   // 
			   // skyblueToolStripMenuItem
			   // 
			   this->skyblueToolStripMenuItem->Name = L"skyblueToolStripMenuItem";
			   resources->ApplyResources(this->skyblueToolStripMenuItem, L"skyblueToolStripMenuItem");
			   this->skyblueToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::skyblueToolStripMenuItem_Click);
			   // 
			   // toolStripSeparator2
			   // 
			   this->toolStripSeparator2->Name = L"toolStripSeparator2";
			   resources->ApplyResources(this->toolStripSeparator2, L"toolStripSeparator2");
			   // 
			   // logOutToolStripMenuItem
			   // 
			   this->logOutToolStripMenuItem->Name = L"logOutToolStripMenuItem";
			   resources->ApplyResources(this->logOutToolStripMenuItem, L"logOutToolStripMenuItem");
			   this->logOutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::logOutToolStripMenuItem_Click);
			   // 
			   // toolStripSeparator3
			   // 
			   this->toolStripSeparator3->Name = L"toolStripSeparator3";
			   resources->ApplyResources(this->toolStripSeparator3, L"toolStripSeparator3");
			   // 
			   // debugToolStripMenuItem
			   // 
			   this->debugToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->sizeToolStripMenuItem,
					   this->locationToolStripMenuItem
			   });
			   resources->ApplyResources(this->debugToolStripMenuItem, L"debugToolStripMenuItem");
			   this->debugToolStripMenuItem->Name = L"debugToolStripMenuItem";
			   // 
			   // sizeToolStripMenuItem
			   // 
			   this->sizeToolStripMenuItem->Name = L"sizeToolStripMenuItem";
			   resources->ApplyResources(this->sizeToolStripMenuItem, L"sizeToolStripMenuItem");
			   this->sizeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::sizeToolStripMenuItem_Click);
			   // 
			   // locationToolStripMenuItem
			   // 
			   this->locationToolStripMenuItem->Name = L"locationToolStripMenuItem";
			   resources->ApplyResources(this->locationToolStripMenuItem, L"locationToolStripMenuItem");
			   this->locationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::locationToolStripMenuItem_Click);
			   // 
			   // statusStrip1
			   // 
			   this->statusStrip1->BackColor = System::Drawing::SystemColors::Window;
			   this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			   resources->ApplyResources(this->statusStrip1, L"statusStrip1");
			   this->statusStrip1->Name = L"statusStrip1";
			   // 
			   // toolStripStatusLabel1
			   // 
			   this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			   resources->ApplyResources(this->toolStripStatusLabel1, L"toolStripStatusLabel1");
			   // 
			   // tabControl1
			   // 
			   this->tabControl1->Controls->Add(this->tabPage1);
			   this->tabControl1->Controls->Add(this->tabPage2);
			   this->tabControl1->Controls->Add(this->tabPage3);
			   resources->ApplyResources(this->tabControl1, L"tabControl1");
			   this->tabControl1->Name = L"tabControl1";
			   this->tabControl1->SelectedIndex = 0;
			   // 
			   // tabPage1
			   // 
			   this->tabPage1->Controls->Add(this->textBox1);
			   resources->ApplyResources(this->tabPage1, L"tabPage1");
			   this->tabPage1->Name = L"tabPage1";
			   this->tabPage1->UseVisualStyleBackColor = true;
			   // 
			   // textBox1
			   // 
			   this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   resources->ApplyResources(this->textBox1, L"textBox1");
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainWindow::textBox1_TextChanged);
			   // 
			   // tabPage2
			   // 
			   resources->ApplyResources(this->tabPage2, L"tabPage2");
			   this->tabPage2->Name = L"tabPage2";
			   this->tabPage2->UseVisualStyleBackColor = true;
			   // 
			   // tabPage3
			   // 
			   resources->ApplyResources(this->tabPage3, L"tabPage3");
			   this->tabPage3->Name = L"tabPage3";
			   this->tabPage3->UseVisualStyleBackColor = true;
			   // 
			   // label1
			   // 
			   resources->ApplyResources(this->label1, L"label1");
			   this->label1->Name = L"label1";
			   // 
			   // saveFileDialog1
			   // 
			   resources->ApplyResources(this->saveFileDialog1, L"saveFileDialog1");
			   // 
			   // openFileDialog1
			   // 
			   resources->ApplyResources(this->openFileDialog1, L"openFileDialog1");
			   // 
			   // richTextBox1
			   // 
			   this->richTextBox1->AcceptsTab = true;
			   resources->ApplyResources(this->richTextBox1, L"richTextBox1");
			   this->richTextBox1->Name = L"richTextBox1";
			   this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MainWindow::richTextBox1_TextChanged);
			   // 
			   // MainWindow
			   // 
			   resources->ApplyResources(this, L"$this");
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::Window;
			   this->Controls->Add(this->richTextBox1);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->tabControl1);
			   this->Controls->Add(this->statusStrip1);
			   this->Controls->Add(this->menuStrip1);
			   this->MainMenuStrip = this->menuStrip1;
			   this->Name = L"MainWindow";
			   this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainWindow::MainWindow_FormClosing);
			   this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainWindow::MainWindow_FormClosed);
			   this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			   this->SizeChanged += gcnew System::EventHandler(this, &MainWindow::MainWindow_SizeChanged);
			   this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainWindow::MainWindow_KeyUp);
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   this->statusStrip1->ResumeLayout(false);
			   this->statusStrip1->PerformLayout();
			   this->tabControl1->ResumeLayout(false);
			   this->tabPage1->ResumeLayout(false);
			   this->tabPage1->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion



	private: System::Void menuSettingLanguageRu(System::Object^ sender, System::EventArgs^ e) {
		System::Threading::Thread::CurrentThread->CurrentUICulture = gcnew System::Globalization::CultureInfo("ru");
		this->Controls->Clear();
		InitializeComponent();
		this->toolStripStatusLabel1->Text = "Ğóññêèé";
	}
	private: System::Void menuSettingLanguageEn(System::Object^ sender, System::EventArgs^ e) {
		System::Threading::Thread::CurrentThread->CurrentUICulture = gcnew System::Globalization::CultureInfo("en");
		this->Controls->Clear();
		InitializeComponent();
		this->toolStripStatusLabel1->Text = "English";
	}
	private: System::Void menuSettingLanguageBy(System::Object^ sender, System::EventArgs^ e) {
		System::Threading::Thread::CurrentThread->CurrentUICulture = gcnew System::Globalization::CultureInfo("be");
		this->Controls->Clear();
		InitializeComponent();
		this->toolStripStatusLabel1->Text = "Áåëàğóñê³";
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = "Çàáëîêèğîâàííî";
	}
	private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
		if (this->admin) {
			this->debugToolStripMenuItem->Enabled = true;
		}
		this->size = gcnew GenSize();
		this->size->WinH = this->Height;
		this->size->WinW = this->Width;
		this->size->TextH = this->richTextBox1->Height;
		this->size->TextW = this->richTextBox1->Width;
		this->size->PanelH = this->tabControl1->Height;
		this->size->PanelWPoint = this->tabControl1->Location.X;
	}
	private: System::Void MainWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (!open()) {
			e->Cancel = true;
		}
	}
	private: bool clo = false;
	private: System::Void MainWindow_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->rf(this->clo);
	}
	private: System::Void logOutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->clo = true;
		this->Close();
	}

	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->filecpp->Status = true;
		this->label1->Text = filecpp->Path + ((this->filecpp->Status) ? "*" : "");
	}

	private: void save(bool as) {
		if (as) {
			this->saveFileDialog1->FileName = filecpp->Path;
			if ((this->saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)) {
				return;
			}
			this->filecpp->Path = this->saveFileDialog1->FileName;
		}
		if (this->filecpp->Path == "New") {
			save(true);
			return;
		}
		this->filecpp->Text = this->richTextBox1->Text;
		this->filecpp->save();
		this->filecpp->Status = false;
		this->label1->Text = filecpp->Path + ((this->filecpp->Status) ? "*" : "");
	}
	private: bool open() {
		if (this->filecpp->Status) {
			System::Windows::Forms::DialogResult^ dr;
			dr = MessageBox::Show("Ñîõğàíèòü ôàéë èëè îòìåíèòü äåéñòâèå?", "Ôàéë íå ñîõğàíåí!", MessageBoxButtons::YesNoCancel);
			if (dr->Equals(System::Windows::Forms::DialogResult::Yes)) {
				save(false);
				return true;
			}
			else if (dr->Equals(System::Windows::Forms::DialogResult::No)) {
				return true;
			}
			else if (dr->Equals(System::Windows::Forms::DialogResult::Cancel)) {
				return false;
			}
		}
	}

	private: System::Void openFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (open()) {
			if ((this->openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)) {
				return;
			}
			this->filecpp = gcnew FileCPP(this->openFileDialog1->FileName);
			this->richTextBox1->Text = this->filecpp->Text;
			this->filecpp->Status = false;
			this->label1->Text = filecpp->Path + ((this->filecpp->Status) ? "*" : "");
		}
	}
	private: System::Void createFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (open()) {
			this->richTextBox1->Text = "";
			this->filecpp = gcnew FileCPP("New");
			this->label1->Text = filecpp->Path + ((this->filecpp->Status) ? "*" : "");
		}
	}
	private: System::Void savaFileAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		save(true);
	}
	private: System::Void savaFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		save(false);

	}
	private: System::Void MainWindow_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	}
	private: System::Void whiteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void blackToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void skyblueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void sizeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(this->Height.ToString(), this->Width.ToString());
	}
	private: System::Void MainWindow_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		this->richTextBox1->Height = this->size->TextH - (this->size->WinH - this->Height);
		this->richTextBox1->Width = this->size->TextW - (this->size->WinW - this->Width);
		this->tabControl1->Height = this->size->PanelH - (this->size->WinH - this->Height);
		this->tabControl1->Location = Point(this->size->PanelWPoint - (this->size->WinW - this->Width),this->tabControl1->Location.Y);
	}
	private: System::Void locationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ buf = "Win:\t" + this->Height + "\n\t" + this->Width
			+ "\nText:\t" + this->richTextBox1->Height + "\n\t" + this->richTextBox1->Width +
			"\nPanel:\t" + this->tabControl1->Height + "\n\t" + this->tabControl1->Location.X + "p" + (this->size->PanelWPoint - (this->size->WinW - this->Width)).ToString();
		MessageBox::Show(buf);

	}
	};
}
