#include "milk.h"

milk::milk(coffee* c)
{
	setTitle(c->getTitle());
	setPrice(c->getPrice());

	edit();
}

void milk::edit()
{

	setName("with milk");
	setP(1);
	setTitle(getTitle() + " " + getName());
	setPrice(getPrice() + getP());

}
