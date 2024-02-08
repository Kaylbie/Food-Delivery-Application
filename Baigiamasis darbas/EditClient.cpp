#include "EditClient.h"
#include "global.h"

System::Void Baigiamasisdarbas::EditClient::RegRegisterButton_Click(System::Object^ sender, System::EventArgs^ e)//Kliento redagavimo mygtukas
{
	this->Close();
	glob::B.EditUser(Int32::Parse(User_Id), this->RegUserNameBox->Text, this->RegNameBox->Text, this->RegSurnameBox->Text, this->RegAdressBox->Text, this->RegPasswordBox->Text);//Kreipimasis į kliento redagavimo funkciją
}
System::Void Baigiamasisdarbas::EditClient::button1_Click(System::Object^ sender, System::EventArgs^ e)//Duomenų užkrovimas į laukelius
{
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select username, name, surname, adress, password from lorem.users where id='" + User_Id + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read())
		{

		}
		this->RegUserNameBox->Text = myReader->GetString(0);
		this->RegNameBox->Text = myReader->GetString(1);
		this->RegSurnameBox->Text = myReader->GetString(2);
		this->RegAdressBox->Text = myReader->GetString(3);
		this->RegPasswordBox->Text = myReader->GetString(4);

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
System::Void Baigiamasisdarbas::EditClient::RegCancel_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}