#include<iostream>
using namespace std;
#include"Student.h"
#include"English.h"
#include"Maths.h"
#include"Computer.h"
#include<fstream>
#include<string>
void main()
{
	
	string inputFileName,outputFileName;
	char* studentType;
	char* name;
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
	fout.open(outputFileName, ios::out | ios::app);
	int noOfRecords;
	fout << "Students’ Grade Summary \n";
	fout << "=======================\n";
	fin >> noOfRecords;
	fout << "No of STUDENTS::::"<<noOfRecords;
	
	
	Student **s;
	s = new Student*[noOfRecords];
	for (int i = 0; i < noOfRecords; i++)
	{
		fin >> rollNo;
		while ("\n")
		{
			fin >> name;
		}
		fin >> studentType;
		English e(rollNo, name);
		fout << "ENGLISH CLASS";
		fout << "=============";
		fout << "Attendance(A, 10 % ), Project(P, 30 % ), Midterm(M, 30 % ), Final(F, 30 % )\n";
		fout << "Roll No.	Student Name	A	P   M   F	Total		Grade\n";
		fout << "-------------------------------------------------------------------";
		if (studentType == "ES")
		{
			s[i] = &e;
			s[i]->readMarks(fin);
			s[i]->calculateMarks();
			s[i]->writeRecord(fout);
			
		}
	}
	for (int i = 0; i < noOfRecords; i++)
	{
		fin >> rollNo;
		while ("\n")
		{
			fin >> name;
		}
		fin >> studentType;
		Computer c(rollNo,name);
		fout << "COMPUTER CLASS";
		fout << "=============";
		fout << "Project (P, 25%), Midterm (M, 35%), Final (F, 40%)\n";
		fout << "Roll No.	Student Name	P	M   F	Total		Grade\n";
		fout << "-------------------------------------------------------------------";
		if (studentType == "CS")
		{
			s[i] = &c;
			s[i]->readMarks(fin);
			s[i]->calculateMarks();
			s[i]->writeRecord(fout);

		}
	}
	for (int i = 0; i < noOfRecords; i++)
	{
		fin >> rollNo;
		while ("\n")
		{
			fin >> name;
		}
		fin >> studentType;
		Maths m(rollNo,name);
		fout << "MATHS CLASS";
		fout << "=============";
		fout << "Quiz Average (Q, 25%), Homeworks (H, 25%), Final (F, 50%)\n";
		fout << "Roll No.	Student Name	Q	H   F	Total		Grade\n";
		fout << "-------------------------------------------------------------------";
		if (studentType == "MS")
		{
			s[i] = &m;
			s[i]->readMarks(fin);
			s[i]->calculateMarks();
			s[i]->writeRecord(fout);

		}
	}


	if (s != NULL)
	{
		for (int i = 0; i < noOfRecords; i++)
		{
			delete[]s[i];
			s[i] = NULL;
		}
	}
	delete s;
	s = NULL;
}