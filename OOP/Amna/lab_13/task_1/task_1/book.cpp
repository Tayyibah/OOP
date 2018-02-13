#include"Book.h"
using namespace std;

Book::Book()
{
	author = NULL;
	ISBN = NULL;
}

Book::Book(char*t, char*a, char*i) : Media(t)
{
	if (a != NULL)
	{
		author = new char[strlen(a) + 1];
		strcpy(author, a);
	}
	else
	{
		author = NULL;
	}

	if (i != NULL)
	{
		ISBN = new char[strlen(i) + 1];
		strcpy(ISBN, i);
	}
	else
	{
		ISBN = NULL;
	}
}

void Book::display()
{
	cout << "The book you created ..." << endl;
	cout << "Title :" << title << endl;
	cout << "Author :" << author << endl;
	cout << "ISBN :" << ISBN << endl;
}

Book :: ~Book()
{
	if (title != NULL)
	{
		delete[] title;
		title = NULL;
	}
	if (author != NULL)
	{
		delete[] author;
		author = NULL;
	}

	if (ISBN != NULL)
	{
		delete[] ISBN;
		ISBN = NULL;
	}
}