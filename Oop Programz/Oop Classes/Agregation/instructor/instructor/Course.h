#ifndef COURSE_H
#define COURSE_H
#include"instructer.h"
#include"Textbook.h"
#include "CString.h"
class Course
{
private:
	CString courseName;
	instructer instructer;
	Textbook textbook;
public:
	Course();
	Course(CString crseNam,CString title,CString author,CString publisher,CString firstName,CString lastName,CString officeNumber);
	void print()const;
};
#endif