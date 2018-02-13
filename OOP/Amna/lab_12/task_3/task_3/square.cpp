#include<iostream>
using namespace std;
#include"square.h"

square::square(int a, int b, int c, int d, int l, int m, int n, int o) :parallelogram(a, b, c, d, l, m, n, o)
{
}
void square::isSquare()
{
	parallel();
}
void square::displaySquare()
{
	displayParallelogram();
}