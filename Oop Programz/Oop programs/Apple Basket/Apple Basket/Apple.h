#ifndef APPLE_H
#define APPLE_H
#include<iostream>
#include"Basket.h"
using namespace std;
class Apple
{
private:
	int color;
	Basket *apple;
public:
	int whichColorBasket();
	Apple(Basket *);
};
#endif