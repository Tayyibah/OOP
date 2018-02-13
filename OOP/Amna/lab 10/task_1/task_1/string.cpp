#include<iostream>
using namespace std;
#include"string.h"
myString::myString()
{
	str = NULL;
	len = 0;

}
myString::myString(char *n)
{
	if (n != NULL)
	{
		len = strlen(n) + 1;
		str = new char[len];
		for (int i = 0; i < len; i++)
		{
			str[i] = n[i];
		}
	}

}
myString ::~myString()
{
	if (str != NULL)
	{
		delete[] str;
		str = NULL;
	}
}
myString::myString(const myString & rhs)
{
	if (this->str != NULL)
	{
		len = rhs.len;
		this->str = new char[len];
		for (int i = 0; i<len; i++)
		{
			str[i] = rhs.str[i];
		}
	}
}
void myString :: operator & (char c)
{
	myString s;
	s.len = (len * 2) + 1;
	s.str = new char[s.len];
	for (int i = 0, j = 0; i<s.len, j<len; i++)
	{
		if (i % 2 == 0)
		{
			s.str[i] = str[j];
			j++;
		}
		else
		{
			s.str[i] = c;
		}
	}
	if (str != NULL)
	{
		delete[]str;
		str = NULL;
	}
	str = new char[s.len];
	for (int i = 0; i<s.len; i++)
	{
		str[i] = s.str[i];
	}
}
void myString::insertString(int index, char * newstr)
{
	myString temp;
	int l = strlen(newstr);
	int l2 = strlen(str);
	temp.str = new char[l2];
	for (int i = 0; i<l2; i++)
	{
		temp.str[i] = str[i];
	}
	len = l2 + l + 1;
	if (str != NULL)
	{
		delete[] str;
		str = NULL;
	}
	int i, m;
	str = new char[len];
	if (index == 0)
	{
		for (i = 0; i<l; i++)
		{
			str[i] = newstr[i];
		}
		for (int j = i; j<l2; j++)
		{
			int k = 0;
			str[j] = temp.str[k];
			k++;
		}
	}
	else if (index>0 && index < l2)
	{
		for (m = 0; m<index; m++)
		{
			str[m] = temp.str[m];
		}
		for (int n = m; n<index; n++)
		{
			int k = 0;
			str[n] = newstr[k];
			k++;
		}
		for (int o = index; o<len - index; o++)
		{
			str[o] = temp.str[i];
			i++;
		}
	}
	else
	{
		int i;
		for (i = 0; i<l2; i++)
		{
			str[i] = temp.str[i];
		}
		for (int j = i; j<l; j++)
		{
			int k = 0;
			str[j] = temp.str[k];
			k++;
		}
	}
}
void myString::display()
{
	cout << "new string is :";
	cout << str << "\n";
}