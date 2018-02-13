#ifndef Circle_H
#define Circle_H

#include <string>

using namespace std; 
class Circle
{
	double radius, diameter, area;
public:
	void calRadiusAndArea()
	{
		this->radius = this->diameter / 2;
		this->area = this->radius * this->radius * 314;
	}
};

#endif // !Circle_H

