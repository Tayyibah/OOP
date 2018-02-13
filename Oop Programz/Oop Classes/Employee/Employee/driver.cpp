#include<iostream>
using namespace std;
#include"Employee.h"
#include<string>
int main()
{
	Employee e,e1;
	int x,y,a,b;
	e.setMonthlySalary(500);
	x=e.getMonthlySalary();
	cout<<x*12<<endl;
	e.increaseMonthlySalaryBy10Percent();
	y=e.getMonthlySalary();
	cout<<y*12<<endl;
	e1.setMonthlySalary(400);
	a=e1.getMonthlySalary();
	cout<<a*12<<endl;
	e1.increaseMonthlySalaryBy10Percent();
	b=e1.getMonthlySalary();
	cout<<b*12<<endl;
	return 0;
}