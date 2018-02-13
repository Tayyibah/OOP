#include<iostream>
using namespace std;
int getLen(char*s);
int main()
{
	int len;
	char s[]="we are muslims";
	len=getLen(s);
	cout<<len<<endl;
		return 0;
}
	
int getLen(char*s)
{
	int count =0;
	while(*s!='\0')
	{
		count++;
		s++;
	}
	return count;
}


