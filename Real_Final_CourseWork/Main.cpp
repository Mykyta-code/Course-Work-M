#include<iostream>
#include"cappuccino.h"
#include"coffee.h"
#include"Additive.h"
#include"milk.h"
#include"americano.h"
using namespace std;

int main() {

	
	coffee* b = new cappuccino;
	coffee* c1 = new cappuccino;
	coffee* a = new americano;

	b = new milk(b);

	b = *b + *c1;
	b->show();
	b = *b + *a;
	b->show();
	return 0;
}
