#pragma once
#include <string>
#include"AddDish.h"

using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;

class Dish
{
public:
	int dish_id;
	std::string name;
	std::string description;
	double price;
	int dishtype;
	int quantity;

public:
	void AddDish(String^ name, String^ description, int price, int dishtype);
	void UpdateDish(String^ name, String^ description, int dishtype, double price, int dish_id);
	void DeleteDish(int dish_id);
};

