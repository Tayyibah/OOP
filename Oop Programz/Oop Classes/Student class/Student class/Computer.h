#ifndef COMPUTER_H
#define COMPUTER_H
#include"fstream"
#include<iostream>
using namespace std;
#include"Student.h"
class Computer:public Student
{
protected:
	double Project;// = 25%,
	double Midterm;// = 35%,
	double FinalExam;// = 40% 
	double marks[3];
public:
	Computer();
	Computer(int r, char* n);
	virtual void readMarks(ifstream & fin);
	virtual void calculateMarks();
	virtual void writeRecord(ofstream & fout);
};
#endif

