#include<fstream>
#ifndef COMPSTUDENT_H
#define COMPSTUDENT_H
#include"Student.h"
class Computer :public Student
{
private:
	double marks[3];
public:
	Computer(int r, string n);
	virtual void readMarks(ifstream& fin);
	virtual void calculateMarks();
	virtual void writeRecord(ofstream& fout);
};
#endif