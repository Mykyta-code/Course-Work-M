#pragma once
#include<iostream>
#include<string>
#include"coffee.h"
using namespace std;

class Additive :
	public coffee
{
public:
	void setName(string name);
	void setP(float p);
	string getName();
	float getP();
	virtual void edit();
	Additive();
private:
	string name;
	float p;
};
