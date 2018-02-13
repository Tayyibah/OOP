#include<iostream>
using namespace std;
template<class T>
void findLargest(T &num1,T &num2)
{
	if(num1<num2)
	{
		cout<<" number1 is les than number1"<<endl;
	}
	else if(num1=num2)7
		8
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
	int num,num1;
	cout<<"Enter a 1st no.";
	cin>>num;
	cout<<"Enter a 2nd no.";
	cin>>num1;
	findLargest(num,num1);

	
	char ch1,ch2;
	cout<<"Enter a 1st ch.";
	cin>>ch1;
	cout<<"Enter a 2nd ch.";
	cin>>ch2;
	findLargest(ch1,ch2);
	return 0;
}
