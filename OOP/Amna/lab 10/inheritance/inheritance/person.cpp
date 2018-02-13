#include<iostream>
using namespace std;
#include"person.h"
person::person()
{
	cout << "DEFAULT constructor of person is called:";
	name = NULL;
	age = 0;
}
person::person(char *n, int a)
{
	cout << "PARAMETRIZED constructor of person is called:";
	if (n != NULL)
	{
		int length = strlen(n) + 1;
		name = new char[strlen(n) + 1];
		for (int i = 0; i < length; i++)
		{
			name[i] = n[i];
		}
	}
	if (a > 0 && a<100)
	{
		age = a;
	}
}
void person::setname(char *n)
{
	if (n != NULL)
	{
		int length = strlen(n) + 1;
		name = new char[strlen(n) + 1];
		for (int i = 0; i < length; i++)
		{
			name[i] = n[i];
		}
	}
}
char* person :: getname()
{
	return name;
}
int person:: getage()
{
	return age;
}
person :: ~person()
{
	cout << "DESTRUCTOR is called:";
	if (name != NULL)
	{
		delete[]name;
		name = NULL;
	}
}