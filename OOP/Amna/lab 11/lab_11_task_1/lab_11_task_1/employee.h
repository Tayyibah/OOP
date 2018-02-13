#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class Employee
{
private:
	char name[50];
	int employeeNo;
	char hireDate[20];
public:
	Employee();
	Employee(char *n,int no,char *hdate);
	void setName(char *n);
	char *getname();
	void setEmployeeNo(int no);
	int getEmployeeNo();
	void setDate(char * hd);
	char *getHireDate();
};
#endif