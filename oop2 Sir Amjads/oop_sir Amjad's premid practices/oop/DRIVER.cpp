//#include <iostream>
//#include "Circle.h"
//#include "Tmp.h"
//#include "Rectangle.h"
//#include "Building.h"
//#include "Student.h"
//#include "Room.h"
//using namespace std;
//
//int x1 = 0;
//static int x2 = 0;
//int i;
//class Paper {
//public:
//	Paper() { cout << "Constructer" << endl; }
//	~Paper() { cout << "Destructer" << endl; }
//	Paper(const Paper &obj) { cout << "Copy Constructer" << endl; }
//	Paper operator= (const Paper &obj) { cout << "Overloaded assignment operator" << endl; return (*this); }
//	Paper operator+ (const Paper &obj) { cout << "Overloaded + operator" << endl; return (*this); }
//};
//
//class Matrix {
//	int **p, rows, cols;
//public:
//	Matrix(int r, int c) {
//		this->rows = r;
//		this->cols = c;
//		this->p = new int *[this->rows];
//		for (int i = 0; i<this->rows; i++)
//			p[i] = new int[this->cols];
//	}
//	~Matrix() {
//		for (int i = 0; i<this->rows; i++) {
//			delete[] p[i];
//			p[i] = NULL;
//		}
//		delete[] p;
//		p = NULL;
//	}
//	void setP(int **ptr) { this->p = ptr; }
//	int ** getP() const { return p; }
//};
//
//class A
//{
//public:
//	~A()
//	{
//		i = 10;
//	}
//};
//
//int& foo()
//{
//	i = 3;
//	A ob;
//	return i;
//}
//
//int test()
//{
//	static int x = 10;
//	x = 100;
//	x += 10;
//	return x;
//}
//bool isPowerOfTwo(int n)
//{
//	if (n == 0)
//		return 0;
//	while (n != 1)
//	{
//		if (n % 2 != 0)
//			return 0;
//		n = n / 2;
//	}
//	return 1;
//}
//bool ispowerOf2(int num) {
//	if (num == 0) return false;
//	// if a number 'num' is a power of 2 then
//	// (num & num-1) is 0
//	bool is_pow = !(num & (num - 1));
//	return is_pow;
//}
//int &funQuiz1()
//{
//	static int x = 10;
//	return x;
//}
//
//void funcQuiz1(int *p)
//{
//	int q = 10;
//	p = &q;
//}
//
//void fun()
//{
//	cout << "Simple function\n";
//}
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int Sub(int a, int b)
//{
//	return a - b;
//}
//
//int Mul(int a, int b)
//{
//	return a * b;
//}
//
//int Div(int a, int b)
//{
//	return a / b;
//}
//
//int compute(int(*fun)(int, int), int a, int b)
//{
//	return fun(a, b);
//}
//
////int &func1()//error 
////{
////	return 10;
////}
//int &func1()
//{
//	int y = 1;
//	return y;
//}
//int &func2(int x)
//{
//	x += 10;
//	return x;
//}
//int &func3()
//{
//	x2 +=10;
//	return x2;
//}
//int &func4()
//{
//	x1 +=10;
//	return x1;
//}
//int &func()
//{
//	int x1 = 7;
//	x1 +=10;
//	return x1;
//}
//
//void main()
//{
//	//Student S;
//	Matrix A(5, 9), B(10, 3);
//	A.setP(B.getP());
//
//	int y = 0;
//	int o = 0;
//	y = func1();//1
//	o=func1() = 2;//1//2
//	o=func1();//1
//	y = func1();//1
//
//	y = 0;
//	y = func2(y);//10
//	o = func2(y) = 2;//10//2
//	y = func2(y);//20
//
//	y = 0;
//	y = func3();//10
//	o = func3() = 2;//20//2
//	y = func3();//12
//	func3() = 2;//22
//	y = func3();//12
//
//	y = 0;
//	y = func4();//10
//	o = func4() = 2;//20//2
//	y = func4();//12
//
//	y = 0;
//	y = func();//17
//	o = func() = 2;//17
//	y = func();//17
//
//	Rectangle r1, r2(4, 5), r3, r4(7, 9);
//	Rectangle r5 = r1;
//	Rectangle r6(r2);
//	r5.print(r5);
//	r6.print(r6);
//	r6.print(r5);
//	r6.print(r6);
//	r5.print(r5);
//	r1.setWidth(10);
//	r1.setLength(10);
//	r3.setWidth(100);
//	r3.setLength(5);
//	r1.~Rectangle();
//	cout << "R1 = " << r1.getArea() << ", "
//	<< "R2 = " << r2.getArea() << ", "
//	<< "R3 = " << r3.getArea() << ", "
//	<< "R4 = " << r4.getArea() << "\n ";
//	cout << "\n\nTotal Instances of Rectangle = " << r1.getCount() << endl << endl;
//	
//	cout<<test();
//
//
//	Building b("pUCIT");
//	Room r11("Room #4"), r21("Room #10"), r31("Room #5");
//	b.addRoom(r11);
//	b.addRoom(r31);
//	b.print();
//
//
//	cout << "===================Function pointer Code=====================\r\n";
//
//	int(*math[4]) (int, int);
//	math[0] = add;
//	math[1] = Sub;
//	math[2] = Mul;
//	math[3] = Div;
//	for (int i = 0; i < 4; i++)	cout << compute(math[i], i, i + i) << endl;
//	cout << "\r\n===================Function pointer Code=====================\r\n";
//
//	int r = 20, *p;
//	p = &r;
//	//funcQuiz1(&p);//Error	5	error C2664: 'void funcQuiz1(int *)' : cannot convert argument 1 from 'int **' to 'int *'	
//	funcQuiz1(p);//correct
//	funQuiz1() = 30;
//	cout << funQuiz1(); //i = 30;
//	//cout << fun();//Error	6	error C2679: binary '<<' : no operator found which takes a right-hand operand of type 'void' (or there is no acceptable conversion)	
//
//
//	int height = 3;
//	int width = 3;
//	int depth = 3;
//	int ***arr = new int **[height]();
//	for (int i = 0; i < height; i++)
//	{
//		arr[i] = new int *[width]();
//		for (int  j = 0; j < width; j++)
//			arr[i][j] = new int[depth]();
//	}
//	//Dynamically deallocate a 3D array
//
//	for (int i = 0; i < height; i++)
//	{
//		for (int j = 0; j < width; j++)
//			delete[] arr[i][j];
//		delete[] arr[i];
//	}
//	delete[] arr;
//
//	int num = 32;
//	bool is_pow_2 = ispowerOf2(num);
//	if (is_pow_2)
//		cout << "\n" << num << " is power of 2";
//	else
//		cout << "\n" << num << " is not a power of 2";
//	cout << endl;
//	//Tmp obj;//Error	7	error C2668: 'Tmp::Tmp' : ambiguous call to overloaded function	
//	Tmp obj;//ye sai ho ga agr a=0,b=0 na likhen
//	cout << "i = " << foo() << endl;//i = 10;
//
//	//Student s;//Error	4	error C2248: 'Student::Student' : cannot access private member declared in class 'Student'	d:\visual studio\oop\oop\driver.cpp	239	1	oop
//	/*Matrix A(5, 9), B(10, 3);
//	A.setP(B.getP());*/
//	Paper Mid;
//	Paper OOP;
//	Paper difficult;
//	OOP = difficult;
//
//}