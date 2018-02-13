#include<iostream>
using namespace std;
#include"collection.h"

void collection::setCollection()
{
	for (int i = 0; i < 30; i++)
	{
		cout << "Enter element no "<<i+1<<": ";
		cin >> col[i];
	}
}
bool collection::addElement(int a,int l)
{
	if (col[l] != 0)
	{
		col[l] = a;
		return true;
	}
	else
	{
		return false;
	}
}
bool collection::searchElement(int a)
{
	for (int i = 0; i < 30; i++)
	{
		if (col[i] == a)
		{
			cout << "no found:";
			return true;
		}
		else
		{
			cout << "not available:";
			return false;
		}
	}
}
bool collection::deleteElement(int l)
{
	col[l] = col[l+1];
	return true;
}