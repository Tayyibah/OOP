#include<iostream>
using namespace std;
class Employee
{
private:
	char firstName[100];
	char lastName[100];
	float monthlySalary;
public:
	void setFirstName(char*fn)
	{
		strcpy(firstName,fn);
	}
	void setLastName(char*ln)
	{
		strcpy(lastName,ln);
	}
	void setMonthlySalary(float ms)
	{
		if(ms>=0)
			monthlySalary=ms;
	}
	char* getFirstName()
	{
		return firstName;
	}
	char* getLastName()
	{
		return lastName;
	}
	int getMonthlySalary()
	{
		return monthlySalary;
	}
	void increaseMonthlySalaryBy10Percent()
	{
		monthlySalary = monthlySalary * 1.1;
	}
};
int main()
{
	Employee e,e1;
	int x,y,a,b;
	e.setMonthlySalary(500);
	x=e.getMonthlySalary();
	cout<<x*12<<endl;
	e.increaseMonthlySalaryBy10Percent();
	y=e.getMonthlySalary();
	cout<<y*12<<endl;
	e1.setMonthlySalary(400);
	a=e1.getMonthlySalary();
	cout<<a*12<<endl;
	e1.increaseMonthlySalaryBy10Percent();
	b=e1.getMonthlySalary();
	cout<<b*12<<endl;
}