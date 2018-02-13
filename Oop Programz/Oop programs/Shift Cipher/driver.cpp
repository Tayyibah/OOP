#include <iostream>
using namespace std;
#include "ShiftCipher.h"
#include "CString.h"
int main()
{
	cout << "i have 150 balloons! alice" <<endl;
	CString secret=ShiftCipher::cipher("i have 150 balloons! alice",4);
	CString plain=ShiftCipher::decipher(secret,4);
	secret.display();
	plain.display();
	return 0;
}
