#include<iostream>
using namespace std;
#include "Rectangle.h"
int main()
{
	Rectangle r;
	int width;
	int length;
	bool tryAgain=true;
	cout<<"Enter Width ";
	cin>>width;
	while(tryAgain)
	{
	
		try
		{
			r.setwidth(width) ;
			cout<<"width is "<<r.getwidth()<<endl ;
			tryAgain=false;
		}
		catch(Rectangle::negativeWidth)
		{
			cout<<"Error! Area is  negative bec of width"<<endl;
			cout<<"Enter +ve Width ";
			cin>>width;
		}
	}
	cout<<"Enter Length ";
	cin>>length;
	tryAgain=true;
	while(tryAgain)
	{
		try
		{
			r.setlenght(length) ;
			cout<<"lenght is "<<r.getlenght()<<endl ;
			tryAgain=false;
		}
		catch(Rectangle::negativeLenght)
		{
			cout<<"Error! Area is  negative bec of length"<<endl;
			cout<<"Enter +ve Length ";
			cin>>length;
		}
	}
	cout<<"Area is "<<r.getArea()<<endl ;
	return 0;
}