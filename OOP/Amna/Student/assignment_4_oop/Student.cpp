#include<iostream>
using namespace std;
#include"Student.h"

Student::Student()
{
	rollNo = 0;
	name[0] = NULL;
}
Student::Student(int r, string n)
{
	if (r > 0)
	{
		rollNo = r;
	}
	else
	{
		rollNo = 0;
	}
	name = n;

}