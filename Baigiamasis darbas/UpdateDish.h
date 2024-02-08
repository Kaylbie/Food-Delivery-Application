#pragma once
#include "global.h"

namespace Baigiamasisdarbas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for UpdateDish
	/// </summary>
	public ref class UpdateDish : public System::Windows::Forms::Form
	{

	public: String^ Dish_Id;

	public:
		UpdateDish(void)
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
		~UpdateDish()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ RegPanel;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ nameBox;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ RegCancel;
	private: System::Windows::Forms::Button^ RegRegisterButton;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ DescriptionBox;
	private: System::Windows::Forms::TextBox^ PriceBox;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ LoadButton;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UpdateDish::typeid));
			this->RegPanel = (gcnew System::Windows::Forms::Panel());
			this->LoadButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->RegCancel = (gcnew System::Windows::Forms::Button());
			this->RegRegisterButton = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->DescriptionBox = (gcnew System::Windows::Forms::TextBox());
			this->PriceBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->RegPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// RegPanel
			// 
			this->RegPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->RegPanel->Controls->Add(this->label3);
			this->RegPanel->Controls->Add(this->label2);
			this->RegPanel->Controls->Add(this->LoadButton);
			this->RegPanel->Controls->Add(this->label1);
			this->RegPanel->Controls->Add(this->comboBox1);
			this->RegPanel->Controls->Add(this->nameBox);
			this->RegPanel->Controls->Add(this->label11);
			this->RegPanel->Controls->Add(this->RegCancel);
			this->RegPanel->Controls->Add(this->RegRegisterButton);
			this->RegPanel->Controls->Add(this->label9);
			this->RegPanel->Controls->Add(this->DescriptionBox);
			this->RegPanel->Controls->Add(this->PriceBox);
			this->RegPanel->Controls->Add(this->label6);
			this->RegPanel->Controls->Add(this->label8);
			this->RegPanel->Controls->Add(this->label5);
			this->RegPanel->Controls->Add(this->pictureBox4);
			this->RegPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->RegPanel->Location = System::Drawing::Point(0, 0);
			this->RegPanel->Name = L"RegPanel";
			this->RegPanel->Size = System::Drawing::Size(794, 549);
			this->RegPanel->TabIndex = 14;
			
			// 
			// LoadButton
			// 
			this->LoadButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->LoadButton->FlatAppearance->BorderSize = 0;
			this->LoadButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoadButton->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoadButton->Location = System::Drawing::Point(622, 64);
			this->LoadButton->Name = L"LoadButton";
			this->LoadButton->Size = System::Drawing::Size(156, 42);
			this->LoadButton->TabIndex = 33;
			this->LoadButton->Text = L"Load";
			this->LoadButton->UseVisualStyleBackColor = false;
			this->LoadButton->Click += gcnew System::EventHandler(this, &UpdateDish::LoadButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(201, 343);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 24);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Tipas";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Sriuba", L"Karštas patiekalas", L"Šaltas patiekalas",
					L"Užkandis", L"Gėrimas"
			});
			this->comboBox1->Location = System::Drawing::Point(333, 343);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 31;
			// 
			// nameBox
			// 
			this->nameBox->Location = System::Drawing::Point(333, 141);
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(303, 20);
			this->nameBox->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(134, 137);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(129, 24);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Pavadinimas";
			// 
			// RegCancel
			// 
			this->RegCancel->FlatAppearance->BorderSize = 0;
			this->RegCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RegCancel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegCancel->Location = System::Drawing::Point(152, 441);
			this->RegCancel->Name = L"RegCancel";
			this->RegCancel->Size = System::Drawing::Size(156, 42);
			this->RegCancel->TabIndex = 22;
			this->RegCancel->Text = L"Atšaukti";
			this->RegCancel->UseVisualStyleBackColor = true;
			this->RegCancel->Click += gcnew System::EventHandler(this, &UpdateDish::RegCancel_Click);
			// 
			// RegRegisterButton
			// 
			this->RegRegisterButton->FlatAppearance->BorderSize = 0;
			this->RegRegisterButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RegRegisterButton->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegRegisterButton->Location = System::Drawing::Point(480, 441);
			this->RegRegisterButton->Name = L"RegRegisterButton";
			this->RegRegisterButton->Size = System::Drawing::Size(156, 42);
			this->RegRegisterButton->TabIndex = 21;
			this->RegRegisterButton->Text = L"Išsaugoti";
			this->RegRegisterButton->UseVisualStyleBackColor = true;
			this->RegRegisterButton->Click += gcnew System::EventHandler(this, &UpdateDish::RegRegisterButton_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(200, 195);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 24);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Kaina";
			// 
			// DescriptionBox
			// 
			this->DescriptionBox->Location = System::Drawing::Point(333, 254);
			this->DescriptionBox->MaxLength = 256;
			this->DescriptionBox->Multiline = true;
			this->DescriptionBox->Name = L"DescriptionBox";
			this->DescriptionBox->Size = System::Drawing::Size(303, 66);
			this->DescriptionBox->TabIndex = 16;
			// 
			// PriceBox
			// 
			this->PriceBox->Location = System::Drawing::Point(333, 195);
			this->PriceBox->Name = L"PriceBox";
			this->PriceBox->Size = System::Drawing::Size(34, 20);
			this->PriceBox->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(148, 249);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 24);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Aprašymas";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(231, 60);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(385, 40);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Patiekalo redagavimas";
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(399, 198);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 14);
			this->label3->TabIndex = 36;
			this->label3->Text = L"*sveikas skaičius";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(372, 193);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 24);
			this->label2->TabIndex = 35;
			this->label2->Text = L"€";
			// 
			// UpdateDish
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(794, 549);
			this->Controls->Add(this->RegPanel);
			this->Name = L"UpdateDish";
			this->Text = L"Lorem";
			this->RegPanel->ResumeLayout(false);
			this->RegPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
		System::Void LoadButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void RegCancel_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void RegRegisterButton_Click(System::Object^ sender, System::EventArgs^ e);

	
};
}
