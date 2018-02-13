//// Create a sequential file.
//#include <iostream>
//#include <fstream>
//using namespace std;
//int main() 
//{
//	// ofstream constructor opens file
//	ofstream outClientFile( "d:\\clients.txt",ios::out );
//	// exit program if unable to create file
//	if ( !outClientFile ) 
//	{ // overloaded ! operator
//		cout << "File could not be opened" << endl;
//		exit( 1 );
//	} // end if
//	cout << "Enter the account, name, and balance." << endl
//	<< "Enter \’N\’ to end input.\n? ";
//	int account;
//	char name[ 30 ], ch='y';A
//	double balance;
//	// read account, name and balance from cin, then place in file
//	while (ch == 'y') 
//	{
//		cin >> account >> name >> balance;
//		outClientFile << account << ' ' << name << ' ' << balance
//		<< endl;
//		cout << "? ";
//		cin>>ch;
//	} // end while
//	return 0; // ofstream destructor closes file
//} // end main