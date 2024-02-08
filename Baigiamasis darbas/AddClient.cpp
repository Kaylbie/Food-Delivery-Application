#include "AddClient.h"
#include "global.h"

System::Void Baigiamasisdarbas::AddClient::RegRegisterButton_Click(System::Object^ sender, System::EventArgs^ e)//Pridėjimo mygtukas
{
	this->RegPanel->Visible = false;
	this->Close();
	glob::B.AddUser(this->RegUserNameBox->Text, this->RegNameBox->Text, this->RegSurnameBox->Text, this->RegAdressBox->Text, this->RegPasswordBox->Text); //Kliento įkėlimo į duomenų bazę funkcija
}
System::Void Baigiamasisdarbas::AddClient::RegCancel_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}