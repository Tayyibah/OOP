#ifndef QUOTATIONS_H
#define QUOTATIONS_H
#include<ctime>
#include<cstdlib>
#include "CString.h"

class Quotations
{
private:
	int capacity;
	int noOfQoutations;
	CString *qoute;
	CString *author;
	bool showQuotationWise(char*);
	bool remove(char*, int);
	void resizeQuotations();
	static const CString Quotation[14];
	static const CString AuthorOfQuotation[14];

public:
	void displayQuotationsRandomly();
	Quotations(int cap = 10);
	Quotations(Quotations &);
	void addQuotations(CString qout, CString auth );
	void printAuthorWise(CString);
	void displayQuotations(char *);
	void removeQuotations(char *);
	friend ostream & operator << (ostream & s,const CString & c);//void display()const
	~Quotations();
};
#endif