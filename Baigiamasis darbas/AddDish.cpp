#include "AddDish.h"
#include "global.h"
System::Void Baigiamasisdarbas::AddDish::RegCancel_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}
System::Void Baigiamasisdarbas::AddDish::RegRegisterButton_Click(System::Object^ sender, System::EventArgs^ e)//Patiekalo pridėjimo funkcija
{
	
	int id;//Priskiriamas id pagal combobox
	if (this->comboBox1->Text == "Sriuba")
	{
		id = 1;
	}
	if (this->comboBox1->Text == "Karštas patiekalas")
	{
		id = 2;
	}
	if (this->comboBox1->Text == "Šaltas patiekalas")
	{
		id = 3;
	}
	if (this->comboBox1->Text == "Užkandis")
	{
		id = 4;
	}
	if (this->comboBox1->Text == "Gėrimas")
	{
		id = 5;
	}
	
	glob::A.AddDish(this->nameBox->Text, this->DescriptionBox->Text, System::Int32::Parse(this->PriceBox->Text), id);//Patiekalo pridėjimo į duomenų bazę funkcija
	this->RegPanel->Visible = false;
	this->Close();
}
