#pragma once
#include<iostream>
#include<locale.h>
#include<string>
using namespace std;
//Abstract class coffee
class coffee {
public:
    //constructor without parameters
    coffee();
    //Function of information cout
    virtual void show();
    //Overloading operator +
    coffee* operator+(coffee c1)
    {
        coffee* c = new coffee;
        c->title = c1.title;
        c->price += c1.price + this->price;
        c->title += ", " + this->title;
        return c;
    }
    //access to fields
    void setTitle(string title);
    void setPrice(float price);
    string getTitle();
    float getPrice();
private:
    string title;
    float price;
};
