#include<iostream>
#include"ProductionWorker.h"
using namespace std;
ProductionWorker::ProductionWorker():Employee()
{
	shift=0;
	hourlyPayRate=0;
}
ProductionWorker::ProductionWorker(int shft,int payRate)
{
	shift=shft;
	hourlyPayRate=payRate;
}
void ProductionWorker::setshift(int shft)
{
	if(shft==0)
	{
		cout<<"It's day time."<<endl;
		shift=shft;
	}
	else if(shft==1)
	{
		cout<<"It's night time."<<endl;
		shift=shft;
	}
	else
		cout<<"No other shift____________________"<<endl;
}
void ProductionWorker::sethourlyPayRate(int payRate)
{
	hourlyPayRate=payRate;
}
int ProductionWorker::getshift()
{
	return shift;
}
int ProductionWorker::gethourlyPayRate()
{
	return hourlyPayRate;
}
ProductionWorker::~ProductionWorker()
{
	shift=0;
	hourlyPayRate=0;
}