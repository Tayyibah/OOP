//// ConsoleApplication1.cpp : Defines the entry point for the console application.
////
////Assalam o Alikum Dear students attached is today class source code.
////Your asg 2 and quiz 2 marks are uploaded.You have one week time that is 14 Dec in case of any query to consult otherwise nothing will be dealt after deadline
//
//#include <iostream>
//
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point() { x = y = 0; }
//	Point(int x, int y)
//	{
//		this->x = x;
//		this->y = y;
//	}
//	void print()
//	{
//		cout << "(" << x << "," << y << ")" << endl;
//	}
//	Point operator++() /* Prefix Operator */
//	{
//		++x;
//		++y;
//		return (*this);
//	}
//	Point operator++(int) /* Postfix Operator */
//	{
//		Point tmp(x, y);
//		x++;
//		y++;
//		return tmp;
//	}
//	void input()
//	{
//		cout << "Enter x: ";
//		cin >> x;
//		cout << "Enter y: ";
//		cin >> y;
//	}
//
//	operator int()
//	{
//		return x + y;
//	}
//	operator double()
//	{
//		return double(x + y);
//	}
//	friend ostream& operator<< (ostream &, const Point &);
//	friend istream& operator>> (istream &, Point &);
//};
//
//ostream& operator<< (ostream &cout, const Point &obj)
//{
//	cout << "(" << obj.x << "," << obj.y << ")" << endl;
//	return cout;
//}
//
//istream& operator>> (istream &cin, Point &obj)
//{
//	cout << "Enter x: ";
//	cin >> obj.x;
//	cout << "Enter y: ";
//	cin >> obj.y;
//	return cin;
//}
//
//class Array
//{
//	int *arr, size;
//public:
//	Array() { arr = NULL; size = 0; }
//	Array(int size)
//	{
//		this->size = size;
//		this->arr = new int[size];
//		for (int i = 0; i < size; i++)	arr[i] = i + 1;
//	}
//	~Array() { delete[]arr; arr = NULL; }
//	int& operator[](const int &idx)
//	{
//		if (idx >= 0 && idx < size) return arr[idx];
//		cout << "Subscript Out of Range" << endl;
//	}
//	operator Point()
//	{
//		Point tmp(arr[0], arr[size - 1]);
//		return tmp;
//	}
//};
//
//int main()
//{
//	Array ptr(5);
//	Point p = ptr;
//	cout << ptr[2] << endl;
//	cout << p;
//	Array arr(10);
//	Point p1(4, 5), p2 = arr;
//	int i = p1;
//	double d = p1;
//	cout << p2 << endl;
//	cout << i << endl;
//	cout << d << endl;
//	return 0;
//}