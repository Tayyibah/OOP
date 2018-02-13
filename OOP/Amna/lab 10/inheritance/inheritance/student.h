#ifndef STUDENT_H
#define STUDENT_H
#include"person.h"
class student : person
{
private:
	int rollno;
	int gpa;
public:
	student();
	student(char*n,int a,int r, int g);
	void setdata(char *n,int a,int r,int g);
	void print();
	~student();
};
#endif