#include<iostream>
using namespace std;
#include"course.h"
int main()
{

	Course c1("Computer", "Ali", 345, 5, 50, 1);
	Course c2("Science", "Ahmad", 456, 6, 23, 2);
	Course c3("Islamiat", "Ahsan", 345, 7, 78, 3);
	c1.display();
	c2.display();
	c3.display();
}