#include<iostream>
using namespace std;
class Rectangle
{
public:
	float length;
	float width;
	void setWidth(float w)
	{
		if(w>0)
		{
			width=w;
		}
	}
	void setLength(float l)
	{
		if(l>0)
		{
			length=l;
		}
	}
	float getWidth()
	{
		return width;
	}
	float getLength()
	{
		return length;
	}
	float calcArea()
	{
		float A=width*length;
		return A;
	}
	float calcPerimeter()
	{
		float P=2*length+width;
		return P;
	}
};

int main()
{
	Rectangle r;
	r.setWidth(2);
	r.setLength(3);
	cout<<r.getWidth()<<endl;
	cout<<r.getLength()<<endl;
	cout<<r.calcPerimeter()<<endl;
	cout<<r.calcArea()<<endl;

	return 0;
}