#include<iostream>
using namespace std;
#include"parallelogram.h"

parallelogram::parallelogram(int a, int b, int c, int d, int l, int m, int n, int o) :quadrilateral(a, b, c, d, l, m, n, o)
{
}
void parallelogram::parallel()
{
	shape();
}
void parallelogram::displayParallelogram()
{
	displayQuadrilateral();
}