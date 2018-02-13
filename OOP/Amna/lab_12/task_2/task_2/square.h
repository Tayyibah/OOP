#ifndef SQUARE_H
#define SQUARE_H
#include"point.h"
class square:public point
{
public:
	square(int a, int b, int c, int d, int l, int m, int n, int o);
	double AreaOfSquare();
	void displaySquare();
};
#endif