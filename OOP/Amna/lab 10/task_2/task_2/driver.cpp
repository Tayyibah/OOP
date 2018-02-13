#include<iostream>
using namespace std;
#include "myList.h"
int main()
{
	MyList ar0, ar1(4); 
 
	ar1.display();
	MyList ar2, ar3;	
	ar2 = ar1 ^ 0.5;
	ar2.display();
	ar3 = ar2 ^ 3; 
	ar3.display();
	ar0 = ar1;
	ar0.display();

}