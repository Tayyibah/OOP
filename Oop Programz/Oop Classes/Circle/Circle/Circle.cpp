#include "Circle.h"
void Circle::setRadius( int r) // the setter for the radius data member
{
	if(r>0)
		radius=r;
	else
		radius=0;
}
float Circle::getRadius( )// the getter for the radius data member
{
	return radius;
}
float Circle::calcDiameter() // returns the diameter i.e. 2*r
{
	float d=radius*2;
	return d;
}
float Circle::calcCircumference()//returns the circumference of the circle i.e. 2*π*r
{
	float C=2*3.14*radius;
	return C;
}