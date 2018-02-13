#include<iostream>
#include"Quotations.h"
#include "CString.h"
using namespace std;

ostream & operator << (ostream & s, const CString & c)//void display()const;
{
	if (c.data != NULL)
		cout << c.data << endl;
	return s;
}
bool Quotations::showQuotationWise(char* str)
{
	int j = 0;
	bool found = false;
	for (int i = 0; i<noOfQoutations; i++)
	{
		if (qoute[i].find(str) != -1)
		{
			cout << "Qoutation number :" << j + 1 << "\n\t\t";
			qoute[i].display();
			cout << "written by :";
			author[i].display();
			j++;
		}
	}
	cout << endl;
	if (!found)
		cout << "\nNo qoutation is find to display \n";
	return found;
}
bool Quotations::remove(char* str, int  key)
{
	int count=0;
	bool found = false;
	for (int i = 0; i<noOfQoutations; i++)
	{
		if (qoute[i].find(str) != -1)
		{
			int count = 0;
			if (count == key - 1)
			{
				qoute[i].~CString();
				author[i].~CString();
				if (i != noOfQoutations - 1)
				{
					qoute[i] = qoute[noOfQoutations - 1];
					author[i] = author[noOfQoutations - 1];

				}
				noOfQoutations--;
				return found = true;
			}
			count++;
		}
	}
	return found;
}
Quotations::Quotations(int cap)
{
	if (cap <= 0)
	{
		capacity = 10;
		noOfQoutations = 0;
		qoute = new CString[capacity];
		author = new  CString[capacity];
	}
	else
	{
		capacity = cap;
		noOfQoutations = 0;
		qoute = new CString[capacity];
		author = new  CString[capacity];
	}
}
Quotations::Quotations(Quotations & ref)
{
	if (qoute == ref.qoute && author == ref.author)
	{
		qoute = 0;
		author = 0;
		noOfQoutations = 0;
		capacity = 0;
		return;
	}
	qoute = ref.qoute;
	author = ref.author;
	noOfQoutations = ref.noOfQoutations;
	capacity = ref.capacity;

}

void Quotations::addQuotations(CString qout, CString  auth)
{
	if (noOfQoutations >= capacity)
	{
		resizeQuotations();
	}
	qoute[noOfQoutations] = qout;
	author[noOfQoutations] = auth;
}
void  Quotations::printAuthorWise(CString auth)
{
	int j = 0;
	bool found = false;
	cout << "Qoutation writer is :";
	auth.display();
	for (int i = 0; i<noOfQoutations; i++)
	{
		//if (auth == author[i] == 0)
		{
			cout << "Qoutation number " << j << ":";
			qoute[i].display();
			found = true;
			j++;
		}
		cout << endl;
		if (!found)
		{
			cout << "No Qoutation is found ";
			cout << endl;
		}
	}
}
void  Quotations::displayQuotations(char * str)
{
	int j = 0;
	bool found = false;
	for (int i = 0; i<noOfQoutations; i++)
	{
		if (qoute[i].find(str) != -1)
		{
			found = true;
			cout << "Quotations number :" << j + 1 << "\n";
			qoute[i].display();
			cout << " By ";
			author[i].display();
			j++;
		}
	}

}
void Quotations::removeQuotations(char *str)
{
	bool flag = showQuotationWise(str);
	if (flag)
	{
		int qoutationNo;;
		cout << "Enter qoutation number for removing :";
		cin >> qoutationNo;
		bool result = remove(str, qoutationNo);
		if (result)
		{
			cout << "Qoutation is removed Suceesfully" << endl;
		}
		else
			cout << " Qoutation is not removed ,Entered valid Qoutation number\n:";


	}
}
Quotations::~Quotations()
{
	if (qoute && author)
	{
		for (int i = 0; i<noOfQoutations; i++)
		{
			qoute[i].~CString();
			author[i].~CString();
		}
		qoute = 0;
		author = 0; 
		capacity = 0;
		noOfQoutations = 0;
	}


}
void Quotations::resizeQuotations()
{
	int newCapacity = capacity + 10;
	CString *qoute1 = new CString[newCapacity];
	CString *author1 = new CString[newCapacity];
	int noOfQoutes = noOfQoutations;
	for (int i = 0; i<noOfQoutations; i++)
	{
		qoute1[i] = qoute[i];
		author1[i] = author[i];
	}
	this -> ~Quotations();
	qoute = qoute1;
	author = author1;
	noOfQoutations = noOfQoutes;
	capacity = newCapacity;
}

void Quotations::displayQuotationsRandomly()
{
	unsigned(seed) = time(0);
	srand(seed);
	int i = rand() % (14 - 0);
	if (i == 0)
	{
		cout << Quotation[i];
		cout << "Written by :" <<AuthorOfQuotation[i];
	}
	else if (i == 1)
	{
		cout << Quotation[i];
		cout << "Written by :" << AuthorOfQuotation[i];
	}

	else if (i == 2)
	{
		cout << Quotation[i];
		cout << "Written by :" <<AuthorOfQuotation[i];
	}

	else if (i == 3)
	{
		cout << Quotation[i];
		cout << "Written by :" <<AuthorOfQuotation[i];
	}

	else if (i == 4)
	{
		cout << Quotation[i];
		cout << "Written by :" << AuthorOfQuotation[i];
	}

	else if (i == 5)
	{
		cout << Quotation[i];
		cout << "Written by :" << AuthorOfQuotation[i];
	}

	else if (i == 6)
	{
		cout << Quotation[i];
		cout << "Written by :" << AuthorOfQuotation[i];
	}
	else if (i == 7)
	{
		cout << Quotation[i];
		cout << "Written by :" << AuthorOfQuotation[i];
	}
	else if (i == 8)
	{
		cout << Quotation[i];
		cout << "Written by :" << AuthorOfQuotation[i];
	}
	else if (i == 9)
	{
		cout << Quotation[i];
		cout << "Written by :" << AuthorOfQuotation[i];
	}
	else if (i == 10)
	{
		cout << Quotation[i];
		cout << "Written by :" << AuthorOfQuotation[i];
	}
	else if (i == 11)
	{
		cout << Quotation[i];
		cout << "Written by :" << AuthorOfQuotation[i];
	}
	else if (i == 12)
	{
		cout << Quotation[i];
		cout << "Written by :" << AuthorOfQuotation[i];
	}
	else if (i == 13)
	{
		cout << Quotation[i];
		cout << "Written by :" << AuthorOfQuotation[i];
	}
	else if (i == 14)
	{
		cout << Quotation[i];
		cout << "Written by :" << AuthorOfQuotation[i];
	}
}
const CString Quotations::Quotation[14] = { "Love Pakistan", "Be Honest", "Work Work and Work", "I am always doing things I cannot do.That is how I get to do them.", "It is not what we take up, but what we give up, that makes us rich.", "You can do anything, but not everything.", "Thinking will not overcome fear but action will. ", "We read the world wrong and say that it deceives us.", "9)You miss 100 percent of the shots you never take.", "10)He is the happiest, be he king or peasant, who finds peace in his home.", "Your work is to discover your work and then, with all your heart, to give yourself to it.", "In order to be effective truth must penetrate like an arrow – and that is likely to hurt", "You must be the change you wish to see in the world", "Humans are satisfied with whatever looks good; ? Heaven probes for what is good." };
const CString Quotations::AuthorOfQuotation[14] = { "Nayar Ali", "Asif", "Quaid e Azam", "Pablo Picasso", "Henry Ward Beecher", "David Allen", "W.Clement Stone", "Rabindranth Tagore", "Wayne Gretzky", "Johann Wolfgang von Goethe", " Buddha", "Wei Wu Wei", "Gandhi", "Biblical Proverb" };
