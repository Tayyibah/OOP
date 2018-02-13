#include<iostream>
using namespace std;
#include"Quotations.h"

int main()
{
	Quotations ql(23);
	ql.addQuotations("Love Pakistan","Nayar Ali");
	ql.addQuotations("Be Honest","Asif");
	ql.addQuotations("Work Work and Work","Quaid e Azam");
	ql.printAuthorWise("Quaid e Azam");
	ql.displayQuotations("Be Honest");
	Quotations q = ql ;
	q.displayQuotations("app");
	q.displayQuotationsRandomly();
	q.removeQuotations("Work Work and Work");
	return 0;
}