#include<iostream>
using namespace std;
#include"collection.h"
#include"set.h"
int main()
{
	set s1;
	int  value;
	s1.setMember();
	s1.addMember(45,25);
	s1.searchMember(33);
	return 0;
}