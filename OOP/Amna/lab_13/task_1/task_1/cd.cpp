#include<iostream>
using namespace std;
#include"cd.h"

CD :: CD()
{
	capacity = 0;
}
CD :: CD(char *t, int c) : Media(t)
{
	if (c > 0)
	{
		capacity = c;
	}
}
void CD::display()
{

	cout << "The CD's contents ..." << endl;
	cout << "Title :" << title << endl;
	cout << "Capacity of CD is :" << capacity << endl;
}