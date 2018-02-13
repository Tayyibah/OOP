#include<iostream>
using namespace std;

int getMinIndex(int[],int);

int main()
	{
		int minIndex;
		const int SIZE=8;
		int arr[SIZE]={90,2,9,78,2,6,78,90};

		minIndex = getMinIndex(arr,8);
		cout<<"The minimum value is "<<minIndex<<endl;
		return 0;
	}

int getMinIndex(int arr[],int SIZE)
{
	int minIndex=0;
	for(int i=0;i<SIZE;i++)
	{
		if(arr[i]<=arr[minIndex])
			minIndex=i;
	}
	return minIndex;
}