#include<iostream>
#include"fstream"
#include"string"
using namespace std;
void displayJokes(fstream &file);
void displayLastLine(fstream &file);
int main()
{
	int num;
	fstream file1("d:\\file1.txt",ios::out|ios::in);
	string str;
	int i=0;
	getline(file1,str,'\n');
	while(!file1.eof() && i<10)
	{
		cout<<++i<<")"<<str<<endl;
		getline(file1,str,'\n');
	}
	file1.close();
	return 0;
}