#include<iostream>
using namespace std;
#include"employee.h"
#include"ShiftSupervisor.h"

shiftSuperVisor::shiftSuperVisor(double s, double b, char*n, int no, char* hd) :Employee(n, no, hd)
{
	if (s != 0)
	{
		annualSalary = s;
	}
	if (b != 0)
	{
		bonus = b;
	}
}
void shiftSuperVisor::setSallary(double as)
{
	if (as != 0)
	{
		annualSalary = as;
	}
}
double shiftSuperVisor::getSalary()
{
	return annualSalary;
}
void shiftSuperVisor::setBonus(double b)
{
	if (b != 0)
	{
		bonus = b;
	}
}
double shiftSuperVisor::getBonus()
{
	return bonus;
}
void shiftSuperVisor::print()
{
	cout << "EMPLOYEE NAME IS: " << getname();
	cout << "\nEMPLOYEE NUMBER IS: " << getEmployeeNo();
	cout << "\nEMPLOYEE'S HIRE DATE IS: " << getHireDate();
	cout << "\nEMPLOYEE'S ANNUAL SALARY IS: " << annualSalary;
	cout << "\nEMPLOYEE'S ANNUAL BONUS IS: " << bonus;
}