#ifndef RATIONAL_H
#define RATIONAL_H
class Rational
{
	int numerator;
	int denominator;
public:
	Rational(int n,int d);
	void Rational::setFraction(int n,int d);
	void Rational::display();
	int Rational::operator +(Rational &rhs);
	int Rational::operator -(Rational &rhs);
	int Rational::operator *(Rational &rhs);
	int Rational::operator /(Rational &rhs);
	void convertDouble();
	int Rational::operator +(int x);
	int Rational::operator -(int x);
	int Rational::operator *(int x);
	int Rational::operator /(int x);

	int Rational::operator +=(Rational &rhs);
	int Rational::operator -=(Rational &rhs);
	int Rational::operator *=(Rational &rhs);
	int Rational::operator /=(Rational &rhs);
	
	int Rational::operator +=(int x);
	int Rational::operator -=(int x);
	int Rational::operator *=(int x);
	int Rational::operator /=(int x);
};
#endif