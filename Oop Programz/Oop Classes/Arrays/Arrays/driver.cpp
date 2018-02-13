#include<iostream>
#include"Array.h"
using namespace std;
int main()
{
	Array a(2);
	for (int i=0; i<2; i++)
	{
		cout<<"Enter a number at index #"<<i<<" :";
		cin>>a.getSet(i);
	}
	int newCapacity =3;
	a.resize(3);
	for (int i=0; i<newCapacity; i++)
	{
		if (newCapacity<a.getCapacity())
		{
			for (int i=0; i<newCapacity ; i++)
			{
				cout<<a.getSet(i);
			}
		}
		else 
		{
			for (int i=a.getCapacity(); i<newCapacity; i++)
			{
				cout<<"Enter a number :";
				cin>>a.getSet(i);
			}
			for (int i=0; i<newCapacity ; i++)
			{
				cout<<a.getSet(i);
			}
		}
	}
	cout<<endl;
	return 0;
}

