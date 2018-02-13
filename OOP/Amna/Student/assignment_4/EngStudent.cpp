#include<iostream>
using namespace std;
#include"EngStudent.h"
#include"Student.h"


English::English(int r, string n) :Student(r, n)
{}
void English::readMarks(ifstream& fin)
{
	for (int i = 0; i < 4; i++)
	{
		fin >> marks[i];
	}
}
void English::calculateMarks()
{
	double percentage;
	totalMarks = 0;
	for (int i = 0; i < 4; i++)
	{
		totalMarks = totalMarks + marks[i];
	}
	percentage = totalMarks / 400 * 100;
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
void English::writeRecord(ofstream& fout)
{
	fout << rollNo << "\t" << name << "\t" << marks[0] << "\t" << marks[1] << "\t" << marks[2] << "\t" << marks[3] << "\t" << totalMarks << "\t\t" << grade << endl;

}