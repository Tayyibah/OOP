#ifndef SET_H
#define SET_H
class Set
{
	int * data;
	int noOfElements;
	int capacity;
	int findSetElementIndex (int);
	bool isSetFull();
	bool isSetEmpty();
public:
	Set(int =5);
	~Set();
	void insert(int );
	void remove( int );
	void print();
	int getCardinality();
	int isMember ( int  );
	int isSubset( Set & );
	void resize(int );
	Set(const Set & ref);
	Set calcUnion( Set & );
	Set calcIntersection( Set &);
	Set calcDifference(Set & );
	Set calcSymmetricDifference( Set &);
	Set & operator = (const Set & );
};
#endif