#include"Maths.h"

Maths::Maths():Student()
{
}
Maths::Maths(int r , char* n):Student(r,n)
{
}
void Maths::readMarks(ifstream & fin)
{
	int i = 0;
	int n;
	fin >> n;
	while (i<n)
	{
		fin >> StudentRollNumber;
		while ("\n")
		{
			fin >> Studentname;
		}
		for (int j = 0; j < 5; j++)
		{
			fin >> QuizAverage[j];
		}
	 fin >>Homeworks;// = 25%, 
	 fin >>FinalExam;// = 50%
		i++;
	}
}
void Maths::calculateMarks()
{
	double percentage;
	int totalMarks = 0;
	int totalQuizes = 0;
	for (int i = 0; i < 5; i++)
	{
		totalQuizes = totalQuizes + QuizAverage[i];
	}
	marks[0]=totalQuizes/500 *25;
	marks[1]=Homeworks/100 *25;
	marks[2]=FinalExam/100 *50;
	for (int i = 0; i < 4; i++)
	{
		totalMarks = totalMarks + marks[i];
	}
	percentage = totalMarks / 300 * 100;
	setStudentGrade(percentage);
}
void Maths::writeRecord(ofstream & fout)
{
	fout << StudentRollNumber << " " << Studentname <<" "<<marks[0]<<" "<<marks[1]<<" "<<marks[2]<<" "<<marks[3]<<" "<<StudentTotalMarks<<"  "<<StudentGrade<<endl;
}