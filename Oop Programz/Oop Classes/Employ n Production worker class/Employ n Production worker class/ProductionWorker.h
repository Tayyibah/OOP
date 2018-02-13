#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include"Employee.h"
class ProductionWorker:public Employee
{
private:
	int shift;
	int hourlyPayRate;
public:
	ProductionWorker();
	ProductionWorker(int shft,int payRate);
	void setshift(int shft);
	void sethourlyPayRate(int payRate);
	int getshift();
	int gethourlyPayRate();
	~ProductionWorker();
};
#endif
