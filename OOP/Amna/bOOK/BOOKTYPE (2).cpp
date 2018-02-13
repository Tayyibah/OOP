//#include<iostream>
//#include<math.h>
//using namespace std;
//class Polar
//{
//private:
//	double radius;
//	double angle;
//public:
//	Polar();
//	Polar(double r, double a);
//	Polar add(int x,int y,const Polar &p);
//	void display();
//};
//Polar::Polar()
//{
//	radius = 0.0;
//	angle = 0.0;
//}
//Polar::Polar(double r, double a)
//{
//	const double PI = 3.147;
//	if (r <= 0)
//	{
//		radius = r;
//	}
//	if (a<0)
//	{
//		a = a + 360;
//		angle = a*PI / 180;
//		cout << "Angel after conversion is:" << angle << endl;
//	}
//	else if (a>360)
//	{
//		a = a - 360;
//		angle = a*PI / 180;
//		cout << "Angel after conversion is:" << angle << endl;
//	}
//	else
//	{
//		angle = a*PI / 180;
//		cout << "Angel after conversion is:" << angle << endl;
//	}
//}
//Polar Polar::add(int x1, int y1, const Polar &p)
//{
//	int x2=0,y2=0 ,s1=0, s2=0;
//	x2 = radius*cos(angle);
//	y2 = radius*sin(angle);
//	cout << "Rectangular coordinates of ORIGINAL points are:(" << x2 << "," << y2 << ")" << endl;
//	int x, y;
//	x = x1 + x2;
//	y = y1 + y2;
//	s1 = x*x;
//	s2 = y*y;
//	cout << "Rectangular coordinates after addition are:(" << x << "," << y << ")"<<endl;
//	radius = sqrt(s1 + s2);
//	angle = atan(y / x);
//	return *this;
//}
//void  Polar::display()
//{
//	cout << "Polar values after addition of rectangular coordinates are:RADIUS=" << radius << ",ANGLE=" << angle << endl;
//}
//void main()
//{
//	int x, y;
//	double angle, radius;
//	cout << "\\\\for default values\\\\\n";
//	cout << "Enter radius:";
//	cin >> radius;
//	cout << "\nEnter angle:";
//	cin >> angle;
//	cout << endl;
//	Polar p1(radius, angle);
//	Polar p2(p1);
//	cout << "\\\\values for new object\\\\\n";
//	cout << "Enter radius:";
//	cin >> radius;
//	cout << "\nEnter angle:";
//	cin >> angle;
//	cout << endl;
//	x = radius*cos(angle);
//	y = radius*sin(angle);
//	cout << "Rectangular coordinates of new points are:("<<x<<","<<y<<")"<<endl;
//	Polar p3 = p1.add(x, y, p2);
//	p1.display();
//  cout<<endl;
//  p3.display();
//}