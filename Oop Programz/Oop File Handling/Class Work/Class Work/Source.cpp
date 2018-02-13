#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
	ofstream ofs("D:\\test.txt");
	if(ofs.is_open())
	{
		cout<<"Hello" <<endl;
		ofs<<"Hello"<<endl ;
		cout<<hex<<10<<endl;
		ofs<<hex<<10<<endl;
		cout<<setw(10)<<"Hi"<<endl;
		ofs<<setw(10)<<"Hi"<<endl;
	}
	else
	{
		return false;
	}
	return 0;
}
