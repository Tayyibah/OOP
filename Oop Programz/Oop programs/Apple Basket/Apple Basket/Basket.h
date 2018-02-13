#include<iostream>
using namespace std;
#ifndef BASKET_H
#define BASKET_H
#include"Apple.h"
class Basket
{
	int basketColor;
	Apple *fruits[10];
public:
	Basket(int col);
	int getColor();
};
#endif