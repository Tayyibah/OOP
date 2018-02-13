#ifndef CUBE_H
#define CUBE_H
#include"square.h"
class cube: public square
{
public:
	cube(int,int,int,int,int,int,int,int);
	void areaOfCube();
	void displayCube();
};
#endif;