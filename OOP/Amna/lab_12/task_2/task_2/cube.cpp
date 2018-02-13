#include<iostream>
using namespace std;
#include"cube.h"


cube::cube(int a, int b, int c, int d, int l, int m, int n, int o) :square(a, b, c, d, l, m, n, o)
{
}
void cube::areaOfCube()
{
	double area;
	area = AreaOfSquare()*4;
	cout << "\nAREA of CUBE is:"<<area;
}
void cube::displayCube()
{
	displaySquare();
}
