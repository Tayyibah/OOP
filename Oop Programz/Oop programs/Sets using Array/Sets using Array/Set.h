#ifndef SET_H
#define SET_H
#include"Array.h"
class Set	
{
public:
	Array data;
	int noOfElements;
private:
	bool isSetFull();
	int findSetElementIndex (int element)const ;
	bool isSetEmpty();
public:
	Set( int cap = 5 );
	void insert (int element);
	void remove (int element);
	void print() const;
	int getCardinality() const;
	int isMember ( int val ) const;
	int isSubSet ( const Set & s2 )const;
	void reSize ( int newcapacity );
	Set( const Set & ref);
	Set calcUnion ( const Set & s2 )const;
	Set calcIntersection ( const Set & s2 ) const;
	Set calcDifference ( const Set & s2) const;
	Set calcSymmetricDifference ( const Set & s2 ) const;
};
#endif