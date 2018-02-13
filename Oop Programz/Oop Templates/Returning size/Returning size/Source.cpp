#include<iostream>
using namespace std;
template<class T,class U>
int findLargest(T &num1,U &num2)
{
	if(num1<num2)
	{
		cout<<"num2 is largest"<<endl;
		return sizeof(num2);
	}
	else 
	{
		cout<<"num1 is largest"<<endl;
		return sizeof(num1);
	}
}

int main()
{
	int num1=1;
	float num2=2;
	double num3=3;
	char num4=4;
	findLargest(num1,num2);
	findLargest(num2,num3);
	findLargest(num3,num4);
	findLargest(num1,num4);
	return 0;
}
