#ifndef FEETINCHES_H
#define FEETINCHES_H
#include<iostream>
using namespace std;
class feetInches
{
private:
	int feet;
	int inches;
	void simplify();
public:
	feetInches();
	feetInches(int ft,int inch);
	~feetInches();
	void setFeet(int ft);
	void setInches(int inch);
	int getFeet() const;
	int getInches() const;
	bool operator<(feetInches &right);
	bool operator>(feetInches &right);
	feetInches operator=(feetInches &right);
	feetInches operator+=(feetInches &right);
	feetInches operator-=(feetInches &right);
	feetInches operator+(feetInches &right);
	feetInches operator-(feetInches &right);
	feetInches operator--();
	feetInches operator++();
	feetInches operator--(int);
	feetInches operator++(int);
	friend ostream & operator << (ostream &os,const feetInches &obj);
	friend istream & operator >> (istream &os,feetInches &obj);
	operator int();
	operator double();
	operator float();
};
#endif