#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class Employee
{
private:
	char* employeeName;
	int employeeNumber;
	int hireDate;
public:
	Employee();
	Employee(char* name,int num,int date);
	void setemployeeName(char* name);
	void setemployeeNumber(int num);
	void sethireDate(int date);
	char* getemployeeName();
	int getemployeeNumber();
	int gethireDate();
	~Employee();
};
#endif
