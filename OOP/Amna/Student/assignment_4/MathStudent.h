#ifndef MATHSTUDENT_H
#define MATHSTUDENT_H
#include"Student.h"
#include<fstream>
class Maths :public Student
{
private:
	double quizes[5];
	double homeWork;
	double finalExam;
public:
	Maths(int r, string n);
	virtual void readMarks(ifstream& fin);
	virtual void calculateMarks();
	virtual void writeRecord(ofstream& fout);
};
#endif