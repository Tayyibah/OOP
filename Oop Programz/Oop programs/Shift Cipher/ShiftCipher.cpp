#include <iostream>
using namespace std;
#include "ShiftCipher.h"
#include "CString.h"
const char ShiftCipher::mapArray[42]={' ','a','b','c','d','e','f','g','h','i',
									  'j','k','l','m','n','o','p','q','r','s',
									  't','u','v','w','x','y','z','0','1','2',
									  '3','4','5','6','7','8','9','.','!','?',
									  ',',';'};
CString ShiftCipher::cipher(const CString & plainText, int shiftAmount)
{
	CString cipherText;
	cipherText.resize(plainText.getLength()+1);
	int i=0;
	while(plainText.at(i)!='\0')
	{
		int j=0;
		while(plainText.at(i)!=mapArray[j])
		{
			j++;
		}
		if(j+shiftAmount>41)
		{
			cipherText.at(i)=mapArray[j+shiftAmount-42];
		}
		else
		cipherText.at(i)=mapArray[j+shiftAmount];
		i++;
	}
	cipherText.at(i)='\0';
	return cipherText;
}
CString ShiftCipher::decipher(const CString & cipherText, int shiftAmount)
{
	CString plainText;
	plainText.resize(cipherText.getLength()+1);
	int i=0;
	while(cipherText.at(i)!='\0')
	{
		int j=0;
		while(cipherText.at(i)!=mapArray[j])
		{
			j++;
		}
		if(j-shiftAmount<0)
		{
			plainText.at(i)=mapArray[j-shiftAmount+42];
		}
		else
		plainText.at(i)=mapArray[j-shiftAmount];
		i++;
	}
	plainText.at(i)='\0';
	return plainText;
}