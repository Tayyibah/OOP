//#include<iostream>
//using namespace std;
//#include"Student.h"
//#include"EngStudent.h"
//#include"CompStudent.h"
//#include"MathStudent.h"
//#include<fstream>
//#include<string>
//
//void main()
//{
//	string inputFileName, outputFileName;
//	string studentType;
//	string name;
//	int rollNo;
//	int *marks;
//	cout << "\nEnter Input File Name:";
//	cin >> inputFileName;
//	cout << endl;
//	ifstream fin;
//	ofstream fout;
//	fin.open(inputFileName);
//	cout << "\nEnter Output File Name:";
//	cin >> outputFileName;
//	cout << endl;
//	fout.open(outputFileName);
//	int noOfRecords;
//	fout << "Students’ Grade Summary \n";
//	fout << "=======================\n";
//	fin >> noOfRecords;
//	fout << "No of STUDENTS::::" << noOfRecords;
//
//
//	Student **s;
//	s = new Student*[noOfRecords];
//	fout << "\nENGLISH CLASS";
//	fout << "\n=============";
//	fout << "\nAttendance(A, 10 % ), Project(P, 30 % ), Midterm(M, 30 % ), Final(F, 30 % )\n";
//	fout << "Roll No.	Student Name	A	P   M   F	Total		Grade\n";
//	fout << "-------------------------------------------------------------------\n";
//	for (int i = 0; i < noOfRecords; i++)
//	{
//		fin >> rollNo;
//		getline(fin, name);
//		fin >> studentType;
//		
//
//		if (studentType == "EN")
//		{
//			marks = new int[4];
//			for (int j = 0; j < 4; j++)
//			{
//			
//					fin >> marks[i];
//				
//			}
//			s[i] = new English(rollNo, name);
//			s[i]->readMarks(fin);
//			s[i]->calculateMarks();
//			s[i]->writeRecord(fout);
//
//		}
//		else
//		{
//			marks = new int[7];
//			for (int j = 0; j < 7; j++)
//			{
//				while (!"\n")
//				{
//					fin >> marks[i];
//				}
//			}
//		}
//	}
//	fout << "\nCOMPUTER CLASS\n";
//	fout << "=============\n";
//	fout << "Project (P, 25%), Midterm (M, 35%), Final (F, 40%)\n";
//	fout << "Roll No.	Student Name	P	M   F	Total		Grade\n";
//	fout << "-------------------------------------------------------------------\n";
//	for (int i = 0; i < noOfRecords; i++)
//	{
//		fin >> rollNo;
//		getline(fin, name);
//		fin >> studentType;
//
//
//		if (studentType == "CS")
//		{
//			marks = new int[3];
//			for (int j = 0; j < 3; j++)
//			{
//				
//					fin >> marks[i];
//				
//			}
//			s[i] = new Computer(rollNo, name);;
//			s[i]->readMarks(fin);
//			s[i]->calculateMarks();
//			s[i]->writeRecord(fout);
//
//		}
//		else
//		{
//			marks = new int[7];
//			for (int j = 0; j < 7; j++)
//			{
//				while (!"\n")
//				{
//					fin >> marks[i];
//				}
//			}
//		}
//	}
//	fout << "\nMATHS CLASS\n";
//	fout << "=============\n";
//	fout << "Quiz Average (Q, 25%), Homeworks (H, 25%), Final (F, 50%)\n";
//	fout << "Roll No.	Student Name	Q	H   F	Total		Grade\n";
//	fout << "-------------------------------------------------------------------\n";
//	for (int i = 0; i < noOfRecords; i++)
//	{
//		fin >> rollNo;
//		getline(fin, name);
//		fin >> studentType;
//
//
//		if (studentType == "MT")
//		{
//			marks = new int[7];
//			
//
//				for (int j = 0; j < 7; j++)
//				{
//					
//						fin >> marks[i];
//					
//				}
//			
//
//			s[i] = new Maths(rollNo, name);;
//			s[i]->readMarks(fin);
//			s[i]->calculateMarks();
//			s[i]->writeRecord(fout);
//
//		}
//		else
//		{
//			marks = new int[7];
//			for (int j = 0; j < 7; j++)
//			{
//				while (!"\n")
//				{
//					fin >> marks[i];
//				}
//			}
//		}
//	}
//
//	delete s;
//	s = NULL;
//}