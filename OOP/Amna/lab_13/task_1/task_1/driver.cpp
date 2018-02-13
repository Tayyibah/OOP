#include "Book.h"
#include "Magazine.h"
#include"media.h"
#include"cd.h"
#include"shelf.h"
#include<iostream>
using namespace std;

void searchByYear(Media **m, int s)
{
	int y;
	cout << "Enter Year: ";
	cin >> y;
	cout << endl;
	for (int i = 0; i < s; i++)
	{
		if (typeid(m) == typeid(Magazine))
		{
			//if (dynamic_cast<Magazine *ma>(*m)->getYear() == y)
			{
				//ma->display();
			}
		}
	}

}

void main()
{
	int n, year, choice,capacity, i = 0;
	char title[30], author[30], month[30], ISBN[30];
	cout << "How many items you want to create? ";
	cin >> n;
	Shelf s(5);
	Media **med = new Media *[n - 1];
	do
	{
		cout << "\nEnter 1 --> To create Book." << endl
			<< "Enter 2 --> To create Magazine." << endl
		    << "Enter 3 -->To create CD."<<endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
				  cout << "Enter the title : " << endl;
				  cin >> title;

				  cout << "Enter the Author name : " << endl;
				  cin >> author;

				  cout << "Enter the ISBN : " << endl;
				  cin >> ISBN;

				  med[i] = new Book(title, author, ISBN);
				  s.insert(med[i]);

				  cout << "\t\tInformation stored." << endl;
				  i++;

				  break;
		}
		case 2:
		{
				  cout << "Enter the title : " << endl;
				  cin >> title;
				  cout << "Enter the Month of publication : " << endl;
				  cin >> month;
				  cout << "Enter the Year of publication : " << endl;
				  cin >> year;
				  med[i] = new Magazine(title, month, year);
				  s.insert(med[i]);
				  cout << "\t\tInformation stored." << endl;
				  i++;
				  break;
		}
		case 3:
		{
				  cout << "Enter the title : " << endl;
				  cin >> title;
				  cout << "Enter the capacity of CD : "<<endl;
				  cin >> capacity;
				  med[i] = new CD(title,capacity);
				  s.insert(med[i]);
				  cout << "\t\tInformation stored." << endl;
				  i++;
				  break;
		}

		}

	}
	while (i < n);

	cout << "\nThe information entered...." << endl;

	for (int j = 0; j<n; j++)
	{
		med[j]->display();
		cout << endl << endl;
	}

	for (int d = 0; d < n; d++)
	{
		delete med[d];
		med[d] = NULL;
	}
	delete med;
	med = NULL;
}