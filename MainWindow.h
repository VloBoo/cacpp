#pragma once
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
	public:
		MainWindow(bool admin, ReturnFun^ rf) {
			InitializeComponent();
			this->admin = admin;
			this->rf = rf;
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

	private: System::Windows::Forms::ToolStripMenuItem^ toolToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewToolStripMenuItem;
	private: System::Windows::Forms::TabControl^ tabControl1;

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolStripMenuItem^ openFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ createFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ savaFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ savaFileAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripProgressBar^ toolStripProgressBar1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;


	private: System::ComponentModel::IContainer^ components;


		   //private: RegestrationWindow^ regWin;
	private: bool admin;
	private: ReturnFun^ rf;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
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
			   this->toolToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			   this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			   this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			   this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			   this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			   this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			   this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			   this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			   this->menuStrip1->SuspendLayout();
			   this->statusStrip1->SuspendLayout();
			   this->tabControl1->SuspendLayout();
			   this->tabPage1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				   this->fileToolStripMenuItem,
					   this->settingToolStripMenuItem, this->toolToolStripMenuItem, this->viewToolStripMenuItem
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
			   // 
			   // savaFileAsToolStripMenuItem
			   // 
			   this->savaFileAsToolStripMenuItem->Name = L"savaFileAsToolStripMenuItem";
			   resources->ApplyResources(this->savaFileAsToolStripMenuItem, L"savaFileAsToolStripMenuItem");
			   this->savaFileAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::savaFileAsToolStripMenuItem_Click);
			   // 
			   // settingToolStripMenuItem
			   // 
			   this->settingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->langToolStripMenuItem });
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
			   // toolToolStripMenuItem
			   // 
			   this->toolToolStripMenuItem->Name = L"toolToolStripMenuItem";
			   resources->ApplyResources(this->toolToolStripMenuItem, L"toolToolStripMenuItem");
			   // 
			   // viewToolStripMenuItem
			   // 
			   this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			   resources->ApplyResources(this->viewToolStripMenuItem, L"viewToolStripMenuItem");
			   // 
			   // statusStrip1
			   // 
			   this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				   this->toolStripStatusLabel1,
					   this->toolStripProgressBar1, this->toolStripStatusLabel2
			   });
			   resources->ApplyResources(this->statusStrip1, L"statusStrip1");
			   this->statusStrip1->Name = L"statusStrip1";
			   // 
			   // toolStripStatusLabel1
			   // 
			   this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			   resources->ApplyResources(this->toolStripStatusLabel1, L"toolStripStatusLabel1");
			   // 
			   // toolStripProgressBar1
			   // 
			   this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			   resources->ApplyResources(this->toolStripProgressBar1, L"toolStripProgressBar1");
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
			   // textBox2
			   // 
			   this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   resources->ApplyResources(this->textBox2, L"textBox2");
			   this->textBox2->Name = L"textBox2";
			   // 
			   // label1
			   // 
			   resources->ApplyResources(this->label1, L"label1");
			   this->label1->Name = L"label1";
			   // 
			   // openFileDialog1
			   // 
			   this->openFileDialog1->FileName = L"7";
			   // 
			   // MainWindow
			   // 
			   resources->ApplyResources(this, L"$this");
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->tabControl1);
			   this->Controls->Add(this->statusStrip1);
			   this->Controls->Add(this->menuStrip1);
			   this->MainMenuStrip = this->menuStrip1;
			   this->Name = L"MainWindow";
			   this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainWindow::MainWindow_FormClosing);
			   this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainWindow::MainWindow_FormClosed);
			   this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
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
		this->textBox1->Text = "@#";
	}
	private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void MainWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (true) {//Çàìåíèòü
			System::Windows::Forms::DialogResult^ dr;
			dr = MessageBox::Show("Âû íå ñîõğàíèëè ôàéë", "Âûéòè?", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question, MessageBoxDefaultButton::Button3, MessageBoxOptions::DefaultDesktopOnly);
			if (dr->Equals(System::Windows::Forms::DialogResult::Yes)) {
				e->Cancel = false;
			}
			else if (dr->Equals(System::Windows::Forms::DialogResult::No)) {
				e->Cancel = false;
			}
			else if (dr->Equals(System::Windows::Forms::DialogResult::Cancel)) {
				e->Cancel = true;
			}
		}
	}
	private: System::Void MainWindow_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->rf(false);
	}
	private: System::Void openFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->openFileDialog1->Filter = "*.cpp";
		this->openFileDialog1->ShowDialog();
	}
	private: System::Void savaFileAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->saveFileDialog1->ShowDialog();
	}
	};
}
