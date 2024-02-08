#pragma once
#include "AddClient.h"
#include "AddDish.h"
#include "ViewOrder.h"
#include "EditClient.h"

namespace Baigiamasisdarbas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ OrdersButton;


	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ LogOutButton;

	private: System::Windows::Forms::Button^ SettingsButton;

	private: System::Windows::Forms::Button^ CustomersButton;

	private: System::Windows::Forms::Button^ MeniuButton;



	private: System::Windows::Forms::Panel^ SidePanel;
	private: System::Windows::Forms::Panel^ CustomersPanel;

	private: System::Windows::Forms::DataGridView^ CustomersGrid;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel4;







	private: System::Windows::Forms::Button^ button8;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ SearchNameButton;
	private: System::Windows::Forms::TextBox^ SearchNameBox;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ DishesMainPanel;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ ReloadBox;
	private: System::Windows::Forms::Button^ AddDishButton;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ SearchDishButton;
	private: System::Windows::Forms::Button^ DeleteDishButton;
	private: System::Windows::Forms::TextBox^ IdBox;






	private: System::Windows::Forms::DataGridView^ DishesGrid;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Panel^ OrdersMainPanel;

	private: System::Windows::Forms::Label^ label13;


	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ IdOrderTextBox;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label16;

	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::DataGridView^ OrdersMainGrid;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ EditDishButton;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::TextBox^ RegIdBox;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Panel^ InformationPanel;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Panel^ InformationNextPage;
private: System::Windows::Forms::Label^ label38;

private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::PictureBox^ pictureBox9;

























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->LogOutButton = (gcnew System::Windows::Forms::Button());
			this->SettingsButton = (gcnew System::Windows::Forms::Button());
			this->CustomersButton = (gcnew System::Windows::Forms::Button());
			this->MeniuButton = (gcnew System::Windows::Forms::Button());
			this->SidePanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->OrdersButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->InformationNextPage = (gcnew System::Windows::Forms::Panel());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->InformationPanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->CustomersPanel = (gcnew System::Windows::Forms::Panel());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->RegIdBox = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SearchNameButton = (gcnew System::Windows::Forms::Button());
			this->SearchNameBox = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->CustomersGrid = (gcnew System::Windows::Forms::DataGridView());
			this->OrdersMainPanel = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->IdOrderTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->OrdersMainGrid = (gcnew System::Windows::Forms::DataGridView());
			this->DishesMainPanel = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->EditDishButton = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->ReloadBox = (gcnew System::Windows::Forms::PictureBox());
			this->AddDishButton = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SearchDishButton = (gcnew System::Windows::Forms::Button());
			this->DeleteDishButton = (gcnew System::Windows::Forms::Button());
			this->IdBox = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->DishesGrid = (gcnew System::Windows::Forms::DataGridView());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->InformationNextPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->InformationPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->CustomersPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomersGrid))->BeginInit();
			this->OrdersMainPanel->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OrdersMainGrid))->BeginInit();
			this->DishesMainPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ReloadBox))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DishesGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->InformationNextPage);
			this->panel1->Controls->Add(this->InformationPanel);
			this->panel1->Controls->Add(this->CustomersPanel);
			this->panel1->Controls->Add(this->OrdersMainPanel);
			this->panel1->Controls->Add(this->DishesMainPanel);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1094, 661);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Main::Mainpanel1_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel3->Location = System::Drawing::Point(224, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(870, 13);
			this->panel3->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->panel2->Controls->Add(this->LogOutButton);
			this->panel2->Controls->Add(this->SettingsButton);
			this->panel2->Controls->Add(this->CustomersButton);
			this->panel2->Controls->Add(this->MeniuButton);
			this->panel2->Controls->Add(this->SidePanel);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->OrdersButton);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(224, 661);
			this->panel2->TabIndex = 3;
			// 
			// LogOutButton
			// 
			this->LogOutButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->LogOutButton->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->LogOutButton->FlatAppearance->BorderSize = 0;
			this->LogOutButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LogOutButton->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogOutButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LogOutButton.Image")));
			this->LogOutButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->LogOutButton->Location = System::Drawing::Point(0, 588);
			this->LogOutButton->Name = L"LogOutButton";
			this->LogOutButton->Size = System::Drawing::Size(224, 73);
			this->LogOutButton->TabIndex = 11;
			this->LogOutButton->Text = L"ATSIJUNGTI";
			this->LogOutButton->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->LogOutButton->UseVisualStyleBackColor = false;
			this->LogOutButton->Click += gcnew System::EventHandler(this, &Main::LogOutButton_Click);
			// 
			// SettingsButton
			// 
			this->SettingsButton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->SettingsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->SettingsButton->FlatAppearance->BorderSize = 0;
			this->SettingsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SettingsButton->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SettingsButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SettingsButton.Image")));
			this->SettingsButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->SettingsButton->Location = System::Drawing::Point(12, 509);
			this->SettingsButton->Name = L"SettingsButton";
			this->SettingsButton->Size = System::Drawing::Size(212, 73);
			this->SettingsButton->TabIndex = 10;
			this->SettingsButton->Text = L"INFORMACIJA";
			this->SettingsButton->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->SettingsButton->UseVisualStyleBackColor = false;
			this->SettingsButton->Click += gcnew System::EventHandler(this, &Main::SettingsButton_Click);
			// 
			// CustomersButton
			// 
			this->CustomersButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->CustomersButton->FlatAppearance->BorderSize = 0;
			this->CustomersButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CustomersButton->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CustomersButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CustomersButton.Image")));
			this->CustomersButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->CustomersButton->Location = System::Drawing::Point(9, 244);
			this->CustomersButton->Name = L"CustomersButton";
			this->CustomersButton->Size = System::Drawing::Size(212, 73);
			this->CustomersButton->TabIndex = 9;
			this->CustomersButton->Text = L"KLIENTAI ";
			this->CustomersButton->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->CustomersButton->UseVisualStyleBackColor = false;
			this->CustomersButton->Click += gcnew System::EventHandler(this, &Main::CustomersButton_Click);
			// 
			// MeniuButton
			// 
			this->MeniuButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->MeniuButton->FlatAppearance->BorderSize = 0;
			this->MeniuButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MeniuButton->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MeniuButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MeniuButton.Image")));
			this->MeniuButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MeniuButton->Location = System::Drawing::Point(12, 166);
			this->MeniuButton->Name = L"MeniuButton";
			this->MeniuButton->Size = System::Drawing::Size(212, 73);
			this->MeniuButton->TabIndex = 8;
			this->MeniuButton->Text = L"MENIU ";
			this->MeniuButton->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->MeniuButton->UseVisualStyleBackColor = false;
			this->MeniuButton->Click += gcnew System::EventHandler(this, &Main::MeniuButton_Click);
			// 
			// SidePanel
			// 
			this->SidePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->SidePanel->Location = System::Drawing::Point(0, 88);
			this->SidePanel->Name = L"SidePanel";
			this->SidePanel->Size = System::Drawing::Size(12, 73);
			this->SidePanel->TabIndex = 5;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(85, 82);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// OrdersButton
			// 
			this->OrdersButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->OrdersButton->FlatAppearance->BorderSize = 0;
			this->OrdersButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OrdersButton->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OrdersButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OrdersButton.Image")));
			this->OrdersButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->OrdersButton->Location = System::Drawing::Point(12, 88);
			this->OrdersButton->Name = L"OrdersButton";
			this->OrdersButton->Size = System::Drawing::Size(212, 73);
			this->OrdersButton->TabIndex = 2;
			this->OrdersButton->Text = L"UŽSAKYMAI ";
			this->OrdersButton->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->OrdersButton->UseVisualStyleBackColor = false;
			this->OrdersButton->Click += gcnew System::EventHandler(this, &Main::OrdersButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(110, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 32);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Lorem";
			// 
			// InformationNextPage
			// 
			this->InformationNextPage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->InformationNextPage->Controls->Add(this->label46);
			this->InformationNextPage->Controls->Add(this->label47);
			this->InformationNextPage->Controls->Add(this->label45);
			this->InformationNextPage->Controls->Add(this->pictureBox10);
			this->InformationNextPage->Controls->Add(this->pictureBox9);
			this->InformationNextPage->Controls->Add(this->label38);
			this->InformationNextPage->Controls->Add(this->label39);
			this->InformationNextPage->Controls->Add(this->pictureBox6);
			this->InformationNextPage->Controls->Add(this->label40);
			this->InformationNextPage->Controls->Add(this->label41);
			this->InformationNextPage->Controls->Add(this->label42);
			this->InformationNextPage->Dock = System::Windows::Forms::DockStyle::Fill;
			this->InformationNextPage->Location = System::Drawing::Point(0, 0);
			this->InformationNextPage->Name = L"InformationNextPage";
			this->InformationNextPage->Size = System::Drawing::Size(1094, 661);
			this->InformationNextPage->TabIndex = 32;
			this->InformationNextPage->Visible = false;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(570, 107);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(462, 17);
			this->label38->TabIndex = 18;
			this->label38->Text = L"1. Patiekalo redagavime paspauskite load užkrauti informacijai";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(808, 637);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(81, 17);
			this->label39->TabIndex = 16;
			this->label39->Text = L"Lorem 1.0";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(230, 588);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(91, 66);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 15;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Main::pictureBox6_Click);
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(808, 614);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(223, 17);
			this->label40->TabIndex = 9;
			this->label40->Text = L"Atnaujinimo data: 2020-05-16";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(808, 591);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(273, 17);
			this->label41->TabIndex = 8;
			this->label41->Text = L"Programos autorius: Audrius Vaitkus";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Arial", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(435, 26);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(464, 40);
			this->label42->TabIndex = 4;
			this->label42->Text = L"Informacija administratoriui";
			// 
			// InformationPanel
			// 
			this->InformationPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->InformationPanel->Controls->Add(this->label44);
			this->InformationPanel->Controls->Add(this->label43);
			this->InformationPanel->Controls->Add(this->pictureBox7);
			this->InformationPanel->Controls->Add(this->label30);
			this->InformationPanel->Controls->Add(this->label31);
			this->InformationPanel->Controls->Add(this->label32);
			this->InformationPanel->Controls->Add(this->label33);
			this->InformationPanel->Controls->Add(this->label34);
			this->InformationPanel->Controls->Add(this->label35);
			this->InformationPanel->Controls->Add(this->label36);
			this->InformationPanel->Controls->Add(this->pictureBox5);
			this->InformationPanel->Controls->Add(this->pictureBox4);
			this->InformationPanel->Controls->Add(this->pictureBox3);
			this->InformationPanel->Controls->Add(this->label37);
			this->InformationPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->InformationPanel->Location = System::Drawing::Point(0, 0);
			this->InformationPanel->Name = L"InformationPanel";
			this->InformationPanel->Size = System::Drawing::Size(1094, 661);
			this->InformationPanel->TabIndex = 31;
			this->InformationPanel->Visible = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(998, 588);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(91, 66);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 32;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Main::pictureBox7_Click);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(588, 565);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(248, 17);
			this->label30->TabIndex = 14;
			this->label30->Text = L"3. Spauskite peržiūrėti užsakymą";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(588, 539);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(491, 17);
			this->label31->TabIndex = 13;
			this->label31->Text = L"2. Pasirinkite id pagal kurį galėsite klientą redaguoti arba pašalinti";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(588, 509);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(240, 17);
			this->label32->TabIndex = 12;
			this->label32->Text = L"1. Kliento pridėjimui spauskite +";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(586, 300);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(319, 17);
			this->label33->TabIndex = 11;
			this->label33->Text = L"1. Patiekalo pridėjimui į meniu spauskite + ";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(587, 173);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(318, 17);
			this->label34->TabIndex = 10;
			this->label34->Text = L"3. Užsakymą galite patvirtinti arba atšaukti";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(587, 145);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(313, 17);
			this->label35->TabIndex = 9;
			this->label35->Text = L"2. Įveskite pasirinkto užsakymo id į laukelį";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(588, 117);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(197, 17);
			this->label36->TabIndex = 8;
			this->label36->Text = L"1. Pasirinkite užsakymo id";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(254, 460);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(319, 189);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 7;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(254, 269);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(319, 185);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(254, 79);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(319, 184);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Arial", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(435, 22);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(464, 40);
			this->label37->TabIndex = 4;
			this->label37->Text = L"Informacija administratoriui";
			// 
			// CustomersPanel
			// 
			this->CustomersPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->CustomersPanel->Controls->Add(this->label29);
			this->CustomersPanel->Controls->Add(this->label28);
			this->CustomersPanel->Controls->Add(this->button1);
			this->CustomersPanel->Controls->Add(this->RegIdBox);
			this->CustomersPanel->Controls->Add(this->label20);
			this->CustomersPanel->Controls->Add(this->label2);
			this->CustomersPanel->Controls->Add(this->pictureBox2);
			this->CustomersPanel->Controls->Add(this->button10);
			this->CustomersPanel->Controls->Add(this->label10);
			this->CustomersPanel->Controls->Add(this->SearchNameButton);
			this->CustomersPanel->Controls->Add(this->SearchNameBox);
			this->CustomersPanel->Controls->Add(this->button8);
			this->CustomersPanel->Controls->Add(this->panel4);
			this->CustomersPanel->Controls->Add(this->CustomersGrid);
			this->CustomersPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CustomersPanel->Location = System::Drawing::Point(0, 0);
			this->CustomersPanel->Name = L"CustomersPanel";
			this->CustomersPanel->Size = System::Drawing::Size(1094, 661);
			this->CustomersPanel->TabIndex = 6;
			this->CustomersPanel->Visible = false;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(994, 220);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(58, 19);
			this->label29->TabIndex = 16;
			this->label29->Text = L"Pridėti";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(894, 162);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(81, 19);
			this->label28->TabIndex = 12;
			this->label28->Text = L"Atnaujinti";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(715, 81);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Redaguoti";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// RegIdBox
			// 
			this->RegIdBox->Location = System::Drawing::Point(563, 104);
			this->RegIdBox->Name = L"RegIdBox";
			this->RegIdBox->Size = System::Drawing::Size(146, 20);
			this->RegIdBox->TabIndex = 14;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(521, 105);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(23, 19);
			this->label20->TabIndex = 13;
			this->label20->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(465, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(320, 40);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Registruoti klientai";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(864, 159);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(24, 25);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Main::ReloadBox2_Click);
			// 
			// button10
			// 
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(957, 212);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(34, 34);
			this->button10->TabIndex = 10;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Main::AddClient_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(495, 160);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 19);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Vardas";
			// 
			// SearchNameButton
			// 
			this->SearchNameButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->SearchNameButton->FlatAppearance->BorderSize = 0;
			this->SearchNameButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SearchNameButton->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchNameButton->ForeColor = System::Drawing::Color::White;
			this->SearchNameButton->Location = System::Drawing::Point(715, 161);
			this->SearchNameButton->Name = L"SearchNameButton";
			this->SearchNameButton->Size = System::Drawing::Size(128, 23);
			this->SearchNameButton->TabIndex = 8;
			this->SearchNameButton->Text = L"Ieškoti kliento";
			this->SearchNameButton->UseVisualStyleBackColor = false;
			this->SearchNameButton->Click += gcnew System::EventHandler(this, &Main::SearchNameButton_Click);
			// 
			// SearchNameBox
			// 
			this->SearchNameBox->Location = System::Drawing::Point(563, 161);
			this->SearchNameBox->Name = L"SearchNameBox";
			this->SearchNameBox->Size = System::Drawing::Size(146, 20);
			this->SearchNameBox->TabIndex = 7;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(715, 117);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(128, 23);
			this->button8->TabIndex = 3;
			this->button8->Text = L"Pašalinti klientą";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Main::DeleteCustomer_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Location = System::Drawing::Point(338, 209);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(602, 43);
			this->panel4->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(500, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(99, 19);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Slaptažodis";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(402, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 19);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Adresas";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(313, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 19);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Pavardė";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(221, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 19);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Vardas";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(39, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 19);
			this->label4->TabIndex = 8;
			this->label4->Text = L"ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(76, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 19);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Vartotojo vardas";
			// 
			// CustomersGrid
			// 
			this->CustomersGrid->AllowUserToAddRows = false;
			this->CustomersGrid->AllowUserToDeleteRows = false;
			this->CustomersGrid->AllowUserToResizeColumns = false;
			this->CustomersGrid->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->CustomersGrid->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->CustomersGrid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->CustomersGrid->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->CustomersGrid->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->CustomersGrid->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::MenuText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->CustomersGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->CustomersGrid->ColumnHeadersHeight = 40;
			this->CustomersGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->CustomersGrid->ColumnHeadersVisible = false;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->CustomersGrid->DefaultCellStyle = dataGridViewCellStyle3;
			this->CustomersGrid->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->CustomersGrid->Location = System::Drawing::Point(338, 258);
			this->CustomersGrid->MinimumSize = System::Drawing::Size(602, 0);
			this->CustomersGrid->Name = L"CustomersGrid";
			this->CustomersGrid->ReadOnly = true;
			this->CustomersGrid->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->CustomersGrid->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->CustomersGrid->RowHeadersVisible = false;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->CustomersGrid->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->CustomersGrid->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->CustomersGrid->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->CustomersGrid->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CustomersGrid->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			this->CustomersGrid->RowTemplate->DefaultCellStyle->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->CustomersGrid->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->CustomersGrid->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->CustomersGrid->RowTemplate->DividerHeight = 2;
			this->CustomersGrid->RowTemplate->Height = 50;
			this->CustomersGrid->RowTemplate->ReadOnly = true;
			this->CustomersGrid->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->CustomersGrid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->CustomersGrid->Size = System::Drawing::Size(602, 375);
			this->CustomersGrid->TabIndex = 0;
			// 
			// OrdersMainPanel
			// 
			this->OrdersMainPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->OrdersMainPanel->Controls->Add(this->label27);
			this->OrdersMainPanel->Controls->Add(this->label26);
			this->OrdersMainPanel->Controls->Add(this->label25);
			this->OrdersMainPanel->Controls->Add(this->label24);
			this->OrdersMainPanel->Controls->Add(this->button2);
			this->OrdersMainPanel->Controls->Add(this->label13);
			this->OrdersMainPanel->Controls->Add(this->label15);
			this->OrdersMainPanel->Controls->Add(this->button3);
			this->OrdersMainPanel->Controls->Add(this->button9);
			this->OrdersMainPanel->Controls->Add(this->IdOrderTextBox);
			this->OrdersMainPanel->Controls->Add(this->panel7);
			this->OrdersMainPanel->Controls->Add(this->OrdersMainGrid);
			this->OrdersMainPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->OrdersMainPanel->Location = System::Drawing::Point(0, 0);
			this->OrdersMainPanel->Name = L"OrdersMainPanel";
			this->OrdersMainPanel->Size = System::Drawing::Size(1094, 661);
			this->OrdersMainPanel->TabIndex = 23;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(856, 165);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(102, 26);
			this->label27->TabIndex = 24;
			this->label27->Text = L"Statusas";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(852, 279);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(97, 19);
			this->label26->TabIndex = 27;
			this->label26->Text = L"2 - Atšaukta";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(852, 245);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(108, 19);
			this->label25->TabIndex = 26;
			this->label25->Text = L"1 - Patvirtinta";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(852, 211);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(105, 19);
			this->label24->TabIndex = 25;
			this->label24->Text = L"0 - Laukiama";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(814, 97);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 23);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Peržiūrėti užsakymą";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Main::ViewOrder_Click_1);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(516, 24);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(195, 40);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Užsakymai";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(425, 98);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(25, 19);
			this->label15->TabIndex = 20;
			this->label15->Text = L"ID";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(645, 115);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(163, 23);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Atšaukti užsakymą";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Main::Cancel_Click_1);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::LimeGreen;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(645, 79);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(163, 23);
			this->button9->TabIndex = 16;
			this->button9->Text = L"Patvirtinti užsakymą";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Main::Confirm_Click);
			// 
			// IdOrderTextBox
			// 
			this->IdOrderTextBox->Location = System::Drawing::Point(476, 97);
			this->IdOrderTextBox->Name = L"IdOrderTextBox";
			this->IdOrderTextBox->Size = System::Drawing::Size(146, 20);
			this->IdOrderTextBox->TabIndex = 15;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->panel7->Controls->Add(this->label16);
			this->panel7->Controls->Add(this->label21);
			this->panel7->Controls->Add(this->label22);
			this->panel7->Location = System::Drawing::Point(463, 165);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(302, 43);
			this->panel7->TabIndex = 14;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(210, 10);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(76, 19);
			this->label16->TabIndex = 10;
			this->label16->Text = L"Statusas";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(34, 10);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(25, 19);
			this->label21->TabIndex = 8;
			this->label21->Text = L"ID";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(96, 10);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(86, 19);
			this->label22->TabIndex = 7;
			this->label22->Text = L"Vartotojas";
			// 
			// OrdersMainGrid
			// 
			this->OrdersMainGrid->AllowUserToAddRows = false;
			this->OrdersMainGrid->AllowUserToDeleteRows = false;
			this->OrdersMainGrid->AllowUserToResizeColumns = false;
			this->OrdersMainGrid->AllowUserToResizeRows = false;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->OrdersMainGrid->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle6;
			this->OrdersMainGrid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->OrdersMainGrid->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->OrdersMainGrid->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->OrdersMainGrid->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::MenuText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->OrdersMainGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->OrdersMainGrid->ColumnHeadersHeight = 40;
			this->OrdersMainGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->OrdersMainGrid->ColumnHeadersVisible = false;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->OrdersMainGrid->DefaultCellStyle = dataGridViewCellStyle8;
			this->OrdersMainGrid->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->OrdersMainGrid->Location = System::Drawing::Point(463, 211);
			this->OrdersMainGrid->Name = L"OrdersMainGrid";
			this->OrdersMainGrid->ReadOnly = true;
			this->OrdersMainGrid->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->OrdersMainGrid->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->OrdersMainGrid->RowHeadersVisible = false;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->OrdersMainGrid->RowsDefaultCellStyle = dataGridViewCellStyle10;
			this->OrdersMainGrid->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->OrdersMainGrid->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->OrdersMainGrid->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->OrdersMainGrid->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			this->OrdersMainGrid->RowTemplate->DefaultCellStyle->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->OrdersMainGrid->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->OrdersMainGrid->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->OrdersMainGrid->RowTemplate->DividerHeight = 2;
			this->OrdersMainGrid->RowTemplate->Height = 50;
			this->OrdersMainGrid->RowTemplate->ReadOnly = true;
			this->OrdersMainGrid->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->OrdersMainGrid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->OrdersMainGrid->Size = System::Drawing::Size(302, 441);
			this->OrdersMainGrid->TabIndex = 13;
			// 
			// DishesMainPanel
			// 
			this->DishesMainPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->DishesMainPanel->Controls->Add(this->label23);
			this->DishesMainPanel->Controls->Add(this->label9);
			this->DishesMainPanel->Controls->Add(this->EditDishButton);
			this->DishesMainPanel->Controls->Add(this->label11);
			this->DishesMainPanel->Controls->Add(this->ReloadBox);
			this->DishesMainPanel->Controls->Add(this->AddDishButton);
			this->DishesMainPanel->Controls->Add(this->label12);
			this->DishesMainPanel->Controls->Add(this->SearchDishButton);
			this->DishesMainPanel->Controls->Add(this->DeleteDishButton);
			this->DishesMainPanel->Controls->Add(this->IdBox);
			this->DishesMainPanel->Controls->Add(this->panel5);
			this->DishesMainPanel->Controls->Add(this->DishesGrid);
			this->DishesMainPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->DishesMainPanel->Location = System::Drawing::Point(0, 0);
			this->DishesMainPanel->Name = L"DishesMainPanel";
			this->DishesMainPanel->Size = System::Drawing::Size(1094, 661);
			this->DishesMainPanel->TabIndex = 12;
			this->DishesMainPanel->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(905, 175);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(58, 19);
			this->label23->TabIndex = 26;
			this->label23->Text = L"Pridėti";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(895, 98);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(81, 19);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Atnaujinti";
			// 
			// EditDishButton
			// 
			this->EditDishButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->EditDishButton->FlatAppearance->BorderSize = 0;
			this->EditDishButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EditDishButton->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditDishButton->ForeColor = System::Drawing::Color::White;
			this->EditDishButton->Location = System::Drawing::Point(687, 124);
			this->EditDishButton->Name = L"EditDishButton";
			this->EditDishButton->Size = System::Drawing::Size(143, 23);
			this->EditDishButton->TabIndex = 24;
			this->EditDishButton->Text = L"Redaguoti";
			this->EditDishButton->UseVisualStyleBackColor = false;
			this->EditDishButton->Click += gcnew System::EventHandler(this, &Main::EditDishButton_Click_1);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(520, 21);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(173, 40);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Patiekalai";
			// 
			// ReloadBox
			// 
			this->ReloadBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ReloadBox.Image")));
			this->ReloadBox->Location = System::Drawing::Point(865, 95);
			this->ReloadBox->Name = L"ReloadBox";
			this->ReloadBox->Size = System::Drawing::Size(24, 25);
			this->ReloadBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ReloadBox->TabIndex = 22;
			this->ReloadBox->TabStop = false;
			this->ReloadBox->Click += gcnew System::EventHandler(this, &Main::ReloadBox_Click);
			// 
			// AddDishButton
			// 
			this->AddDishButton->FlatAppearance->BorderSize = 0;
			this->AddDishButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddDishButton->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddDishButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddDishButton.Image")));
			this->AddDishButton->Location = System::Drawing::Point(865, 166);
			this->AddDishButton->Name = L"AddDishButton";
			this->AddDishButton->Size = System::Drawing::Size(34, 34);
			this->AddDishButton->TabIndex = 21;
			this->AddDishButton->UseVisualStyleBackColor = false;
			this->AddDishButton->Click += gcnew System::EventHandler(this, &Main::AddDishButton_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(476, 95);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(25, 19);
			this->label12->TabIndex = 20;
			this->label12->Text = L"ID";
			// 
			// SearchDishButton
			// 
			this->SearchDishButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->SearchDishButton->FlatAppearance->BorderSize = 0;
			this->SearchDishButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SearchDishButton->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchDishButton->ForeColor = System::Drawing::Color::White;
			this->SearchDishButton->Location = System::Drawing::Point(687, 94);
			this->SearchDishButton->Name = L"SearchDishButton";
			this->SearchDishButton->Size = System::Drawing::Size(143, 23);
			this->SearchDishButton->TabIndex = 19;
			this->SearchDishButton->Text = L"Ieškoti patiekalo";
			this->SearchDishButton->UseVisualStyleBackColor = false;
			this->SearchDishButton->Click += gcnew System::EventHandler(this, &Main::SearchDishButton_Click);
			// 
			// DeleteDishButton
			// 
			this->DeleteDishButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->DeleteDishButton->FlatAppearance->BorderSize = 0;
			this->DeleteDishButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeleteDishButton->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteDishButton->ForeColor = System::Drawing::Color::White;
			this->DeleteDishButton->Location = System::Drawing::Point(687, 65);
			this->DeleteDishButton->Name = L"DeleteDishButton";
			this->DeleteDishButton->Size = System::Drawing::Size(143, 23);
			this->DeleteDishButton->TabIndex = 16;
			this->DeleteDishButton->Text = L"Pašalinti patiekalą";
			this->DeleteDishButton->UseVisualStyleBackColor = false;
			this->DeleteDishButton->Click += gcnew System::EventHandler(this, &Main::DeleteDishButton_Click);
			// 
			// IdBox
			// 
			this->IdBox->Location = System::Drawing::Point(527, 94);
			this->IdBox->Name = L"IdBox";
			this->IdBox->Size = System::Drawing::Size(146, 20);
			this->IdBox->TabIndex = 15;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->panel5->Controls->Add(this->label14);
			this->panel5->Controls->Add(this->label17);
			this->panel5->Controls->Add(this->label18);
			this->panel5->Controls->Add(this->label19);
			this->panel5->Location = System::Drawing::Point(442, 162);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(402, 43);
			this->panel5->TabIndex = 14;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(210, 10);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(95, 19);
			this->label14->TabIndex = 10;
			this->label14->Text = L"Aprašymas";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(318, 10);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(53, 19);
			this->label17->TabIndex = 9;
			this->label17->Text = L"Kaina";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(34, 10);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(25, 19);
			this->label18->TabIndex = 8;
			this->label18->Text = L"ID";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(96, 10);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(107, 19);
			this->label19->TabIndex = 7;
			this->label19->Text = L"Pavadinimas";
			// 
			// DishesGrid
			// 
			this->DishesGrid->AllowUserToAddRows = false;
			this->DishesGrid->AllowUserToDeleteRows = false;
			this->DishesGrid->AllowUserToResizeColumns = false;
			this->DishesGrid->AllowUserToResizeRows = false;
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->DishesGrid->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle11;
			this->DishesGrid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->DishesGrid->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->DishesGrid->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->DishesGrid->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::SystemColors::MenuText;
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DishesGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle12;
			this->DishesGrid->ColumnHeadersHeight = 40;
			this->DishesGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->DishesGrid->ColumnHeadersVisible = false;
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle13->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle13->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle13->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle13->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle13->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DishesGrid->DefaultCellStyle = dataGridViewCellStyle13;
			this->DishesGrid->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->DishesGrid->Location = System::Drawing::Point(442, 208);
			this->DishesGrid->Name = L"DishesGrid";
			this->DishesGrid->ReadOnly = true;
			this->DishesGrid->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle14->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle14->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle14->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle14->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DishesGrid->RowHeadersDefaultCellStyle = dataGridViewCellStyle14;
			this->DishesGrid->RowHeadersVisible = false;
			dataGridViewCellStyle15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->DishesGrid->RowsDefaultCellStyle = dataGridViewCellStyle15;
			this->DishesGrid->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->DishesGrid->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->DishesGrid->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DishesGrid->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			this->DishesGrid->RowTemplate->DefaultCellStyle->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->DishesGrid->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->DishesGrid->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->DishesGrid->RowTemplate->DividerHeight = 2;
			this->DishesGrid->RowTemplate->Height = 50;
			this->DishesGrid->RowTemplate->ReadOnly = true;
			this->DishesGrid->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->DishesGrid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DishesGrid->Size = System::Drawing::Size(402, 441);
			this->DishesGrid->TabIndex = 13;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(586, 201);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(393, 17);
			this->label43->TabIndex = 33;
			this->label43->Text = L"4. Užsakymo peržiūrai spauskite peržiūrėti užsakymą";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(586, 327);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(509, 17);
			this->label44->TabIndex = 34;
			this->label44->Text = L"2. Pasirinkite id pagal kurį galėsite patiekalą redaguoti arba pašalinti";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(234, 88);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(319, 184);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 19;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(234, 279);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(319, 184);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 20;
			this->pictureBox10->TabStop = false;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(572, 135);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(293, 17);
			this->label45->TabIndex = 21;
			this->label45->Text = L"2. Atlikę pakeitimus spauskite išsaugoti";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(570, 327);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(293, 17);
			this->label46->TabIndex = 23;
			this->label46->Text = L"2. Atlikę pakeitimus spauskite išsaugoti";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(568, 299);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(445, 17);
			this->label47->TabIndex = 22;
			this->label47->Text = L"1. Kliento redagavime paspauskite load užkrauti informacijai";
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1094, 661);
			this->Controls->Add(this->panel1);
			this->MaximumSize = System::Drawing::Size(1110, 700);
			this->MinimumSize = System::Drawing::Size(1110, 700);
			this->Name = L"Main";
			this->Text = L"Lorem";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->InformationNextPage->ResumeLayout(false);
			this->InformationNextPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->InformationPanel->ResumeLayout(false);
			this->InformationPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->CustomersPanel->ResumeLayout(false);
			this->CustomersPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomersGrid))->EndInit();
			this->OrdersMainPanel->ResumeLayout(false);
			this->OrdersMainPanel->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OrdersMainGrid))->EndInit();
			this->DishesMainPanel->ResumeLayout(false);
			this->DishesMainPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ReloadBox))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DishesGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		void ReloadOrder();
		void Delete();
		void DeleteDish();
		void Reload();
		void ReloadDish();
		System::Void OrdersButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void MeniuButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void CustomersButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void SettingsButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void DeleteCustomer_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void LogOutButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void SearchNameButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void ReloadButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void AddClient_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void ReloadBox2_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void AddDishButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void DeleteDishButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void SearchDishButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void ReloadBox_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Confirm_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Cancel_Click_1(System::Object^ sender, System::EventArgs^ e);
		System::Void ViewOrder_Click_1(System::Object^ sender, System::EventArgs^ e);
		System::Void Mainpanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
		System::Void EditDishButton_Click_1(System::Object^ sender, System::EventArgs^ e);
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e);
	
};
}
