#include<iostream>
using namespace std;
#include"teacher.h"

Teacher::Teacher(char *n, int ext)
{
	setTeacherData(n, ext);
}
void Teacher::setTeacherData(char *n, int ext)
{
	int length = strlen(n) + 1;
	name = new char[length];
	if (n != NULL)
	{
		for (int i = 0; i < length; i++)
		{
			name[i] = n[i];
		}
	}
	if (ext != 0)
	{
		extention = ext;
	}
}
const char *Teacher :: getTeacherName()
{
	return name;
}
const int Teacher::getTeacherExt()
{
	return extention;
}
void Teacher::displayTeacherData()
{
	cout << name << " with office extention " << extention;
}
Teacher::Teacher(const Teacher & t)
{
	int length = strlen(t.name) + 1;
	name = new char[length];
	if (t.name != NULL)
	{
		for (int i = 0; i < length; i++)
		{
			name[i] =t .name[i];
		}
	}
	this->extention = t.extention;
}
void Teacher :: operator =(Teacher & rhs)
{
	if (this->name != NULL)
	{
		delete[] name;
		name = NULL;
	}
	int length = strlen(rhs.name) + 1;
	name = new char[length];
	if (rhs.name != NULL)
	{
		for (int i = 0; i < length; i++)
		{
			name[i] = rhs.name[i];
		}
	}
	this->extention = rhs.extention;
}
Teacher :: ~Teacher()
{
	if (name != NULL)
	{
		delete[]name;
		name = NULL;
	}
}