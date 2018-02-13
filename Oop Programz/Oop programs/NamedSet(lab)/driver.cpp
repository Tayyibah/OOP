#include<iostream>
using namespace std;
#include"NamedSet.h"
int main()
{
	Set s1(23);
	Set s2(3);
	Set s4(2);
	Set s3(9);
	Set s6(28);
	Set s5(98);
	NamedSet n("biba",8);
	NamedSet n4("biba",8);
	n. insert(8 );
	n. insert(9 );
	n. insert(0 );
	n. insert(8 );
	n. remove( 9 );
	n. print();
	n. getCardinality();
	n. isMember ( 8  );
	n. isSubset(n4 );
	return 0;
}