#include<iostream>
using namespace std;
class Quotation
{
private:
	char * * quotes;
	char * * author;
	int numOfQuotations;
	int capacity;
public:
	Quotation(int cap=10)
	{
		if(capacity<=0)
		{
			capacity=0;
			numOfQuotations=0;
			quotes=0;
			author=0;
		}
		else
		{
			capacity=cap;
			numOfQuotations=0;
			quotes=new char *[capacity];
			author=new char *[capacity];
		}
	}
	void addQuotation(char *quot,char *auth="anonymous")
	{
			int ql=getLen(quot);
			if(isArrayFull(capacity))
				reSize(capacity);
			strcpy(quotes[ql],quot);

			int al=getLen(auth);
			//isArrayFull(capacity);
			strcpy(author[al],auth);
	}
	bool isArrayFull(int len)
	{
		return numOfQuotations==capacity;
	}
	int getLen(char*s)
	{
		int count =0;
		while(*s!='\0')
		{
			count++;
			s++;
		}
		return count;
	}
	void reSize ( int capacity )
	{
		char ** temp=new char* [capacity];
		int index=0;
		while(index<numOfQuotations)
		{
			temp[index]=quotes[index];
			index++;
		}
		this-> ~Quotation();
		quotes[index]=temp[index];
		numOfQuotations=capacity;
	}
	void displayAuthorWise(char *a)
	{
		for(int i=0;i<getLen(quotes);i++)
		{
			if(quotes[i]==a[i])
				cout<<quotes[i];
		}
	}
	void displayQuotation(char * q)
	{
		for(int i=0;i!='\0';i++)
		{
			cout<<quotes[i];
		}
	}
	Quotation::Quotation(Quotation& ref)
	{
		~this->Quotation()
		if(ref.quotes==0)
		{
			quotes=0;
			return;
		}
		quotes=new int [capacity];
		for(int i=0;i<capacity;i++)
		{
			quotes[i]=ref.quotes[i];
		}
		if(ref.author==0)
		{
			author=0;
			return;
		}
		author=new int [capacity];
		for(int i=0;i<capacity;i++)
		{
			author[i]=ref.author[i];
		}
	}
	void removeQuotation(char *quote)
	{
		for(int i=0;i<getLen(quotes);i++)
		{
			if(quote[i]==quote)
				quote=0;
		}
	}
	~Quotation()
	{
		if(quotes)
		{
			delete[]quotes[i];
			delete[]author[i];
			quotes=0;
			author=0;
			numOfQuotations=0;
			capacity=0;
		}
	}
};
int main()
{
	Quotation ql;
	ql.addQuotation("Love Pakistan","Nayar Ali");
	ql.addQuotation("Be Honest","Asif");
	ql.addQuotation("Work Work and Work","Quaid e Azam");
	
	ql.displayAuthorWise("Nayar Ali");
	ql.displayAuthorWise("Asif");
	ql.displayAuthorWise("Quaid e Azam");

	ql.displayQuotation("Nayar Ali");
	ql.displayQuotation("Asif");
	ql.displayQuotation("Quaid e Azam");

	removeQuotation(char *quote);
	removeQuotation(char *quote);
	removeQuotation(char *quote);

}