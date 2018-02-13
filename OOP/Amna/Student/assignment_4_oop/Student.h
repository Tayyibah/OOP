#include<string>
#include<fstream>
#ifndef STUDENT_H
#define STUDENT_H

class Student
{
protected:
	string name;
	int rollNo;
	double totalMarks;
	char grade;
public:
	Student();
	Student(int r,string n);
	virtual void readMarks(ifstream & fin) = 0;
	virtual void calculateMarks() = 0;
	virtual	void writeRecord(ofstream& fout) = 0;
};
#endif