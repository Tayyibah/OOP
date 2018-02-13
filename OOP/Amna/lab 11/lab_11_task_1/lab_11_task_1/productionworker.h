#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include"employee.h"
class productionWorker : public Employee
{
private:
	int shift;
	double hourlyPayRate;
public:
	productionWorker(int,double,char *,int,char*);
	void setShift(int s);
	int getShift();
	void setHourlyPayRate(double r);
	double getHourlyPayRate();
	void print();
};
#endif