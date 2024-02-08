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
	/// Summary for ViewOrderClient
	/// </summary>
	public ref class ViewOrderClient : public System::Windows::Forms::Form
	{
	public:
		ViewOrderClient(void)
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
		~ViewOrderClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ RegPanel;
	protected:
	private: System::Windows::Forms::Label^ Status;
	private: System::Windows::Forms::DataGridView^ OrderGrid;
	private: System::Windows::Forms::Label^ OrderId;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ RegCancel;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewOrderClient::typeid));
			this->RegPanel = (gcnew System::Windows::Forms::Panel());
			this->Status = (gcnew System::Windows::Forms::Label());
			this->OrderGrid = (gcnew System::Windows::Forms::DataGridView());
			this->OrderId = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->RegCancel = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->RegPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OrderGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// RegPanel
			// 
			this->RegPanel->Controls->Add(this->Status);
			this->RegPanel->Controls->Add(this->OrderGrid);
			this->RegPanel->Controls->Add(this->OrderId);
			this->RegPanel->Controls->Add(this->label1);
			this->RegPanel->Controls->Add(this->label11);
			this->RegPanel->Controls->Add(this->RegCancel);
			this->RegPanel->Controls->Add(this->label6);
			this->RegPanel->Controls->Add(this->label8);
			this->RegPanel->Controls->Add(this->label5);
			this->RegPanel->Controls->Add(this->pictureBox4);
			this->RegPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->RegPanel->Location = System::Drawing::Point(0, 0);
			this->RegPanel->Name = L"RegPanel";
			this->RegPanel->Size = System::Drawing::Size(772, 577);
			this->RegPanel->TabIndex = 14;
			this->RegPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ViewOrderClient::RegPanel_Paint);
			// 
			// Status
			// 
			this->Status->AutoSize = true;
			this->Status->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Status->Location = System::Drawing::Point(323, 408);
			this->Status->Name = L"Status";
			this->Status->Size = System::Drawing::Size(82, 24);
			this->Status->TabIndex = 37;
			this->Status->Text = L"\?\?\?\?\?\?";
			// 
			// OrderGrid
			// 
			this->OrderGrid->AllowUserToAddRows = false;
			this->OrderGrid->AllowUserToDeleteRows = false;
			this->OrderGrid->AllowUserToResizeColumns = false;
			this->OrderGrid->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->OrderGrid->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->OrderGrid->BackgroundColor = System::Drawing::SystemColors::Control;
			this->OrderGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->OrderGrid->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->OrderGrid->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::MenuText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->OrderGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->OrderGrid->ColumnHeadersHeight = 40;
			this->OrderGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->OrderGrid->ColumnHeadersVisible = false;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->OrderGrid->DefaultCellStyle = dataGridViewCellStyle3;
			this->OrderGrid->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->OrderGrid->Location = System::Drawing::Point(327, 203);
			this->OrderGrid->Name = L"OrderGrid";
			this->OrderGrid->ReadOnly = true;
			this->OrderGrid->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->OrderGrid->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->OrderGrid->RowHeadersVisible = false;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->OrderGrid->RowsDefaultCellStyle = dataGridViewCellStyle5;
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
			this->OrderGrid->Size = System::Drawing::Size(317, 152);
			this->OrderGrid->TabIndex = 36;
			// 
			// OrderId
			// 
			this->OrderId->AutoSize = true;
			this->OrderId->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OrderId->Location = System::Drawing::Point(323, 137);
			this->OrderId->Name = L"OrderId";
			this->OrderId->Size = System::Drawing::Size(82, 24);
			this->OrderId->TabIndex = 33;
			this->OrderId->Text = L"\?\?\?\?\?\?";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(177, 408);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 24);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Statusas";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(140, 137);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(130, 24);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Užsakymo id";
			// 
			// RegCancel
			// 
			this->RegCancel->FlatAppearance->BorderSize = 0;
			this->RegCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RegCancel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegCancel->Location = System::Drawing::Point(327, 493);
			this->RegCancel->Name = L"RegCancel";
			this->RegCancel->Size = System::Drawing::Size(156, 42);
			this->RegCancel->TabIndex = 22;
			this->RegCancel->Text = L"Grįžti";
			this->RegCancel->UseVisualStyleBackColor = true;
			this->RegCancel->Click += gcnew System::EventHandler(this, &ViewOrderClient::RegCancel_Click_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(172, 203);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 24);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Krepšelis";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(295, 58);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(205, 40);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Užsakymas";
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
			// ViewOrderClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(772, 577);
			this->Controls->Add(this->RegPanel);
			this->Name = L"ViewOrderClient";
			this->Text = L"ViewOrderClient";
			this->RegPanel->ResumeLayout(false);
			this->RegPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OrderGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		System::Void RegCancel_Click_1(System::Object^ sender, System::EventArgs^ e);
		void FillGrid(String^ idbasket);
		void FillStatus(String^ status);
		System::Void RegPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
		


	
	 
	
};
}
