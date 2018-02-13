#include<iostream>
using namespace std;
#include"Quotation.h"

int Quotation::getLength( const char * const str) 
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i+1;
}
void Quotation::copy(char * const dest, const char *  const source)
{
	int i = 0;
	while (source[i] != '\0')
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
}
void Quotation::reSize(int newCapacity)
{
	char ** quot = new char* [newCapacity];
	char ** auth = new char* [newCapacity];
	for ( int j=0; j<newCapacity; j++)
	{
		quot[j] =0;
		auth[j]=0;
	}
	int i=0;
	while( i<newCapacity && i<noOfQuotations)
	{
		quot[i] = quote[i];
		auth[i] = author[i];
		i++;
	}
	if( newCapacity < noOfQuotations)
		noOfQuotations=newCapacity;
	capacity =newCapacity;
	author = auth;
	quote = quot;
}
bool Quotation::isFull()
{
	return noOfQuotations==capacity;
}
Quotation::Quotation(int cap)
{
	if (cap<=0)
		cap=10;
	capacity=cap;
	noOfQuotations=0;
	quote = new char* [capacity];
	author = new char* [capacity];
	for ( int i=0; i<capacity; i++)
	{
		quote[i]=0;
		author[i]=0;
	}
}
Quotation::Quotation(Quotation & q)
{
	capacity = q.capacity ;
	noOfQuotations = q.noOfQuotations ;
	quote = new char * [capacity] ;
	author = new char * [capacity] ;
	for (int i = 0; i < noOfQuotations; i++)
	{
		quote[i] = new char [getLength(q.quote[i])] ;
		author[i] = new char [getLength(q.author[i])] ;
	}
	for (int i = 0; i < noOfQuotations; i++)
	{
		for (int j = 0; j < getLength(q.quote[i]); j++)
		{
			quote[i][j] = q.quote[i][j] ;
		}
		quote[i][getLength(q.quote[i])] = '\0' ; 
	}
}
void Quotation::displayQuotationWise(char * quot)
{
	for(int i=0;i<noOfQuotations;i++)
	{
		if (compare(quote[i],quot))
			cout<<author[i];
	}
	cout<<endl;
}
void Quotation::displayAuthorWise(char * auth)
	{
		for (int i = 0; i < noOfQuotations; i++)
		{
			if (compare(auth , author[i]))
			{
				cout<<quote[i] <<endl;
			}
		}
	}

	bool Quotation::compare(char * str1 , char * str2)
	{
		int i = 0 ;
		if (getLength(str1) == getLength(str2))
		{
			while (str1[i] == str2[i] && i < getLength(str2))
			{
				i++ ;
			}
		}
		if (i == getLength(str2))
		{
			return true ;
		}
		return false ;
	}
bool Quotation::removeQuotation(char* str)
{

	int count=0;
	bool found = false;
	for (int i = 0; i<noOfQuotations; i++)
	{
		if (compare(quote[i],str))
		{
			quote[i] = quote[noOfQuotations - 1];
			author[i] = author[noOfQuotations - 1];
			noOfQuotations--;
			found = true;
			return found;
		}
		else if (compare( author[i],str))
		{
			quote[i] = quote[noOfQuotations - 1];
			author[i] = author[noOfQuotations - 1];
			noOfQuotations--;
			found = true;
			return found;
		}
	}
	cout<<"Not found"<<endl;
	return found;
}
void Quotation::addQuotation(char * quot, char * auth)
{
	if (isFull())
		reSize(capacity*2);
	int qLen = getLength(quot);
	int aLen = getLength(auth);
	quote[noOfQuotations] = new char [qLen+1];
	author[noOfQuotations] = new char [aLen+1];
	copy(quote[noOfQuotations], quot);
	copy(author[noOfQuotations], auth);
	noOfQuotations++;
}
Quotation::~Quotation()
{
	if ( capacity==0)
	return;
	for (int i=0; i<noOfQuotations; i++)
	{
		delete [] author[i];
		delete [] quote[i];
	}
	delete [] author;
	delete [] quote;
	author=0;
	quote=0;
	noOfQuotations=0;
	capacity=0;
}