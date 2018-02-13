#include<iostream>
#include<iomanip>
#include"fstream"
#include"string"
using namespace std;
int main()
{
	char ch;
	string fileName;
	const int size=5;
	fstream ifile("d:\\file1.txt",ios::in|ios::app);
	fstream ofile("d:\\file2.txt",ios::out|ios::app);
	ifile.get(ch);
	while(ifile)
	{
		ifile.get(ch);
		if(ch!='\n')
		{
			ch=ch+10;
		}
		else
			ch=ch;
		ofile.put(ch);
	}
	getline(ofile,fileName,'\n');
	while(ofile)
	{
		cout<<fileName<<endl;
		getline(ofile,fileName,'\n');
	}
	ifile.close();
	return 0;
}
