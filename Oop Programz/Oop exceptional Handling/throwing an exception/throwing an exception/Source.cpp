#include<iostream>
#include<string>
using namespace std;
double divide(int num,int den);
int main()
{
	try
	{
		cout<<"After div is "<<divide(3,0)<<endl;
	}
	catch(string exception)
	{
		cout<<exception<<endl;
	}
	return 0;
}
double divide(int num,int den)
{
	double div=0;
	if(den==0)
	{
		string exception="Error!Can't divide with 0 ";
		throw exception;
	}
	else
		div=num/den;
	return div;
}
