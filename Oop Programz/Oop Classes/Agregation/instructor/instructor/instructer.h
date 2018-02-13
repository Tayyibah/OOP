#ifndef INSTRUCTER_H
#define INSTRUCTER_H
#include "CString.h"
class instructer 
{
private:
	CString firstName;
	CString lastName;
	CString officeNumber;
public:
	instructer();
	instructer(CString first,CString last,CString number);
	void print()const;
};
#endif