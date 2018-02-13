#include<iostream>
using namespace std;
#include"JaggedArray.h"
#include"Array.h"

int main()
{
	JaggedArray ja(3,3,4,2);
	for ( int i=0; i<3; i++)
	{
		for (int j=0; j<ja.getColumn(i); j++)
		{
			ja.at(i, j) = i+j;
		}
	}
	for ( int i=0; i<3; i++)
	{
		for (int j=0; j<ja.getColumn(i); j++)
		{
			cout<<ja.at(i, j)<<" ";
		}
		cout<<"\n";
	}
	return 1;
}