#pragma once
#include <string>

using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;

class Client
{
	public: 
		int user_id;
		std::string user_name;
		std::string first_name;
		std::string last_name;
		std::string adress;
		std::string password;
	public:
		void EditUser(int user_id, String^ user_name, String^ first_name, String^ last_name, String^ adress, String^ password);
		void AddUser(String^ user_name, String^ first_name, String^ last_name, String^ adress, String^ password);
		void DeleteUser(int user_id);
};

