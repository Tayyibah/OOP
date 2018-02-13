#include<iostream>
using namespace std;
template<class T>
void swapping(T &num1,T &num2)
{
	T swap;
	swap=num1;
	num1=num2;
	num2=swap;
}

int main()
{
	int num,num1;
	cout<<"Enter a 1st no.";
	cin>>num;
	cout<<"Enter a 2nd no.";
	cin>>num1;
	swapping(num,num1);
	cout<<"num1 is "<<num<<endl;
	cout<<"num2 is "<<num1<<endl;

	
	char ch1,ch2;
	cout<<"Enter a 1st ch.";
	cin>>ch1;
	cout<<"Enter a 2nd ch.";
	cin>>ch2;
	swapping(ch1,ch2);
	cout<<"num1 is "<<ch1<<endl;
	cout<<"num2 is "<<ch2<<endl;
	return 0;
}
