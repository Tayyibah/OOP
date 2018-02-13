#ifndef STUDENT_H
#define STUDENT_H
#include"string.h"
#include"date.h"
class student
{
	String name;
	date dob;
	int rollno;
public:
	student::student();
	student::student(char * n, int r,int d,int m,int y);
	student::student(student &s);
	void student::setData(char *n,int r,int d,int m,int y);
	char* student::getName();
	void student :: operator =(const student &s);
	student :: ~student();
};
#endif;