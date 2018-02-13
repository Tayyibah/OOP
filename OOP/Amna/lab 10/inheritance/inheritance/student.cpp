#include<iostream>
using namespace std;
#include"student.h"
#include"person.h"
student::student() :person()
{
	cout << "DEFAULT constructor of student is called:";
	rollno = 0;
	gpa = 0;
}
student::student(char *n, int a, int r, int g) : person(n,a)
{
	cout << "PARAMETRIZED constructor of student is called:";
	if (r > 0)
	{
		rollno = r;
	}
	if (g > 0 && g <= 4)
	{
		gpa = g;
	}
}
void student::setdata(char *n, int a, int r, int g) 
{
	setname(n);
	setage(a);
	if (r > 0)
	{
		rollno = r;
	}
	if (g > 0 && g <= 4)
	{
		gpa = g;
	}
}
void student::print()
{
	cout << "NAME of student is:" << getname();
	cout << "\nAGE of student is:" <<getage() ;
	cout << "\nROLLNO of student is:"<<rollno;
	cout << "\nGPA of student is:" <<gpa ;
}
student :: ~student()
{
	cout << "Destructor of student is called:";
}