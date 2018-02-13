#include<iostream>
#include"Math.h"
#include"CString"
#include<iomanip>
#include<cstdlib>
float Math::calcPower(float base, float exponent)
{
	float ans=1;
	for(int i=0;i<exponent;i++)
	{
		ans=ans*base;
	}
	return ans;
}
int Math::calcGCD(int numerator, int denominator)
{
	 int small;
	 if (numerator<denominator)
	 {
		 small=numerator;
		 
	 }
	 else if  (numerator>denominator)
	 {
		 small=denominator;

	 }
	 else 
	 {
		 numerator=1;
		 denominator=1;
	 }
	 for (int i=2; i<small; i++)
	 {
		 if (numerator%i==0 && denominator%i==0)
		 {
			 numerator=numerator/i;
			 denominator=denominator/i;
			 i=1;
		 }
	 }
	 return small;
}
//static CString Math::toCString(int num)
//{
//	static_cast<char>(num);
//	return num;
//}
//static CString Math::toInteger(CString)
//{
//
//}