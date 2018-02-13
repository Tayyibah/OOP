#include<iostream>
using namespace std;
template<class T,class T1>
void findLargest(T &num1,T1 &num2)
{
	if(num1<num2)
	{
		cout<<" number1 is les than number1"<<endl;
	}
	else if(num1=num2)
	{
		cout<<" number1 is greater than number1"<<endl;
	}
	else if(num1=num2)
	{
		cout<<"Both numbers are equal"<<endl;
	}
}

int main()
{
	int num;
	double num1;
	cout<<"Enter a 1st no.";
	cin>>num;
	cout<<"Enter a 2nd no.";
	cin>>num1;
	findLargest(num,num1);
	return 0;
}
