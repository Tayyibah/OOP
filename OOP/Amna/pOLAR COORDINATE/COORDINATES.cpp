#include<iostream>
#include<math.h>
using namespace std;
class Polar
{
private:
	double radius;
	double angle;
public:
		Polar ();
		Polar (double r, double a);
		Polar add(const Polar &p);
		void display();
};
Polar :: Polar()
{
 radius=0.0;
 angle=0.0;
}
Polar :: Polar(double r,double a)
{
	cout<<"Enter radius:";
	while(r<=0)
	{
	cin>>r;
	}
radius=r;
	cout<<"\nEnter angle:";
	if(a<0)
		angle=a+360;
	else if(a>360)
		angle=a-360;
	else
		angle=a;
}
Polar Polar :: add(  int x1,int y1,const Polar &p)
{
	int x2,y2,s1,s2;
	x2=radius*cos(angle);
	y2=radius*sin(angle);
	int x,y;
	x=x1+x2;
	y=y1+y2;
	s1=x*x;
	s2=y*y;
	cout<<"Rectangular coordinates after addition are:("<<x<<","<<y<<")";
	radius=sqrt (s1+s2);
	angle=atan (y/x);
	return *tnis;
}
void  Polar :: display()
{
	cout<<"Polar values are"<<radius<<","<<angle;
}
void main ()
{
	int x,y;
	double angle,radius;
	cout<<"\\\\for default values\\\\\n";
	cout<<"Enter radius:";
	cin>>radius;
	cout<<"\nEnter angle:";
	cin>>angle;
	Polar p1(radius,angle);
	Polar p2(p1);
	cout<<"\\\\values for new object\\\\\n";
	cout<<"Enter radius:";
	cin>>radius;
	cout<<"\nEnter angle:";
	cin>>angle;
	x=radius*cos(angle);
	y=radius*sin(angle);
	Polar p3=p1.add(x,y,p2);
	p1.display();
}