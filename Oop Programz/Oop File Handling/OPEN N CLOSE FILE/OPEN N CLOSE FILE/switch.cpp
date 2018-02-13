//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//const int ZERO = 0, CREDIT = 1, DEBIT = 2, END = 3;
//int main()
//{
//	// ifstream constructor opens the file
//	ifstream inClientFile( "clients.txt", ios::in );
//	// exit program if ifstream could not open file
//	if ( !inClientFile )
//	{
//		cout << "File could not be opened" << endl;
//		exit( 1 );
//	} // end if
//	int request;
//	int account;
//	char name[ 30 ];
//	double balance;
//	// get user's request (e.g., zero, credit or debit balance)
//	request = getRequest();
//	20
//	// process user's request
//	while ( request != END ) 
//	{
//		switch ( request ) 
//		{
//		case ZERO:
//		cout << "\nAccounts with zero balances:\n";
//		break;
//		case CREDIT:
//		cout << "\nAccounts with credit balances:\n";
//		break;
//		case DEBIT:
//		cout << "\nAccounts with debit balances:\n";
//		break;
//		} // end switch
//		// read account, name and balance from file
//		inClientFile >> account >> name >> balance;
//		// display file contents (until eof)
//		while ( !inClientFile.eof() ) 
//		{
//		// display record
//			if ( shouldDisplay( request, balance ) )
//				cout << account << ‘ ’<<name << ‘ ’<< balance << endl;
//			// read account, name and balance from file
//			inClientFile >> account >> name >> balance;
//		} // end inner while
//		inClientFile.clear(); // reset eof for next input
//		inClientFile.seekg( 0 ); // move to beginning of file
//		request = getRequest(); // get additional request from user
//	} // end outer while
//	// getRequest function definition
//	int getRequest()
//	{
//		int choice;
//		cout<<“Enter 0 to see zero balance accounts”<<endl;
//		cout<<“Enter 1 to see credit balance accounts”<<endl;
//		cout<<“Enter 2 to see debit balance accounts”<<endl;
//		cout<<“Enter 3 to end the program”<<endl;
//		cin>>choice;
//		return choice;
//	}
//	// shouldDisplay function definition
//	bool shouldDisplay(int req, double bal)
//	{
//		if( (req == ZERO && bal == 0) || (req == CREDIT && bal < 0) ||(req == DEBIT && bal > 0) )
//			return true;
//		else
//			return false;
//	}