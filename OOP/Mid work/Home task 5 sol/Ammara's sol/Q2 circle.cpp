#include<iostream>
using namespace std;
class Circle 
{
private:
	float radius;
public :
void setRadius (float r)
{

	radius=r;
}
float getRadius ()
{
	return radius;
}
float calcDiameter ()
{
	return radius *2;
}
float cxalcCicumference()
{
	return 2*3.14*radius;
}
};
int main()
{
	Circle c;
		c.setRadius(4.7);
		cout<<c.getRadius()<<endl;
		cout<<c.calcDiameter()<<endl;
		cout<<c.cxalcCicumference()<<endl;
		return 0;
}

