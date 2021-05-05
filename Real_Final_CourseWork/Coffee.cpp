#include "coffee.h"

coffee::coffee()
{
	title = "Coffee";
	price = 0;
}

void coffee::show()
{
	cout << title << ":" << price << "$" << endl;
}

void coffee::setTitle(string title)
{
	this->title = title;
}

void coffee::setPrice(float price)
{
	this->price = price;
}

string coffee::getTitle()
{
	return title;
}

float coffee::getPrice()
{
	return price;
}
