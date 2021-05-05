#include "Additive.h"

void Additive::setName(string name)
{
	this->name = name;
}

void Additive::setP(float p)
{
	this->p = p;
}

string Additive::getName()
{
	return name;
}

float Additive::getP()
{
	return p;
}

void Additive::edit()
{

	setTitle(getTitle() + " additive");
	setPrice(getPrice() + p);
}

Additive::Additive()
{
}
