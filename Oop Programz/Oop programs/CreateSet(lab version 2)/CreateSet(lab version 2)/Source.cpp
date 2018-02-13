#include<iostream>
using namespace std;

void createSet(int **data,int &noOfElement,int size);
void removeElement(int *data,int elem);
void insertElement(int *data,int &noOfElement,int size,int elem);
void displaySet(int *data,int noOfElement);
void freeSet(int **data);

int main()
{
	int *data;
	int capacity=0;
	int noOfElement=0;
	createSet(&data,noOfElement,capacity);
	insertElement(data,noOfElement,capacity,3);
	insertElement(data,noOfElement,capacity,2);
	removeElement(data,3);
	displaySet(data,noOfElement);
	freeSet(&data);
	return 0;
}

void createSet(int **data,int &noOfElement,int size)
{
	int capacity=size;
	*data=new int[20];
	noOfElement=0;
}
void insertElement(int *data,int &noOfElement,int size,int elem)
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
void removeElement(int *data,int elem)
{
	for(int i=0;i<elem;i++)
	{
		if(data[i]==elem)
		{
			data[i]=data[elem];
		}
	}

}
void displaySet(int *data,int noOfElement)
{
	for(int i=0;i<noOfElement;i++)
	{
		cout<<data[i];
	}
}
void freeSet(int **data)
{
	data=NULL;
}