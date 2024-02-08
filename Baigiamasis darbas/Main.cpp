#include "Main.h"
#include "Login.h"
#include "UserMain.h"
#include "Dish.h"
#include "UpdateDish.h"
#include "EditClient.h"
#include "global.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Baigiamasisdarbas::Login form;
	Application::Run(% form);
}

System::Void Baigiamasisdarbas::Main::OrdersButton_Click(System::Object^ sender, System::EventArgs^ e)//Užsakymų lango mygtukas(įkeliami duomenys iš duomenų bazės į datagrid lentelę)
{
	SidePanel->Location = System::Drawing::Point(0, 88);
	this->CustomersPanel->Visible = false;
	this->DishesMainPanel->Visible = false;
	this->OrdersMainPanel->Visible = true;
	this->InformationPanel->Visible = false;
	this->InformationNextPage->Visible = false;

	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select orders.idorders, orders.userid,orders.status from lorem.orders;", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		OrdersMainGrid->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
System::Void Baigiamasisdarbas::Main::MeniuButton_Click(System::Object^ sender, System::EventArgs^ e)//Meniu lango mygtukas, duomenys įkeliami iš duomenų bazės į datagrid lentelę
{
	SidePanel->Location = System::Drawing::Point(0, 166);
	this->DishesMainPanel->Visible = true;
	this->OrdersMainPanel->Visible = false;
	this->CustomersPanel->Visible = false;
	this->InformationPanel->Visible = false;
	this->InformationNextPage->Visible = false;

	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select iddishes, name, description, price from lorem.dishes;", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		DishesGrid->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}

}
System::Void Baigiamasisdarbas::Main::CustomersButton_Click(System::Object^ sender, System::EventArgs^ e)//Klientų lango mygtukas(duomenys įkeliami į datagrid lentelę)
{
	SidePanel->Location = System::Drawing::Point(0, 244);

	this->DishesMainPanel->Visible = false;
	this->OrdersMainPanel->Visible = false;
	this->CustomersPanel->Visible = true;
	this->InformationPanel->Visible = false;
	this->InformationNextPage->Visible = false;

	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select *  from lorem.users;", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		CustomersGrid->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}

}
System::Void Baigiamasisdarbas::Main::SettingsButton_Click(System::Object^ sender, System::EventArgs^ e)//Informacijos lango mgtukas
{
	SidePanel->Location = System::Drawing::Point(0, 509);
	this->CustomersPanel->Visible = false;
	this->OrdersMainPanel->Visible = false;
	this->DishesMainPanel->Visible = false;
	this->InformationPanel->Visible = true;
	this->InformationNextPage->Visible = false;

}
System::Void Baigiamasisdarbas::Main::pictureBox7_Click(System::Object^ sender, System::EventArgs^ e)//Sekančio informacijos lango meniu
{
	this->CustomersPanel->Visible = false;
	this->OrdersMainPanel->Visible = false;
	this->DishesMainPanel->Visible = false;
	this->InformationPanel->Visible = false;
	this->InformationNextPage->Visible = true;
}
System::Void Baigiamasisdarbas::Main::pictureBox6_Click(System::Object^ sender, System::EventArgs^ e)//Ankstesnio informacijos lango meniu
{
	this->CustomersPanel->Visible = false;
	this->OrdersMainPanel->Visible = false;
	this->DishesMainPanel->Visible = false;
	this->InformationPanel->Visible = true;
	this->InformationNextPage->Visible = false;
}
System::Void Baigiamasisdarbas::Main::DeleteCustomer_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from lorem.users where id='" + this->RegIdBox->Text + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		int count = 0;//Ieškomas vartotojas pagal nurodytą id
		while (myReader->Read())
		{
			count++;
		}
		if (count == 1)
		{
			if (MessageBox::Show(L"Ar tikrai norite pašalinti klientą ?", L"Pašalinti klientą", System::Windows::Forms::MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
			{
				Delete();//Pašalinimo funkcija
				Reload();//Lentelės atnaujinimo funkcija
				MessageBox::Show(L"Pašalinta");
				RegIdBox->Text = "";
			}
		}
		else if (count == 0)
		{
			MessageBox::Show(L"Vartotojas nerastas");
			RegIdBox->Text = "";
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
System::Void Baigiamasisdarbas::Main::LogOutButton_Click(System::Object^ sender, System::EventArgs^ e)//Atsijungimo mygtukas
{
	if (MessageBox::Show(L"Ar tikrai norite atsijungti ?", L"Atsijungimas", System::Windows::Forms::MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}
	
}
System::Void Baigiamasisdarbas::Main::SearchNameButton_Click(System::Object^ sender, System::EventArgs^ e)//Kliento paieška pagal nurodytą vardą(atnaujinama datagrid lentelė)
{
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from lorem.users where name='" + this->SearchNameBox->Text + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();
		bSource->DataSource = dbdataset;
		CustomersGrid->DataSource = bSource;
		sda->Update(dbdataset);

	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
System::Void Baigiamasisdarbas::Main::SearchDishButton_Click(System::Object^ sender, System::EventArgs^ e)//Patiekalo paieška pagal nurodytą id(atnaujinama datagrid lentelė)
{
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select iddishes, name, description, price from lorem.dishes where iddishes='" + this->IdBox->Text + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		DishesGrid->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
System::Void Baigiamasisdarbas::Main::Mainpanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)//Užsakymo lango mygtukas, duomenys įkeliami į datagrid lentelę
{
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select orders.idorders, orders.userid,orders.status from lorem.orders;", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		OrdersMainGrid->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
void Baigiamasisdarbas::Main::Delete()
{
	glob::B.DeleteUser(Int32::Parse(this->RegIdBox->Text));//Kreipimasis į šalinimo funkciją
}
void Baigiamasisdarbas::Main::DeleteDish()
{
	glob::A.DeleteDish(System::Int32::Parse(this->IdBox->Text));//Kreipimasis į šalinimo funkciją
}
void Baigiamasisdarbas::Main::Reload()//Lentelės atnaujinimo funkcija(atnaujinama datagrid lentelė)
{
	SidePanel->Location = System::Drawing::Point(0, 384);

	this->CustomersPanel->Visible = true;
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from lorem.users;", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		CustomersGrid->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
void Baigiamasisdarbas::Main::ReloadDish()//Datagrid lentelės atnaujinimo funkcija
{

	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select iddishes, name, description, price from lorem.dishes;", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		DishesGrid->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
void Baigiamasisdarbas::Main::ReloadOrder()//Užsakymo atnaujinimo funkcija(atnaujinami datagrid lentelės duomenys)
{
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select orders.idorders, orders.userid,orders.status from lorem.orders;", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		OrdersMainGrid->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}

}
System::Void Baigiamasisdarbas::Main::ReloadButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Reload();
	SearchNameBox->Text = "";
}
System::Void Baigiamasisdarbas::Main::AddClient_Click(System::Object^ sender, System::EventArgs^ e)//Kliento pridėjimo formos atidarymas
{
	AddClient^ input = gcnew AddClient();
	input->ShowDialog();
	Reload();
}
System::Void Baigiamasisdarbas::Main::button1_Click(System::Object^ sender, System::EventArgs^ e)//Kliento redagavimo formos atidarymas
{
	EditClient^ input = gcnew EditClient();
	input->User_Id = this->RegIdBox->Text;
	input->ShowDialog();
	Reload();
}
System::Void Baigiamasisdarbas::Main::EditDishButton_Click_1(System::Object^ sender, System::EventArgs^ e)//Patiekalo atnaujinimo formos atidarymas
{
	UpdateDish^ input = gcnew UpdateDish();
	input->Dish_Id = this->IdBox->Text;
	input->ShowDialog();
	ReloadDish();
}
System::Void Baigiamasisdarbas::Main::ReloadBox2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Reload();
	SearchNameBox->Text = "";
}
System::Void Baigiamasisdarbas::Main::AddDishButton_Click(System::Object^ sender, System::EventArgs^ e)//Patiekalo pridėjimo formos atidarymas
{
	AddDish^ input = gcnew AddDish();
	input->ShowDialog();
	ReloadDish();
}
System::Void Baigiamasisdarbas::Main::DeleteDishButton_Click(System::Object^ sender, System::EventArgs^ e)//Patiekalo pašalinimo mygtukas
{
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from lorem.dishes where iddishes='" + this->IdBox->Text + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		int count = 0;//Surandamas patiekalas pagal id
		while (myReader->Read())
		{
			count++;
		}
		if (count == 1)
		{
			if (MessageBox::Show(L"Ar tikrai norite pašalinti patiekalą ?", L"Pašalinti Patiekalą", System::Windows::Forms::MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
			{
				DeleteDish();//Kreipimasis į šalinimo funkciją

				ReloadDish();//Atnaujinimo funkcija
				MessageBox::Show(L"Pašalinta");
				IdBox->Text = "";
			}
		}
		else if (count == 0)
		{
			MessageBox::Show(L"Patiekalas nerastas");
			IdBox->Text = "";
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
System::Void Baigiamasisdarbas::Main::ReloadBox_Click(System::Object^ sender, System::EventArgs^ e)
{
	ReloadDish();
}
System::Void Baigiamasisdarbas::Main::Confirm_Click(System::Object^ sender, System::EventArgs^ e)//Statuso keitimas
{
	int status = 1;
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Update lorem.orders set status='" + status + "' where idorders='" + IdOrderTextBox->Text + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		ReloadOrder();
		MessageBox::Show(L"Patvirtinta");
		while (myReader->Read())
		{

		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
	IdOrderTextBox->Text = " ";
}
System::Void Baigiamasisdarbas::Main::Cancel_Click_1(System::Object^ sender, System::EventArgs^ e)//Statuso keitimas
{
	int status = 2;
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Update lorem.orders set status='" + status + "' where idorders='" + IdOrderTextBox->Text + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		ReloadOrder();
		MessageBox::Show(L"Atšaukta");
		while (myReader->Read())
		{

		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	IdOrderTextBox->Text = " ";
}
System::Void Baigiamasisdarbas::Main::ViewOrder_Click_1(System::Object^ sender, System::EventArgs^ e)//Užsakymo peržiūros forma
{
	ViewOrder^ input = gcnew ViewOrder();
	input->IdOrder = IdOrderTextBox->Text;
	input->ShowDialog();
	IdOrderTextBox->Text = " ";
}