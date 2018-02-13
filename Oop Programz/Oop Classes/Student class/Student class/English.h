#ifndef ENGLISH_H
#define ENGLISH_H
#include"fstream"
#include<iostream>
using namespace std;
#include"Student.h"
class English:public Student
{
protected:
	double Attendance;// = 10%, 
	double Report;// = 30%,
	double Midterm ;//= 30%, 
	double FinalExam;// = 30% 
	double marks[4];
public:
	English();
	English(int r, char* n);
	virtual void readMarks(ifstream & fin);
	virtual void calculateMarks();
	virtual void writeRecord(ofstream & fout);
};
#endif

