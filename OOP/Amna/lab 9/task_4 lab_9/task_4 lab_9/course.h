#ifndef COURSE_H
#define COURSE_H
#include"teacher.h"
#include"classroom.h"
class Course
{
	char *title;
	Teacher *teacherData;
	Classroom *roomData;
public:
	Course(char *cname, char *tname, int ext, int r, int c, int index);
	void display();
	Course(const Course & c, int index);
	void operator =(Course & rhs);
	~Course();
};
#endif