#include<iostream>
using namespace std;

void createSet();
void displaySet();
void insertElement(int elem);
void removeElement(int elem);
int *data;
int capacity;
int noOfElement;

int main()
{
	createSet();
	insertElement(noOfElement);
	removeElement(noOfElement);
	displaySet();
	return 0;
}

void createSet()
{
	int capacity=20;
	int *data=new int[capacity];
	noOfElement=0;
}
void insertElement(int elem)
{
	bool found=false;
	for(int i=0;i<elem;i++)
	{
		if(data[i]==elem)
			found=true;
		else
			data[noOfElement]=elem;
	}
}
void removeElement(int elem)
{
	for(int i=0;i<elem;i++)
	{
		if(data[i]==elem)
		{
			data[i]=data[noOfElement-1];
			noOfElement--;
		}
	}
}
void displaySet()
{
	for(int i=0;i<noOfElement;i++)
	{
		cout<<data[i]<<' ';
	}
}