#include"fstream"
#include<iostream>
using namespace std;
#include <string>
#ifndef STUDENT_H
#define STUDENT_H
class Student
{
protected:
	int StudentRollNumber; 
	char* Studentname;
	double StudentTotalMarks; 
	char StudentGrade;
public:
	Student();
	Student(int r, char* n);
	void setStudentRollNumber(int rollNo); 
	void setStudentname(char * nam);
	void setStudentTotalMarks(double total); 
	void setStudentGrade(int percentage);
	int getStudentRollNumber(); 
	char* getStudentname();
	double getStudentTotalMarks(); 
	char getStudentGrade();

	virtual void readMarks(ifstream & fin) = 0;
	virtual void calculateMarks() = 0;
	virtual	void writeRecord(ofstream & fout) = 0;
};
#endif
