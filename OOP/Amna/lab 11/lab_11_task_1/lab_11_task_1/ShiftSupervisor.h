#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H
#include "employee.h"
class shiftSuperVisor : public Employee
{
private:
	double annualSalary;
	double bonus;
public:
	shiftSuperVisor(double,double,char*,int,char*);
	void setSallary(double as);
	double getSalary();
	void setBonus(double b);
	double getBonus();
	void print();
};
#endif