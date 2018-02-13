#include"Course.h"
#include<iostream>
#include"instructer.h"
#include"Textbook.h"
#include "CString.h"
using namespace std;
Course::Course()
{
	courseName=" ";
	instructer::instructer();
	Textbook::Textbook();
}
Course::Course(CString crseNam,CString title,CString author,CString publisher,CString firstName,CString lastName,CString officeNumber)
{
	courseName=crseNam;
	instructer::instructer(title,author,publisher);
	Textbook::Textbook( firstName,lastName,officeNumber);
}
void Course::print()const
{
	cout<<"courseName"<<courseName<<endl;
	textbook.print();
	instructer.print();
}