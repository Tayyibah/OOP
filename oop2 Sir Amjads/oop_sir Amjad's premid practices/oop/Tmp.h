#ifndef Tmp_H
#define Tmp_H

#include <string>

using namespace std; 
class Tmp
{
	int a, b;
public:
	Tmp()
	{
		a = b = 0;
	}
	/*Tmp(int a = 0, int b = 0)
	{
		this->a = a;
		this->b = b;
	}*/
	Tmp(int a , int b )
	{
		this->a = a;
		this->b = b;
	}
};

#endif // !Tmp_H

