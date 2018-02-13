#include<iostream>
#include"ProductionWorker.h"
#include"Employee.h"
using namespace std;
int main()
{
	ProductionWorker p;
	p.setshift(1);
	p.sethourlyPayRate(10);
	cout<<p.getshift()<<endl;
	cout<<p.gethourlyPayRate()<<endl;

	p.setemployeeName("mister");
	p.setemployeeNumber(032345);
	p.sethireDate(23);
	cout<<p.getemployeeName()<<endl;
	cout<<p.getemployeeNumber()<<endl;
	cout<<p.gethireDate()<<endl;
	return 0;
}