#include "CString.h"
class ShiftCipher
{
	static const char mapArray[42];
public:
	static CString cipher(const CString & plainText,int);
	static CString decipher(const CString & cipherText,int);
};
