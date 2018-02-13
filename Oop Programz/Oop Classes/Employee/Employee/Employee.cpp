#include"Employee.h"
#include<string>
	void Employee::setFirstName(char*fn)
	{
		strcpy(firstName,fn);
	}
	void Employee::setLastName(char*ln)
	{
		strcpy(lastName,ln);
	}
	void Employee::setMonthlySalary(float ms)
	{
		if(ms>=0)
			monthlySalary=ms;
	}
	char* Employee::getFirstName()
	{
		return firstName;
	}
	char* Employee::getLastName()
	{
		return lastName;
	}
	int Employee::getMonthlySalary()
	{
		return monthlySalary;
	}
	void Employee::increaseMonthlySalaryBy10Percent()
	{
		monthlySalary = monthlySalary * 1.1;
	}