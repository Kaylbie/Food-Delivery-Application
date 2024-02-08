#include "Dish.h"

void Dish::AddDish(String^ name, String^ description, int price, int dishtype)//Patiekalo pridėjimo į duomenų bazę funkcija
{
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into lorem.dishes (name, description, price, dishtype) values('" + name + "', '" + description + "', '"+ price + "', '" + dishtype + "');", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show(L"Patiekalas pridėtas");
		while (myReader->Read())
		{

		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
void Dish::DeleteDish(int dish_id)//Patiekalo pašalinimo iš duomenų bazės funkcija
{
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Delete from lorem.dishes where iddishes='" + dish_id + "';", conDataBase);
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
void Dish::UpdateDish(String^ name, String^ description, int dishtype, double price, int dish_id)//Patiekalo atnaujinimo į duomenų bazę funkcija
{
	
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("UPDATE lorem.dishes set name='" + name + "', description='" + description + "', price='" + price + "', dishtype='" + dishtype + "' where iddishes='" + dish_id + "';", conDataBase);
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
