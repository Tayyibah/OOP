#include<iostream>
using namespace std;
#include"Rational.h"
 int main()
 {
	 Rational r;
	 Rational a;
	 Rational b;
	 Rational add, diff, div,red;

	 cout<<"Enter fraction 1\n";
	 r.inputRational (a);
	 cout<<"enter fraction 2 \n:";
	 r.inputRational (b);
	 r.printRational (a);
	 r.printRational(b);
	 cout<<"Sum of Rational number are \n";
	 add=r.addRational(a,b);
	 r.printRational(add);
	 cout<<"differnce of to rational numbers are \n";
	 diff=r.diffRational (a,b);
	 r.printRational(diff);
	 cout<<"division of two rational numbers are \n";
	 div=r.divRational (a,b);
	 r.printRational(div);
	 cout<<"reduced fraction 1 is \n";
	 red= r.reduce(a);
	 r.printRational (red);
	 cout<<"Reduced fraction 2 is \n";
	 red=r.reduce (b);
	 r.printRational(red);
	 return 0;
 }