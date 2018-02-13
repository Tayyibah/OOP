#include<iostream>
#include"intArray.h"
using namespace std;
int main()
{
	const int size=10;
	intArray arr[size];
	for(int i=0;i<size;i++)
	{
		arr[i]=i*2;
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}
	return 0;
}

