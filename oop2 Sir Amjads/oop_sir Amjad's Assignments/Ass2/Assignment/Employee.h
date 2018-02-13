#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
using namespace std;
#include<cstdlib>
#include<string>
class Employee
{
private:
	int  idNumber;
	string  position;
	string name;
	string department;
public:

	Employee();
	Employee(int, string);
	Employee(int, string, string, string);
	string getPosition()const;
	int getidNumber()const;
	string getName()const;
	string getDepartment()const;
	void setPosition(string);
	void setidNumber(int);
	void setName(string);
	void setDepartment(string);
	~Employee();
};
#endif