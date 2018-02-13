#include<iostream>
#include"Textbook.h"
#include "CString.h"
using namespace std;
Textbook::Textbook()
{
	title=" ";
	author=" ";
	publisher=" ";
}
Textbook::Textbook(CString titl,CString auth,CString pub)
{
	title=titl;
	author=auth;
	publisher=pub;
}
void Textbook::print()const
{
	cout<<"title:"<<title<<endl;
	cout<<"author:"<<author<<endl;
	cout<<"publisher:"<<publisher<<endl;
}