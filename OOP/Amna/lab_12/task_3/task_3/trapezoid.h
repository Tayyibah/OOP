#ifndef TRAPEZOID_H
#define TRAPEZOID_H
#include"quadrilateral.h"
class trapezoid :public quadrilateral
{
public:
	trapezoid(int,int,int,int,int,int,int,int);
	void display();
};
#endif