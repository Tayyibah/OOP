//#include <iostream>
//#include <iomanip>
//#include <string>
//
//using namespace std;
//
//// Base class
//class Shape {
//
//protected:
//	int width;
//	int height;
//
//public:
//	// pure virtual function providing interface framework.
//	virtual int getArea() = 0;
//	void setWidth(int w) {
//		width = w;
//	}
//
//	void setHeight(int h) {
//		height = h;
//	}
//};
//
//// Derived classes
//class Rectangle : public Shape {
//public:
//	int getArea() {
//		return (width * height);
//	}
//};
//
//class Triangle : public Shape {
//public:
//	int getArea() {
//		return (width * height) / 2;
//	}
//};
//
//
//class Person {
//	// Data members of person 
//public:
//	Person(int x) { cout << "Person::Person(int ) called" << endl; }
//	Person() { cout << "Person::Person() called" << endl; }
//	~Person() { cout << "Person::~Person() called" << endl; }
//};
//
//class Faculty : virtual public Person {
//	// data members of Faculty
//public:
//	Faculty(int x) : Person(x) {
//		cout << "Faculty::Faculty(int ) called" << endl;
//	}
//	~Faculty() { cout << "Faculty::~Faculty() called" << endl; }
//};
//
//class Student : virtual public Person {
//	// data members of Student
//public:
//	Student(int x) : Person(x) {
//		cout << "Student::Student(int ) called" << endl;
//	}
//	~Student() { cout << "Student::~Student() called" << endl; }
//};
//
//class TA : public Faculty, public Student {
//public:
//	TA(int x) : Student(x), Faculty(x), Person(x) {
//		cout << "TA::TA(int ) called" << endl;
//	}
//	~TA() { cout << "TA::~TA() called" << endl; }
//};
//
////int square(int number)
////{
////	return number * number;
////}
////double square(double number)
////{
////	return number * number;
////}
//
//template <class T>
//T square(T number)
//{
//	return number * number;
//}
//int Sum(int val, int items)
//{
//	if (items == 0) return 0;
//	cin >> val;
//	val = val + Sum(val, items - 1);
//	return val;
//}
//int main(void) {
//	int i = 10, ir;
//	double d = 100.10, dr;
//	ir = square(i);
//	dr = square(d);
//	cout << "Square of int is " << ir << endl;
//	cout << "Square of double is " << dr << endl;
//
//	cout << "\n\n\n";
//
//	TA ta1(30);
//
//	Rectangle Rect;
//	Triangle  Tri;
//
//	Rect.setWidth(5);
//	Rect.setHeight(7);
//
//	Shape *ptr = &Rect;
//	// Print the area of the object.
//	cout << "Total Rectangle area: " << ptr->getArea() << endl;
//
//	ptr = &Tri;
//	Tri.setWidth(5);
//	Tri.setHeight(7);
//
//	// Print the area of the object.
//	cout << "Total Triangle area: " << ptr->getArea() << endl;
//	int sum = 0, items = 0;
//	cout << "Enter number of items: ";
//	cin >> items;
//	cout << "\nTotal Sum: " << Sum(sum, items) << endl << endl;
//	ta1.~TA();
//	system("Pause");
//	return 0;
//}