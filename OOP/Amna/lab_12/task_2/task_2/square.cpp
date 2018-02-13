#include<iostream>
using namespace std;
#include"square.h"

square::square(int a, int b, int c, int d, int l, int m, int n, int o) : point(a, b, c, d, l, m, n, o)
{}
double square::AreaOfSquare()
{
	double area = calculateArea();
	cout << "\nAREA of SQUARE is: "<<area;
	return area;
}
void square::displaySquare()
{
	display();
}