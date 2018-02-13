#include "Mystring.h"


MyString :: MyString ()
{
	strLength = 0;
	str = NULL;
}

MyString :: MyString(const char * name)
{
	strLength = strlen(name) + 1;
	if(name != NULL)
	{
		str = new char [strLength];
		for (int i = 0 ; i<strLength-1 ; i++)
		{
			str [i] = name [i];
		}
		str[strLength-1] = '\0';
	}
}


MyString :: MyString(const MyString & rhs)
{
	this-> strLength = rhs.strLength;
	if(rhs.str != NULL)
	{
		if(this->str != NULL)
		{
			delete [] this->str;
			this->str=NULL;
		}
		if(this->str != NULL)
		{
			this->str = new char [this->strLength];
			for (int i = 0 ; i<this->strLength-1 ; i++)
			{
				this->str [i] = this->str [i];
			}
			this->str[this->strLength-1] = '\0';
		}
	}
	else
	{
		cout<<"Right hand side object has nothing\n";
	}
}

void MyString :: operator= (const MyString & rhs)
{
	this-> strLength = rhs.strLength;
	if(rhs.str != NULL)
	{
		if(this->str != NULL)
		{
			delete [] str;
			str=NULL;
		}
		int len = strlen(rhs.str) + 1;
		str = new char [len];
		for (int i = 0 ; i<len-1 ; i++)
		{
			this->str [i] = rhs.str [i];
		}
		str[len-1] = '\0';
	}

}

void MyString :: display ()
{
	cout<<"String lendth is :\t"<<strLength<<endl<<endl;
	cout<<"Entered String is :\t"<<str<<endl<<endl;
}

int MyString :: getLength ()
{
	return strLength;
}


MyString :: ~MyString()
{
	if(this->str != NULL)
	{
		delete [] this->str;
		this->str=NULL;
	}
}

bool MyString :: operator == (const MyString & rhs) const
{
	if(this->strLength == rhs.strLength)
	{
		for (int i = 0; i<this->strLength; i++)
		{
			if(this->str[i] != rhs.str[i])
			{
				return false;
			}
		}
	}
	return true;
}

bool MyString :: operator != (const MyString & rhs) const
{
	if(this->strLength != rhs.strLength)
	{
		return true;
	}
	else
	{
		for (int i = 0; i<this->strLength; i++)
		{
			if(this->str[i] != rhs.str[i])
			{
				return true;
			}
		}
	}
	return false;
}
bool MyString :: operator <= (const MyString & rhs) const
{
	if(this->strLength <= rhs.strLength)
	{
		for(int i = 0; i<this->strLength ; i++)
		{
			if(this->str[i] > rhs.str[i])
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	return true;
		
}
bool MyString :: operator < (const MyString & rhs) const
{
	if(this->strLength <= rhs.strLength)
	{
		for(int i = 0; i<this->strLength ; i++)
		{
			if(this->str[i] >= rhs.str[i])
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	return true;
}

bool MyString :: operator >= (const MyString & rhs) const
{
	if(this->strLength >= rhs.strLength)
	{
		for(int i = 0; i<rhs.strLength ; i++)
		{
			if(this->str[i] > rhs.str[i])
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	return true;
}

bool MyString :: operator > (const MyString & rhs) const
{
	if(this->strLength > rhs.strLength)
	{
		for(int i = 0; i<rhs.strLength ; i++)
		{
			if(this->str[i] >= rhs.str[i])
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	return true;
}

MyString MyString :: operator + (const MyString & rhs) const
{
	MyString s1;
	if(this->str != NULL || rhs.str != NULL)
	{
		if(this->str != NULL && rhs.str == NULL)
		{
			return *this;
		}
		else
		{
			if(this->str == NULL && rhs.str != NULL)
			{
				return rhs;
			}
			else
			{
				int len = 0;
				s1.strLength = this->strLength + rhs.strLength;
				s1.str = new char [s1.strLength];
				for (int i = 0; i<this->strLength ; i++,len++)
				{
					s1.str[len] = this->str[i];
				}
				s1.str[len] = ' ';
				len++;
				for (int i = 0; i<rhs.strLength ; i++,len++)
				{
					s1.str[len] = rhs.str[i];
				}
				s1.str[len] = '\0';
			}
		}
	}
	else
	{
		s1.strLength = 0;
		s1.str = NULL;
		return s1;
	}
}


void MyString ::  operator += (const MyString & rhs)
{
	char *string;
	int x = 0;
	int len = this->strLength + rhs.strLength;
	string = new char [len];
	for (int i = 0; i<this->strLength-1 ; i++,x++)
	{
		string[x] = this->str[i];
	}
	string[x] = ' ';
	x++;
	for (int i = 0; i<rhs.strLength-1 ; i++,x++)
	{
		string[x] = rhs.str[i];
	}
	string[x] = '\0';
	delete [] this->str;
	this->str = string;
	
}

