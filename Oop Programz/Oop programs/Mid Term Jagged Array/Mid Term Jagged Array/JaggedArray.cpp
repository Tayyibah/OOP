#include<iostream>
using namespace std;
#include"JaggedArray.h"
#include <stdarg.h>
#include <stdio.h>
bool JaggedArray::isValidIndex( int i, int j) const
{
	return i>=0 && i<rows && j>=0 && j<=data[i]->getCapacity();
}
JaggedArray::JaggedArray()
{
	data=0;
	rows=0;
}
JaggedArray::JaggedArray(int r, ...)
{
	if (r<=0)
	{
		rows=0;
		data=0;
		return;
	}
	rows = r;
	data = new Array* [rows];
	va_list vl;
	va_start(vl, rows);
	for ( int i=0; i<rows; i++)
		data[i] = new Array(va_arg(vl, int));
}
JaggedArray::JaggedArray( const JaggedArray & ref )
{
	rows = ref.rows;
	data = new Array* [rows];
	for ( int i=0; i<rows; i++)
	data[i] = new Array(*(ref.data[i]));
}
int & JaggedArray::at(int i, int j)
{
	if (isValidIndex(i,j))
		return data[i]->getSet(j);
	exit(0);
}
const int & JaggedArray::at(int i, int j) const
{
	if (isValidIndex(i,j))
		return data[i]->getSet(j);
	exit(0);
}
int JaggedArray::getRows() const
{
	return rows;
}
int JaggedArray::getColumn(int i) const
{
	if (i>=0 && i<rows)
		return data[i]->getCapacity();
	exit(0);
}
JaggedArray::~JaggedArray()
{
	if(!data)
		return;
	for ( int i=0; i<rows; i++)
	{
		delete data[i];
	}
	delete [] data;
	data = 0;
	rows = 0;
}