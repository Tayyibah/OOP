#ifndef NamedSet_H
#define NamedSet_H
#include "CString.h"
# include "set.h"
class NamedSet
{
	Set set;
	CString name;
public:
	NamedSet(char *str="",int=5);
	~NamedSet();
	void insert(int );
	void remove( int );
	void print();
	int getCardinality();
	int isMember ( int  );
	int isSubset( NamedSet & );
	void resize(int );
	NamedSet(const NamedSet & ref);
	NamedSet calcUnion( NamedSet & );
	NamedSet calcIntersection( NamedSet &);
	NamedSet calcDifference(NamedSet & );
	NamedSet calcSymmetricDifference( NamedSet &);
	NamedSet & operator = (const NamedSet & );
};
#endif