#include<iostream>
#include"Singleton.h"
static Singleton::Singleton * CreateObject()
	{
		if (!ptr)
		{
			ptr = new Singleton;
		}
		return ptr;		
	}
static void Singleton::freeObject()
	{
		if (ptr)
		{
			delete ptr;
			ptr=0;
		}
	}
};
Singleton * Singleton::ptr=0;