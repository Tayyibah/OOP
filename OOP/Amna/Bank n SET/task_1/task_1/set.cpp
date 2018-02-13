#include<iostream>
using namespace std;
#include"collection.h"
#include"set.h"

void set::setMember()
{
	for (int i = 0; i < 30; i++)
	{
		int a;
		cout << "Enter element of array:";
		cin >> a;
		col[i] = a;
	}
}
bool set::addMember(int m,int l)
{
	bool flag;
	flag = searchElement(m);
	if (flag = false)
	{
		col[l] = m;
		return true;
	}
	else
	{
		cout << "MEMBER already available...";
		return false;
	}
}
bool set::searchMember(int m)
{
	bool flag=
	searchElement(m);
	return flag;
}
bool set::deleteMember(int l)
{
	deleteElement(l);
	return true;
}