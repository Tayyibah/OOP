#include<iostream>
using namespace std;
#include"Quotation.h"

int main()
{
	Quotation ql(23);
	ql.addQuotation("Love Pakistan","Nayar Ali");
	ql.addQuotation("Be Honest","Asif");
	ql.addQuotation("Work Work and Work","Quaid e Azam");
	ql.addQuotation("Follow unity Faith n Discipline","Quaid e Azam");
	
	ql.displayQuotationWise("Love Pakistan");
	ql.displayQuotationWise("Be Honest");
	ql.displayQuotationWise("Work Work and Work");

	ql.displayAuthorWise("Nayar Ali");
	ql.displayAuthorWise("Asif");
	ql.displayAuthorWise("Quaid e Azam");

	ql.removeQuotation("Nayar Ali");
	ql.removeQuotation("Work Work and Work");
	ql.removeQuotation("Quaid e Azam");
	
	ql.displayQuotationWise("Love Pakistan");
	ql.displayQuotationWise("Be Honest");
	ql.displayQuotationWise("Work Work and Work");

	ql.displayAuthorWise("Nayar Ali");
	ql.displayAuthorWise("Asif");
	ql.displayAuthorWise("Quaid e Azam");

	return 0;
}