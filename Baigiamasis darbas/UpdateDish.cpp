#include "UpdateDish.h"
#include "global.h"
System::Void Baigiamasisdarbas::UpdateDish::LoadButton_Click(System::Object^ sender, System::EventArgs^ e)//Duomenų užkrovimo mygtukas
{
	String^ dish_type;
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select name, description, price, dishtype from lorem.dishes where iddishes='" + Dish_Id + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read())
		{

		}
		this->nameBox->Text = myReader->GetString(0);
		this->DescriptionBox->Text = myReader->GetString(1);
		this->PriceBox->Text = myReader->GetString(2);

		dish_type = myReader->GetString(3);

		if (dish_type == "1")
		{
			this->comboBox1->Text == L"Sriuba";
		}
		if (dish_type == "2")
		{
			this->comboBox1->Text = L"Karštas patiekalas";
		}
		if (dish_type == "3")
		{
			this->comboBox1->Text = L"Šaltas patiekalas";
		}
		if (dish_type == "4")
		{
			this->comboBox1->Text = L"Užkandis";
		}
		if (dish_type == "5")
		{
			this->comboBox1->Text = L"Gėrimas";
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}
System::Void Baigiamasisdarbas::UpdateDish::RegCancel_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}
System::Void Baigiamasisdarbas::UpdateDish::RegRegisterButton_Click(System::Object^ sender, System::EventArgs^ e)//Atnaujinimo mygtukas
{
	int id;
	if (this->comboBox1->Text == L"Sriuba")
	{
		id = 1;
	}
	if (this->comboBox1->Text == L"Karštas patiekalas")
	{
		id = 2;
	}
	if (this->comboBox1->Text == L"Šaltas patiekalas")
	{
		id = 3;
	}
	if (this->comboBox1->Text == L"Užkandis")
	{
		id = 4;
	}
	if (this->comboBox1->Text == L"Gėrimas")
	{
		id = 5;
	}
	glob::A.UpdateDish(this->nameBox->Text, this->DescriptionBox->Text, id, Double::Parse(this->PriceBox->Text), Int32::Parse(Dish_Id));//Kreipimasis į duomenų atnaujinimo funkciją
	this->Close();
}