# include <iostream>
# include <cstring>
# include "set.h"
using namespace std;
int Set:: findSetElementIndex (int element)
{
	int i=0;
	while ( i< noOfElements && data[i]!=element)
	{
		i++;
	}
	return i==noOfElements? -1: i;
}
bool Set:: isSetFull()
{
	return noOfElements==capacity;
}
bool Set:: isSetEmpty()
{
	return noOfElements==0;
}
Set::Set(int cap)
{
	if (cap<0)
	{
		capacity=0;
		data=0;
		noOfElements=0;
	}
	else
	{
		capacity=cap;
		data=new int[capacity];
		noOfElements=0;
	}
}
Set::~Set()
{
	if (data)
		delete [] data;
	data=0;
	noOfElements=0;
	capacity=0;
}
void Set:: insert(int elem)
{
	if (isSetFull())
		return;
	if (findSetElementIndex(elem)!=-1)
		return;
	data[noOfElements++]=elem;
}
void Set:: remove( int elem)
{
	if(isSetEmpty())
		return;
	int elementIndex=findSetElementIndex (elem);
	if (elementIndex==-1) 
	{
		return;
	}
	else
	{
		data[elementIndex]=data[noOfElements-1];
		noOfElements--;
	}
}
void Set:: print()
{
	cout<< "set=";
	cout<<"{";
	for( int i=0; i<noOfElements; i++)
	{
		cout<<data[i]<<",";
	}
	cout<<"}";
}
int Set:: getCardinality()
{
	return noOfElements;
}
int Set:: isMember ( int val )
{
	if (findSetElementIndex(val)!=-1)
		return 1;
	else if (findSetElementIndex(val)==-1)
		return 0;
}
int Set:: isSubset(Set & s2)
{
	int i = 0 ;
	while (i < s2.noOfElements)
	{
		int  j = 0  ;
		while (j < noOfElements)
		{
			if (s2.data[i] == data[j])
			{
				break;
			}
			j++ ;
		}
		if (j == noOfElements)
		{
			return 0 ;
		}
		i++ ;
	}
	if (s2.noOfElements == noOfElements)
	{
		return 2 ;
	}
	else
	{
		return 1 ;
	}
}
void Set:: resize(int newcapacity)
{
	int * temp= new int [newcapacity];
	int i=0;
	while(i< newcapacity && i<noOfElements)
	{
		temp[i]=data[i];
		i++;
	}
	this-> ~Set();
	data=temp;
	capacity=newcapacity;
	noOfElements=i;
}
Set::Set(const Set & ref)
{
	capacity=ref.capacity;
	noOfElements=ref.noOfElements;
	if(ref.data==NULL)
	{
		data=0;
		return;
	}
	data=new int [noOfElements];
	int i=0;
	while(i<ref.noOfElements)
	{
		data[i]=ref.data[i];
		i++;
	}
}
Set Set:: calcUnion( Set & s2)
{
	Set Union(capacity + s2.capacity) ;
	int i ;
	for (i = 0; i < noOfElements; i++)
	{
		Union.data [i] = data[i] ;
		Union.noOfElements++;
	}
	int j = i ;
	int l = 0 ;
	while (l < s2.noOfElements)
	{
		for (int k = 0; k < noOfElements; k++)
		{
			if (data[k] == s2.data[l])
			{
				break ;
			}
			if (k == noOfElements-1)
			{
				Union.data[j] = s2.data[l] ;
				Union.noOfElements++;
				j++ ;
			}
		}
		l++;
	}
	return Union ;
}
Set Set:: calcIntersection( Set & s2)
{
	Set intersection(capacity+s2.capacity) ;
	for (int i = 0; i < noOfElements; i++)
	{
		for (int j = 0; j < s2.noOfElements; j++)
		{
			if (data[i] == s2.data[j])
			{
				intersection.data[intersection.noOfElements++] = data[i] ;
			}
		}
	}
	return intersection ;
}
Set Set:: calcDifference( Set & s2)
{
	Set diff(capacity);
	for (int i = 0; i < capacity; i++)
	{
		for (int j = 0; j < s2.capacity; j++)
		{
			if (data[i] == s2.data[j])
			{
				break ;
			}
			if (j == s2.capacity - 1)
			{
				diff.data[diff.noOfElements++] = data[i] ;
			}
		}
	}
	return diff ;
}
Set Set:: calcSymmetricDifference ( Set & s2 )
{
	Set diff1 = this->calcDifference(s2) ;
	Set diff2=s2.calcDifference(*this);
	return diff1.calcUnion(diff2) ;
}
Set & Set:: operator = (const Set & ref)
{
	if(this==&ref)
		return *this;
	this-> ~Set();
	if(ref.data==NULL)
	{
		data=0;
		capacity=0;
		noOfElements=0;
		return *this;
	}
	else
	{
		capacity=ref.capacity;
		noOfElements=ref.noOfElements;
		data=new int [capacity];
		memcpy(data, ref.data,sizeof(ref.data[0])*noOfElements);
	}
	return *this;
}