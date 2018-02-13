#include <iostream>
using namespace std;
#include"Set.h"
#include"Array.h"
bool Set :: isSetFull()
{
		if(noOfElements==data.getCapacity())
			return true;
		return false;
}
int Set::findSetElementIndex (int element) const
{
	int i=0;
	while ( i< noOfElements && data.getSet(i)!=element)
	{
		i++;
	}
	return i==noOfElements? -1: i;
}
bool Set::isSetEmpty()
{
		return noOfElements==0;
}
Set :: Set( int cap  ) :data(cap)
{
	noOfElements=0;
}
void Set::insert (int element)
{
	if (isSetFull())
			return;
		if (findSetElementIndex(element)!=-1)
			return;
		data.getSet(noOfElements)=element;
		noOfElements++;
}
void Set::remove (int element)
{
	if(isSetEmpty())
		return;
	int elementIndex=findSetElementIndex (element);
	if (elementIndex==-1) 
	{
		return;
	}
	else
	{
		data.getSet(elementIndex)=data.getSet(noOfElements-1);
		noOfElements--;
	}
}
void Set::print() const
{
	cout<< "set=";
	cout<<"{";
	for( int i=0; i<noOfElements; i++)
	{
		cout<<data.getSet(i)<<",";
	}
	cout<<"}";
}
int Set::getCardinality() const
{
	return noOfElements;
}
int Set::isMember ( int val ) const
{
	if (findSetElementIndex(val)!=-1)
		return 1;
	else if (findSetElementIndex(val)==-1)
		return 0;
}
int Set::isSubSet ( const Set & s2 )const
{
	int i = 0 ;
	while (i < s2.noOfElements)
	{
		int  j = 0  ;
		while (j < noOfElements)
		{
			if (s2.data.getSet(i) == data.getSet(j))
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
void Set::reSize ( int nc )
{
	data.resize(nc);
}
Set::Set( const Set & ref):data(ref.data)
{
	noOfElements=ref.noOfElements;
}
Set Set::calcUnion ( const Set & s2 )const
{
	Set Union(data.getCapacity() + s2.data.getCapacity());
	int i ;
	for (i = 0; i < noOfElements; i++)
	{
		Union.data.getSet(i) = data.getSet(i) ;
		Union.noOfElements++;
	}
	int j = i ;
	int l = 0 ;
	while (l < s2.noOfElements)
	{
		for (int k = 0; k < noOfElements; k++)
		{
			if (data.getSet(k) == s2.data.getSet(l))
				{
					break ;
				}
				if (k == noOfElements-1)
				{
					Union.data.getSet(j) = s2.data.getSet(l);
					Union.noOfElements++;
					j++ ;
				}
			}
			l++;
		}
	return Union ;
}
Set Set::calcIntersection ( const Set & s2 ) const
{
	Set intersection( data.getCapacity() + s2.data.getCapacity());
		int k = 0 ;
		for (int i = 0; i < data.getCapacity(); i++)
		{
			for (int j = 0; j < s2.data.getCapacity(); j++)
			{
				if (data.getSet(i) == s2.data.getSet(j))
				{
					intersection.data.getSet(k) = data.getSet(i) ;
					intersection.noOfElements ++;
					k++ ;
				}
			}
		}
		return intersection ;
}
Set Set::calcDifference ( const Set & s2) const
{
		Set diff(data.getCapacity()) ;
		int k = 0 ;
		for (int i = 0; i <data.getCapacity(); i++)
		{
			for (int j = 0; j < s2.data.getCapacity(); j++)
			{
				if (data.getSet(i) == s2.data.getSet(j))
				{
					break ;
				}
				if (j == s2.data.getCapacity() - 1)
				{
					diff.data.getSet(k) = data.getSet(i) ;
					k++ ;
				}
			}
		}

		diff.noOfElements = k ;

		return diff ;
	}
Set Set::calcSymmetricDifference ( const Set & s2 ) const
{
	Set symetric = this->calcDifference(s2) ;
	return symetric ;
}