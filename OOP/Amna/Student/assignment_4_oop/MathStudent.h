#ifndef MATHSTUDENT_H
#define MATHSTUDENT_H
#include"Student.h"
#include<fstream>
class Maths :public Student
{
private:
	double maths[7];
	double Quiztotal;
public:
	Maths();
	Maths(int r, string n);
	virtual void readMarks(ifstream& fin);
	virtual void calculateMarks();
	virtual void writeRecord(ofstream& fout);
};
#endif