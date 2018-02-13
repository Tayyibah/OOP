#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class Employee
{
private:
	char firstName[100];
	char lastName[100];
	float monthlySalary;
public:
	void setFirstName(char*fn);
	void setLastName(char*ln);
	void setMonthlySalary(float ms);
	char* getFirstName();
	char* getLastName();
	int getMonthlySalary();
	void increaseMonthlySalaryBy10Percent();
};
#endif