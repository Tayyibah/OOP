#include"rational.h"
#include<iostream>
using namespace std;
int main()
{
	int num, den;
	Rational r1(1, 1);
	Rational r2(1, 1);
	Rational r3(1, 1);
	cout << "enter value for numerator:";
	cin >> num;
	cout << "\nEnter value for denominator:";
	cin >> den;
	r1.Rational::setFraction(num, den);
	cout << "enter value for numerator:";
	cin >> num;
	cout << "\nEnter value for denominator:";
	cin >> den;
	r2.Rational::setFraction(num, den);
	r3 = r1 + r2;
	r3 = r1 - r2;
	r3 = r1*r2;
	r3 = r1 / r2;

	int x;
	cout << "\nEnter value of integer for addition: ";
	cin >> x;

	r3 = r1 + x;
	r3 = r1 - x;
	r3 = r1*x;
	r3 = r1 / x;

	return 0;
}