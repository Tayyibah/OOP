#ifndef INTARRAY_H
#define INTARRAY_H
#include<iostream>
using namespace std;
class intArray
{
private:
	int *arr;
	int arrSize;
public:
	intArray();
	intArray(const intArray &);
	~intArray();
	int & operator[](const int &);
	intArray & operator=(const int & ref);
	friend ostream & operator << (ostream &os,const intArray &obj);
};
#endif