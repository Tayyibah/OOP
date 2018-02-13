//#include<iostream>
//#include<cstring>
//using namespace std;
//class BookType
//{
//
//	private: //private attributes
//
//		char* title;
//		char* author;
//		char* publisher;
//		long isbn;
//		double price;
//		int noOfCopies;
//
//	public: // public member functions
//
//		BookType(); // default constructor
//		void setParticulars (char * ,char * ,char * , long , double , int ); // parameterized constructor
//		
//		// setters
//		void setTitle(char * );
//		void setPublisher(char *);
//		void setAuthor(char * );
//		void setIsbn(long );
//		void setPrice(double );
//		void setNoOfCopies(int );
//
//		// getters
//		char * getTitle() const ;
//		char * getPublisher() const ;
//		long getIsbn() const ;
//		char *getAuthor() const ;
//		double getPrice() const ;
//		int getNoOfCopies() const ;
//
//		//updating functions
//		void upDatePublisher(char *);
//		void upDateAuthor(char *);
//		void upDateTitle(char *);
//
//		//searching functions
//		bool searchPublisher(char *) const ;
//		bool searchTitle(char *) const ;
//		bool searchAuthor(char *) const ;
//		bool searchIsbn(long ) const ;
//		bool searchPrice(double ) const ;
//		bool searchNoOfCopies(int ) const ;
//
//		//display function
//		void display() const ;
//		//bool search (char * ); // search a book by it’s title
//		
//		~BookType();
//
//};
//BookType :: BookType()
//{
//	title = NULL ;
//	author = NULL ;
//	publisher = NULL ;
//	isbn = 0 ;
//	price = 0 ;
//	noOfCopies = 0;
//
//}
//void BookType :: setParticulars (char* t, char* a , char * p  ,long i , double pr, int c )
//{
//	upDateTitle(t);
//	upDateAuthor(a);
//	upDatePublisher(p);
//	setIsbn(i);
//	setPrice(pr);
//	setNoOfCopies(c);
//}
//void BookType :: setTitle(char *t)
//{
//	if(t != NULL)
//	{
//		title = new char [strlen(t) + 1];
//		strcpy(title,t);
//	}
//}
//void BookType  :: setAuthor(char * a)
//{
//	if (a != NULL)
//	{
//		author = new char [strlen(a) + 1];
//		strcpy(author,a );
//	}
//
//}
//void BookType :: setPublisher(char * p)
//{
//	
//	if(p != NULL)
//	{
//		publisher = new char [strlen(p) + 1];
//		strcpy(publisher,p);
//	}
//}
//void BookType :: setPrice(double pr)
//{
//	if ( pr > 0 )
//	{
//		price = pr ;
//	}
//}
//void BookType :: setNoOfCopies(int c)
//{
//	if( c > 0 )
//	{
//		noOfCopies = c ;
//	}
//}
//void BookType :: setIsbn(long i)
//{
//	if(i > 0)
//	{
//		isbn = i;
//	}
//}
//char * BookType :: getTitle() const
//{
//	return title;
//}
//
//char* BookType :: getAuthor() const
//{
//	return author;
//}
//
//char * BookType :: getPublisher() const
//{
//	return publisher;
//}
//double BookType :: getPrice() const
//{
//	return price;
//}
//int BookType :: getNoOfCopies() const
//{
//	return noOfCopies;
//}
//
//long BookType :: getIsbn() const
//{
//	return isbn;
//}
//void BookType :: upDateTitle(char * t1)
//{
//	if( title != NULL )
//	{
//		delete [] title;
//	}
//	setTitle(t1);
//}
//void BookType :: upDatePublisher(char * p)
//{
//	if( publisher != NULL )
//	{
//		delete [] publisher;
//	}
//	setPublisher(p);
//}
//void BookType :: upDateAuthor(char * a)
//{
//	if( author != NULL )
//	{
//		delete [] author;
//	}
//	setAuthor(a);
//}
//bool BookType :: searchTitle(char * t) const 
//{
//	if((strcmp(t,title)) == 0 )
//	{
//		return true;
//	}
//	return false;
//}
//bool BookType :: searchAuthor(char * a) const
//{
//	if((strcmp(a,author)) == 0 )
//	{
//		return true;
//	}
//	return false;
//}
//bool BookType :: searchPublisher(char * p) const
//{
//	if((strcmp(p,publisher)) == 0 )
//	{
//		return true;
//	}
//	return false;
//}
//bool BookType :: searchIsbn(long i) const 
//{
//	if( i == isbn )
//	{
//		return true;
//	}
//	return false;
//}
//bool BookType :: searchPrice(double p) const 
//{
//	if( price == p )
//	{
//		return true;
//	}
//	return false;
//}
//bool BookType :: searchNoOfCopies(int c) const 
//{
//	if( noOfCopies == c )
//	{
//		return true;
//	}
//	return false;
//}
//void BookType :: display () const 
//{
//	cout << "Title = " << title << endl;
//	cout << "Author = " << author << endl;
//	cout << "Publisher = " << publisher << endl;
//	cout << "ISBN = " << isbn << endl;
//	cout<<"Price = "<<price<<endl;
//	cout<<"No. of copies = "<<noOfCopies<<endl;
//}
//
//BookType :: ~BookType()
//{
//	/*cout<<"Destructor is called...\n";*/
//	delete [] title;
//	delete [] author ;
//	delete [] publisher;
//	title = author = publisher = NULL;
//}
//void main()
//{
//	BookType book[100]; // array of 100 obj
//	int choice;
//
//	for( int i = 0 ; i < 100 ; i++ )
//	{
//		book[i].setParticulars("C++","Dietle","Amazone",1234,450,4);
//		
//	}
//	Again:
//	do
//	{
//		cout<<"Your Menu is:\n";
//		cout<<"-----------------------------------------\n";
//		cout<<"You can perform following operations\n";
//		cout<<"Press 1. Input data of books\n";
//		cout<<"Press 2. Display information of particular book\n";
//		cout<<"Press 3. Search any book\n";
//		cout<<"Press 4. Update Particulars of book\n";
//		cout<<"Press 5. Exit\n";
//		cout<<"We have 100 books in our library \n";
//		cout<<"-----------------------------------------\n";
//		cout<<"Enter your choice\t";
//		cin>>choice;
//	}while(choice <= 0 && choice > 5);
//	if(choice >0 && choice <5)
//	{
//		int i;
//		do
//		{
//			cout<<"for which book you want to perform that operation (1-100)";
//			cin>>i;
//		}
//		while(i<1 && i>100);
//	
//		i -= 1;
//		char title1[10], author1[10], publish1[10] ;
//		int copies1;
//		long isbn1; double price1;
//	
//		switch(choice)
//		{
//			case 1:
//				{
//					cout << " Enter the particulars:\n ";
//					cout << "Title\t";
//					cin >> title1;
//					cout <<"Author\t";
//					cin >> author1;
//					cout << "Publisher\t";
//					cin >> publish1;
//					cout << "ISBN\t";
//					cin >> isbn1;
//					cout << "Price\t";
//					cin >> price1;
//					cout << "No. Of Copies\t";
//					cin >> copies1;
//					book[i].setParticulars(title1,author1,publish1,isbn1,price1,copies1);
//				}	
//			break;
//			case 2:
//				{
//					cout<<"___________________________\n";
//					book[i].display();
//					cout<<"___________________________\n";
//				}
//			break;
//			case 3:
//				{
//					do
//					{
//						cout << "By which particular You want to search the book?\n";
//						cout << "Press 1.  Title\n";
//						cout << "Press 2. Author\n";
//						cout << "Press 3. Publisher\n";
//						cout << "Press 4. ISBN\n";
//						cin>>choice;
//					}
//					while(choice <1 && choice > 4);
//					switch(choice)
//					{
//						case 1:
//							{
//								cout << "Enter Tiltle\t";
//								cin >> title1;
//								for(int n=0 ; n < 100 ; n++)
//								{
//									if( ( strcmp( title1 , book[n].getTitle( ) ) ) == 0)
//									{
//										book[n].display();
//										exit(0);
//									}
//									else if(n == 99  && (strcmp( title1 , book[n].getTitle( ) ) != 0 ) )
//									{
//										cout<<"Book not found\t";
//									}
//								}
//							}
//						break;
//	
//						case 2:
//							{
//								cout<<"Enter Author\t";
//								cin>>author1;
//								for(int n=0 ; n < 100 ; n++)
//								{
//									if( ( strcmp( author1,book[n].getAuthor( ) ) ) == 0)
//									{
//										book[n].display();
//										exit(0);
//									}
//									else if(( strcmp( author1,book[n].getAuthor( ) ) ) != 0 && n == 99) 
//									{
//										cout<<"Book not found\t";
//									}
//								}
//							}
//						break;
//						case 3:
//							{
//								cout<<"Enter Publisher\t";
//								cin>>publish1;
//								for(int n=0 ; n < 100 ; n++)
//								{
//									if( ( strcmp (publish1,book[n].getPublisher( ) ) ) == 0)
//									{
//										book[n].display();
//										exit(0);
//									}
//									else if(n == 99 && ( strcmp (publish1,book[n].getPublisher( ) ) ) != 0)
//									{
//										cout<<"Book not found\t";
//									}
//								}
//							}
//						break;
//						case 4:
//							{
//								cout<<"Enter ISBN\t";
//								cin>>isbn1;
//								for(int n=0 ; n < 100 ; n++)
//								{
//									if( isbn1  == book[n].getIsbn() )
//									{
//										book[n].display();
//									}
//									else if(n == 99 && isbn1  != book[n].getIsbn()) 
//									{
//										cout<<"Book not found\t";
//									}
//								}	
//							}
//					}
//				}
//			break;
//			case 4:
//				{
//					
//					cout << " Enter the particulars:\n ";
//					cout << "Title\t";
//					cin >> title1;
//					cout <<"Author\t";
//					cin >> author1;
//					cout << "Publisher\t";
//					cin >> publish1;
//					cout << "ISBN\t";
//					cin >> isbn1;
//					cout << "Price\t";
//					cin >> price1;
//					cout << "No. Of Copies\t";
//					cin >> copies1;
//					book[i].setParticulars(title1,author1,publish1,isbn1,price1,copies1);
//					book[i].display();
//				}
//			break;
//			case 5:
//				{
//					exit(0);
//				}
//			}
//			goto Again;
//	}
//}