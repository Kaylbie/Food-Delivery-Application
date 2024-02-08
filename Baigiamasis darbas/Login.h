#pragma once
#include <string>
#include "Main.h"
#include "UserMain.h"
//#include <iostream>  
//#include <fstream>   
//#include <iomanip>   

namespace Baigiamasisdarbas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ LoginPanel;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ RegisterButton;

	private: System::Windows::Forms::Button^ LoginButton;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ PasswordBox;
	private: System::Windows::Forms::TextBox^ UserNameBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ RegPanel;

	private: System::Windows::Forms::Button^ RegCancel;
	private: System::Windows::Forms::Button^ RegRegisterButton;
	private: System::Windows::Forms::TextBox^ RegAdressBox;
	private: System::Windows::Forms::TextBox^ RegPasswordBox;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ RegSurnameBox;
	private: System::Windows::Forms::TextBox^ RegNameBox;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ RegUserNameBox;
	private: System::Windows::Forms::Button^ AdminButton;
	private: System::Windows::Forms::Panel^ AdminPanel;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ AdminLogButton;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::TextBox^ AdminPasswordBox;
	private: System::Windows::Forms::TextBox^ AdminUsernameBox;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ BackButton;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->LoginPanel = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->RegisterButton = (gcnew System::Windows::Forms::Button());
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->PasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->UserNameBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AdminButton = (gcnew System::Windows::Forms::Button());
			this->RegPanel = (gcnew System::Windows::Forms::Panel());
			this->RegUserNameBox = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->RegCancel = (gcnew System::Windows::Forms::Button());
			this->RegRegisterButton = (gcnew System::Windows::Forms::Button());
			this->RegAdressBox = (gcnew System::Windows::Forms::TextBox());
			this->RegPasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->RegSurnameBox = (gcnew System::Windows::Forms::TextBox());
			this->RegNameBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->AdminPanel = (gcnew System::Windows::Forms::Panel());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->AdminLogButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->AdminPasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->AdminUsernameBox = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->LoginPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->RegPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->AdminPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// LoginPanel
			// 
			this->LoginPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->LoginPanel->Controls->Add(this->label4);
			this->LoginPanel->Controls->Add(this->pictureBox3);
			this->LoginPanel->Controls->Add(this->RegisterButton);
			this->LoginPanel->Controls->Add(this->LoginButton);
			this->LoginPanel->Controls->Add(this->pictureBox2);
			this->LoginPanel->Controls->Add(this->pictureBox1);
			this->LoginPanel->Controls->Add(this->PasswordBox);
			this->LoginPanel->Controls->Add(this->UserNameBox);
			this->LoginPanel->Controls->Add(this->label3);
			this->LoginPanel->Controls->Add(this->label2);
			this->LoginPanel->Controls->Add(this->label1);
			this->LoginPanel->Controls->Add(this->AdminButton);
			this->LoginPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LoginPanel->Location = System::Drawing::Point(0, 0);
			this->LoginPanel->Name = L"LoginPanel";
			this->LoginPanel->Size = System::Drawing::Size(799, 516);
			this->LoginPanel->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(91, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 32);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Lorem";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(76, 68);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// RegisterButton
			// 
			this->RegisterButton->FlatAppearance->BorderSize = 0;
			this->RegisterButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RegisterButton->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegisterButton->Location = System::Drawing::Point(143, 352);
			this->RegisterButton->Name = L"RegisterButton";
			this->RegisterButton->Size = System::Drawing::Size(183, 58);
			this->RegisterButton->TabIndex = 7;
			this->RegisterButton->Text = L"Registracija";
			this->RegisterButton->UseVisualStyleBackColor = true;
			this->RegisterButton->Click += gcnew System::EventHandler(this, &Login::RegisterButton_Click);
			// 
			// LoginButton
			// 
			this->LoginButton->FlatAppearance->BorderSize = 0;
			this->LoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginButton->Location = System::Drawing::Point(447, 352);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(183, 58);
			this->LoginButton->TabIndex = 7;
			this->LoginButton->Text = L"Prisijungti";
			this->LoginButton->UseVisualStyleBackColor = true;
			this->LoginButton->Click += gcnew System::EventHandler(this, &Login::LoginButton_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(88, 250);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(38, 42);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(84, 176);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(44, 42);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// PasswordBox
			// 
			this->PasswordBox->Location = System::Drawing::Point(327, 259);
			this->PasswordBox->Name = L"PasswordBox";
			this->PasswordBox->PasswordChar = '*';
			this->PasswordBox->Size = System::Drawing::Size(303, 20);
			this->PasswordBox->TabIndex = 4;
			// 
			// UserNameBox
			// 
			this->UserNameBox->Location = System::Drawing::Point(327, 189);
			this->UserNameBox->Name = L"UserNameBox";
			this->UserNameBox->Size = System::Drawing::Size(303, 20);
			this->UserNameBox->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(139, 185);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(166, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Vartotojo vardas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(139, 255);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Slaptažodis";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(277, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(240, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Prisijungimas";
			// 
			// AdminButton
			// 
			this->AdminButton->FlatAppearance->BorderSize = 0;
			this->AdminButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AdminButton->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdminButton->Location = System::Drawing::Point(651, 464);
			this->AdminButton->Name = L"AdminButton";
			this->AdminButton->Size = System::Drawing::Size(145, 49);
			this->AdminButton->TabIndex = 11;
			this->AdminButton->Text = L"Administratoriui";
			this->AdminButton->UseVisualStyleBackColor = true;
			this->AdminButton->Click += gcnew System::EventHandler(this, &Login::AdminButton_Click);
			// 
			// RegPanel
			// 
			this->RegPanel->Controls->Add(this->RegUserNameBox);
			this->RegPanel->Controls->Add(this->label11);
			this->RegPanel->Controls->Add(this->RegCancel);
			this->RegPanel->Controls->Add(this->RegRegisterButton);
			this->RegPanel->Controls->Add(this->RegAdressBox);
			this->RegPanel->Controls->Add(this->RegPasswordBox);
			this->RegPanel->Controls->Add(this->label10);
			this->RegPanel->Controls->Add(this->label9);
			this->RegPanel->Controls->Add(this->RegSurnameBox);
			this->RegPanel->Controls->Add(this->RegNameBox);
			this->RegPanel->Controls->Add(this->label6);
			this->RegPanel->Controls->Add(this->label7);
			this->RegPanel->Controls->Add(this->label8);
			this->RegPanel->Controls->Add(this->label5);
			this->RegPanel->Controls->Add(this->pictureBox4);
			this->RegPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->RegPanel->Location = System::Drawing::Point(0, 0);
			this->RegPanel->Name = L"RegPanel";
			this->RegPanel->Size = System::Drawing::Size(799, 516);
			this->RegPanel->TabIndex = 10;
			this->RegPanel->Visible = false;
			// 
			// RegUserNameBox
			// 
			this->RegUserNameBox->Location = System::Drawing::Point(284, 137);
			this->RegUserNameBox->Name = L"RegUserNameBox";
			this->RegUserNameBox->Size = System::Drawing::Size(303, 20);
			this->RegUserNameBox->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(48, 133);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(166, 24);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Vartotojo vardas";
			// 
			// RegCancel
			// 
			this->RegCancel->FlatAppearance->BorderSize = 0;
			this->RegCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RegCancel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegCancel->Location = System::Drawing::Point(170, 439);
			this->RegCancel->Name = L"RegCancel";
			this->RegCancel->Size = System::Drawing::Size(156, 42);
			this->RegCancel->TabIndex = 22;
			this->RegCancel->Text = L"Atšaukti";
			this->RegCancel->UseVisualStyleBackColor = true;
			this->RegCancel->Click += gcnew System::EventHandler(this, &Login::RegCancel_Click);
			// 
			// RegRegisterButton
			// 
			this->RegRegisterButton->FlatAppearance->BorderSize = 0;
			this->RegRegisterButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RegRegisterButton->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegRegisterButton->Location = System::Drawing::Point(431, 439);
			this->RegRegisterButton->Name = L"RegRegisterButton";
			this->RegRegisterButton->Size = System::Drawing::Size(156, 42);
			this->RegRegisterButton->TabIndex = 21;
			this->RegRegisterButton->Text = L"Registruotis";
			this->RegRegisterButton->UseVisualStyleBackColor = true;
			this->RegRegisterButton->Click += gcnew System::EventHandler(this, &Login::RegRegisterButton_Click);
			// 
			// RegAdressBox
			// 
			this->RegAdressBox->Location = System::Drawing::Point(284, 299);
			this->RegAdressBox->Name = L"RegAdressBox";
			this->RegAdressBox->Size = System::Drawing::Size(303, 20);
			this->RegAdressBox->TabIndex = 20;
			// 
			// RegPasswordBox
			// 
			this->RegPasswordBox->Location = System::Drawing::Point(284, 354);
			this->RegPasswordBox->Name = L"RegPasswordBox";
			this->RegPasswordBox->PasswordChar = '*';
			this->RegPasswordBox->Size = System::Drawing::Size(303, 20);
			this->RegPasswordBox->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(127, 295);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(87, 24);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Adresas";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(125, 241);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 24);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Pavardė";
			// 
			// RegSurnameBox
			// 
			this->RegSurnameBox->Location = System::Drawing::Point(284, 245);
			this->RegSurnameBox->Name = L"RegSurnameBox";
			this->RegSurnameBox->Size = System::Drawing::Size(303, 20);
			this->RegSurnameBox->TabIndex = 16;
			// 
			// RegNameBox
			// 
			this->RegNameBox->Location = System::Drawing::Point(284, 191);
			this->RegNameBox->Name = L"RegNameBox";
			this->RegNameBox->Size = System::Drawing::Size(303, 20);
			this->RegNameBox->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(137, 187);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 24);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Vardas";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(93, 349);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 24);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Slaptažodis";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(290, 54);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(211, 40);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Registracija";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(91, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 32);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Lorem";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(0, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(76, 68);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			// 
			// AdminPanel
			// 
			this->AdminPanel->Controls->Add(this->BackButton);
			this->AdminPanel->Controls->Add(this->label12);
			this->AdminPanel->Controls->Add(this->pictureBox5);
			this->AdminPanel->Controls->Add(this->AdminLogButton);
			this->AdminPanel->Controls->Add(this->pictureBox6);
			this->AdminPanel->Controls->Add(this->pictureBox7);
			this->AdminPanel->Controls->Add(this->AdminPasswordBox);
			this->AdminPanel->Controls->Add(this->AdminUsernameBox);
			this->AdminPanel->Controls->Add(this->label13);
			this->AdminPanel->Controls->Add(this->label14);
			this->AdminPanel->Controls->Add(this->label15);
			this->AdminPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AdminPanel->Location = System::Drawing::Point(0, 0);
			this->AdminPanel->Name = L"AdminPanel";
			this->AdminPanel->Size = System::Drawing::Size(799, 516);
			this->AdminPanel->TabIndex = 25;
			this->AdminPanel->Visible = false;
			// 
			// BackButton
			// 
			this->BackButton->FlatAppearance->BorderSize = 0;
			this->BackButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BackButton->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BackButton->Location = System::Drawing::Point(131, 354);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(183, 58);
			this->BackButton->TabIndex = 21;
			this->BackButton->Text = L"Atgal";
			this->BackButton->UseVisualStyleBackColor = true;
			this->BackButton->Click += gcnew System::EventHandler(this, &Login::BackButton_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(91, 18);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(101, 32);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Lorem";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(0, 0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(76, 68);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 19;
			this->pictureBox5->TabStop = false;
			// 
			// AdminLogButton
			// 
			this->AdminLogButton->FlatAppearance->BorderSize = 0;
			this->AdminLogButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AdminLogButton->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdminLogButton->Location = System::Drawing::Point(447, 354);
			this->AdminLogButton->Name = L"AdminLogButton";
			this->AdminLogButton->Size = System::Drawing::Size(183, 58);
			this->AdminLogButton->TabIndex = 18;
			this->AdminLogButton->Text = L"Prisijungti";
			this->AdminLogButton->UseVisualStyleBackColor = true;
			this->AdminLogButton->Click += gcnew System::EventHandler(this, &Login::AdminLogButton_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(88, 263);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(38, 42);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 16;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(84, 189);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(44, 42);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 15;
			this->pictureBox7->TabStop = false;
			// 
			// AdminPasswordBox
			// 
			this->AdminPasswordBox->Location = System::Drawing::Point(327, 272);
			this->AdminPasswordBox->Name = L"AdminPasswordBox";
			this->AdminPasswordBox->PasswordChar = '*';
			this->AdminPasswordBox->Size = System::Drawing::Size(303, 20);
			this->AdminPasswordBox->TabIndex = 14;
			// 
			// AdminUsernameBox
			// 
			this->AdminUsernameBox->Location = System::Drawing::Point(327, 202);
			this->AdminUsernameBox->Name = L"AdminUsernameBox";
			this->AdminUsernameBox->Size = System::Drawing::Size(303, 20);
			this->AdminUsernameBox->TabIndex = 13;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(139, 198);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(166, 24);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Vartotojo vardas";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(139, 268);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(119, 24);
			this->label14->TabIndex = 11;
			this->label14->Text = L"Slaptažodis";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(124, 94);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(536, 40);
			this->label15->TabIndex = 10;
			this->label15->Text = L"Administratoriaus prisijungimas";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->ClientSize = System::Drawing::Size(799, 516);
			this->Controls->Add(this->AdminPanel);
			this->Controls->Add(this->RegPanel);
			this->Controls->Add(this->LoginPanel);
			this->MaximumSize = System::Drawing::Size(815, 555);
			this->MinimumSize = System::Drawing::Size(815, 555);
			this->Name = L"Login";
			this->Text = L"Lorem";
			this->LoginPanel->ResumeLayout(false);
			this->LoginPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->RegPanel->ResumeLayout(false);
			this->RegPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->AdminPanel->ResumeLayout(false);
			this->AdminPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		System::Void RegisterButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void LoginButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void RegRegisterButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void RegCancel_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void AdminButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void AdminLogButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void BackButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
