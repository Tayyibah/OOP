#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>
class Rectangle
{
private:
	double width;
	double lenght;
	double Area;
public:
	class negativeWidth
	{
	private:
		int value;
	public:
		negativeWidth(int val) 
		{
			value=val;
		}
		int getValue()
		{
			return value;
		}
	};
	class negativeLenght
	{
	private:
		int value;
	public:
		negativeLenght(int val) 
		{
			value=val;
		}
		int getValue()
		{
			return value;
		}
	};
	void setwidth( int w) ;
	void setlenght( int l) ;
	double getwidth() ;
	double getlenght( ) ;
	double getArea( ) ;
};
#endif
