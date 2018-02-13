#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H
#include<iostream>
using namespace std;
#include<new>
#include<cstdlib>

template<class T>
class SimpleVector
{
private:
	T *ptr;
	int arrSize;
	void memoryAllocationError();
	void subscriptionRangeError();
public:
	SimpleVector();
	SimpleVector(int);
	SimpleVector(const SimpleVector &);
	~SimpleVector()
	{
		if(ptr)
			delete[]ptr;
		/*ptr=0;
		arrSize=0;*/
	}
	int size()const;
	T getElementAt(int position);
	T &operator[](const int &);
};
template<class T>
void SimpleVector<T>::memoryAllocationError()
{
	cout<<"Memory Allocation Error "<<endl;
	exit(EXIT_FAILURE);
}
template<class T>
void SimpleVector<T>::subscriptionRangeError()
{
	cout<<"Memory Subscription Out of range "<<endl;
	exit(EXIT_FAILURE);
}
template<class T>
SimpleVector<T>::SimpleVector():ptr(0),arrSize(0)
{
}
template<class T>
SimpleVector<T>::SimpleVector(int size)
{
	/*nnnnnnnnnnjjjjjjarrSize=size;
	try
	{
		ptr=new T[size];
	}
	catch
	{
		memoryAllocationError();
	}
	for(int i=0;i<arrSize;i++)
		*(ptr+i)=0;*/
}

template<class T>
SimpleVector<T>::SimpleVector(const SimpleVector & ref)
{
	arrSize=ref.size;
	ptr=new T[arrSize];
	if(ptr==0)
		memoryAllocationError();
	for(int i=0;i<arrSize;i++)
		*(ptr+i)=*(ref.ptr+i);
}

template<class T>
int SimpleVector<T>::size()const
{
	return arrSize;
}
template<class T>
T SimpleVector<T>::getElementAt(int position)
{
	if(position>=0||position<=arrSize)
		return ptr[position];
	else
		return subscriptionRangeError();
}
template<class T>
T & SimpleVector<T>::operator[](const int &)
{
	if(position>=0||position<=arrSize)
		return ptr[position];
	else
		return subscriptionRangeError();
}
#endif