#include<iostream>
using namespace std;
#include"MathStudent.h"
#include"Student.h"

Maths::Maths(int r, string n) : Student(r, n)
{

}
void Maths::readMarks(ifstream& fin)
{
	for (int i = 0; i<5; i++)
	{
		fin >> quizes[i];
	}
	fin >> homeWork;
	fin >> finalExam;
}
void Maths::calculateMarks()
{
	quizes[5] = (((quizes[0] + quizes[1] + quizes[2] + quizes[3] + quizes[4]) / 500) * 25);
	totalMarks = (quizes[5] + ((homeWork / 100) * 25) + ((finalExam / 100) * 50));

	if (totalMarks >= 90)
	{
		grade = 'A';
	}
	else if (totalMarks >= 80 && totalMarks <= 89)
	{
		grade = 'B';
	}
	else if (totalMarks >= 70 && totalMarks <= 79)
	{
		grade = 'C';
	}
	else if (totalMarks >= 60 && totalMarks <= 69)
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
	fout << rollNo << "\t" << name << "\t" << quizes[5] << "\t" << homeWork << "\t" << finalExam << "\t" << totalMarks << "\t\t" << grade << endl;
}