#include<iostream>
using namespace std;
#include"collection.h"

bool collection ::addElement(int ind,int val)
{
	if(col[ind] == 0)
	{
		col[ind]=val;
		return true;
	}
	else
	{
		return false;
	}
}
bool collection::searchElement(int val)
{
	for(int i=0;i<30;i++)
	{
		if(col[i]==val)
		{
			search =i;
			cout<<"element found at location:"<<i;
			return true;
		}
	}
			return false;
}
bool collection ::deleteElement(int index)
{
	if(col[index]!=0)
	{
		col[index]=col[index+1];
		return true;
	}
}
bool collection ::searchAgain(int val)
{
	if(search<29)
	{
	for(int i=search+1;i<30;i++)
	{
		if(col[i]==val)
		{
			cout<<"member is repeating:";
			return true;
		}
	}
	}
	else
	{
		cout<<"member is non repeating...";
	return false;
	}
}