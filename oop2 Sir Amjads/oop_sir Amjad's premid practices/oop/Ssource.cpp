//#include <iostream>
//#include "Circle.h"
//#include "Tmp.h"
//#include "Rectangle.h"
//#include "Building.h"
//#include "Student.h"
//#include "Room.h"
//using namespace std;
//
//int& func()
//{
//	int x1 = 7;
//	return x1;
//}
//int& func1()
//{
//	static int x1 = 7;
//	return x1;
//}
//int onesCompl(int &num)
//{
//	return ~num;
//}
//int twosCompl(int &num)
//{
//	return ~num + 1;
//}
//int twosCompl1(int &num)
//{
//	return ~(num + 1);
//}
//void swap(int a, int b)
//{
//	a = a^b;//12
//	b = a^b;//10
//	a = a^b;//6
//
//}
//bool isOdd(int a)
//{
//	if (1 & a)
//		return false;
//	return true;
//}
//bool isPowOf2(int a)
//{
//	if ((a&(a - 1)) == 0)
//		return true;
//	return false;
//}
//// Returns a number that has all bits same as n
//// except the k'th bit which is made 0
//int turnOffK(int n, int k)
//{
//	// k must be greater than 0
//	if (k <= 0) return n;
//
//	// Do & of n with a number with all set bits except
//	// the k'th bit
//	return (n & ~(1 << (k - 1)));
//}
//
//int main()
//{
//		/*Set bit : num = num | (1 << i)
//
//		Clear bit : num = num & ~(1 << i)
//
//		Toggle bit : num = num ^ (1 << i)
//
//		Get bit : num = (num >> i) & 1*/
//	int num = 12;
//	int i = 1;
//	num = num | (1 << i);//14
//	num = 12;
//	 i = 1;
//	 num = num & ~(1 << i);//12
//	 num = 12;
//	 i = 1;
//	 num = num ^ (1 << i);//14
//	 num = 12;
//	 i = 2;
//	 num = num ^ (1 << i);//8 if -1 14
//	 num = 12;
//	 i = 3;
//	 num = num ^ (1 << i);//4
//	 num = 12;
//	 i = 1;
//	 num = (num >> i) & 1;//0
//	 num = 12;
//	 i = 3;
//	 num = (num >> i) & 1;//1
//	int n = 15;
//	int k = 4;
//	cout << turnOffK(n, k);
//	int a = 10, b = 6; 
//	swap(a, b);
//	cout << isPowOf2(a) << endl;
//	cout << isOdd(a) << endl;
//	cout << isPowOf2(a) << endl;
//	cout << isPowOf2(16) << endl;
//	cout << isPowOf2(4) << endl;
//	cout << isPowOf2(a) << endl;
//	cout << (a&b) << endl;
//	cout << (a | b) << endl;
//	cout << (unsigned int)~a << endl;//4294967285
//	cout << (signed int)~a << endl;//-11
//	cout << ~a << endl;//-11
//	cout << (a^b) << endl;
//	cout << (a << 1) << endl;
//	cout << "sssssssssssss"<<(a >>1) << endl;
//	cout << (b >> 2) << endl;
//	cout << (func() = 20);
//	cout << func() << endl;//output=7
//	cout << (func1() = 20);
//	cout << func1() << endl;//output=20
//	cout << onesCompl(a) << endl;
//	cout << twosCompl(a) << endl;
//	cout << twosCompl1(a) << endl;
//	//int height = 3;
//	//int width = 3;
//	//int depth = 3;
//	//int ***arr = new int **[height];
//	//for (int i = 0; i < height; i++)
//	//{
//	//	arr[i] = new int *[width];
//	//	for (int j = 0; j < width; j++)
//	//		arr[i][j] = new int[depth];
//	//}
//	////Dynamically deallocate a 3D array
//
//	//for (int i = 0; i < height; i++)
//	//{
//	//	for (int j = 0; j < width; j++)
//	//	{
//	//		delete[] arr[i][j];
//	//		arr[i][j] = 0;
//	//	
//	//	}
//	//	delete[] arr[i];
//	//	arr[i] = 0;
//	//}
//	//delete[] arr;
//	//arr = 0;
//	return 0;
//}