#ifndef COURSE_H
#define COURSE_H
#include"teacher.h"
#include"classroom.h"
class Course
{
	char title[20];
	Teacher *teacherData;
	Classroom *roomData;
public:
	Course(char *cname,char tname[],int ext,int r,int c,int index);
	void display();
	Course( Course & c,int index);
	void operator =(Course & rhs);
};
#endif