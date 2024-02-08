#include "ViewOrderClient1.h"

System::Void Baigiamasisdarbas::ViewOrderClient::RegCancel_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();

}

void Baigiamasisdarbas::ViewOrderClient::FillStatus(String^ status)
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
void Baigiamasisdarbas::ViewOrderClient::FillGrid(String^ idbasket)
{
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select dishname, dishprice, size from lorem.basket where basketid='" + idbasket + "';", conDataBase);
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
		MessageBox::Show(ex->Message);
	}
}
System::Void Baigiamasisdarbas::ViewOrderClient::RegPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
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
		FillStatus(status);
		FillGrid(basket);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}