#include<iostream>
#include"Array.h"
using namespace std;

bool Array::isValidIndex(int index)
{
	if (index>=0 && index<=capacity)
	{
		return true;
	}
	else 
	{
		return false;
	}
}
void Array::copy (int * dest, int * source)
{		
	int i=0;
	while (i<capacity)
	{
		dest [i]= source[i];
		i++;
	}
}	
Array::Array (int cap)//Sets ‘cap’ to ‘capacity’ and initializes rest of the data membersaccordingly.If user sends any invalid value then sets the cap to zero.
{
	if (cap>0)
	{
		capacity=cap;
		data= new int [capacity];
	}
	else 
	{
		capacity=0;
	}
}

Array::~Array ()//Free the dynamically allocated memory.
{
	if (data)
	{
		delete [] data;
		data=0;
	}
}
int & Array::getSet (int index)//insert value at given index of array.
{
	if (isValidIndex(index))
		return data[index];
	exit(0) ;
}
int Array::getCapacity()//returns the size of array.
{
	return capacity;
}
void Array::resize (int newCapacity)//resize the array to new capacity. Make sure that elements in old array should be preserved in the new array if possible.
{
	if (newCapacity<=0)
	 {
		 this->~Array();
		 return;
	 }
	int * temp=new int [newCapacity];
	/*memcpy(temp, data,(newCapacity<capacity?newCapacity:capacity)*sizeof(int));
	this->~Array();
	capacity =newCapacity<capacity?newCapacity:capacity;
	data=temp;*/
 	int i=0;
	while (i<newCapacity && i<capacity)
	{
		temp[i]=data[i];
		i++;
	}
	delete [] data;
	data=temp;
	capacity=newCapacity;
}
Array::Array (Array &ref)//makes a deep copy of the received object.
{
	if (ref.data==0)
	{
		 data=0;
		 capacity=0;
		 return;
	}
	data=new int[ref.capacity];
	copy(data, ref.data);
	data = ref.data;
	capacity=ref.capacity;
}
 //Google variable number of arguments
//http://www.cprogramming.com/tutorial/c/lesson17.html
 /*Array::Array(int argCount=5, ...)
 {
	 if (argCount<=0)
	 {
	 capacity=0;
	 data=0;
	 return;
	 }
	 capacity = argCount;
	 data = new int[capacity];
	 va_list vl;
	 va_start(vl, argCount);
	 for ( int i=0; i<capacity; i++)
	 data[i] = va_arg(vl, int);
}*/