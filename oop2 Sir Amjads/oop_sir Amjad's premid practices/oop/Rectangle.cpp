#include "Rectangle.h"
#include <iostream>

using namespace std;

/* Constructor & Destructor */
Rectangle::Rectangle() : Rectangle(4)
{
	cout << "\nDefault Constructor \n";
	length = width = 0;
	count++;
}

Rectangle::Rectangle(const Rectangle &obj)
{
	this->length = obj.length;
	this->width = obj.width;
}

Rectangle::Rectangle(int c)
{
	// Initialization work
	count = c;
}


Rectangle::Rectangle(double l, double w) : Rectangle(10)
{
	cout << "\nParameterized Constructor \n";
	length = l;
	width = w;
	count++;
}



Rectangle::~Rectangle()
{
	cout << "\nDestructor of R(" <<
		length << "," << width << ")\n";
	count--;
}

/* Getter & Setter*/
double Rectangle::getWidth() const
{
	return width;
}
/*double Rectangle::getLength() const
{
return length;
}*/
double Rectangle::getArea() const
{
	return this->length * this->width;
}
void Rectangle::setWidth(double w)
{
	width = w;
}
void Rectangle::setLength(double l)
{
	length = l;
}
int Rectangle::getCount()
{
	return count;
}
void Rectangle::print(Rectangle obj)
{
	cout << "Length = " << obj.length << "\tWidth = "
		<< obj.width << endl;
}
int Rectangle::count = 0;