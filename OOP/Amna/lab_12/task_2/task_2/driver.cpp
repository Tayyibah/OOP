#include<iostream>
using namespace std;
#include"point.h"
#include"square.h"
#include"cube.h"

int main()
{
	cube c(1,2,1,2,1,1,2,2);
	c.areaOfCube();
	c.displayCube();
	return 0;
}