#include<iostream>
using namespace std;
struct MovieData
{
	char title[100];
	char director[100];
	int yearReleased;
	int runningTime;
};
void showData(MovieData);

int main()
{
	MovieData first;
	MovieData second;
	cout<<"enter title of movie:";
	cin.ignore();
	cin.getline(first.title,100);
	cout<<"enter director of movie:";
	cin.ignore();
	cin.getline(first.director,100);
	cout<<"enter year in which movie released:";
	cin>>first.yearReleased;
	cout<<"enter running time:";
	cin>>first.runningTime;
	cout<<"enter title of movie:";
	cin.ignore();
	cin.getline(second.title,100);
	cout<<"enter director of movie:";
	cin.ignore();
	cin.getline(second.director,100);
	cout<<"enter year in which movie released:";
	cin>>second.yearReleased;
	cout<<"enter running time:";
	cin>>second.runningTime;
	showData(first);
	showData(second);
	return 0;
}
void showData(MovieData num)
{
	cout<<endl;
	cout<<num.title<<endl;
	cout<<num.director<<endl;
	cout<<num.yearReleased<<endl;
	cout<<num.runningTime<<endl;
}