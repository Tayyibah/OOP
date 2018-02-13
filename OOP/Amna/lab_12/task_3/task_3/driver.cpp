#include<iostream>
using namespace std;
#include"quadrilateral.h"
#include"trapezoid.h"
#include"parallelogram.h"
#include"rectangle.h"
#include"square.h"

int main()
{
	trapezoid t(1,3,5,7,6,8,10,12);
	t.display();
	t.shape();
	parallelogram p(1, 2, 3, 4, 5, 6, 7, 8);
	p.displayParallelogram();
	p.parallel();
	rectangle r(5,6,7,8,11,12,13,14);
	r.displayRectangle();
	r.isRectangle();
	return 0;
}