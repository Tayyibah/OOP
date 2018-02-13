#include"intArray.h"
#include<cstdlib>
intArray::intArray()
{
	arr=0;
	arrSize=0;
}
intArray::intArray(const intArray & ref)
{
	arrSize=ref.arrSize;
	int *temp=new int[arrSize];
	for(int i=0;i<arrSize;i++)
	{
		arr[i]=ref.arr[i];
	}
}

intArray & intArray::operator=(const int & ref)
{
	arrSize=arrSize;
	for(int i=0;i<arrSize;i++)
	{
		arr[i]=arr[i];
	}
	return (*this);
}

ostream & operator << (ostream &os,const intArray &obj)
{
	for(int i=0;i<obj.arrSize;i++)
	{
		os<< obj.arr[i];
	}
	return os;
}
intArray::~intArray()
{
	if(arr)
		delete[]arr;
	arr=0;
	arrSize=0;
}
int & intArray::operator[](const int & size)
{
	if(size>=0 && size<=arrSize)
		return arr[size];
	else 
		exit(0);
}