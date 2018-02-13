#include<iostream>
using namespace std;
#include "CString.h"
int CString::getLength(const char * const str) const
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}
void CString::copy(char * const dest, const char *  const source)
{
	int i = 0;
	while (source[i] != '\0')
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
}
bool CString::isValidIndex(int i) const
{
	if (i >= 0 && i<size)
		return true;
	return false;
}
CString::CString()
{
	size = 0;
	data = 0;
}
CString::CString(char ch)
{
	size = 2;
	data = new char[size];
	data[0] = ch;
	data[1] = '\0';
}
CString::CString(const char *const  str)
{
	size = getLength(str) + 1;
	data = new char[size];
	copy(data, str);
}
CString::~CString()
{
	if (data)
		delete[] data;
	data = 0;
	size = 0;
}
istream & operator >> (istream & s, const CString & c)//void input();
{
	cout << "Enter string:";
	cin.getline(c.data, c.size);
	return s;
}
char & CString::operator [](const int index)//char & at( const int index);
{
	if (isValidIndex(index) == false)
		exit(0);
	else
		return data[index];

}
const char & CString::operator [](const int index)const//const char & at( const int index) const;
{
	if (isValidIndex(index) == false)
		exit(0);
	else
		return data[index];

}

//ostream & operator << (ostream & s, const CString & c)//void display()const;
//{
//	if (c.data != NULL)
//		cout << c.data << endl;
//	return s;
//}
void CString::display()const
{
	if (data != NULL)
		cout << data << endl;
}
int CString::isEmpty() const
{
	if (data == NULL)
		return 0;
	return -1;
}
int CString::getLength() const
{
	int i = 0;
	while (data[i] != '\0')
	{
		i++;
	}
	return i;
}
int CString::find(const char * const substr, const int start) const
{
	int substrSize = getLength(substr);
	while (start<size)
	{
		int temp, temp1, temp2;
		temp = start;
		temp2 = start;
		temp1 = 0;
		while (temp<size && temp1<substrSize && data[temp] == substr[temp1])
		{
			temp++;
			temp1++;
		}
		if (temp1 == substrSize)
		{
			return temp2;
		}
		temp2;
	}
	return -1;
}
int CString::find(const char ch, const int start) const
{
	int i = start;
	while (data[i] != '\0')
	{
		if (data[i] == ch)
		{
			return i;
		}
		i++;
	}
	return -1;
}
int CString::insert(const int index, const char * const substr)
{
	if (!isValidIndex(index))
	{
		return -1;
	}
	int substrSize = getLength(substr);
	int newSize = size + substrSize;
	char * temp = new char[newSize];
	int i = 0, j = 0, k = 0;
	while (i<index)
	{
		temp[k] = data[i];
		i++;
		k++;
	}
	while (substr[j] != '\0')
	{
		temp[k] = substr[j];
		k++;
		j++;
	}
	while (i<size)
	{
		temp[k++] = data[i++];

	}
	this-> ~CString();
	data = temp;
	size = newSize;
	return size - 1;
}
int CString::insert(const int index, const char ch) // heap error
{
	if (!isValidIndex(index))
	{
		return -1;
	}
	int newSize = size + 1;
	char * temp = new char[newSize];
	int i = 0, j = 0, k = 0;
	while (i<index)
	{
		temp[k++] = data[i++];
	}
	temp[k++] = ch;
	while (i<size)
	{
		temp[k++] = data[i++];
	}
	this-> ~CString();
	data = temp;
	size = newSize;
	return size - 1;
}
int CString::remove(const int index, const int count)
{
	if (!isValidIndex(index))
	{
		return -1;
	}
	int	newSize = size - count;
	char * temp = new char[newSize];
	int i = 0, j = 0;
	while (i<index)
	{
		temp[i++] = data[j++];
	}
	j = j + count;
	while (data[j] != '\0')
	{
		temp[i++] = data[j++];
	}
	temp[i] = '\0';
	this-> ~CString();
	data = temp;
	size = newSize;
	return size - 1;
}
int CString::remove(const char ch)
{
	int i = 0, count = 0;
	while (data[i] != '\0')
	{
		if (data[i] == ch)
		{
			count++;
		}
		i++;
	}
	int newSize = size - count;
	char * temp = new char[newSize];
	int k = 0;
	int j = 0;
	while (k<(newSize))
	{
		while (data[j] == ch)
		{
			j++;
		}
		temp[k++] = data[j++];
	}
	this-> ~CString();
	data = temp;
	size = newSize;
	return count;
}
void CString::replace(const char ch)
{
	int i = 0;
	while (data[i] != '\0')
	{
		data[i] = ch;
		i++;
	}
}
int CString::replace(const char old, const char new1)
{
	int i = 0; int j = 0;
	while (data[i] != '\0')
	{
		if (data[i] == old)
		{
			data[i] = new1;
			j++;
		}
		i++;
	}
	return j;
}
int CString::replace(const char * const old, const char * const new1)
{
	int j = 0, count = 0;
	while (j<size)
	{
		int i = find(old);
		if (i != -1)
		{
			remove(i, getLength(old));
			insert(i, new1);
			int newSize = getLength(new1);
			j = i + newSize; count++;
		}
		else
			j++;
	}
	return count;
}
void CString::rightTrim()
{
	int i;
	for (i = size - 2; i >= 0; i--)
	{
		if (data[i] != ' ')
		{
			break;
		}
	}
	data[i + 1] = '\0';
	size = i + 1;
}
void CString::leftTrim()
{
	int i;
	for (i = 0; i<size; i++)
	{
		if (data[i] != ' ')
			break;
	}
	int k = 0;
	while (data[i] != '\0')
	{
		data[k] = data[i];
		i++;
		k++;
	}
	data[k] = '\0';
	size = k + 1;
}
void CString::trim()
{
	leftTrim();
	rightTrim();
}
void CString::makeUpper()
{
	int i = 0;
	while (data[i] != '\0')
	{
		if (data[i] >= 'a' && data[i] <= 'z')
		{
			data[i] = data[i] - 32;
		}
		i++;
	}
}
void CString::makeLower()
{
	int i = 0;
	while (data[i] != '\0')
	{
		if (data[i] >= 'A' && data[i] <= 'Z')
		{
			data[i] = data[i] + 32;
		}
		i++;
	}
}
void CString::reverse()
{
	int newSize = size;
	char * temp = new char[newSize];
	int i = getLength() - 1;
	int j = 0;
	while (i >= 0)
	{
		temp[j] = data[i];
		j++;
		i--;
	}
	temp[j] = '\0';
	this-> ~CString();
	data = temp;
	size = newSize;
}
void CString::resize(const int ns)
{
	char * temp = new char[ns];
	int i = 0;
	while (i< ns && data != NULL)
	{

		temp[i] = data[i];
		i++;
	}

	this-> ~CString();
	data = temp;
	size = ns;
}
void CString::operator +=(const CString& s2)//void concatEqual( const CString& s2 );
{
	int newSize = size + s2.size - 1;
	char * temp = new char[newSize];
	int i = 0, j = 0;
	while (data[i] != '\0')
	{
		temp[j++] = data[i++];
	}
	i = 0;
	while (s2.data[i] != '\0')
	{
		temp[j++] = s2.data[i++];
	}
	temp[j] = '\0';
	this-> ~CString();
	data = temp;
	size = newSize;
}
CString CString::operator +(const char * const s2)const//	CString concat( const char * const s2 )  const;
{
	CString newObj;
	newObj.size = size + getLength(s2);
	newObj.data = new char[newObj.size];
	int i = 0, j = 0;
	while (data[i] != '\0')
	{
		newObj.data[j++] = data[i++];
	}
	i = 0;
	while (s2[i] != '\0')
	{
		newObj.data[j++] = s2[i++];
	}
	newObj.data[j] = '\0';
	return newObj;
}
int CString::operator ==(const CString& s2)//int isEqual(const CString & s2 )const
{
	int i = 0, j = 0;
	while (data[i] != '\0' && s2.data[j] != '\0')
	{
		if (data[i]>s2.data[j])
		{
			return 1;
		}
		if (data[i]<s2.data[j])
		{
			return -1;
		}
		i++;
		j++;
	}
	if (size - 1>s2.size - 1)
		return 1;
	if (size - 1<s2.size - 1)
		return -1;
	return 0;
}
int CString::operator ==(const char *const s2) //int isEqual(const char *const s2 ) ;
{
	int i = 0, j = 0;
	while (data[i] != '\0' && s2[j] != '\0')
	{
		if (data[i]>s2[j])
		{
			return 1;
		}
		if (data[i]<s2[j])
		{
			return -1;
		}
		i++;
		j++;
	}
	if (getLength()>getLength(s2))
		return 1;
	if (getLength()<getLength(s2))
		return -1;
	return 0;
}
CString::CString(const CString & ref)
{
	if (ref.data == NULL)
	{
		data = 0;
		size = 0;
		return;
	}
	else
	{
		size = ref.size;
		data = new char[size];
		copy(data, ref.data);
	}

}
CString CString::left(const int count)
{
	int newsize = size - count;
	char * temp = new char[newsize];
	int i = 0, j = count;
	while (i<newsize)
	{
		temp[i++] = data[j++];
	}
	return temp;
}
CString CString::right(const int count)
{
	int newsize = size - count;
	char * temp = new char[newsize];
	int i = 0, j = 0;
	while (i<newsize)
	{
		temp[i++] = data[j++];
	}
	temp[newsize - 1] = '\0';
	return temp;
}

CString CString::operator + (const CString& s2)const //CString concat( const CString& s2 ) const  ;
{
	CString newObj;
	newObj.size = size + s2.size - 1;
	newObj.data = new char[newObj.size];
	int i = 0, j = 0;
	while (data[i] != '\0')
	{
		newObj.data[j++] = data[i++];
	}
	i = 0;
	while (s2.data[i] != '\0')
	{
		newObj.data[j++] = s2.data[i++];
	}
	newObj.data[j] = '\0';
	return newObj;
}

//CString CString::operator +( const char * const s2 )const//	CString concat( const char * const s2 )  const;
//{
//	CString newObj;
//	newObj.size=size+getLength(s2);
//	newObj.data= new char[newObj.size];
//	int i=0,j=0;
//	while(data[i]!='\0')
//	{
//		newObj.data[j++]=data[i++];
//	}
//	i=0;
//	while(s2[i]!='\0')
//	{
//		newObj.data[j++]=s2[i++];
//	}
//	newObj.data[j]='\0';
//	return newObj;
//}
//CString operator () ( const char * const delim);//CString tokenzie( const char * const delim ); 