#include<iostream>
using namespace std;
#include"teacher.h"

Teacher :: Teacher(char n[],int ext)
{
		setTeacherData(n,ext);	
}
void Teacher :: setTeacherData(char n[],int ext)
{
	if(n!=NULL)
	{
		strcpy(name,n);
	}
	if(ext != 0)
	{
	extention =ext;
	}
}
const char* Teacher :: getTeacherName()
{
	return name;
}
const int Teacher::getTeacherExt()
{
	return extention;
}
void Teacher :: displayTeacherData()
{
	cout<<name<<" with office extention "<<extention;
}
Teacher :: Teacher(const Teacher & t)
{
	if(t.name != NULL)
	{
		strcpy(this->name,t.name);
	}
	this->extention = t.extention;
}
void Teacher :: operator =(Teacher & rhs)
{
	if(rhs.name != NULL)
	{
		strcpy(this->name,rhs.name);
	}
	this->extention = rhs.extention;
}