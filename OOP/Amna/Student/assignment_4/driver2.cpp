#include<iostream>
using namespace std;
#include"Student.h"
#include"EngStudent.h"
#include"CompStudent.h"
#include"MathStudent.h"
#include<fstream>
#include<string>

void main()
{
	string inputFileName, outputFileName;
	string studentType;
	string name;
	int rollNo;
	cout << "\nEnter Input File Name:";
	cin >> inputFileName;
	cout << endl;
	ifstream fin;
	ofstream fout;
	fin.open(inputFileName);
	cout << "\nEnter Output File Name:";
	cin >> outputFileName;
	cout << endl;
	fout.open(outputFileName);
	int noOfRecords;
	fout << "Students’ Grade Summary \n";
	fout << "=======================\n";
	fin >> noOfRecords;
	fout << "No of STUDENTS::::" << noOfRecords;


	Student **s;
	s = new Student*[noOfRecords];
	fout << "ENGLISH CLASS";
	fout << "=============";
	fout << "Attendance(A, 10 % ), Project(P, 30 % ), Midterm(M, 30 % ), Final(F, 30 % )\n";
	fout << "Roll No.	Student Name	A	P   M   F	Total		Grade\n";
	fout << "-------------------------------------------------------------------";
	for (int i = 0; i < noOfRecords; i++)
	{
		fin >> rollNo;
		getline(fin, name);
		fin >> studentType;


		if (studentType == "ES")
		{
			s[i] = new English(rollNo, name);
			s[i]->readMarks(fin);
			s[i]->calculateMarks();
			s[i]->writeRecord(fout);

		}
	}
	fout << "COMPUTER CLASS\n";
	fout << "=============\n";
	fout << "Project (P, 25%), Midterm (M, 35%), Final (F, 40%)\n";
	fout << "Roll No.	Student Name	P	M   F	Total		Grade\n";
	fout << "-------------------------------------------------------------------";
	for (int i = 0; i < noOfRecords; i++)
	{
		fin >> rollNo;
		getline(fin, name);
		fin >> studentType;


		if (studentType == "CS")
		{
			s[i] = new Computer(rollNo, name);;
			s[i]->readMarks(fin);
			s[i]->calculateMarks();
			s[i]->writeRecord(fout);

		}
	}
	fout << "MATHS CLASS\n";
	fout << "=============\n";
	fout << "Quiz Average (Q, 25%), Homeworks (H, 25%), Final (F, 50%)\n";
	fout << "Roll No.	Student Name	Q	H   F	Total		Grade\n";
	fout << "-------------------------------------------------------------------\n";
	for (int i = 0; i < noOfRecords; i++)
	{
		fin >> rollNo;
		getline(fin, name);
		fin >> studentType;


		if (studentType == "MS")
		{
			s[i] = new Maths(rollNo, name);;
			s[i]->readMarks(fin);
			s[i]->calculateMarks();
			s[i]->writeRecord(fout);

		}
	}

	delete s;
	s = NULL;
}