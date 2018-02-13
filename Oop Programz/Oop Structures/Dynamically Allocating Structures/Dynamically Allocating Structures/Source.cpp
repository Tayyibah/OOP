#include<iostream>
using namespace std;
#include <iomanip>
struct Circle
{
	double radius;
	double diameter;
	double area;
};
int main()
{
	//****************Pointers to structures
	Circle *cirptr;
	Circle circle={12.3,23.4,45.5};//initializing radius,diameter,area
	cirptr=&circle;
	//cirPtr.radius=10;	//wrong way so
	(*cirptr).radius=10;//or  cirPtr->radius
	circle.area=2*circle.radius*circle.diameter;
	cout<<circle.area<<endl;

	//****************Dynamically Allocating Structures
	Circle *cirPtr;
	cirPtr=new Circle;
	cirPtr->radius=12.3;
	cirPtr->radius=23.4;
	cirPtr->radius=45.5;
	circle.area=2*circle.radius*circle.diameter;
	cout<<circle.area<<endl;
	
	//****************Anther way to Dynamically Allocating Structures
	Circle *CirPtr;
	CirPtr=new Circle[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter radius 4 circle "<<i+1;
		cin>>CirPtr[i].radius;
	}
	for(int i=0;i<5;i++)
	{
		cout<<"Enter diameter 4 circle "<<i+1;
		cin>>CirPtr[i].diameter;
	}
	for(int i=0;i<5;i++)
	{
		cout<<"Area of all circle: ";
		CirPtr[i].area=CirPtr[i].diameter*CirPtr[i].radius;
		cout<<CirPtr[i].area<<endl;
	}
	return 0;
}