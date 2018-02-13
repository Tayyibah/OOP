#ifndef Student_H
#define Student_H

#include <string>

using namespace std;

class Student 
{
	char *name;
	int rollno;
	double gpa;
public:
private:
	double cgpa;
	Student() {
		name = NULL;
		rollno = 0;
		gpa = 0.0;
	}

};

#endif // !Student _H


