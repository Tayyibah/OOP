#include<iostream>
using namespace std;
#include"CompStudent.h"
#include"Student.h"

Computer::Computer(int r, string n) : Student(r, n)
{}
void Computer::readMarks(ifstream& fin)
{
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
	percentage = totalMarks / 300 * 100;
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
	fout << rollNo << "\t" << name << " \t" << marks[0] << "\t" << marks[1] << "\t" << marks[2] << "\t" << totalMarks << "\t\t" << grade << endl;
}