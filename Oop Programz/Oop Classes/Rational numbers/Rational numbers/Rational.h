#ifndef RATIONAL_H
#define RATIONAL_H
class Rational
{
private:
	int numerator;
	int denominator;
public:
	void inputRational( Rational & );
	void printRational( Rational & );
	Rational addRational( Rational , Rational );
	Rational diffRational( Rational , Rational );
	Rational divRational( Rational , Rational );
	Rational reduce( Rational & ); 
};
#endif
