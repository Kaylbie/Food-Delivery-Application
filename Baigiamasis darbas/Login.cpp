#include "Login.h"

System::Void Baigiamasisdarbas::Login::RegisterButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->RegPanel->Visible = true;
	this->UserNameBox->Text = "";
	this->PasswordBox->Text = "";
}

System::Void Baigiamasisdarbas::Login::LoginButton_Click(System::Object^ sender, System::EventArgs^ e)//Prisijungimo mygtukas, tikrinami duomenys iš duomenų bazės
{
	int userid;
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select id from lorem.users where username='" + this->UserNameBox->Text + "' and password='" + this->PasswordBox->Text + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		int count = 0;//Surandamas vartotojų skaičius su pateiktais duomenimis
		while (myReader->Read())
		{
			userid = myReader->GetInt32(0);
			count++;
		}
		if (count == 1)
		{
			this->UserNameBox->Text = "";
			this->PasswordBox->Text = "";

			MessageBox::Show(L"Sėkmingai prisijungėte");
			UserMain^ input = gcnew UserMain();
			input->UserId = userid;//Perduodamas id programai
			input->ShowDialog();
		}
		else if (count == 0)
		{
			MessageBox::Show(L"Neteisingi duomenys");
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
System::Void Baigiamasisdarbas::Login::RegRegisterButton_Click(System::Object^ sender, System::EventArgs^ e)//Registracijos mygtukas, pridėjimas į duomenų bazę
{
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into lorem.users (username, name, surname, adress, password) values('" + this->RegUserNameBox->Text + "', '" + this->RegNameBox->Text + "', '" + this->RegSurnameBox->Text + "', '" + this->RegAdressBox->Text + "', '" + this->RegPasswordBox->Text + "');", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		this->RegPanel->Visible = false;
		MessageBox::Show(L"Sėkmingai užsiregistravote");
		while (myReader->Read())
		{

		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
System::Void Baigiamasisdarbas::Login::RegCancel_Click(System::Object^ sender, System::EventArgs^ e)//Registracijos atšaukimo mygtukas
{
	this->RegUserNameBox->Text = "";
	this->RegNameBox->Text = "";
	this->RegSurnameBox->Text = "";
	this->RegAdressBox->Text = "";
	this->RegPasswordBox->Text = "";
	this->RegPanel->Visible = false;
}
System::Void Baigiamasisdarbas::Login::AdminButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->AdminPanel->Visible = true;
}
System::Void Baigiamasisdarbas::Login::AdminLogButton_Click(System::Object^ sender, System::EventArgs^ e)//Administratoriaus prisijungimo mygtukas(tikrinami duomenys iš duomenų bazės)
{
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from lorem.admin where username='" + this->AdminUsernameBox->Text + "' and password='" + this->AdminPasswordBox->Text + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		int count = 0;//Ieškomas vartotojų skaičius su pateiktais duomenimis
		while (myReader->Read())
		{
			count++;
		}
		if (count == 1)
		{
			this->UserNameBox->Text = "";
			this->PasswordBox->Text = "";

			MessageBox::Show(L"Sėkmingai prisijungėte");
			Main^ input = gcnew Main();
			input->ShowDialog();


		}
		else if (count == 0)
		{
			MessageBox::Show(L"Neteisingi duomenys");
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
System::Void Baigiamasisdarbas::Login::BackButton_Click(System::Object^ sender, System::EventArgs^ e)//Grįžimo atgal mygtukas
{
	this->AdminPanel->Visible = false;
	this->AdminUsernameBox->Text = "";
	this->AdminPasswordBox->Text = "";
}