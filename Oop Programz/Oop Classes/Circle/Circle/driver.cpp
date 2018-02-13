#include<iostream>
using namespace std;
#include "Circle.h"
int main()
{
	Circle c;
	c.setRadius(5);
	cout<<"Radius of circle is:"<<c.getRadius( )<<endl; 
	cout<<"Diameter of circle is:"<<c.calcDiameter()<<endl; 
	cout<<"Circumference of circle is:"<<c.calcCircumference()<<endl;
	return 0;
}