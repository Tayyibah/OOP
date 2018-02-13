#include<iostream>
#include<iomanip>
using namespace std;

template<class T>
T squaring(T num)
{
	num=num*num;
	return num;
}

int main()
{
	int num;
	cout<<"Enter a no. whose square should be calculated ";
	cin>>num;
	cout<<"Sqaure of the no. is "<<squaring(num)<<endl;
	double num1;
	cout<<"Enter a no. whose square should be calculated ";
	cin>>num1;
	cout<<"Sqaure of the no. is "<<squaring(num1)<<endl;
	float num2;
	cout<<"Enter a no. whose square should be calculated ";
	cin>>num2;
	cout<<"Sqaure of the no. is "<<squaring(num2)<<endl;
	return 0;
}
