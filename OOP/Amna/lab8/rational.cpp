#include"rational.h"
#include<iostream>
using namespace std;
Rational::Rational(int n,int d)
{
		numerator=n;
		denominator=d;
}
void Rational::setFraction(int n,int d)
{
	numerator=n;
	if(d!=0)
	{
		denominator=d;
	}
	else
	{
		denominator=1;
	}
}
void Rational::display()
{
	cout<<"\nFRACTION is:"<<numerator<<"/"<<denominator;
}
int Rational::operator +(Rational &rhs)
{
	Rational r(1,1);
	
	r.numerator = this->numerator * rhs.denominator + this->denominator*rhs.numerator;
	r.denominator = this->denominator * rhs.denominator;
	
	cout<<"\nafter addition :";
	cout<<"\nFRACTION is:"<<r.numerator<<"/"<<r.denominator;
	return r;
}
int Rational::operator -(Rational &rhs)
{
Rational r(1,1);
r.numerator=this->numerator*rhs.denominator-this->denominator*rhs.numerator;
r.denominator=this->denominator*rhs.denominator;
cout<<"\nAfter subtraction :";
cout<<"\nFRACTION is:"<<r.numerator<<"/"<<r.denominator;
return r;
}
int Rational::operator *(Rational &rhs)
{
Rational r(1,1);
r.numerator=this->numerator*rhs.numerator;
r.denominator=this->denominator*rhs.denominator;
cout<<"\nAfter multiplication:";
cout<<"\nFRACTION is:"<<r.numerator<<"/"<<r.denominator;
return r;
}
int Rational::operator /(Rational &rhs)
{
Rational r(1,1);
r.numerator=thir->numerator*rhs.denominator;
r.denominator=this->denominator*rhs.numerator;
cout<<"\nAfter division:";
cout<<"\nFRACTION is:"<<r.numerator<<"/"<<r.denominator;
return r;
}
void Rational::convertDouble()
{
	double result=numerator/denominator;
	cout<<"\nResult of fraction in double form is:"<<result;
}
int Rational::operator +(int x)
{
	Rational r(1,1);
r.numerator=this->numerator+this->denominator*x;
r.denominator=this->denominator;
cout<<"\nafter addition of an integer:";
cout<<"\nFRACTION is:"<<r.numerator<<"/"<<r.denominator;
return r;
}
int Rational::operator -(int x)
{
	Rational r(1,1);
r.numerator=thir->numerator-this->denominator*x;
r.denominator=this->denominator;
cout<<"\nafter subtraction of an integer:";
cout<<"\nFRACTION is:"<<r.numerator<<"/"<<r.denominator;
return r;
}
int Rational::operator *(int x)
{
	Rational r(1,1);
r.numerator=this->numerator*x;
r.denominator=this->denominator;
cout<<"\nafter subtraction of an integer:";
cout<<"\nFRACTION is:"<<r.numerator<<"/"<<r.denominator;
return r;
}
int Rational::operator /(int x)
{
	Rational r(1,1);
r.numerator=this->numerator*1;
r.denominator=this->denominator*x;
cout<<"\nafter subtraction of an integer:";
cout<<"\nFRACTION is:"<<r.numerator<<"/"<<r.denominator;
return r;
}
int Rational::operator +=(Rational &rhs)
{
this->numerator=this->numerator*rhs.denominator+rhs.numerator*this->denominator;
this->denominator*=rhs.denominator;
cout<<"\nFRACTION is:"<<numerator<<"/"<<denominator;
return this;
}
int Rational::operator -=(Rational &rhs)
{
this->numerator=this->numerator*rhs.denominator-rhs.numerator*this->denominator;
this->denominator*=rhs.denominator;
cout<<"\nFRACTION is:"<<numerator<<"/"<<denominator;
return this;
}
int Rational::operator *=(Rational &rhs)
{
this->numerator*=rhs.denominator;
this->denominator*=rhs.denominator;
cout<<"\nFRACTION is:"<<numerator<<"/"<<denominator;
return this;
}
int Rational::operator /=(Rational &rhs)
{
this->numerator*=rhs.denominator;
this->denominator*=rhs.denominator;
cout<<"\nFRACTION is:"<<numerator<<"/"<<denominator;
return this;
}
int Rational::operator +=(int x)
{
this->numerator=this->numerator+x*this->denominator;
this->denominator*=this->denominator;
cout<<"\nFRACTION is:"<<numerator<<"/"<<denominator;
return this;
}
int Rational::operator -=(int x)
{
this->numerator=this->numerator-x*this->denominator;
this->denominator=denominator;
cout<<"\nFRACTION is:"<<numerator<<"/"<<denominator;
return this;
}
int Rational::operator *=(int x)
{
this->numerator*=x;
this->denominator*=1;
cout<<"\nFRACTION is:"<<numerator<<"/"<<denominator;
return this;
}
int Rational::operator /=(int x)
{
this->numerator*=1;
this->denominator*=x;
cout<<"\nFRACTION is:"<<numerator<<"/"<<denominator;
return this;
}