#include<iostream>
#include"Car.h"
#include "CString.h"
using namespace std;
int main()
{
	CString c("Mehran");
	Car c1(2015,c,80);
	cout<<"mODEL of Car is "<<c1.getYearModel()<<endl;
	cout<<"Make of Car is "<<c1.getMake()<<endl;
	cout<<"Speed of Car is "<<c1.getSpeed()<<endl;
	for(int i=0;i<5;i++)
		c1.accelerate();
	cout<<"Now after applying accelerator, speed of Car is "<<c1.getSpeed()<<endl;
	for(int i=0;i<5;i++)
		c1.brake();
	cout<<"Now after applying brake, speed of Car is "<<c1.getSpeed()<<endl;
	return 0;
}

