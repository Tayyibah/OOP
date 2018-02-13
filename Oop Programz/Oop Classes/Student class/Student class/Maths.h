#ifndef MATHS_H
#define MATHS_H
#include"fstream"
#include<iostream>
using namespace std;
#include"Student.h"
class Maths:public Student
{
protected:
	double QuizAverage[5];// = 25%,
	double Homeworks;// = 25%, 
	double FinalExam;// = 50% 
	double marks[3];
public:
	Maths();
	Maths(int r, char* n);
	virtual void readMarks(ifstream & fin);
	virtual void calculateMarks();
	virtual void writeRecord(ofstream & fout);

};
#endif

