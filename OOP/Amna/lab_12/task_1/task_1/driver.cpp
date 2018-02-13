#include <iostream>
using namespace std;
#include"bankAccount.h"
#include"check.h"
#include"saving.h"

int main()
{
	saving s(32,50000,50,2000,500,60);
	s.printSavingInfo();
	s.postInterest();
	s.withDrawl(23000);
	return 0;
}