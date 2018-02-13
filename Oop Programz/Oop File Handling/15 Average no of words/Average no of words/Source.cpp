#include<iostream>
#include"fstream"
#include"string"
using namespace std;
int main()
{
	fstream file("D:\\myFile.bin",ios::out|ios::in|ios::app|ios::binary);
	string str;
	int i=0;
	int j=0;
	int k=0;
	char ch;
	file.get(ch);
	int arr[10];
	//getline(file,str,'\n');
	while(file/*.get(ch)*/)
	{
		//cout<<str<<endl;
		//getline(file,str,'\n');
		//k++;
		//ch++;
		if(ch=='\n')
		{
			j--;
			arr[i]=j;
			cout<<arr[i];
			cout<<endl;
			i++;
			j=0;
			k++;
		}
		file.get(ch);
		j++;
	}
	int sum=0;
	for(int i=0;i<k;i++)
	{
		sum=sum+arr[i];
	}
	int avg=sum/k;
	cout<<"Avg of words in file is "<<avg<<endl;
	file.close();
	return 0;
}
