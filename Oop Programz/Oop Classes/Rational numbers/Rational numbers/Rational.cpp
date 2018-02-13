#include"Rational.h"
#include<iostream>
using namespace std;
 void Rational::inputRational(Rational &a)
 {
	 cout<<"Enter Numerator";
	 cin>>a.numerator;
	 cout<<"Enter denominatot:";
	 cin>>a.denominator;
	 cout<<endl;
 }
 void Rational::printRational(Rational &a)
 {
	 cout<<"Entered Rational number is :";
	 cout<<a.numerator;
	 cout<<"/";
	 cout<<a.denominator;
	 cout<<endl;
 }
 Rational Rational::addRational (Rational  a, Rational b)
 {
	 Rational add;
	 add.numerator=(a.numerator*b.denominator)+ (b.numerator*a.denominator);
	 add.denominator=a.denominator*b.denominator;
	 add= reduce (add);
	 return add;
 }
 Rational Rational::diffRational(Rational a, Rational b)
 {
	 Rational diff;
	 diff.numerator=(a.numerator*b.denominator)-(b.numerator*a.denominator);
	 diff.denominator=a.denominator*b.denominator;
	 diff= reduce (diff);
	 return diff;
 }
 Rational Rational::divRational( Rational a, Rational b)
 {
	 Rational div;
	 div.numerator=a.numerator*b.denominator;
	 div.denominator=a.denominator*b.numerator;
	 div=reduce (div);
	 return div;
 }
 Rational Rational::reduce (Rational & a)
 {
	 /*int small;
	 if (a.numerator<a.denominator)
	 {
		 small=a.numerator;
		 
	 }
	 else if  (a.numerator>a.denominator)
	 {
		 small=a.denominator;

	 }
	 else 
	 {
		 a.numerator=1;
		 a.denominator=1;
		 return a;
	 }*/
	 if(a.denominator==0)
	 {
		cout<<"Undefined..........."<<endl;
		exit(0);
	 }
	 for (int i=2; i<a.denominator; i++)
	 {
		 if (a.numerator%i==0 && a.denominator%i==0)
		 {
			 a.numerator=a.numerator/i;
			 a.denominator=a.denominator/i;
			 i=1;
		 }
	 }
	 return a;
 }