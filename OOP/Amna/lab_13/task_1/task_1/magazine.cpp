#include"Magazine.h"
using namespace std;

Magazine::Magazine()
{
	month = NULL;
	year = 0;
}

Magazine::Magazine(char*t, char*m, int y) : Media(t)
{
	if (m != NULL)
	{
		month = new char[strlen(m) + 1];
		strcpy(month, m);
	}
	else
	{
		month = NULL;
	}

	if (y > 1900 && y < 2100)
	{
		year = y;
	}
	else
	{
		year = 0;
	}
}

int Magazine::getYear()
{
	return year;
}
void Magazine::display()
{
	cout << "The Magazine you created ..." << endl;
	cout << "Title :" << title << endl;
	cout << "Month of publication :" << month << endl;
	cout << "Year of publication :" << year << endl;
}

Magazine :: ~Magazine()
{
	if (title != NULL)
	{
		delete[] title;
		title = NULL;
	}
	if (month != NULL)
	{
		delete[] month;
		month = NULL;
	}

}
