#include "Client.h"

void Client::EditUser(int user_id, String^ user_name, String^ first_name, String^ last_name, String^ adress, String^ password)//Kliento redagavimo funkcija (atnaujinimas į duomenų bazę)
{
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("UPDATE lorem.users set username='" + user_name + "', name='" + first_name + "', surname='" + last_name + "', adress='" + adress + "', password='" + password + "' where id='" + user_id + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show(L"Atnaujinta");
		
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
void Client::AddUser(String^ user_name, String^ first_name, String^ last_name, String^ adress, String^ password)//Kliento pridėjimo į duomenų bazę funkcija
{
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into lorem.users (username, name, surname, adress, password) values('" + user_name + "', '" + first_name + "', '" + last_name + "', '" + adress + "', '" + password + "');", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		
		MessageBox::Show(L"Klientas pridėtas");
		
		while (myReader->Read())
		{

		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
void Client::DeleteUser(int user_id)//Kliento pašalinimo iš duomenų bazės funkcija
{
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Delete from lorem.users where id='" + user_id + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}