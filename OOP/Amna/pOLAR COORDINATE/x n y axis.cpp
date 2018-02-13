//#include<iostream>
//using namespace std;
//class Move
//{
//private:
//	double x;
//	double y;
//public:
//	void setX(double a)
//	{
//	cout<<"enter value of a:";
//	cin>>a;
//	if(a<0)
//	{
//		cout<<"enter positive value for x:";
//		cin>>a;
//	}
//	x=a;
//	}
//	void setY(double b)
//	{
//	cout<<"enter value of b:";
//	cin>>b;
//	if(b<0)
//	{
//		cout<<"enter positive value for b:";
//		cin>>b;
//	}
//	y=b;
//	}
//	void showMove()
//	{
//	cout<<"current value of x is:";
//	cout<<x<<endl;
//	cout<<"current value of y is:";
//	cout<<y<<endl;
//	}
//	void add(int a,int b)
//	{
//	cout<<"enter value of distance that is to be added along x-axis:";
//	cin>>a;
//	cout<<"enter value of distance that is to be added along y-axis:";
//	cin>>b;
//	if(a<0)
//	{
//		cout<<"enter positive value of distance that is to be added along x-axis:";
//	cin>>a;
//	}
//	else if(b<0)
//	{
//		cout<<"enter positive value of distance that is to be added along y-axis:";
//	cin>>b;
//	}
//	double p=x+a;
//	double q=y+b;
//	cout<<"added distance along x-axis is:"<<p<<endl;
//	cout<<"added distance along y-axis is:"<<q<<endl;
//	}
//	void reset(double a=0,double b=0)
//	{
//		a=x;
//		b=y;
//		cout<<"value along x-axis before moving object is:"<<a<<endl;
//		cout<<"value along y-axis before moving object is:"<<b<<endl;
//	}
//
//};
//void main ()
//{
//	Move obj1;
//	Move obj2;
//	obj1.setX(0);
//	obj1.setY(0);
//
//	obj2.setX(1);
//	obj2.setY(1);
//	cout << "current position is:" << endl << "object 1" <<endl;
//	obj1.showMove();
//	cout<< "object 2" <<endl;
//	obj2.showMove();
//	cout << "enter distances you want to move along x and y axis for object 1"<< endl;
//	int a,b;
//	cin >> a;
//	cin >> b;
//	obj1.add(a,b);
//       obj2.add(a,b);
//	cout << "current position is:" << endl << "object 1" <<endl;
//	obj1.showMove();
//	cout<< "object 2" <<endl;
//	obj2.showMove();
//
//
//}
