//#include<iostream>
//#include"fstream"
//#include"string"
//using namespace std;
//void showState(fstream & file,string name)
//{
//	cout<<"file.eof()"<<file.eof()<<endl;
//	cout<<"file.fail()"<<file.fail()<<endl;
//	cout<<"file.bad()"<<file.bad()<<endl;
//	cout<<"file.good()"<<file.good()<<endl;
//	file.clear();
//}
//int main()
//{
//	int num=10;
//	fstream file("d:\\myFile.txt",ios::out|ios::in|ios::ate);
//	file<<num<<endl;
//	showState(file,"d:\\myFile.txt");
//	if(file.fail())
//	{
//		cout<<"error in opening a file"<<endl;
//		file<<num<<endl;
//		showState(file,"d:\\myFile.txt");
//	}
//	else
//		file<<num*10<<endl;
//	file<<num<<endl;
//	showState(file,"d:\\myFile.txt");
//	file.close();
//	cout<<endl;
//	file<<num<<endl;
//	showState(file,"d:\\myFile.txt");
//	if(file.fail())
//	{
//		cout<<"error in opening a file"<<endl;
//		file<<num<<endl;
//		showState(file,"d:\\myFile.txt");
//	}
//	else
//		file<<num*10<<endl;
//	file<<num<<endl;
//	showState(file,"d:\\myFile.txt");
//	file.close();
//	return 0;
//}
