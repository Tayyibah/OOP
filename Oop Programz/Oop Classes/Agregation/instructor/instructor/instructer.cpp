#include<iostream>
#include"instructer.h"
#include "CString.h"
instructer::instructer()
{
	firstName=" ";
	lastName=" ";
	officeNumber=" ";
}
instructer::instructer(CString first,CString last,CString number)
{
	firstName=first;
	lastName=last;
	officeNumber=number;
}
void instructer::print()const
{
	cout<<"firstName:"<<firstName<<endl;
	cout<<"officeNumber:"<<officeNumber<<endl;
	cout<<"lastName:"<<lastName<<endl;
}