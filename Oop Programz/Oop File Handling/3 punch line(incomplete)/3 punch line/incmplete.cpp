#include<iostream>
#include"fstream"
#include"string"
using namespace std;
void displayJokes(fstream &file);
void displayLastLine(fstream &file);
int main()
{
	int num;
	fstream file1("d:\\myFile.txt",ios::out|ios::in|ios::ate);
	fstream file2("d:\\myFile.txt",ios::out|ios::in|ios::ate);
	displayJokes(file1);
	displayLastLine(file1);
	displayJokes(file2);
	displayLastLine(file2);
	file1.close();
	file2.close();
	return 0;
}
void displayJokes(fstream &file)
{
	string str;
	while(!getline(file,str,'\n'))
	{
		cout<<str<<endl;
		getline(file,str,'\n');
	}
}
void displayLastLine(fstream &file)
{
	/*while()
	{
		string str;
		cout<<str<<endl;
		getline(file,str,'\n');
	}*/
}