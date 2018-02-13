#include<iostream>
using namespace std;
#include"Basket.h"
#include"Apple.h"
int main()
{
	Basket b1(1);
	Basket b2(2);
	Basket b3(3);
	Basket b4(4);
	Basket b5(5);
	Basket b6(6);
	Basket b7(7);
	Basket b8(8);
	Basket b9(9);
	Basket b10(10);
	Apple a(b1);
	cout<<a.whichColorBasket();
	return 0;
}
