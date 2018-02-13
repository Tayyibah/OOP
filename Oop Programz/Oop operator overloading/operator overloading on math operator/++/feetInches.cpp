#include"feetInches.h"
#include<cstdlib>
void feetInches::simplify()
{
	if(inches>=0)
	{
		feet += inches/12;
		inches = inches%12;
	}
	else
	{
		feet -= abs(inches)/12+1;
		inches = 12-abs(inches)%12;
	}
}
feetInches::feetInches()
{
	feet=0;
	inches=0;
	simplify();
}
feetInches::feetInches(int ft,int inch)
{
	if(ft>=0)
		feet=ft;
	if(inch>=0)
		inches=inch;
	simplify();
}
feetInches::~feetInches()
{
	feet=0;
	inches=0;
	simplify();
}
void feetInches::setFeet(int ft)
{
	if(ft>=0)
		feet=ft;
}
void feetInches::setInches(int inch)
{
	if(inch>=0)
		inches=inch;
}
int feetInches::getFeet() const
{
	return feet;
}
int feetInches::getInches() const
{
	return inches;
}
bool feetInches::operator<(feetInches &right)
{
	bool status;
	if(feet<right.feet)
		status=true;
	else if(feet==right.feet && inches<right.inches)
		status=true;
	else
		status=false;
	return status;
}
bool feetInches::operator>(feetInches &right)
{
	bool status;
	if(feet>right.feet)
		status=true;
	else if(feet==right.feet && inches>right.inches)
		status=true;
	else
		status=false;
	return status;
}
feetInches feetInches::operator=(feetInches &right)
{
	feet=right.feet;
	inches=right.inches;
	simplify();
	return (*this);
}
feetInches feetInches::operator+(feetInches &right)
{
	feetInches temp;
	temp.feet=feet+right.feet;
	temp.inches=inches+right.inches;
	temp.simplify();
	return temp;
}
feetInches feetInches::operator-(feetInches &right)
{
	feetInches temp;
	temp.feet=feet-right.feet;
	temp.inches=inches-right.inches;
	temp.simplify();
	return temp;
}
feetInches feetInches::operator+=(feetInches &right)
{
	feetInches temp;
	temp.feet=feet+right.feet;
	temp.inches=inches+right.inches;
	temp.simplify();
	return temp;
}
feetInches feetInches::operator-=(feetInches &right)
{
	feetInches temp;
	temp.feet=feet-right.feet;
	temp.inches=inches-right.inches;
	temp.simplify();
	return temp;
}
feetInches feetInches::operator--()
{
	--inches;
	simplify();
	return (*this);
}
feetInches feetInches::operator++()
{
	++inches;
	simplify();
	return (*this);
}
feetInches feetInches::operator--(int)
{
	feetInches temp(feet,inches);
	inches--;
	simplify();
	return (*this);
}
feetInches feetInches::operator++(int)
{
	feetInches temp(feet,inches);
	inches++;
	simplify();
	return (*this);
}
ostream & operator << (ostream &os,const feetInches &obj)
{
	cout<<"Feet: ";
	os <<obj.feet;
	cout<<"Inches: ";
	os <<obj.inches;
	return os;
}
istream & operator >> (istream &is,feetInches &obj)
{
	cout<<"Feet: ";
	is >>obj.feet;
	cout<<"Inches: ";
	is >>obj.inches;
	obj.simplify();
	return is;
}

feetInches::operator int()
{
	return feet;
}
feetInches::operator double()
{
	double temp=feet;
	temp +=(inches/12.0);
	return temp;
}
feetInches::operator float()
{
	float temp=feet;
	temp +=(inches/12.0);
	return temp;
}