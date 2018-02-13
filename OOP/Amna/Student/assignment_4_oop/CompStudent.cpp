#include<iostream>
using namespace std;
#include"CompStudent.h"
#include"Student.h"

Computer::Computer() :Student()
{
}
Computer::Computer(int r, string n) : Student(r, n)
{}
void Computer::readMarks(ifstream& fin)
{
	fin >> rollNo;
	while ("\n")
	{
		fin >> name;
	}
	for (int j = 0; j < 3; j++)
	{
		fin >> marks[j];
	}
}
void Computer::calculateMarks()
{
	double percentage;
	totalMarks = 0;
	for (int i = 0; i < 3; i++)
	{
		totalMarks = totalMarks + marks[i];
	}
	percentage = totalMarks / 300*100;
	if (percentage >= 90)
	{
		grade = 'A';
	}
	else if (percentage >= 80 && percentage <= 89)
	{
		grade = 'B';
	}
	else if (percentage >= 70 && percentage <= 79)
	{
		grade = 'C';
	}
	else if (percentage >= 60 && percentage <= 69)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}
}
void Computer::writeRecord(ofstream& fout)
{
	fout << rollNo << " " << name << " " << marks[0] << " " << marks[1] << " " << marks[2] << " " << totalMarks << "  " << grade << endl;
}