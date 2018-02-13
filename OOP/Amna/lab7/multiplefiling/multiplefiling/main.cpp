#include "Student.h"
#include<iostream>
#include"Student.h"
#include<fstream>
using namespace std;
void main()
{
	//ofstream fout;
	//fout.open("studentInfo", ios::out | ios::app);
	//ifstream fin;
	//fin.open("studentInfo");
	Student s1(1,"Ali",5,10);
		Student s2(s1);
	Student s[5];
	for (int i = 0; i < 5; i++)
	{
		s[i].generateOneStudent(s[i]);
	}
	s2.generateOneStudent( s2);
	s2.displayDetails();
}
