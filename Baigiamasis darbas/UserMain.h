#pragma once
#include<string>
#include "ViewOrder.h"
#include <locale>
namespace Baigiamasisdarbas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for UserMain
	/// </summary>
	public ref class UserMain : public System::Windows::Forms::Form
	{

	public: int^ UserId;
	public: int OrderId;
	public: String^ DishName;
	public: String^ DishDescription;
	private: System::Windows::Forms::Label^ label10;
	public:

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ OrdersButton;

	private: System::Windows::Forms::Panel^ StatusPanel;





	private: System::Windows::Forms::Panel^ panel7;




	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::DataGridView^ StatusGridFirst;
	private: System::Windows::Forms::Button^ ViewButton;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ IdOrderTextBox;
	private: System::Windows::Forms::Panel^ InformationPanel;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Panel^ InformationNextPage;
	private: System::Windows::Forms::PictureBox^ pictureBox6;





	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::PictureBox^ pictureBox8;







	public: String^ DishPrice;
	public:
		UserMain(void)
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
		~UserMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ SidePanel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ MeniuMainPanel;

	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Button^ SearchDishButton;
	private: System::Windows::Forms::DataGridView^ MeniuGrid;


	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ DishIdBox;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ CountBox;
	private: System::Windows::Forms::Panel^ OrderPanel;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ IdBox;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel6;




	private: System::Windows::Forms::Label^ TextLabel;

	private: System::Windows::Forms::DataGridView^ OrderGrid;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserMain::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle20 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle21 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle22 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle23 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle24 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle25 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle26 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle27 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle28 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle29 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle30 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->OrdersButton = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SidePanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->InformationNextPage = (gcnew System::Windows::Forms::Panel());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->InformationPanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->StatusPanel = (gcnew System::Windows::Forms::Panel());
			this->ViewButton = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->IdOrderTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->StatusGridFirst = (gcnew System::Windows::Forms::DataGridView());
			this->OrderPanel = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->IdBox = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TextLabel = (gcnew System::Windows::Forms::Label());
			this->OrderGrid = (gcnew System::Windows::Forms::DataGridView());
			this->MeniuMainPanel = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->CountBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->DishIdBox = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SearchDishButton = (gcnew System::Windows::Forms::Button());
			this->MeniuGrid = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->InformationNextPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->InformationPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->StatusPanel->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StatusGridFirst))->BeginInit();
			this->OrderPanel->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OrderGrid))->BeginInit();
			this->MeniuMainPanel->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MeniuGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->InformationNextPage);
			this->panel1->Controls->Add(this->InformationPanel);
			this->panel1->Controls->Add(this->StatusPanel);
			this->panel1->Controls->Add(this->OrderPanel);
			this->panel1->Controls->Add(this->MeniuMainPanel);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1094, 661);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UserMain::panel1_Paint);
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
			this->panel2->Controls->Add(this->OrdersButton);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->SidePanel);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(224, 661);
			this->panel2->TabIndex = 3;
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
			this->OrdersButton->Location = System::Drawing::Point(12, 240);
			this->OrdersButton->Name = L"OrdersButton";
			this->OrdersButton->Size = System::Drawing::Size(212, 73);
			this->OrdersButton->TabIndex = 13;
			this->OrdersButton->Text = L"UŽSAKYMAI";
			this->OrdersButton->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->OrdersButton->UseVisualStyleBackColor = false;
			this->OrdersButton->Click += gcnew System::EventHandler(this, &UserMain::OrdersButton_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(12, 167);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(212, 73);
			this->button3->TabIndex = 12;
			this->button3->Text = L"KREPŠELIS";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &UserMain::Basket_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->button7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(0, 588);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(224, 73);
			this->button7->TabIndex = 11;
			this->button7->Text = L"ATSIJUNGTI";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &UserMain::Exit_Click);
			// 
			// button6
			// 
			this->button6->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(12, 509);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(212, 73);
			this->button6->TabIndex = 10;
			this->button6->Text = L"INFORMACIJA";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &UserMain::Information_Click);
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
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(12, 88);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(212, 73);
			this->button1->TabIndex = 2;
			this->button1->Text = L"MENIU ";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UserMain::Meniu_Click);
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
			this->InformationNextPage->Controls->Add(this->label31);
			this->InformationNextPage->Controls->Add(this->pictureBox8);
			this->InformationNextPage->Controls->Add(this->label28);
			this->InformationNextPage->Controls->Add(this->pictureBox6);
			this->InformationNextPage->Controls->Add(this->label33);
			this->InformationNextPage->Controls->Add(this->label34);
			this->InformationNextPage->Controls->Add(this->label35);
			this->InformationNextPage->Dock = System::Windows::Forms::DockStyle::Fill;
			this->InformationNextPage->Location = System::Drawing::Point(0, 0);
			this->InformationNextPage->Name = L"InformationNextPage";
			this->InformationNextPage->Size = System::Drawing::Size(1094, 661);
			this->InformationNextPage->TabIndex = 31;
			this->InformationNextPage->Visible = false;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(586, 132);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(146, 17);
			this->label31->TabIndex = 18;
			this->label31->Text = L"Užsakymo peržiūra";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(237, 107);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(319, 184);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 17;
			this->pictureBox8->TabStop = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(808, 637);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(81, 17);
			this->label28->TabIndex = 16;
			this->label28->Text = L"Lorem 1.0";
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
			this->pictureBox6->Click += gcnew System::EventHandler(this, &UserMain::pictureBox6_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(808, 614);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(223, 17);
			this->label33->TabIndex = 9;
			this->label33->Text = L"Atnaujinimo data: 2020-05-16";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(808, 591);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(273, 17);
			this->label34->TabIndex = 8;
			this->label34->Text = L"Programos autorius: Audrius Vaitkus";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Arial", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(483, 26);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(363, 40);
			this->label35->TabIndex = 4;
			this->label35->Text = L"Informacija vartotojui";
			// 
			// InformationPanel
			// 
			this->InformationPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->InformationPanel->Controls->Add(this->pictureBox7);
			this->InformationPanel->Controls->Add(this->label27);
			this->InformationPanel->Controls->Add(this->label26);
			this->InformationPanel->Controls->Add(this->label25);
			this->InformationPanel->Controls->Add(this->label24);
			this->InformationPanel->Controls->Add(this->label23);
			this->InformationPanel->Controls->Add(this->label20);
			this->InformationPanel->Controls->Add(this->label18);
			this->InformationPanel->Controls->Add(this->pictureBox5);
			this->InformationPanel->Controls->Add(this->pictureBox4);
			this->InformationPanel->Controls->Add(this->pictureBox3);
			this->InformationPanel->Controls->Add(this->label19);
			this->InformationPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->InformationPanel->Location = System::Drawing::Point(0, 0);
			this->InformationPanel->Name = L"InformationPanel";
			this->InformationPanel->Size = System::Drawing::Size(1094, 661);
			this->InformationPanel->TabIndex = 30;
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
			this->pictureBox7->Click += gcnew System::EventHandler(this, &UserMain::pictureBox7_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(608, 568);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(248, 17);
			this->label27->TabIndex = 14;
			this->label27->Text = L"3. Spauskite peržiūrėti užsakymą";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(608, 539);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(237, 17);
			this->label26->TabIndex = 13;
			this->label26->Text = L"2. Įveskite užsakymo id į laukelį";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(608, 510);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(343, 17);
			this->label25->TabIndex = 12;
			this->label25->Text = L"1. Užsakymo peržiūrai pasirinkite užsakymo id";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(605, 300);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(337, 17);
			this->label24->TabIndex = 11;
			this->label24->Text = L"1. Patikrinkite užsakymą ir spauskite užsakyti";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(608, 175);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(464, 17);
			this->label23->TabIndex = 10;
			this->label23->Text = L"3. Spauskite užsakyti, kad pridėtumėte patiekalą prie krepšelio";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(608, 147);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(313, 17);
			this->label20->TabIndex = 9;
			this->label20->Text = L"2. Įveskite pasirinkto patiekalo id į laukelį.";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(608, 119);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(308, 17);
			this->label18->TabIndex = 8;
			this->label18->Text = L"1. Pasirinkite patiekalą pagal patiekalo id";
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
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(497, 26);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(363, 40);
			this->label19->TabIndex = 4;
			this->label19->Text = L"Informacija vartotojui";
			// 
			// StatusPanel
			// 
			this->StatusPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->StatusPanel->Controls->Add(this->ViewButton);
			this->StatusPanel->Controls->Add(this->label16);
			this->StatusPanel->Controls->Add(this->IdOrderTextBox);
			this->StatusPanel->Controls->Add(this->panel7);
			this->StatusPanel->Controls->Add(this->label22);
			this->StatusPanel->Controls->Add(this->StatusGridFirst);
			this->StatusPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->StatusPanel->Location = System::Drawing::Point(0, 0);
			this->StatusPanel->Name = L"StatusPanel";
			this->StatusPanel->Size = System::Drawing::Size(1094, 661);
			this->StatusPanel->TabIndex = 29;
			this->StatusPanel->Visible = false;
			// 
			// ViewButton
			// 
			this->ViewButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ViewButton->FlatAppearance->BorderSize = 0;
			this->ViewButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewButton->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewButton->ForeColor = System::Drawing::Color::White;
			this->ViewButton->Location = System::Drawing::Point(697, 115);
			this->ViewButton->Name = L"ViewButton";
			this->ViewButton->Size = System::Drawing::Size(163, 23);
			this->ViewButton->TabIndex = 27;
			this->ViewButton->Text = L"Peržiūrėti užsakymą";
			this->ViewButton->UseVisualStyleBackColor = false;
			this->ViewButton->Click += gcnew System::EventHandler(this, &UserMain::ViewButton_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(479, 119);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(25, 19);
			this->label16->TabIndex = 26;
			this->label16->Text = L"ID";
			// 
			// IdOrderTextBox
			// 
			this->IdOrderTextBox->Location = System::Drawing::Point(530, 118);
			this->IdOrderTextBox->Name = L"IdOrderTextBox";
			this->IdOrderTextBox->Size = System::Drawing::Size(146, 20);
			this->IdOrderTextBox->TabIndex = 25;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->panel7->Controls->Add(this->label21);
			this->panel7->Location = System::Drawing::Point(574, 181);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(102, 46);
			this->panel7->TabIndex = 24;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(5, 14);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(94, 16);
			this->label21->TabIndex = 28;
			this->label21->Text = L"Užsakymo id";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Arial", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(538, 29);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(195, 40);
			this->label22->TabIndex = 4;
			this->label22->Text = L"Užsakymai";
			// 
			// StatusGridFirst
			// 
			this->StatusGridFirst->AllowUserToAddRows = false;
			this->StatusGridFirst->AllowUserToDeleteRows = false;
			this->StatusGridFirst->AllowUserToResizeColumns = false;
			this->StatusGridFirst->AllowUserToResizeRows = false;
			dataGridViewCellStyle16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->StatusGridFirst->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle16;
			this->StatusGridFirst->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->StatusGridFirst->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->StatusGridFirst->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->StatusGridFirst->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle17->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			dataGridViewCellStyle17->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle17->ForeColor = System::Drawing::SystemColors::MenuText;
			dataGridViewCellStyle17->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle17->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->StatusGridFirst->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle17;
			this->StatusGridFirst->ColumnHeadersHeight = 40;
			this->StatusGridFirst->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->StatusGridFirst->ColumnHeadersVisible = false;
			dataGridViewCellStyle18->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle18->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle18->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle18->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle18->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle18->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->StatusGridFirst->DefaultCellStyle = dataGridViewCellStyle18;
			this->StatusGridFirst->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->StatusGridFirst->Location = System::Drawing::Point(574, 237);
			this->StatusGridFirst->Name = L"StatusGridFirst";
			this->StatusGridFirst->ReadOnly = true;
			this->StatusGridFirst->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle19->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle19->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle19->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle19->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle19->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle19->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->StatusGridFirst->RowHeadersDefaultCellStyle = dataGridViewCellStyle19;
			this->StatusGridFirst->RowHeadersVisible = false;
			dataGridViewCellStyle20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->StatusGridFirst->RowsDefaultCellStyle = dataGridViewCellStyle20;
			this->StatusGridFirst->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->StatusGridFirst->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->StatusGridFirst->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->StatusGridFirst->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			this->StatusGridFirst->RowTemplate->DefaultCellStyle->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->StatusGridFirst->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->StatusGridFirst->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->StatusGridFirst->RowTemplate->DividerHeight = 2;
			this->StatusGridFirst->RowTemplate->Height = 50;
			this->StatusGridFirst->RowTemplate->ReadOnly = true;
			this->StatusGridFirst->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->StatusGridFirst->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->StatusGridFirst->Size = System::Drawing::Size(102, 358);
			this->StatusGridFirst->TabIndex = 13;
			// 
			// OrderPanel
			// 
			this->OrderPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->OrderPanel->Controls->Add(this->button5);
			this->OrderPanel->Controls->Add(this->label8);
			this->OrderPanel->Controls->Add(this->IdBox);
			this->OrderPanel->Controls->Add(this->button4);
			this->OrderPanel->Controls->Add(this->panel6);
			this->OrderPanel->Controls->Add(this->TextLabel);
			this->OrderPanel->Controls->Add(this->OrderGrid);
			this->OrderPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->OrderPanel->Location = System::Drawing::Point(0, 0);
			this->OrderPanel->Name = L"OrderPanel";
			this->OrderPanel->Size = System::Drawing::Size(1094, 661);
			this->OrderPanel->TabIndex = 28;
			this->OrderPanel->Visible = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Green;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(490, 136);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(348, 38);
			this->button5->TabIndex = 28;
			this->button5->Text = L"Užsakyti";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &UserMain::ConfirmOrder_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(486, 96);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(23, 19);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Id";
			// 
			// IdBox
			// 
			this->IdBox->Location = System::Drawing::Point(530, 95);
			this->IdBox->Name = L"IdBox";
			this->IdBox->Size = System::Drawing::Size(146, 20);
			this->IdBox->TabIndex = 26;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(695, 90);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(143, 25);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Pašalinti";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &UserMain::DeleteBasket_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->panel6->Controls->Add(this->label15);
			this->panel6->Controls->Add(this->label13);
			this->panel6->Controls->Add(this->label12);
			this->panel6->Controls->Add(this->label10);
			this->panel6->Controls->Add(this->label9);
			this->panel6->Location = System::Drawing::Point(409, 193);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(501, 54);
			this->panel6->TabIndex = 24;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(420, 15);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(53, 19);
			this->label15->TabIndex = 32;
			this->label15->Text = L"Kaina";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(323, 15);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(56, 19);
			this->label13->TabIndex = 31;
			this->label13->Text = L"Kiekis";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(204, 15);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(95, 19);
			this->label12->TabIndex = 30;
			this->label12->Text = L"Aprašymas";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(91, 14);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(107, 19);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Pavadinimas";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(38, 15);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(23, 19);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Id";
			// 
			// TextLabel
			// 
			this->TextLabel->AutoSize = true;
			this->TextLabel->Font = (gcnew System::Drawing::Font(L"Arial", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextLabel->Location = System::Drawing::Point(576, 21);
			this->TextLabel->Name = L"TextLabel";
			this->TextLabel->Size = System::Drawing::Size(171, 40);
			this->TextLabel->TabIndex = 4;
			this->TextLabel->Text = L"Krepšelis";
			// 
			// OrderGrid
			// 
			this->OrderGrid->AllowUserToAddRows = false;
			this->OrderGrid->AllowUserToDeleteRows = false;
			this->OrderGrid->AllowUserToResizeColumns = false;
			this->OrderGrid->AllowUserToResizeRows = false;
			dataGridViewCellStyle21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->OrderGrid->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle21;
			this->OrderGrid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->OrderGrid->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->OrderGrid->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->OrderGrid->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle22->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			dataGridViewCellStyle22->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle22->ForeColor = System::Drawing::SystemColors::MenuText;
			dataGridViewCellStyle22->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle22->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->OrderGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle22;
			this->OrderGrid->ColumnHeadersHeight = 40;
			this->OrderGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->OrderGrid->ColumnHeadersVisible = false;
			dataGridViewCellStyle23->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle23->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle23->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle23->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle23->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle23->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->OrderGrid->DefaultCellStyle = dataGridViewCellStyle23;
			this->OrderGrid->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->OrderGrid->Location = System::Drawing::Point(409, 253);
			this->OrderGrid->Name = L"OrderGrid";
			this->OrderGrid->ReadOnly = true;
			this->OrderGrid->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle24->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle24->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle24->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle24->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle24->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle24->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->OrderGrid->RowHeadersDefaultCellStyle = dataGridViewCellStyle24;
			this->OrderGrid->RowHeadersVisible = false;
			dataGridViewCellStyle25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->OrderGrid->RowsDefaultCellStyle = dataGridViewCellStyle25;
			this->OrderGrid->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->OrderGrid->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->OrderGrid->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->OrderGrid->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			this->OrderGrid->RowTemplate->DefaultCellStyle->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->OrderGrid->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->OrderGrid->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->OrderGrid->RowTemplate->DividerHeight = 2;
			this->OrderGrid->RowTemplate->Height = 50;
			this->OrderGrid->RowTemplate->ReadOnly = true;
			this->OrderGrid->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->OrderGrid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->OrderGrid->Size = System::Drawing::Size(502, 358);
			this->OrderGrid->TabIndex = 13;
			// 
			// MeniuMainPanel
			// 
			this->MeniuMainPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->MeniuMainPanel->Controls->Add(this->label17);
			this->MeniuMainPanel->Controls->Add(this->label14);
			this->MeniuMainPanel->Controls->Add(this->CountBox);
			this->MeniuMainPanel->Controls->Add(this->label7);
			this->MeniuMainPanel->Controls->Add(this->DishIdBox);
			this->MeniuMainPanel->Controls->Add(this->button2);
			this->MeniuMainPanel->Controls->Add(this->panel4);
			this->MeniuMainPanel->Controls->Add(this->label2);
			this->MeniuMainPanel->Controls->Add(this->pictureBox2);
			this->MeniuMainPanel->Controls->Add(this->comboBox1);
			this->MeniuMainPanel->Controls->Add(this->label11);
			this->MeniuMainPanel->Controls->Add(this->SearchDishButton);
			this->MeniuMainPanel->Controls->Add(this->MeniuGrid);
			this->MeniuMainPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MeniuMainPanel->Location = System::Drawing::Point(0, 0);
			this->MeniuMainPanel->Name = L"MeniuMainPanel";
			this->MeniuMainPanel->Size = System::Drawing::Size(1094, 661);
			this->MeniuMainPanel->TabIndex = 13;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(899, 102);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(74, 16);
			this->label17->TabIndex = 29;
			this->label17->Text = L"Atnaujinti";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(468, 184);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(56, 19);
			this->label14->TabIndex = 29;
			this->label14->Text = L"Kiekis";
			// 
			// CountBox
			// 
			this->CountBox->Location = System::Drawing::Point(545, 185);
			this->CountBox->Name = L"CountBox";
			this->CountBox->Size = System::Drawing::Size(146, 20);
			this->CountBox->TabIndex = 28;
			this->CountBox->Text = L"1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(427, 141);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 19);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Patiekalo id";
			// 
			// DishIdBox
			// 
			this->DishIdBox->Location = System::Drawing::Point(545, 141);
			this->DishIdBox->Name = L"DishIdBox";
			this->DishIdBox->Size = System::Drawing::Size(146, 20);
			this->DishIdBox->TabIndex = 26;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Green;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(710, 154);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 36);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Užsakyti";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &UserMain::AddToOrder_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Location = System::Drawing::Point(451, 240);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(402, 54);
			this->panel4->TabIndex = 24;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(327, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 16);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Kaina";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(222, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 16);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Aprašymas";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(111, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 16);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Pavadinimas";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 16);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Patiekalo id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(473, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 19);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Tipas";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(868, 97);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(25, 25);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 22;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &UserMain::pictureBox2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Sriuba", L"Karštas patiekalas", L"Šaltas patiekalas",
					L"Užkandis", L"Gėrimas"
			});
			this->comboBox1->Location = System::Drawing::Point(545, 97);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(146, 21);
			this->comboBox1->TabIndex = 21;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(566, 20);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(114, 40);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Meniu";
			// 
			// SearchDishButton
			// 
			this->SearchDishButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->SearchDishButton->FlatAppearance->BorderSize = 0;
			this->SearchDishButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SearchDishButton->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchDishButton->ForeColor = System::Drawing::Color::White;
			this->SearchDishButton->Location = System::Drawing::Point(710, 97);
			this->SearchDishButton->Name = L"SearchDishButton";
			this->SearchDishButton->Size = System::Drawing::Size(143, 25);
			this->SearchDishButton->TabIndex = 19;
			this->SearchDishButton->Text = L"Ieškoti patiekalo";
			this->SearchDishButton->UseVisualStyleBackColor = false;
			this->SearchDishButton->Click += gcnew System::EventHandler(this, &UserMain::SearchDishButton_Click);
			// 
			// MeniuGrid
			// 
			this->MeniuGrid->AllowUserToAddRows = false;
			this->MeniuGrid->AllowUserToDeleteRows = false;
			this->MeniuGrid->AllowUserToResizeColumns = false;
			this->MeniuGrid->AllowUserToResizeRows = false;
			dataGridViewCellStyle26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->MeniuGrid->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle26;
			this->MeniuGrid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->MeniuGrid->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->MeniuGrid->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->MeniuGrid->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle27->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			dataGridViewCellStyle27->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle27->ForeColor = System::Drawing::SystemColors::MenuText;
			dataGridViewCellStyle27->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle27->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->MeniuGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle27;
			this->MeniuGrid->ColumnHeadersHeight = 40;
			this->MeniuGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->MeniuGrid->ColumnHeadersVisible = false;
			dataGridViewCellStyle28->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle28->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle28->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle28->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle28->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle28->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->MeniuGrid->DefaultCellStyle = dataGridViewCellStyle28;
			this->MeniuGrid->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->MeniuGrid->Location = System::Drawing::Point(451, 300);
			this->MeniuGrid->Name = L"MeniuGrid";
			this->MeniuGrid->ReadOnly = true;
			this->MeniuGrid->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle29->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle29->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle29->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle29->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle29->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle29->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->MeniuGrid->RowHeadersDefaultCellStyle = dataGridViewCellStyle29;
			this->MeniuGrid->RowHeadersVisible = false;
			dataGridViewCellStyle30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->MeniuGrid->RowsDefaultCellStyle = dataGridViewCellStyle30;
			this->MeniuGrid->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->MeniuGrid->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->MeniuGrid->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MeniuGrid->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			this->MeniuGrid->RowTemplate->DefaultCellStyle->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->MeniuGrid->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->MeniuGrid->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->MeniuGrid->RowTemplate->DividerHeight = 2;
			this->MeniuGrid->RowTemplate->Height = 50;
			this->MeniuGrid->RowTemplate->ReadOnly = true;
			this->MeniuGrid->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->MeniuGrid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->MeniuGrid->Size = System::Drawing::Size(402, 358);
			this->MeniuGrid->TabIndex = 13;
			// 
			// UserMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1094, 661);
			this->Controls->Add(this->panel1);
			this->MaximumSize = System::Drawing::Size(1110, 700);
			this->MinimumSize = System::Drawing::Size(1110, 700);
			this->Name = L"UserMain";
			this->Text = L"Lorem";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->InformationNextPage->ResumeLayout(false);
			this->InformationNextPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->InformationPanel->ResumeLayout(false);
			this->InformationPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->StatusPanel->ResumeLayout(false);
			this->StatusPanel->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StatusGridFirst))->EndInit();
			this->OrderPanel->ResumeLayout(false);
			this->OrderPanel->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OrderGrid))->EndInit();
			this->MeniuMainPanel->ResumeLayout(false);
			this->MeniuMainPanel->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MeniuGrid))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void LoadBasket(int dish_id);
		void ChangeStatus();
		void UpdateId();
		void UpdateIdOrder();
		System::Void SearchDishButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Meniu_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void AddToOrder_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Basket_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void DeleteBasket_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void ConfirmOrder_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void OrdersButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
		System::Void ViewButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Information_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e);
	
};
}
