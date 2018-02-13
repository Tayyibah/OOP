#include<iostream>
#include "Array.h"
#include <stdarg.h>
int Array:: isValidIndex(int index)const
{
	if (index>=0 && index<capacity)
	return 1;
	else
		return -1;
}

Array :: ~Array()
{
	if (!data)
		return;
	delete [] data;
	capacity=0;
}
int& Array:: getSet(int index)
{
	if (isValidIndex(index))
		return data[index];
	else 
		exit (0);
}
const int & Array::getSet(int index)const
{
	if (isValidIndex(index))
		return data[index];
	else 
		exit (0);
}
int Array::getCapacity()const
{
	return capacity;
}
void Array::resize (int newCapacity)
{
	if (newCapacity<=0)
	{
		this -> ~Array();
		return;
	}
	int * ptr=new int [newCapacity];
	memcpy(ptr, data, (newCapacity<capacity?newCapacity:capacity)*sizeof(int));
	this->~Array();
	capacity=newCapacity<capacity?newCapacity:capacity;
	data=ptr;
}
Array :: Array(const Array &ref )
{
	if (ref.data==0)
	{
		data=0;
		capacity=0;
		return;
	}
	capacity=ref.capacity;
	data=new int [capacity];
	memcpy(data,ref.data, capacity *sizeof(int));
}
Array :: Array (int argCount, ...)
{
	if (argCount<=0)
	{
		capacity=0;
		data=0;
		return;
	}
	capacity=argCount;
	data=new int[capacity];
	va_list vl;
	va_start (vl, argCount);
	for (int i=0 ; i<capacity ; i++)
	{
		data[i]=va_arg(vl,int);

	}

}	
//Array &Array :: operator = (const Array &ref)
//{
//	if (this==&ref)
//	{
//		return * this;
//	}
//	this->~Array();
//	if (ref.data==NULL)
//	{
//		data=0;
//		capacity=0;
//		return *this;
//	}
//	else
//	{
//		capacity=ref.capacity;
//	    data=new int [capacity];
//		memcpy(data,ref.data,sizeof(ref.data)*capacity);
//	}
//	return * this;
//
//}
Array & Array::operator = (const Array & ref)
{
	if(this==&ref)
		return *this;
	this-> ~Array();
	if(ref.data==NULL)
	{
		data=0;
		capacity=0;
		return *this;
	}
	else
	{
		capacity=ref.capacity;
		data=new int [capacity];
		memcpy(data, ref.data,sizeof(ref.data)*capacity);
	}
	return *this;
}