#include<iostream>
using namespace std;
#include"rectangle.h"

rectangle::rectangle(int a, int b, int c, int d, int l, int m, int n, int o) :parallelogram(a, b, c, d, l, m, n, o)
{
}
void rectangle::isRectangle()
{
	shape();
}
void rectangle::displayRectangle()
{
	displayParallelogram();
}