#pragma once

namespace Baigiamasisdarbas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for AddClient
	/// </summary>
	public ref class AddClient : public System::Windows::Forms::Form
	{
	public:
		AddClient(void)
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
		~AddClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ RegPanel;
	protected:
	private: System::Windows::Forms::TextBox^ RegUserNameBox;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ RegCancel;
	private: System::Windows::Forms::Button^ RegRegisterButton;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ RegSurnameBox;
	private: System::Windows::Forms::TextBox^ RegNameBox;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::TextBox^ RegAdressBox;
	private: System::Windows::Forms::TextBox^ RegPasswordBox;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label7;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddClient::typeid));
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
			this->RegPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// RegPanel
			// 
			this->RegPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
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
			this->RegPanel->MaximumSize = System::Drawing::Size(815, 555);
			this->RegPanel->MinimumSize = System::Drawing::Size(815, 555);
			this->RegPanel->Name = L"RegPanel";
			this->RegPanel->Size = System::Drawing::Size(815, 555);
			this->RegPanel->TabIndex = 11;
			// 
			// RegUserNameBox
			// 
			this->RegUserNameBox->Location = System::Drawing::Point(355, 138);
			this->RegUserNameBox->Name = L"RegUserNameBox";
			this->RegUserNameBox->Size = System::Drawing::Size(303, 20);
			this->RegUserNameBox->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(119, 134);
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
			this->RegCancel->Location = System::Drawing::Point(241, 440);
			this->RegCancel->Name = L"RegCancel";
			this->RegCancel->Size = System::Drawing::Size(156, 42);
			this->RegCancel->TabIndex = 22;
			this->RegCancel->Text = L"Atšaukti";
			this->RegCancel->UseVisualStyleBackColor = true;
			this->RegCancel->Click += gcnew System::EventHandler(this, &AddClient::RegCancel_Click);
			// 
			// RegRegisterButton
			// 
			this->RegRegisterButton->FlatAppearance->BorderSize = 0;
			this->RegRegisterButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RegRegisterButton->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegRegisterButton->Location = System::Drawing::Point(502, 440);
			this->RegRegisterButton->Name = L"RegRegisterButton";
			this->RegRegisterButton->Size = System::Drawing::Size(156, 42);
			this->RegRegisterButton->TabIndex = 21;
			this->RegRegisterButton->Text = L"Pridėti";
			this->RegRegisterButton->UseVisualStyleBackColor = true;
			this->RegRegisterButton->Click += gcnew System::EventHandler(this, &AddClient::RegRegisterButton_Click);
			// 
			// RegAdressBox
			// 
			this->RegAdressBox->Location = System::Drawing::Point(355, 300);
			this->RegAdressBox->Name = L"RegAdressBox";
			this->RegAdressBox->Size = System::Drawing::Size(303, 20);
			this->RegAdressBox->TabIndex = 20;
			// 
			// RegPasswordBox
			// 
			this->RegPasswordBox->Location = System::Drawing::Point(355, 355);
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
			this->label10->Location = System::Drawing::Point(198, 296);
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
			this->label9->Location = System::Drawing::Point(196, 242);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 24);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Pavardė";
			// 
			// RegSurnameBox
			// 
			this->RegSurnameBox->Location = System::Drawing::Point(355, 246);
			this->RegSurnameBox->Name = L"RegSurnameBox";
			this->RegSurnameBox->Size = System::Drawing::Size(303, 20);
			this->RegSurnameBox->TabIndex = 16;
			// 
			// RegNameBox
			// 
			this->RegNameBox->Location = System::Drawing::Point(355, 192);
			this->RegNameBox->Name = L"RegNameBox";
			this->RegNameBox->Size = System::Drawing::Size(303, 20);
			this->RegNameBox->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(208, 188);
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
			this->label7->Location = System::Drawing::Point(164, 350);
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
			this->label8->Location = System::Drawing::Point(283, 42);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(312, 40);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Kliento pridėjimas";
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
			// AddClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(799, 516);
			this->Controls->Add(this->RegPanel);
			this->MaximumSize = System::Drawing::Size(815, 555);
			this->MinimumSize = System::Drawing::Size(815, 555);
			this->Name = L"AddClient";
			this->Text = L"Lorem";
			this->RegPanel->ResumeLayout(false);
			this->RegPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		System::Void RegRegisterButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void RegCancel_Click(System::Object^ sender, System::EventArgs^ e);

};
}
