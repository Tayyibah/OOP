#include<iostream>
#include"fstream"
#include"string"
using namespace std;
void showState(fstream & file,string name)
{
	cout<<"file.eof()"<<file.eof()<<endl;
	cout<<"file.fail()"<<file.fail()<<endl;
	cout<<"file.bad()"<<file.bad()<<endl;
	cout<<"file.good()"<<file.good()<<endl;
	file.clear();
}
int main()
{
	int num;
	string str;
	fstream file("d:\\myFile.txt",ios::out|ios::in/*|ios::ate*/);
	getline(file,str,'\n');
	while(getline(file,str,'\n'))
	{
		cout<<str<<endl;
		getline(file,str,'\n');
	}
	file.close();
	return 0;
}
