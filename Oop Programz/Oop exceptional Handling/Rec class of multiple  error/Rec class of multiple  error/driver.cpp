#include<iostream>
using namespace std;
#include "Rectangle.h"
int main()
{
	Rectangle r;
	try
	{
		r.setwidth(-2) ;
		r.setlenght(-4) ;
		cout<<"width is "<<r.getwidth()<<endl ;
		cout<<"lenght is "<<r.getlenght()<<endl ;
		cout<<"Area is "<<r.getArea()<<endl ;
	}
	catch(Rectangle::negativeWidth)
	{
		cout<<"Error! Area is  negative bec of width"<<endl;
	}
	
	catch(Rectangle::negativeLenght)
	{
		cout<<"Error! Area is  negative bec of length"<<endl;
	}
	return 0;
}