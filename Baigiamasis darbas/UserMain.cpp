#include "UserMain.h"



System::Void Baigiamasisdarbas::UserMain::SearchDishButton_Click(System::Object^ sender, System::EventArgs^ e)//Patiekalo paieška pagal pasirinkimą iš combobox(atnaujinama datagrid lentelė)
{
	int id, status = 1;
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
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select iddishes, name, description, price from lorem.dishes where dishtype='" + id + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();
		bSource->DataSource = dbdataset;
		MeniuGrid->DataSource = bSource;
		sda->Update(dbdataset);

	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
System::Void Baigiamasisdarbas::UserMain::pictureBox7_Click(System::Object^ sender, System::EventArgs^ e)//Pirmo informacijos lango rodymas
{
	this->StatusPanel->Visible = false;
	this->MeniuMainPanel->Visible = false;
	this->OrderPanel->Visible = false;
	this->InformationPanel->Visible = false;
	this->InformationNextPage->Visible = true;
	this->InformationPanel->Visible = false;
}
System::Void Baigiamasisdarbas::UserMain::pictureBox6_Click(System::Object^ sender, System::EventArgs^ e)//Antro informacijos lango rodymas
{
	this->StatusPanel->Visible = false;
	this->MeniuMainPanel->Visible = false;
	this->OrderPanel->Visible = false;
	this->InformationPanel->Visible = false;
	this->InformationNextPage->Visible = false;
	this->InformationPanel->Visible = true;
}
System::Void Baigiamasisdarbas::UserMain::Meniu_Click(System::Object^ sender, System::EventArgs^ e)//Meniu lango rodymo mygtukas(užkraunami duomenys į datagrid lentelę)
{
	SidePanel->Location = System::Drawing::Point(0, 88);

	int status = 1;
	this->InformationNextPage->Visible = false;
	this->InformationPanel->Visible = false;
	this->StatusPanel->Visible = false;
	this->OrderPanel->Visible = false;
	this->MeniuMainPanel->Visible = true;
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
		MeniuGrid->DataSource = bSource;
		sda->Update(dbdataset);

	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
System::Void Baigiamasisdarbas::UserMain::Information_Click(System::Object^ sender, System::EventArgs^ e)//Informacijos lango mygtukas
{
	SidePanel->Location = System::Drawing::Point(0, 509);
	this->InformationPanel->Visible = true;
	this->StatusPanel->Visible = false;
	this->OrderPanel->Visible = false;
	this->InformationNextPage->Visible = false;
	this->MeniuMainPanel->Visible = false;
}
System::Void Baigiamasisdarbas::UserMain::pictureBox2_Click(System::Object^ sender, System::EventArgs^ e)//Atnaujinimo mygtukas(atnaujinama datagrid lentelė)
{
	int status = 1;

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
		MeniuGrid->DataSource = bSource;
		sda->Update(dbdataset);

	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
System::Void Baigiamasisdarbas::UserMain::AddToOrder_Click(System::Object^ sender, System::EventArgs^ e)//Pridėjimas prie užsakymo
{
	int status = 1;
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into lorem.basket (basketid, userid, dishid, quantity, status) values((select orderid from lorem.settings), '" + UserId + "', '"+ this->DishIdBox->Text +"', '" + this->CountBox->Text + "', '" + status + "');", conDataBase);
	MySqlDataReader^ myReader;

	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show(L"Pridėta prie užsakymo");
		while (myReader->Read())
		{

		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}

}
void Baigiamasisdarbas::UserMain::LoadBasket(int dish_id)//Krepšelio užkrovimas(papildoma datagrid lentelė)
{
	this->label8->Visible = true;
	this->IdBox->Visible = true;
	this->button4->Visible = true;
	this->panel6->Visible = true;
	this->OrderGrid->Visible = true;
	this->button5->Visible = true;
	this->TextLabel->Text = "Užsakymas";
	int status = 1;
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select idbasket, (select name from lorem.dishes where iddishes=dishid), (select description from lorem.dishes where iddishes=dishid), quantity, (select price from lorem.dishes where iddishes=dishid) from lorem.basket where userid='" + UserId + "' and status='" + status + "';", conDataBase);

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
void Baigiamasisdarbas::UserMain::ChangeStatus()//Statuso keitimas sukurus užsakymą
{
	int s = 1;
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	int status = 0;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Update lorem.basket set status='" + status + "' where basketid=(select orderid from lorem.settings where ins='" + s + "');", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read())
		{

		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
System::Void Baigiamasisdarbas::UserMain::Basket_Click(System::Object^ sender, System::EventArgs^ e)//Užsakymo lango atidarymas(jei užsakymas tuščias rašoma užsakymas tuščias)
{
	SidePanel->Location = System::Drawing::Point(0, 167);
	this->StatusPanel->Visible = false;
	this->InformationPanel->Visible = false;
	this->MeniuMainPanel->Visible = false;
	this->label8->Visible = false;
	this->InformationNextPage->Visible = false;
	this->IdBox->Visible = false;
	this->button4->Visible = false;
	this->panel6->Visible = false;
	this->OrderGrid->Visible = false;
	this->button5->Visible = false;
	this->TextLabel->Text = L"Užsakymas tuščias";
	this->OrderPanel->Visible = true;
	int status = 1;
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select dishid from lorem.basket where userid='" + UserId + "' and status='" + status + "';", conDataBase);
	MySqlDataReader^ myReader;

	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		int dishid;
		int count = 0;
		while (myReader->Read())
		{
			dishid= myReader->GetInt32(0);
			count++;
		}
		if (count == 1)
		{
			LoadBasket(dishid);
		}
		else if (count > 1)
		{
			LoadBasket(dishid);
		}
		else if (count == 0)
		{
			this->label8->Visible = false;
			this->IdBox->Visible = false;
			this->button4->Visible = false;
			this->panel6->Visible = false;
			this->OrderGrid->Visible = false;
			this->button5->Visible = false;
			this->TextLabel->Text = L"Užsakymas tuščias";
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
void Baigiamasisdarbas::UserMain::UpdateId()//Užsakymo id atnaujinimas
{
	int s = 1;
	ChangeStatus();
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Delete from lorem.settings where ins='" + s + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
	UpdateIdOrder();
}
void Baigiamasisdarbas::UserMain::UpdateIdOrder()//Užsakymo id atnaujinimas
{
	int s = 1;
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	int status = 0;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into lorem.settings (ins) values('" + s + "');", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read())
		{

		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
	LoadBasket(6);


}
System::Void Baigiamasisdarbas::UserMain::DeleteBasket_Click(System::Object^ sender, System::EventArgs^ e)//Pašalinimas iš užsakymo
{
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Delete from lorem.basket where idbasket='" + this->IdBox->Text + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		LoadBasket(6);
		MessageBox::Show(L"Pašalinta");

	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
System::Void Baigiamasisdarbas::UserMain::ConfirmOrder_Click(System::Object^ sender, System::EventArgs^ e)//Užsakymo patvirtinimas(pridėjimas į duomenų bazę)
{
	int s = 1, status = 0;

	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into lorem.orders (userid, basketid, status) values('" + UserId + "', (select orderid from lorem.settings where ins='" + s + "'), '" + status + "');", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show(L" Užsakyta ");
		UpdateId();
		while (myReader->Read())
		{

		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}


}
System::Void Baigiamasisdarbas::UserMain::OrdersButton_Click(System::Object^ sender, System::EventArgs^ e)//Sukurtų užsakymų peržiūra(papildoma datagrid lentelė)
{
	SidePanel->Location = System::Drawing::Point(0, 240);
	this->StatusPanel->Visible = true;
	this->MeniuMainPanel->Visible = false;
	this->OrderPanel->Visible = false;
	this->InformationPanel->Visible = false;
	this->InformationNextPage->Visible = false;
	String^ constring = L"datasource=localhost; port=3306; username=root; password=865104565";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select idorders from lorem.orders where userid='" + UserId + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();
		bSource->DataSource = dbdataset;
		StatusGridFirst->DataSource = bSource;
		sda->Update(dbdataset);

	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
System::Void Baigiamasisdarbas::UserMain::Exit_Click(System::Object^ sender, System::EventArgs^ e)//Atsijungimo mygtukas
{
	if (MessageBox::Show(L"Ar tikrai norite atsijungti ?", L"Atsijungimas", System::Windows::Forms::MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}
}
System::Void Baigiamasisdarbas::UserMain::panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)//Užsakymo peržiūros langas
{
	int status = 1;
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
		MeniuGrid->DataSource = bSource;
		sda->Update(dbdataset);

	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Klaida");
	}
}
System::Void Baigiamasisdarbas::UserMain::ViewButton_Click(System::Object^ sender, System::EventArgs^ e)//Užsakymo peržiūros forma
{
	ViewOrder^ input = gcnew ViewOrder();
	input->IdOrder = IdOrderTextBox->Text;
	input->ShowDialog();
	IdOrderTextBox->Text = " ";
}