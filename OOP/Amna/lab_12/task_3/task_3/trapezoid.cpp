#include<iostream>
using namespace std;
#include"trapezoid.h"

trapezoid::trapezoid(int a, int b, int c, int d, int l, int m, int n, int o) :quadrilateral(a,b,c,d,l,m,n,o)
{
}
void trapezoid::display()
{
	displayQuadrilateral();
}