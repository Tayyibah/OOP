#include<iostream>
using namespace std;
#include"myList.h"
MyList::MyList()
{
	list = 0;
}
MyList::MyList(int size)
{
	list = new double[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter element of "<<i+1<<" location : ";
		cin >> list[i];
		cout << endl;
	}
}
MyList::MyList(const MyList &l)
{
	size = l.size;
	list = new double[size];
	for (int i = 0; i < size; i++)
	{
		list[i] = l.list[i];
	}
}
MyList  MyList :: operator = (const MyList &l)
{
	if (list[0] != 0)
	{
		delete[]list;
		list = 0;
	}
	size = l.size;
	list = new double[size];
	for (int i = 0; i < size; i++)
	{
		list[i] = l.list[i];
		cout << "Element " << i + 1 << " is : " << list[i] << endl;
	}
	return *this;
}
MyList MyList :: operator ^ (double exp)
{
	if (exp == 0)
	{
		for (int i = 0; i < size; i++)
		{
			list[i] = 1;
		}
	}
	else if (exp > 0)
	{
		for (int i = 0; i < size; i++)
		{
			list[i] = pow(list[i],exp);
			cout << "Element " << i + 1 << " is : " << list[i] << endl;
		}
	}
	return *this;
}
void MyList::display()
{
	for (int i = 0; i <this-> size; i++)
	{
		cout << "Element " << i + 1 << " is : " << list[i] << endl;
	}
}
//istream  MyList :: & operator >>(MyList &l, istream cin)
//{
//	for (int i = 0; i < l.size; i++)
//	{
//		cin >> list[i];
//	}
//	return *cin;
//}
MyList :: ~MyList()
{
	if (list[0] != 0)
	{
		delete[]list;
		list = 0;
	}
}
