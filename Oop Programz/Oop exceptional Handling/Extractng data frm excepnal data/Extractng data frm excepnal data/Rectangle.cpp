#include<iostream>
using namespace std;
#include "Rectangle.h"
void Rectangle::setwidth( int w)
{
	string exception;
	if(w>=0)
		width=w;
	else
		throw negativeWidth(w);
}
void Rectangle::setlenght( int l)
{
	if(l>=0)
		lenght=l;
	else
		throw negativeLenght(l);
}
double Rectangle::getwidth()
{
	return width;
}
double Rectangle::getlenght( )
{
	return lenght;
}
double Rectangle::getArea( ) 
{
	Area=width*lenght;
	return Area;
}