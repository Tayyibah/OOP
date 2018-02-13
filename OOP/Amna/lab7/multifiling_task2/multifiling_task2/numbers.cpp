#include"numbers.h"
#include<iostream>
using namespace std;
Numbers::Numbers(int size)
{
	numbers = new float[size];
}
Numbers :: ~Numbers()
{
	cout << "Destructor is called....";
	delete []numbers;
}
void Numbers::store(int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "\nNumbers of array["<<i+1<<"] are:";
		cin >> numbers[i];
	}
}
void Numbers::retrieve()
{
	int location;
	cout << "Enter location number to retrieve array element:";
	cin >> location;
	if (location >= 0)
	{
		cout << "\nNumber at Numbers[" << location<<"] is:"<<numbers[location]<<endl;
	}
}
float Numbers::maxVal(int size)
{
	float check = numbers[0];
	for (int i = 0; i < size; i++)
	{
		if (check < numbers[i])
			check = numbers[i];
	}
	float maxNo = check;
	cout << "MAXIMUM value is:"<<maxNo;
	cout << endl;
	return maxNo;
}
float Numbers::minVal(int size)
{
	float check = numbers[0];
	for (int i = 0; i < size; i++)
	{
		if (check > numbers[i])
			check = numbers[i];
	}
	float minNo = check;
	cout << "MINIMUM value is:" << minNo;
	cout << endl;
	return minNo;
}
float Numbers::calAvg(int size)
{
	float s=0;
	for (int i = 0; i < size; i++)
	{
		s = s + numbers[i];
	}
	float avg = s / size;
	cout << "AVERAGE of given numbers in array is:"<<avg<<endl;
	return avg;
}