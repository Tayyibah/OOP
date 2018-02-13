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
	string strSearc="Tayyibah Alauddin";
	int i=0;
	getline(file1,str,'\n');
	while(!file1.eof() && i<10)
	{
		if(strSearc==str)
		{
			i++;
		}
		getline(file1,str,'\n');
	}
	cout<<strSearc<<" has occurred "<<i <<" times "<<endl;
	file1.close();
	return 0;
}