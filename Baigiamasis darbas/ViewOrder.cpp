#include "ViewOrder.h"

System::Void Baigiamasisdarbas::ViewOrder::RegCancel_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}
void Baigiamasisdarbas::ViewOrder::FindUser(String^ user)//Užpildomi formos duomenys
{
	String^ userName;
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select username from lorem.users where id='" + user + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read())
		{
			userName = myReader->GetString(0);
		}
		UserText->Text = userName;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
void Baigiamasisdarbas::ViewOrder::FillStatus(String^ status)//Užpildomi formos duomenys
{
	if (status == "0")
	{
		Status->Text = "Laukiama";
	}
	if (status == "1")
	{
		Status->Text = "Patvirtinta";
	}
	if (status == "2")
	{
		Status->Text = "Atšaukta";
	}
}
void Baigiamasisdarbas::ViewOrder::FillGrid(String^ idbasket)//Užpildomi formos duomenys
{
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select (select name from lorem.dishes where iddishes=dishid), (select price from lorem.dishes where iddishes=dishid), quantity, (select price from lorem.dishes where iddishes=dishid)*quantity from lorem.basket where basketid='" + idbasket + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();
		bSource->DataSource = dbdataset;
		OrderGrid->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
System::Void Baigiamasisdarbas::ViewOrder::RegPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)//Formos užpildymo funkcija
{
	String^ user;
	String^ status;
	String^ basket;
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select userid, basketid, status from lorem.orders where idorders='" + IdOrder + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read())
		{
			user = myReader->GetString(0);
			status = myReader->GetString(2);
			basket = myReader->GetString(1);
		}
		OrderId->Text = IdOrder;
		FindUser(user);
		FillStatus(status);
		FillGrid(basket);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}