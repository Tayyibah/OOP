#include<iostream>
using namespace std;
#include "Rectangle.h"
int main()
{
	Rectangle r;
	try
	{
		r.setwidth(-2) ;
		r.setlenght(4) ;
		cout<<"width is "<<r.getwidth()<<endl ;
		cout<<"lenght is "<<r.getlenght()<<endl ;
		cout<<"Area is "<<r.getArea()<<endl ;
	}
	catch(Rectangle::negative)
	{
		cout<<"Error! Area can't be negative"<<endl;
	}
	return 0;
}