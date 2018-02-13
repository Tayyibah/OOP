#include<iostream>
#include"Matrix.h"
#include"Array.h"
using namespace std;
int main()
{
	Matrix m(2,3);
	for ( int i=0; i<2; i++)
	{
		for ( int j=0; j<3; j++)
		{
			m.at(i,j)=i+j;
		}
	}
	for ( int i=0; i<2; i++)
	{
		for ( int j=0; j<3; j++)
		{
			cout<<m.at(i,j)<<endl;
		}
	}
	return 1;
}