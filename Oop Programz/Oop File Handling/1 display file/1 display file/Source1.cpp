#include<iostream>
#include"fstream"
#include"string"
using namespace std;
int main()
{
	int num;
	string str;
	char ch;
	fstream file("d:\\file1.txt",ios::in/*|ios::ate*/);
	file.get(ch);
	int i=0;
	while(getline(file,str,')')&& i<10)
	{
		cout<<str<<endl;
		getline(file,str,'\n');
		i++;
	}
	file.close();
	system("pause");
	return 0;
}
