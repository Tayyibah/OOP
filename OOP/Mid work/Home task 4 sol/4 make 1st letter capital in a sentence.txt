#include<iostream>
using namespace std;
 void toTitle(char * str);
 int main()
 {
        char str [100];
		cout<<"Enter string : ";
		cin.getline (str, 100);
	     toTitle( str);
		  return 0;

 }
void toTitle(char * str)
  {
	  if  (* str >='a' && *str <='z')
	  {
		  *str=*str-32;
	  }
	  int count =1;
	  while (*(str+count)!='\0')
	  {
		  if (*(str+count)== ' ')
		  {
			  count++;
			  if  (* (str+count) >='a' && *(str+count) <='z')
			  {
				*(str+count)=*(str+count)-32;	   
			  }
		  }
		  else if (* (str+count)>='A' && *(str+count)<='Z')
		  {
			  *(str+count)=*(str+count)+32;
		  }
		  count++ ;
	  }
		cout<<str;
	  
  }
