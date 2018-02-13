#include<iostream>
using namespace std;
#include"collection.h"
#include"set.h"

bool set ::addMember(int ind,int val)
{
	bool flag=searchElement(val);
	if(flag == false)
	{
		addElement(ind,val);
		cout<<"value is added :";
		return true;
	}
	else
	{
		cout<<"Element already exist..";
	}
}
bool set ::searchMember(int val)
{
	bool flag=searchElement(val);
	if(flag == true)
	{
		cout<<"Element found..";
	return true;
	}
	else
	{
		cout<<"Element not found..";
		return false;
	}
}
bool set::deleteMember(int ind)
{
	deleteElement(ind);
	return true;
}