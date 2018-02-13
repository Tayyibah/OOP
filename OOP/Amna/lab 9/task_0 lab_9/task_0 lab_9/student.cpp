#include<iostream>
using namespace std;
#include"student.h"
#include"string.h"

student::student()
{
	name.setBuff(NULL);
	rollno = 0;
}
student::student(char *n, int r,int d,int m,int y)
{
	cout << "constructor of student is called,,,";
	setData(n,  r,  d,  m,  y);
}
student::student(student &s)
{
	cout << "copy constructor is called..\n";
	name.setBuff(s.name.getBuff());
	rollno = s.rollno;
}
void student::setData(char *n,int r,int d,int m,int y)
{
	name.setBuff(n);
	if (r != 0)
	{
		rollno = r;
	}
	else
		rollno = 1;
	dob.setDate(d,m,y);
}
char* student::getName()
{
	return name.getBuff();
}
student :: ~student()
{
	cout << "destructor is called..\n";
}