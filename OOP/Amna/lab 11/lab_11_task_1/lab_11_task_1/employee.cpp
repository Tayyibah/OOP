#include<iostream>
using namespace std;
#include"employee.h"

Employee:: Employee()
{
	name[50] = NULL;
	employeeNo = 0;
	hireDate[20] = NULL;
}
Employee::Employee(char*n, int no, char *hd)
{
	int l1 = strlen(n)+1;
	for (int i = 0; i < l1; i++)
	{
		if (l1 < 50)
		{
			name[i] = n[i];
		}
	}
	if (no > 0)
	{
		employeeNo = no;
	}
	int l = strlen(hd) + 1;
	for (int i = 0; i < l; i++)
	{
		if (l<20)
		{
			hireDate[i] = hd[i];
		}
	}
}
void Employee::setName(char * n)
{
	int l = strlen(n) + 1;
	for (int i = 0; i < l; i++)
	{
		if (l < 50)
		{
			name[i] = n[i];
		}
	}
}
char* Employee::getname()
{
	return name;
}
void Employee::setEmployeeNo(int no)
{
	if (no > 0)
	{
		employeeNo = no;
	}
}
int Employee::getEmployeeNo()
{
	return employeeNo;
}
void Employee::setDate(char *hd)
{
	int l = strlen(hd) + 1;
	for (int i = 0; i < l; i++)
	{
		if (l<20)
		{
			hireDate[i] = hd[i];
		}
	}
}
char* Employee::getHireDate()
{
	return hireDate;
}
