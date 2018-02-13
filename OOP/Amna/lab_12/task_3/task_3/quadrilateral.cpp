#include<iostream>
using namespace std;
#include"quadrilateral.h"

quadrilateral::quadrilateral()
{
	x1 = x2 = x3 = x4 = y1 = y2 = y3 = y4 = 0;
}
quadrilateral::quadrilateral(int a1,int a2,int a3,int a4,int b1,int b2,int b3,int b4)
{
	setPoints(a1,a2,a3,a4,b1,b2,b3,b4);
}
void quadrilateral::setPoints(int a1, int a2, int a3, int a4, int b1, int b2, int b3, int b4)
{
	if ((a1 != a2 != a3 != a4 )&&(b1 != b2 != b3 != b4))
	{
		x1 = a1;
		x2 = a2;
		x3 = a3;
		x4 = a4;
		y1 = b1;
		y2 = b2;
		y3 = b3;
		y4 = b4;
	}
	else
	{
		cout << "\nPoints cannot construct a quadrilateral.";
	}

}
void quadrilateral::shape()
{
	double d1, d2;
	double s1, s2, s3, s4;
	s1 = sqrt((pow(x2 - x1, 2) + pow(y2 - y1, 2)));
	s2 = sqrt((pow(x3 - x2, 2) + pow(y3 - y2, 2)));
	s3 = sqrt((pow(x4 - x3, 2) + pow(y4 - y3, 2)));
	s4 = sqrt((pow(x1 - x4, 2) + pow(y1 - y4, 2)));
	d1 = sqrt((pow(x3-x1,2)+pow(y3-y1,2)));
	d2 = sqrt((pow(x4 - x2, 2) + pow(y4 - y2, 2)));
	if ((d1 != d2) && (s1 != s2 != s3 !=s4))
	{
		cout << "\nshape is a TRAPEZOID.";
	}
	else if ((d1 == d2) && (s1 == s2 == s3 == s4))
	{
		cout << "\nshape is a SQUARE.";
	}
	else if ((d1 == d2) && ((s1 == s3) &&( s2 == s4)))
	{
		cout << "\nshape is a RECTANGLE.";
	}
	else if ((d1 > d2 || d2 > d1) && ((s1 == s3) && (s2 == s4)))
	{
		cout << "\nshape is a PARALLELOGRAM.";
	}
	else
	{
		cout << "\nSHAPE is a either some other quadrilateral or some other shape.";
	}
}
void quadrilateral::displayQuadrilateral()
{
	cout << "\n1st POINT is:(" << x1 << ","<< y1 <<")";
	cout << "\n2nd POINT is:(" << x2 << "," << y2 << ")";
	cout << "\n3rd POINT is:(" << x3 << "," << y3 << ")";
	cout << "\n4th POINT is:(" << x4 << "," << y4 << ")";
}