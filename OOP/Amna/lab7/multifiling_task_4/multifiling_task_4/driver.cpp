#include<iostream>
using namespace std;
#include"line.h"
#include"parabola.h"
int main()
{
	line l1;
	parabola p1;
	l1.inputline();
	l1.calY();
	p1.inputparabola();
	p1.calY();
	intersect(l1, p1);
}