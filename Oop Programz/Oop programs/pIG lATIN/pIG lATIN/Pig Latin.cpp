#include<iostream>
using namespace std;
int getLength( char *  str) 
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}
void display(char *  str)
{
	for (int i=0; i<getLength( str); i++)
	{
		cout<<str[i];
	}
	cout<<endl;
}
// IAY LEPTSAY OSTMAY FOAY HETAY IGHTNAY
char * getPigLatinString ( char * str )
{
	getLength(str);
	int j=0;
	int l=0;
	for (int i=0; i<getLength( str); i++)
	{
		if(str[i]==' ')
		{
			l++;
		}
	}
	int newlen=getLength(str)+(2*l)+1;
	char* newStr=new char[newlen];
	char* firstLetter=new char[l+1];
	j=0;
	l=0;
	int m=0;
	firstLetter[l++]=str[j++];
	int i=0;
	while( i<newlen)
	{
		while( str[j]!=' ')
		{
			 if( str[j]!=' ')
			{
				newStr[i++]=str[j++];
			 }
		}
		
		newStr[i++]=firstLetter[m++];
		newStr[i++]='A';
		newStr[i++]='Y';
		if(str[j]==' ')
		{
			newStr[i++]=str[j++];
			firstLetter[l++]=str[j++];
		}
		i++;
	}
	firstLetter[l++]='\0';
	newStr[i++]='\0';
	display(newStr);
	return newStr;
}
int main()
{
	getPigLatinString("I SLEPT MOST OF THE NIGHT");
	return 0;
}

	