#include"Employee.h"
Employee::Employee()
{
	employeeName=0;
	employeeNumber=0;
	hireDate=0;
}
Employee::Employee(char* name,int num,int date)
{
	employeeName=name;
	employeeNumber=num;
	hireDate=date;
}
void Employee::setemployeeName(char* name)
{
	employeeName=name;
}
void Employee::setemployeeNumber(int num)
{
	employeeNumber=num;
}
void Employee::sethireDate(int date)
{
	hireDate=date;
}	
char* Employee::getemployeeName()
{
	return employeeName;
}
int Employee::getemployeeNumber()
{
	return employeeNumber;
}
int Employee::gethireDate()
{
	return hireDate;
}
Employee::~Employee()
{
	employeeName=0;
	employeeNumber=0;
	hireDate=0;
}