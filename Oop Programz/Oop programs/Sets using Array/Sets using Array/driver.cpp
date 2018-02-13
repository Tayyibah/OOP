#include <iostream>
using namespace std;
#include"Set.h"
#include"Array.h"
void main()
{
	Set s(6),s1(6);
	cout<<s.data.getCapacity();
	s.insert(11);
	s.insert(10);
	s.insert(15);
	s.insert(17);
	s.insert(19);
	s.insert(18);
	s1.insert(29);
	s1.insert(28);
	s1.insert(11);
	s1.insert(20);
	s1.insert(25);
	s1.insert(21);
	Set s3;
	s3=s.calcSymmetricDifference(s1);
	s3.print();

}