#ifndef TEXTBOOK_H
#define TEXTBOOK_H
#include "CString.h"
class Textbook
{
private:
	CString title;
	CString author;
	CString publisher;
public:
	Textbook();
	Textbook(CString title,CString author,CString publisher);
	void print()const;
};
#endif