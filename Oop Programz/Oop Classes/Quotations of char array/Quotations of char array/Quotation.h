#ifndef QUOTATION_H
#define QUOTATION_H

class Quotation
{
private:
	char ** quote;
	char ** author;
	int noOfQuotations;
	int capacity;
	int getLength( const char * const str);
	void copy(char * const dest, const char *  const source);
public:
	void reSize(int nc);
	bool isFull();
	Quotation(int cap=10);
	Quotation(Quotation & q);
	void addQuotation(char * quot, char * auth="anonymous");
	void displayAuthorWise(char *a);
	void displayQuotationWise(char * q);
	bool compare(char * str1 , char * str2);
	bool removeQuotation(char* str);
	~Quotation();
};
#endif