#include<iostream>
#include"line.h"
#include"parabola.h"
using namespace std;
 line ::line()
{
	 x1 = y1 = m =c= 0;
}
 void line:: inputline()
 {
	 cout << "Enter value of  X coordinate of line point:";
	 cin >> x1;
	 cout << "Enter value of slope of line : ";
	 cin >> m;
	 cout << "Enter value of constant for line equation:";
	 cin >> c;
 }
 double line::calY()
 {
	 y1 = m*x1 + c;
	 return y1;
 }
 
 parabola::parabola()
 {
	 x2 = y2 = a = 0;
 }
 void parabola::inputparabola()
 {
	 cout << "Enter value of  X coordinate of parabola:";
	 cin >> x2;
	 cout << "Enter value of constant  : ";
	 cin >> a;
 }
 double parabola::calY()
 {
	 y2 = 4 * a*x2*x2;
	 return y2;
 }
 void intersect(line &l1,parabola &p1)
 {
	 int x, y;
	 x = l1.c / (4*p1.a+l1.m);
	 y = 4 * p1.a*x;
	 cout << "Points of intersection are:( "<<x<<","<<y<<")";
 }
 