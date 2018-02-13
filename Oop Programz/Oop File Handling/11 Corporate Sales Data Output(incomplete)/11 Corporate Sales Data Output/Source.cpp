#include<iostream>
#include"fstream"
#include"string"
using namespace std;
struct Sales
{
	char * divisionName;
	int quarter;
	int QuarterSales;
};
int main()
{
	Sales s;
	const int size=4;
	Sales arr[size]={{"East",.75,20},{"West",.75,20},{"North",.75,20},{"South",.80,20}};
	fstream file1("D:\\file1.bin",ios::out|ios::in|ios::binary);
	fstream file2("d:\\file2.bin",ios::out|ios::in|ios::binary);
	fstream file3("d:\\file3.bin",ios::out|ios::in|ios::binary);
	int num;
	string str;
	char ch;
	int i=0;
	for(int i=0;i<size;i++)
	{
		/*for(int j=0;j<strlen(arr[i].divisionName);j++)
		{
			file1.put(arr[i].divisionName[j] );
		}*/
		file1.write(reinterpret_cast<char *>(&arr[i].divisionName),sizeof(arr[i].divisionName));
		cout<<file1.read(reinterpret_cast<char *>(&arr[i].divisionName),sizeof(arr[i].divisionName));
		cout<<endl;
		/*file1.put(' ');*/
	}
	while(i<4)
	{
		file2.put(arr[i].quarter );
		i++;
	}
	i=0;
	while(i<4)
	{
		file3.put(arr[i].QuarterSales );
		i++;
	}
	
	file1.close();
	file2.close();
	file3.close();
	return 0;
}
