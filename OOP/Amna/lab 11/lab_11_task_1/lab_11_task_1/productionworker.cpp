#include<iostream>
using namespace std;
#include"employee.h"
#include"productionworker.h"

productionWorker::productionWorker(int s, double r,char *n,int no,char *hd) :Employee(n, no,hd)
{
	if (s == 1 || s == 2)
	{
		shift = s;
	}
	if (r > 0)
	{
		hourlyPayRate = r;
	}
}
void productionWorker::setShift(int s)
{
	if (s == 1 || s == 2)
	{
		shift = s;
	}
}
int productionWorker::getShift()
{
	return shift;
}
void  productionWorker::setHourlyPayRate(double r)
{
	if (r > 0)
	{
		hourlyPayRate = r;
	}
}
double productionWorker::getHourlyPayRate()
{
	return hourlyPayRate;
}
void productionWorker::print()
{
	cout << "EMPLOYEE NAME IS: " << getname();
	cout << "\nEMPLOYEE NUMBER IS: " << getEmployeeNo();
	cout << "\nEMPLOYEE'S HIRE DATE IS: " <<getHireDate() ;
	cout << "\nEMPLOYEE'S SHIFT IS: " << shift;
	cout << "\nEMPLOYEE'S HOURLY PAY-RATE IS: " << hourlyPayRate;
}
