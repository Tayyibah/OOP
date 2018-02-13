//#include<iostream>
//#include<cstring>
//using namespace std;
//class BookType
//{
//private:
//	char  *title;
//	char  *author;
//	char  *publisher;
//	double price;
//	int noOfCopies;
//public:
//	BookType();
//	void set(char * t, char *a, char *p, double pr, int c);
//	void display();
//	void setTitle(char * t);
//	void setAuthor(char * a);
//	bool search(char *); // search a book by it’s title
//	//BookType operator=(char *t,char *a,char* p,const BookType &b);
//	~BookType();
//};
////////////////////////////////////////////////////////
//void BookType::display()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		cout << title[i];
//	}
//	cout << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << author[i];
//	}
//	cout << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << publisher[i];
//	}
//	cout << endl;
//	cout << price << endl;
//	cout << noOfCopies << endl;
//}
//void BookType::set(char * t, char *a, char *p, double pr, int c)
//{
//	
//	/////set default title of book////
//	int len = strlen(t) + 1;
//	title = new char[len];
//	for (int i = 0; i < len; i++)
//	{
//		title[i] = t[i];
//	}
//	cout << endl;
//	/////set default name of author//////
//	len = strlen(a) + 1;
//	author = new char[len];
//	for (int i = 0; i < len; i++)
//	{
//		author[i] = a[i];
//	}
//	cout << endl;
//	/////set default name of publisher/////
//	len = strlen(p) + 1;
//	publisher = new char[len];
//	for (int i = 0; i < len; i++)
//	{
//		publisher[i] = p[i];
//	}
//	cout << endl;
//	//////set default price/////
//	price = pr;
//	
//	//////set default no of books//////////
//	noOfCopies = c;
//	
//}
////////////////////////////////////////////////////////////
//void BookType::setAuthor(char *a)
//{
//	if (author[0] != NULL)
//	{
//		delete[]author;
//	}
//	int len = strlen(a) + 1;
//	author = new char[len];
//	for (int i = 0; i < len; i++)
//	{
//		author[i] = a[i];
//	}
//}
///////////////////////////////////////////////////////////
//void BookType::setTitle(char * t)
//{
//	if (title[0] != NULL)
//	{
//		delete[]title;
//	}
//	int len = strlen(t) + 1;
//	title = new char[len];
//	for (int i = 0; i < len; i++)
//	{
//		title[i] = t[i];
//	}
//}
/////////////////////////////////////////////////////////////
//bool BookType::search(char *t)
//{
//	if (strcmp(t, title) == 0)
//	{
//		cout << "BOOK OF THIS TITLE IS AVAILABLE..." << endl;
//		return true;
//	}
//}
/////////////////////////////////////////////////////////////
//BookType::BookType()
//{
//	title = new char[5];
//	author = new char[5];
//	publisher = new char[5];
//	title[0] = NULL;
//	author[0] = NULL;
//	publisher[0] = NULL;
//	price = 0.0;
//	noOfCopies = 0;
//
//}
////////////////////////////////////////////////////////////
////BookType BookType :: operator=(char *t,char *a,char*p, BookType &b)
////{
////	
////	char *btitle;
////	if (btitle[0] != NULL)
////	{
////		delete[]btitle;
////	}
////	int len = strlen(t) + 1;
////	btitle = new char[len];
////	for (int i = 0; i < len; i++)
////	{
////		btitle[i] == t[i];
////	}
////	b.setTitle(btitle);
////}
//BookType ::~BookType()
//{
//	if (title[0] != NULL && author[0] != NULL && publisher[0] != NULL)
//	{
//		delete[]title;
//		delete[]author;
//		delete[]publisher;
//		title = publisher = author = NULL;
//	}
//}
//////////////////////////////////////////////////////////
//void main()
//{
//	int choice, k;
//	int copies = 0;
//	double price = 0.0;
//	const int len = 5;
//	BookType b1[2];
//	char tit[len];
//	char author[len];
//	char publisher[len];
//	
//	for (int j = 0; j<2; j++)
//	{
//		cout << "\nEnter no of copies of book:";
//		cin >> copies;
//		
//		cout << "\nEnter price of book:";
//		cin >> price;
//
//		
//		cout << "Enter name for book title:";
//		for (int i = 0; i<len; i++)
//		{
//			cin >> tit[i];
//		}
//		
//		cout << "\nEnter name for book author:";
//		for (int i = 0; i<len; i++)
//		{
//			cin >> author[i];
//		}
//		
//		cout << "\nEnter name for book publisher:";
//		for (int i = 0; i<len; i++)
//		{
//			cin >> publisher[i];
//		}
//		
//		b1[j].set(tit, author, publisher, price, copies);
//		cout << endl;
//		b1[j].display();
//	}
//	
//	///////////////////////////////////////////
//	cout << "\nTo set title enter 1.\n"
//		<< "To set author enter 2.\n"
//		<< "To search title enter 3.\n"
//		<< "To set all values again enter 4.\n"
//		<< "To exit program enter 0.\n"
//		<< "Enter your choice:";
//	cin >> choice;
//	switch (choice)
//	{
//	case 0:
//	{
//			  cout << "program exit.";
//			  exit(0);
//	}
//		break;
//	case 1:
//	{
//			  cout << "Enter value of object(0,1) for which you want to change title:";
//			  cin >> k;
//			  cout << "\nEnter new name of title:";
//			  for (int i = 0; i < len; i++)
//			  {
//				  cin >> tit[i];
//			  }
//			    b1[k].setTitle(tit);
//			  cout << endl;
//			  b1[k].display();
//	}
//		break;
//	case 2:
//	{
//			  cout << "Enter value of object(0,1) for which you want to change author:";
//			  cin >> k;
//			  cout << "Enter new name of author:";
//			  for (int i = 0; i < len; i++)
//			  {
//				  cin >> author[i];
//			  }
//			    b1[k].setAuthor(author);
//			  cout << endl;
//	}
//		break;
//	case 3:
//	{
//			  cout << "Enter value of object(0,1) for which you want to search title:";
//			  cin >> k;
//			  cout << "Enter new name of title:";
//			  for (int i = 0; i < len; i++)
//			  {
//				  cin >> tit[i];
//			  }
//			    b1[k].search(tit);
//			  cout << endl;
//			  
//	}
//		break;
//	case 4:
//	{
//			  cout << "Enter value of object(0,1) for which you want to change data:";
//			  cin >> k;
//			  /////////////////////////////////////////
//			  cout << "Enter name for book title:";
//			  for (int i = 0; i < len; i++)
//			  {
//				  cin >> tit[i];
//			  }
//			  /////////////////////////////////////////
//			  cout << "\nEnter name for book author:";
//			  for (int i = 0; i < len; i++)
//			  {
//				  cin >> author[i];
//			  }
//			  //////////////////////////////////////////
//			  cout << "\nEnter name for book publisher:";
//			  for (int i = 0; i < len; i++)
//			  {
//				  cin >> publisher[i];
//			  }
//			  
//			  cout << "Enter no of copies of book:";
//			  cin >> copies;
//			  cout << "\nEnter price of book:";
//			  cin >> price;
//			   b1[k].set(tit, author, publisher, price, copies);
//			  cout << endl;
//	}
//		break;
//	}
//
//	//BookType b2;
//	//BookType b3(b2);
//	//BookType b4 = b2.operator=(title,author,publisher,b3);
//}