#include<iostream>
using namespace std;
int compareStrings(char * str1, char * str2);
int main()
{
	char str1[]="apple";
	char str2[]="Apple";
	int ret;
	ret=compareStrings(str1,str2);
		if(ret==0)
			cout<<"Both strings are equal"<<endl;
	else if(ret==1)
		cout<<"string 1 is bigger than 2"<<endl;
	else
		cout<<"string 1 is lower than 2"<<endl;
	return 0;
}

int compareStrings(char * str1, char * str2)
{
	for(int i=0;i<20;i++)
	{
		if(str1[i]==str2[i])
			return 0;
		else if(str1[i] >= 'A' && str1[i] <= 'Z' &&str2[i] <='a' && str2[i]<='z')
			return -1;
		else if(str2[i] >= 'A' && str2[i] <= 'Z' &&str1[i] <='a' && str1[i]<='z')
			return 1;
	}

}
	