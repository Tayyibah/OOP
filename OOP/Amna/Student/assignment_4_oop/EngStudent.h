#include<fstream>
#ifndef ENGSTUDENT_H
#define ENGSTUDENT_H
#include"Student.h"
class English:public Student
{
private:

	double marks[4];
public:
	English();
	English(int r,string n);
	virtual void readMarks(ifstream& fin);
	virtual void calculateMarks();
	virtual void writeRecord(ofstream& fout);
};
#endif