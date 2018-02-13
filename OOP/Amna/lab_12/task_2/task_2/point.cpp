#include<iostream>
using namespace std;
#include"point.h"

point::point()
{
	x1=x2=x3=x4 = 0;
	y1=y2=y3=y4 = 0;
}
point::point(int a, int b,int c,int d,int l,int m,int n,int o)
{
	if ((a == c && b == d) && (l == m && n == o))
	{
		x1 = a;
		x2 = b;
		x3 = c;
		x4 = d;
		y1 = l;
		y2 = m;
		y3 = n;
		y4 = o;
	}
	else
	{
		cout << "\nPoints cannot construct a square.";
	}
}
void point::setPoint(int a, int b, int c, int d, int l, int m, int n, int o)
{
	if ((a == c && b == d) && (l == m && n == o))
	{
		x1 = a;
		x2 = b;
		x3 = c;
		x4 = d;
		y1 = l;
		y2 = m;
		y3 = n;
		y4 = o;
	}
	else
	{
		cout << "\nPoints cannot construct a square.";
	}
}
double point::calculateArea()
{
	double s1, s2, s3, s4,area;
	s1 = sqrt((pow(x2 - x1, 2) + pow(y2 - y1, 2)));
	s2 = sqrt((pow(x3 - x2, 2) + pow(y3 - y2, 2)));
	s3 = sqrt((pow(x4 - x3, 2) + pow(y4 - y3, 2)));
	s4 = sqrt((pow(x1 - x4, 2) + pow(y1 - y4, 2)));
	area = s1*s2*s3*s4;
	return area;
}
void point::display()
{
	cout << "\n1st POINT is:(" << x1 << "," << y1 << ")";
	cout << "\n2nd POINT is:(" << x2 << "," << y2 << ")";
	cout << "\n3rd POINT is:(" << x3 << "," << y3 << ")";
	cout << "\n4th POINT is:(" << x4 << "," << y4 << ")";
}