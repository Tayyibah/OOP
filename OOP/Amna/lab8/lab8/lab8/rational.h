#ifndef RATIONAL_H
#define RATIONAL_H
class Rational
{
	int numerator;
	int denominator;
public:
	Rational(int n, int d);
	void Rational::setFraction(int n, int d);
	void Rational::display();
	Rational Rational::operator +(Rational &rhs);
	Rational Rational::operator -(Rational &rhs);
	Rational Rational::operator *(Rational &rhs);
	Rational Rational::operator /(Rational &rhs);
	void convertDouble();
	Rational Rational::operator +(int x);
	Rational Rational::operator -(int x);
	Rational Rational::operator *(int x);
	Rational Rational::operator /(int x);

	Rational Rational::operator +=(Rational &rhs);
	Rational Rational::operator -=(Rational &rhs);
	Rational Rational::operator *=(Rational &rhs);
	Rational Rational::operator /=(Rational &rhs);

	Rational Rational::operator +=(int x);
	Rational Rational::operator -=(int x);
	Rational Rational::operator *=(int x);
	Rational Rational::operator /=(int x);
};
#endif