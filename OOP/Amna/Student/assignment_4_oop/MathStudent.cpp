#include<iostream>
using namespace std;
#include"MathStudent.h"
#include"Student.h"

Maths::Maths() :Student()
{}
Maths::Maths(int r, string n) : Student(r, n)
{}
void Maths::readMarks(ifstream& fin)
{
	fin >> rollNo;
	while ("\n")
	{
		fin >> name;
	}
	for (int j = 0; j < 3; j++)
	{
		fin >> maths[j];
	}
}
void Maths::calculateMarks()
{
	double percentage;
	 Quiztotal = 0;
	for (int i = 0; i < 5; i++)
	{
		Quiztotal = Quiztotal + maths[i];
	}
	totalMarks = Quiztotal + maths[5]+maths[6];
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
void Maths::writeRecord(ofstream& fout)
{
	fout << rollNo << " " << name << " " << Quiztotal << " " << maths[5] << " " << maths[6] << " " << totalMarks << "  " << grade << endl;
}