#pragma once
#include "FileCPP.h"
#include "Analyzer.h"

#ifdef _DEBUG
#define debug(x) if(this->admin){MessageBox::Show(x);}
#else
#define debug(x) 
#endif


namespace CACPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public delegate void ReturnFun(bool);
	public delegate void LocalFun(int l);
	/// <summary>
	///            MainWindow
	/// </summary>

	public ref class MainWindow : public System::Windows::Forms::Form
	{
		ref struct GenSize {
			int WinH; //                    
			int WinW;
			int TextH; //                    
			int TextW;
			int PanelH; //                   
			int PanelWPoint;
			int PanelListH;
		};
	public:
		MainWindow(bool admin, ReturnFun^ rf, LocalFun^ lf) {
			InitializeComponent();
			this->admin = admin;
			this->lf = lf;
			this->rf = rf;
			this->filecpp = gcnew FileCPP("New");
			this->label1->Text = filecpp->Path + ((this->filecpp->Status) ? "*" : "");
			//	this->regWin = regWin;
		}


	protected:
		/// <summary>
		///                                    .
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
	private: System::Windows::Forms::ToolStripMenuItem^ russianToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ englishEnglishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ belarussianToolStripMenuItem;


	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;



	private: System::Windows::Forms::TabControl^ tabControl1;

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;



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
	private: LocalFun^ lf;
	private: FileCPP^ filecpp;
	private: GenSize^ size;
	private: List<Ctring^>^ funs;
	private: System::Drawing::Color color1;
	private: System::Drawing::Color color2;
	private: System::Drawing::Color color3;
	private: System::Drawing::Color color4;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ backgroundToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ whiteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ blackToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ skyblueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	private: System::Windows::Forms::ToolStripMenuItem^ debugToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sizeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ locationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^ logOutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fontToolStripMenuItem;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ setToolStripMenuItem;
	private: System::Windows::Forms::ListBox^ listBox1;


	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::HelpProvider^ helpProvider1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^ analyzeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
private: System::Windows::Forms::Label^ TL1;
private: System::Windows::Forms::Label^ TL2;
private: System::Windows::Forms::Label^ TL3;















	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
		   /// <summary>
		   ///                                     .
		   /// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		///                                                           
		///                                                 .
		/// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->createFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->openFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			   this->savaFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->savaFileAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			   this->analyzeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			   this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->logOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->settingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->backgroundToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->whiteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->blackToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->skyblueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->langToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->russianToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->englishEnglishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->belarussianToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			   this->debugToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->sizeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->locationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->setToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			   this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			   this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			   this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			   this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			   this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			   this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			   this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			   this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			   this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			   this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			   this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			   this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			   this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			   this->TL1 = (gcnew System::Windows::Forms::Label());
			   this->TL2 = (gcnew System::Windows::Forms::Label());
			   this->TL3 = (gcnew System::Windows::Forms::Label());
			   this->menuStrip1->SuspendLayout();
			   this->statusStrip1->SuspendLayout();
			   this->tabControl1->SuspendLayout();
			   this->tabPage1->SuspendLayout();
			   this->tabPage2->SuspendLayout();
			   this->tabPage3->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->BackColor = System::Drawing::SystemColors::Window;
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				   this->fileToolStripMenuItem,
					   this->settingToolStripMenuItem, this->helpToolStripMenuItem
			   });
			   resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			   this->menuStrip1->Name = L"menuStrip1";
			   this->helpProvider1->SetShowHelp(this->menuStrip1, (cli::safe_cast<System::Boolean>(resources->GetObject(L"menuStrip1.ShowHelp"))));
			   // 
			   // fileToolStripMenuItem
			   // 
			   this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				   this->createFileToolStripMenuItem,
					   this->openFileToolStripMenuItem, this->toolStripSeparator1, this->savaFileToolStripMenuItem, this->savaFileAsToolStripMenuItem,
					   this->toolStripSeparator4, this->analyzeToolStripMenuItem, this->toolStripSeparator3, this->exitToolStripMenuItem, this->logOutToolStripMenuItem
			   });
			   this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			   resources->ApplyResources(this->fileToolStripMenuItem, L"fileToolStripMenuItem");
			   // 
			   // createFileToolStripMenuItem
			   // 
			   resources->ApplyResources(this->createFileToolStripMenuItem, L"createFileToolStripMenuItem");
			   this->createFileToolStripMenuItem->Name = L"createFileToolStripMenuItem";
			   this->createFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::newFile);
			   // 
			   // openFileToolStripMenuItem
			   // 
			   resources->ApplyResources(this->openFileToolStripMenuItem, L"openFileToolStripMenuItem");
			   this->openFileToolStripMenuItem->Name = L"openFileToolStripMenuItem";
			   this->openFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::openFile);
			   // 
			   // toolStripSeparator1
			   // 
			   this->toolStripSeparator1->Name = L"toolStripSeparator1";
			   resources->ApplyResources(this->toolStripSeparator1, L"toolStripSeparator1");
			   // 
			   // savaFileToolStripMenuItem
			   // 
			   resources->ApplyResources(this->savaFileToolStripMenuItem, L"savaFileToolStripMenuItem");
			   this->savaFileToolStripMenuItem->Name = L"savaFileToolStripMenuItem";
			   this->savaFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::saveFile);
			   // 
			   // savaFileAsToolStripMenuItem
			   // 
			   resources->ApplyResources(this->savaFileAsToolStripMenuItem, L"savaFileAsToolStripMenuItem");
			   this->savaFileAsToolStripMenuItem->Name = L"savaFileAsToolStripMenuItem";
			   this->savaFileAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::saveFileAs);
			   // 
			   // toolStripSeparator4
			   // 
			   this->toolStripSeparator4->Name = L"toolStripSeparator4";
			   resources->ApplyResources(this->toolStripSeparator4, L"toolStripSeparator4");
			   // 
			   // analyzeToolStripMenuItem
			   // 
			   resources->ApplyResources(this->analyzeToolStripMenuItem, L"analyzeToolStripMenuItem");
			   this->analyzeToolStripMenuItem->Name = L"analyzeToolStripMenuItem";
			   this->analyzeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::menuAnalyzer);
			   // 
			   // toolStripSeparator3
			   // 
			   this->toolStripSeparator3->Name = L"toolStripSeparator3";
			   resources->ApplyResources(this->toolStripSeparator3, L"toolStripSeparator3");
			   // 
			   // exitToolStripMenuItem
			   // 
			   resources->ApplyResources(this->exitToolStripMenuItem, L"exitToolStripMenuItem");
			   this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			   this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::menuExit);
			   // 
			   // logOutToolStripMenuItem
			   // 
			   this->logOutToolStripMenuItem->Name = L"logOutToolStripMenuItem";
			   resources->ApplyResources(this->logOutToolStripMenuItem, L"logOutToolStripMenuItem");
			   this->logOutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::menuLogout);
			   // 
			   // settingToolStripMenuItem
			   // 
			   this->settingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				   this->backgroundToolStripMenuItem,
					   this->fontToolStripMenuItem, this->langToolStripMenuItem, this->toolStripSeparator2, this->debugToolStripMenuItem
			   });
			   this->settingToolStripMenuItem->Name = L"settingToolStripMenuItem";
			   resources->ApplyResources(this->settingToolStripMenuItem, L"settingToolStripMenuItem");
			   // 
			   // backgroundToolStripMenuItem
			   // 
			   this->backgroundToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				   this->whiteToolStripMenuItem,
					   this->blackToolStripMenuItem, this->skyblueToolStripMenuItem
			   });
			   resources->ApplyResources(this->backgroundToolStripMenuItem, L"backgroundToolStripMenuItem");
			   this->backgroundToolStripMenuItem->Name = L"backgroundToolStripMenuItem";
			   // 
			   // whiteToolStripMenuItem
			   // 
			   this->whiteToolStripMenuItem->Name = L"whiteToolStripMenuItem";
			   resources->ApplyResources(this->whiteToolStripMenuItem, L"whiteToolStripMenuItem");
			   this->whiteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::menuBackgroundWhite);
			   // 
			   // blackToolStripMenuItem
			   // 
			   this->blackToolStripMenuItem->Name = L"blackToolStripMenuItem";
			   resources->ApplyResources(this->blackToolStripMenuItem, L"blackToolStripMenuItem");
			   this->blackToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::menuBackgroundPink);
			   // 
			   // skyblueToolStripMenuItem
			   // 
			   this->skyblueToolStripMenuItem->Name = L"skyblueToolStripMenuItem";
			   resources->ApplyResources(this->skyblueToolStripMenuItem, L"skyblueToolStripMenuItem");
			   this->skyblueToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::menuBackgroundSkyblue);
			   // 
			   // fontToolStripMenuItem
			   // 
			   resources->ApplyResources(this->fontToolStripMenuItem, L"fontToolStripMenuItem");
			   this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
			   this->fontToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::menuFont);
			   // 
			   // langToolStripMenuItem
			   // 
			   this->langToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				   this->russianToolStripMenuItem,
					   this->englishEnglishToolStripMenuItem, this->belarussianToolStripMenuItem
			   });
			   resources->ApplyResources(this->langToolStripMenuItem, L"langToolStripMenuItem");
			   this->langToolStripMenuItem->Name = L"langToolStripMenuItem";
			   // 
			   // russianToolStripMenuItem
			   // 
			   this->russianToolStripMenuItem->Name = L"russianToolStripMenuItem";
			   resources->ApplyResources(this->russianToolStripMenuItem, L"russianToolStripMenuItem");
			   this->russianToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::menuLanguageRu);
			   // 
			   // englishEnglishToolStripMenuItem
			   // 
			   this->englishEnglishToolStripMenuItem->Name = L"englishEnglishToolStripMenuItem";
			   resources->ApplyResources(this->englishEnglishToolStripMenuItem, L"englishEnglishToolStripMenuItem");
			   this->englishEnglishToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::menuLanguageEn);
			   // 
			   // belarussianToolStripMenuItem
			   // 
			   this->belarussianToolStripMenuItem->Name = L"belarussianToolStripMenuItem";
			   resources->ApplyResources(this->belarussianToolStripMenuItem, L"belarussianToolStripMenuItem");
			   this->belarussianToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::menuLanguageBe);
			   // 
			   // toolStripSeparator2
			   // 
			   this->toolStripSeparator2->Name = L"toolStripSeparator2";
			   resources->ApplyResources(this->toolStripSeparator2, L"toolStripSeparator2");
			   // 
			   // debugToolStripMenuItem
			   // 
			   this->debugToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				   this->sizeToolStripMenuItem,
					   this->locationToolStripMenuItem, this->setToolStripMenuItem
			   });
			   this->debugToolStripMenuItem->Name = L"debugToolStripMenuItem";
			   resources->ApplyResources(this->debugToolStripMenuItem, L"debugToolStripMenuItem");
			   // 
			   // sizeToolStripMenuItem
			   // 
			   this->sizeToolStripMenuItem->Name = L"sizeToolStripMenuItem";
			   resources->ApplyResources(this->sizeToolStripMenuItem, L"sizeToolStripMenuItem");
			   this->sizeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::debugSize);
			   // 
			   // locationToolStripMenuItem
			   // 
			   this->locationToolStripMenuItem->Name = L"locationToolStripMenuItem";
			   resources->ApplyResources(this->locationToolStripMenuItem, L"locationToolStripMenuItem");
			   this->locationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::debugLocation);
			   // 
			   // setToolStripMenuItem
			   // 
			   this->setToolStripMenuItem->Name = L"setToolStripMenuItem";
			   resources->ApplyResources(this->setToolStripMenuItem, L"setToolStripMenuItem");
			   this->setToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::setToolStripMenuItem_Click);
			   // 
			   // helpToolStripMenuItem
			   // 
			   this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			   resources->ApplyResources(this->helpToolStripMenuItem, L"helpToolStripMenuItem");
			   this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::help);
			   // 
			   // statusStrip1
			   // 
			   this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->toolStripStatusLabel1,
					   this->toolStripStatusLabel2
			   });
			   resources->ApplyResources(this->statusStrip1, L"statusStrip1");
			   this->statusStrip1->Name = L"statusStrip1";
			   this->helpProvider1->SetShowHelp(this->statusStrip1, (cli::safe_cast<System::Boolean>(resources->GetObject(L"statusStrip1.ShowHelp"))));
			   // 
			   // toolStripStatusLabel1
			   // 
			   this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			   resources->ApplyResources(this->toolStripStatusLabel1, L"toolStripStatusLabel1");
			   // 
			   // toolStripStatusLabel2
			   // 
			   this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			   resources->ApplyResources(this->toolStripStatusLabel2, L"toolStripStatusLabel2");
			   // 
			   // tabControl1
			   // 
			   this->tabControl1->Controls->Add(this->tabPage1);
			   this->tabControl1->Controls->Add(this->tabPage2);
			   this->tabControl1->Controls->Add(this->tabPage3);
			   resources->ApplyResources(this->tabControl1, L"tabControl1");
			   this->tabControl1->Name = L"tabControl1";
			   this->tabControl1->SelectedIndex = 0;
			   this->helpProvider1->SetShowHelp(this->tabControl1, (cli::safe_cast<System::Boolean>(resources->GetObject(L"tabControl1.ShowHelp"))));
			   // 
			   // tabPage1
			   // 
			   this->tabPage1->Controls->Add(this->listBox1);
			   resources->ApplyResources(this->tabPage1, L"tabPage1");
			   this->tabPage1->Name = L"tabPage1";
			   this->helpProvider1->SetShowHelp(this->tabPage1, (cli::safe_cast<System::Boolean>(resources->GetObject(L"tabPage1.ShowHelp"))));
			   // 
			   // listBox1
			   // 
			   this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->listBox1->FormattingEnabled = true;
			   resources->ApplyResources(this->listBox1, L"listBox1");
			   this->listBox1->Name = L"listBox1";
			   this->helpProvider1->SetShowHelp(this->listBox1, (cli::safe_cast<System::Boolean>(resources->GetObject(L"listBox1.ShowHelp"))));
			   // 
			   // tabPage2
			   // 
			   this->tabPage2->Controls->Add(this->listBox2);
			   resources->ApplyResources(this->tabPage2, L"tabPage2");
			   this->tabPage2->Name = L"tabPage2";
			   this->helpProvider1->SetShowHelp(this->tabPage2, (cli::safe_cast<System::Boolean>(resources->GetObject(L"tabPage2.ShowHelp"))));
			   this->tabPage2->UseVisualStyleBackColor = true;
			   // 
			   // listBox2
			   // 
			   this->listBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->listBox2->FormattingEnabled = true;
			   resources->ApplyResources(this->listBox2, L"listBox2");
			   this->listBox2->Name = L"listBox2";
			   this->helpProvider1->SetShowHelp(this->listBox2, (cli::safe_cast<System::Boolean>(resources->GetObject(L"listBox2.ShowHelp"))));
			   this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::pickList2);
			   // 
			   // tabPage3
			   // 
			   this->tabPage3->Controls->Add(this->listBox3);
			   resources->ApplyResources(this->tabPage3, L"tabPage3");
			   this->tabPage3->Name = L"tabPage3";
			   this->helpProvider1->SetShowHelp(this->tabPage3, (cli::safe_cast<System::Boolean>(resources->GetObject(L"tabPage3.ShowHelp"))));
			   this->tabPage3->UseVisualStyleBackColor = true;
			   // 
			   // listBox3
			   // 
			   this->listBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->listBox3->FormattingEnabled = true;
			   resources->ApplyResources(this->listBox3, L"listBox3");
			   this->listBox3->Name = L"listBox3";
			   this->helpProvider1->SetShowHelp(this->listBox3, (cli::safe_cast<System::Boolean>(resources->GetObject(L"listBox3.ShowHelp"))));
			   // 
			   // label1
			   // 
			   resources->ApplyResources(this->label1, L"label1");
			   this->label1->Name = L"label1";
			   this->helpProvider1->SetShowHelp(this->label1, (cli::safe_cast<System::Boolean>(resources->GetObject(L"label1.ShowHelp"))));
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
			   this->helpProvider1->SetShowHelp(this->richTextBox1, (cli::safe_cast<System::Boolean>(resources->GetObject(L"richTextBox1.ShowHelp"))));
			   this->richTextBox1->SelectionChanged += gcnew System::EventHandler(this, &MainWindow::selectionChanged);
			   this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MainWindow::textChanged);
			   // 
			   // helpProvider1
			   // 
			   resources->ApplyResources(this->helpProvider1, L"helpProvider1");
			   // 
			   // TL1
			   // 
			   resources->ApplyResources(this->TL1, L"TL1");
			   this->TL1->Name = L"TL1";
			   this->helpProvider1->SetShowHelp(this->TL1, (cli::safe_cast<System::Boolean>(resources->GetObject(L"TL1.ShowHelp"))));
			   // 
			   // TL2
			   // 
			   resources->ApplyResources(this->TL2, L"TL2");
			   this->TL2->Name = L"TL2";
			   this->helpProvider1->SetShowHelp(this->TL2, (cli::safe_cast<System::Boolean>(resources->GetObject(L"TL2.ShowHelp"))));
			   // 
			   // TL3
			   // 
			   resources->ApplyResources(this->TL3, L"TL3");
			   this->TL3->Name = L"TL3";
			   this->helpProvider1->SetShowHelp(this->TL3, (cli::safe_cast<System::Boolean>(resources->GetObject(L"TL3.ShowHelp"))));
			   // 
			   // MainWindow
			   // 
			   resources->ApplyResources(this, L"$this");
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->Controls->Add(this->TL3);
			   this->Controls->Add(this->TL2);
			   this->Controls->Add(this->TL1);
			   this->Controls->Add(this->richTextBox1);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->tabControl1);
			   this->Controls->Add(this->statusStrip1);
			   this->Controls->Add(this->menuStrip1);
			   this->KeyPreview = true;
			   this->MainMenuStrip = this->menuStrip1;
			   this->Name = L"MainWindow";
			   this->helpProvider1->SetShowHelp(this, (cli::safe_cast<System::Boolean>(resources->GetObject(L"$this.ShowHelp"))));
			   this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainWindow::winClosed);
			   this->Load += gcnew System::EventHandler(this, &MainWindow::winLoad);
			   this->SizeChanged += gcnew System::EventHandler(this, &MainWindow::winResize);
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   this->statusStrip1->ResumeLayout(false);
			   this->statusStrip1->PerformLayout();
			   this->tabControl1->ResumeLayout(false);
			   this->tabPage1->ResumeLayout(false);
			   this->tabPage2->ResumeLayout(false);
			   this->tabPage3->ResumeLayout(false);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void menuLanguageRu(System::Object^ sender, System::EventArgs^ e) {
		this->lf(1);
		update("ru");
	}
	private: System::Void menuLanguageEn(System::Object^ sender, System::EventArgs^ e) {
		this->lf(0);
		update("en");
	}
	private: System::Void menuLanguageBe(System::Object^ sender, System::EventArgs^ e) {
		this->lf(2);
		update("be");
	}
	private: void update(String^ language) {
		this->textChangedEnable = false;
		System::Threading::Thread::CurrentThread->CurrentUICulture = gcnew System::Globalization::CultureInfo(language);
		String^ byf = this->richTextBox1->Text;
		String^ byf2 = this->label1->Text;
		String^ byf3 = this->listBox1->Text;
		String^ byf4 = this->listBox2->Text;
		String^ byf5 = this->listBox3->Text;
		this->Controls->Clear();
		InitializeComponent();
		colorUpdate();
		this->richTextBox1->Text = byf;
		this->label1->Text = byf2;
		this->listBox1->Text = byf3;
		this->listBox2->Text = byf4;
		this->listBox3->Text = byf5;
		this->textChangedEnable = true;
	}
	private: System::Void winLoad(System::Object^ sender, System::EventArgs^ e) {
		this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainWindow::winClosing);
		if (!this->admin) {
			this->debugToolStripMenuItem->Enabled = false;
			this->debugToolStripMenuItem->Visible = false;
		}
		this->size = gcnew GenSize();
		this->size->WinH = this->Height;
		this->size->WinW = this->Width;
		this->size->TextH = this->richTextBox1->Height;
		this->size->TextW = this->richTextBox1->Width;
		this->size->PanelH = this->tabControl1->Height;
		this->size->PanelWPoint = this->tabControl1->Location.X;
		this->size->PanelListH = this->listBox1->Height;
		menuBackgroundWhite(nullptr, nullptr);
		this->listBox1->ForeColor = System::Drawing::SystemColors::ScrollBar;
		this->listBox2->ForeColor = System::Drawing::SystemColors::ScrollBar;
		this->listBox3->ForeColor = System::Drawing::SystemColors::ScrollBar;
		this->listBox1->Enabled = false;
		this->listBox2->Enabled = false;
		this->listBox3->Enabled = false;
	}
	private: System::Void winClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
			e->Cancel = !open();
	}
	private: bool clo = false;
	private: System::Void winClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->rf(this->clo);
	}
	private: System::Void menuLogout(System::Object^ sender, System::EventArgs^ e) {
		this->clo = true;
		this->Close();
	}

	private: bool textChangedEnable = true;
	private: System::Void textChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->textChangedEnable) {
			if (this->filecpp->Path == "New" && this->richTextBox1->Text == "") {
				this->filecpp->Status = false;
				this->label1->Text = filecpp->Path + ((this->filecpp->Status) ? "*" : "");
			}
			else {
				this->filecpp->Status = true;
				this->label1->Text = filecpp->Path + ((this->filecpp->Status) ? "*" : "");
			}
			if (this->colorOn) {
				int buf = this->richTextBox1->SelectionStart;
				this->richTextBox1->SelectAll();
				this->richTextBox1->SelectionColor = System::Drawing::SystemColors::WindowText;
				this->richTextBox1->Select(buf, 0);
				this->colorOn = false;
			}
			this->listBox1->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->listBox2->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->listBox3->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->listBox1->Enabled = false;
			this->listBox2->Enabled = false;
			this->listBox3->Enabled = false;
		}
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
			dr = MessageBox::Show(this->TL2->Text, this->TL1->Text, MessageBoxButtons::YesNoCancel);
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
		return true;
	}

	private: System::Void openFile(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void newFile(System::Object^ sender, System::EventArgs^ e) {
		if (open()) {
			this->richTextBox1->Text = "";
			this->filecpp = gcnew FileCPP("New");
			this->label1->Text = filecpp->Path + ((this->filecpp->Status) ? "*" : "");
		}
	}
	private: System::Void saveFileAs(System::Object^ sender, System::EventArgs^ e) {
		save(true);
	}
	private: System::Void saveFile(System::Object^ sender, System::EventArgs^ e) {
		save(false);
	}
	private: System::Void menuBackgroundWhite(System::Object^ sender, System::EventArgs^ e) {
		this->color1 = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(255)), //r
			static_cast<System::Int32>(static_cast<System::Byte>(255)), //g
			static_cast<System::Int32>(static_cast<System::Byte>(255)));//b
		this->color2 = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(240)), //r
			static_cast<System::Int32>(static_cast<System::Byte>(240)), //g
			static_cast<System::Int32>(static_cast<System::Byte>(240)));//b
		this->color3 = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(255)), //r
			static_cast<System::Int32>(static_cast<System::Byte>(255)), //g
			static_cast<System::Int32>(static_cast<System::Byte>(255)));//b
		this->color4 = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(255)), //r
			static_cast<System::Int32>(static_cast<System::Byte>(255)), //g
			static_cast<System::Int32>(static_cast<System::Byte>(255)));//b
		colorUpdate();
	}
	private: System::Void menuBackgroundPink(System::Object^ sender, System::EventArgs^ e) {
		this->color1 = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(255)), //r
			static_cast<System::Int32>(static_cast<System::Byte>(192)), //g
			static_cast<System::Int32>(static_cast<System::Byte>(192)));//b
		this->color2 = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(255)), //r
			static_cast<System::Int32>(static_cast<System::Byte>(170)), //g
			static_cast<System::Int32>(static_cast<System::Byte>(170)));//b
		this->color3 = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(255)), //r
			static_cast<System::Int32>(static_cast<System::Byte>(210)), //g
			static_cast<System::Int32>(static_cast<System::Byte>(210)));//b
		this->color4 = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(255)), //r
			static_cast<System::Int32>(static_cast<System::Byte>(200)), //g
			static_cast<System::Int32>(static_cast<System::Byte>(200)));//b
		colorUpdate();
	}
	private: System::Void menuBackgroundSkyblue(System::Object^ sender, System::EventArgs^ e) {
		this->color1 = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(192)), //r
			static_cast<System::Int32>(static_cast<System::Byte>(192)), //g
			static_cast<System::Int32>(static_cast<System::Byte>(255)));//b
		this->color2 = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(170)), //r
			static_cast<System::Int32>(static_cast<System::Byte>(170)), //g
			static_cast<System::Int32>(static_cast<System::Byte>(255)));//b
		this->color3 = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(210)), //r
			static_cast<System::Int32>(static_cast<System::Byte>(210)), //g
			static_cast<System::Int32>(static_cast<System::Byte>(255)));//b
		this->color4 = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(200)), //r
			static_cast<System::Int32>(static_cast<System::Byte>(200)), //g
			static_cast<System::Int32>(static_cast<System::Byte>(255)));//b
		colorUpdate();
	}
	private: System::Void colorUpdate() {
		this->BackColor = this->color1;
		this->richTextBox1->BackColor = this->color2;
		this->menuStrip1->BackColor = this->color3;
		this->statusStrip1->BackColor = this->color4;
		this->listBox1->BackColor = this->color2;
		this->listBox2->BackColor = this->color2;
		this->listBox3->BackColor = this->color2;
		this->tabPage1->BackColor = this->color1;
		this->tabPage2->BackColor = this->color1;
		this->tabPage3->BackColor = this->color1;
	}
	private: System::Void debugSize(System::Object^ sender, System::EventArgs^ e) {
		debug("off");
	}
	private: System::Void winResize(System::Object^ sender, System::EventArgs^ e) {
		this->richTextBox1->Height = this->size->TextH - (this->size->WinH - this->Height);
		this->richTextBox1->Width = this->size->TextW - (this->size->WinW - this->Width);
		this->tabControl1->Height = this->size->PanelH - (this->size->WinH - this->Height);
		this->listBox1->Height = this->size->PanelListH - (this->size->WinH - this->Height);
		this->listBox2->Height = this->listBox1->Height;
		this->listBox3->Height = this->listBox1->Height;
		this->tabControl1->Location = Point(this->size->PanelWPoint - (this->size->WinW - this->Width), this->tabControl1->Location.Y);
		// debug(this->tabControl1->TabPages[0]->Height.ToString() + " " + this->tabControl1->TabPages[0]->Width.ToString());
	}
	private: System::Void debugLocation(System::Object^ sender, System::EventArgs^ e) {
		String^ buf = "Win:\t" + this->Height + "\n\t" + this->Width
			+ "\nText:\t" + this->richTextBox1->Height + "\n\t" + this->richTextBox1->Width +
			"\nPanel:\t" + this->tabControl1->Height + "\n\t" + this->tabControl1->Location.X + "p" + (this->size->PanelWPoint - (this->size->WinW - this->Width)).ToString();
		MessageBox::Show(buf);

	}
	private: System::Void menuExit(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void menuFont(System::Object^ sender, System::EventArgs^ e) {
		this->textChangedEnable = false;
		this->fontDialog1->Font = this->richTextBox1->Font;
		this->fontDialog1->ShowDialog();
		this->richTextBox1->Font = this->fontDialog1->Font;
		this->textChangedEnable = true;
	}
	private: System::Void setToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Width = 360;
		this->Height = 480;
	}
	private: bool colorOn = false;
	private: System::Void menuAnalyzer(System::Object^ sender, System::EventArgs^ e) {
		this->textChangedEnable = false;
		int bufIndex = this->richTextBox1->SelectionStart;
		this->funs = gcnew List<Ctring^>();

		this->richTextBox1->SelectAll();
		this->richTextBox1->SelectionColor = System::Drawing::SystemColors::WindowText;
		this->listBox1->Items->Clear();
		this->listBox2->Items->Clear();
		this->listBox3->Items->Clear();

		//=================       =================
		Regex^ reg = gcnew Regex("[\\r\\n\\t :;]*((~?[_a-zA-Z][_0-9a-zA-Z]+)[\\r\\n\\t ]*\\([^)]*\\))[\\r\\n\\t ]*\\{[^}]*\\}");
		for each (Match ^ match in reg->Matches(this->richTextBox1->Text)) {
			if (match->Groups[2]->Value != "each" &&
				match->Groups[2]->Value != "while" &&
				match->Groups[2]->Value != "catch" &&
				match->Groups[2]->Value != "if" &&
				match->Groups[2]->Value != "for") {
				Ctring^ buf = gcnew Ctring();
				buf->Text = match->Groups[1]->Value;
				buf->Index = match->Groups[2]->Index;
				this->funs->Add(buf);

				this->richTextBox1->Select(match->Groups[2]->Index, match->Groups[2]->Length);
				this->richTextBox1->SelectionColor = System::Drawing::Color::FromArgb(
					static_cast<System::Int32>(static_cast<System::Byte>(255)), //r
					static_cast<System::Int32>(static_cast<System::Byte>(0)), //g
					static_cast<System::Int32>(static_cast<System::Byte>(0)));//b
			}
		}
		this->funs->Sort();
		for each (Ctring ^ a in this->funs) {
			this->listBox2->Items->Add(a->Text);
		}

		//=================          =================
		reg = gcnew Regex("\\b((int|char|long|bool|wchar_t|char16_t|char32_t|short|float|double|void)[\\r\\n\\t ]*[*|\\^]*[\\r\\n\\t ]+[_a-zA-Z][_0-9a-zA-Z]*)[\\r\\n\\t ]*=");
		for each (Match ^ match in reg->Matches(this->richTextBox1->Text)) {
			this->listBox3->Items->Add(match->Groups[1]->Value);
			this->richTextBox1->Select(match->Groups[1]->Index, match->Groups[1]->Length);
			this->richTextBox1->SelectionColor = System::Drawing::Color::FromArgb(
				static_cast<System::Int32>(static_cast<System::Byte>(255)), //r
				static_cast<System::Int32>(static_cast<System::Byte>(0)), //g
				static_cast<System::Int32>(static_cast<System::Byte>(255)));//b
		}

		//=================         =================
		for each (String ^ keyWord in initKeyword()) {
			reg = gcnew Regex("\\b" + keyWord + "\\b");
			int buf = 0;
			for each (Match ^ match in reg->Matches(this->richTextBox1->Text)) {
				this->richTextBox1->Select(match->Index, match->Length);
				this->richTextBox1->SelectionColor = System::Drawing::Color::FromArgb(
					static_cast<System::Int32>(static_cast<System::Byte>(0)), //r
					static_cast<System::Int32>(static_cast<System::Byte>(0)), //g
					static_cast<System::Int32>(static_cast<System::Byte>(255)));//b
				buf++;
			}
			if (buf != 0) {
				this->listBox1->Items->Add(keyWord + " \t\t" + buf.ToString());
			}
		}

		this->listBox1->ForeColor = System::Drawing::SystemColors::WindowText;
		this->listBox2->ForeColor = System::Drawing::SystemColors::WindowText;
		this->listBox3->ForeColor = System::Drawing::SystemColors::WindowText;
		this->listBox1->Enabled = true;
		this->listBox2->Enabled = true;
		this->listBox3->Enabled = true;

		this->richTextBox1->Select(bufIndex,0);
		this->colorOn = true;
		this->textChangedEnable = true;
	}
	private: System::Void pickList2(System::Object^ sender, System::EventArgs^ e) {
		for each (Ctring ^ a in this->funs) {
			if (this->listBox2->Items[this->listBox2->SelectedIndex]->ToString() == a->Text) {
				this->richTextBox1->Focus();
				this->richTextBox1->SelectionStart = a->Index;
			}
		}
	}

	private: System::Void selectionChanged(System::Object^ sender, System::EventArgs^ e) {
		this->toolStripStatusLabel2->Text = "|   " + this->richTextBox1->SelectionStart.ToString();
	}
	private: System::Void help(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(this->TL3->Text, "", MessageBoxButtons::OK, MessageBoxIcon::Information, MessageBoxDefaultButton::Button1);
	}
};
}
