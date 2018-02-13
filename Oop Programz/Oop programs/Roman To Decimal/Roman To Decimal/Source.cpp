#include <iostream>
using namespace std;

class RomanNumeral
{
	char romanNumber[100];
	int decimalNumber;

	int getLength(char *number)
	{
		int count = 0;
		while(number[count] != '\0')
		{
			count++;
		}
		return count;
	}

	int getDecimalValue(char ch)
	{
		
			if( ch == 'I')
			{
				return 1;
			}
			else if(ch == 'V')
			{
				return 5;
			}
			else if(ch == 'X')
			{
				return 10;
			}
			else if(ch == 'L')
			{
				return 50;
			}
			else if(ch == 'C')
			{
				return 100;
			}
			else if(ch == 'D')
			{
				return 500;
			}
			else if(ch == 'M')
			{
				return 1000;
			}

	}

	void convertRomanToDecimal()
	{
		decimalNumber = 0;
		int max;
		int temp;
		int index = getLength(romanNumber);
		index -= 1;
		
		max = getDecimalValue(romanNumber[index]);
		decimalNumber = getDecimalValue(romanNumber[index--]);

		while(index >= 0)
		{
			temp = getDecimalValue(romanNumber[index--]);
			if(temp == max)
			{
				decimalNumber += temp;
			}
			else if(temp > max)
			{
				decimalNumber += temp;
				max = temp;
			}
			else 
			{
				decimalNumber -=temp;
			}

		}
		
	}

	char getRomanValue(int num)
	{
		if(num == 1)
		{
			return 'I';
		}
		else if(num == 5)
		{
			return 'V';
		}
		else if(num == 10)
		{
			return 'X';
		}
		else if(num == 50)
		{
			return 'L';
		}
		else if(num == 100)
		{
			return 'C';
		}
		else if(num == 500)
		{
			return 'D';
		}
		else if(num == 1000)
		{
			return 'M';
		}
	}

	int getMaxCorresponding(int num)
	{
		if(num >= 1000 )
		{
			return 1000;
		}
		else if(num >= 500)
		{
			return 500;
		}
		else if(num >= 500)
		{
			return 500;
		}
		else if(num >= 100)
		{
			return 100;
		}
		else if(num >= 50)
		{
			return 50;
		}
		else if(num >= 10)
		{
			return 10;
		}
		else if(num >= 5)
		{
			return 5;
		}
		else 
		{
			return 1;
		}
	}

	void convertDecimalToRoman()
	{
		int index=0;
		char roman[100];
		int max;
		int num = decimalNumber;

		while(num >= 1)
		{
			max = getMaxCorresponding(num);
			romanNumber[index++] = getRomanValue(max);
			num -= max;
		}
		romanNumber[index] = '\0';
	}

public:
	int getDecimalNumber()
	{
		return decimalNumber;
	}
	
	const char * getRomanNumber()
	{
		return romanNumber;
	}

	void setRomanNumber(char * rn)
	{
		strcpy_s(romanNumber,rn);
		convertRomanToDecimal();
	}

	void setDecimalNumber(int num)
	{
		decimalNumber = num;
		convertDecimalToRoman();
	}

};


int main()
{
	RomanNumeral rn;

	rn.setRomanNumber("CCCLIX");
	cout << "Decimal Number: " << rn.getDecimalNumber() << endl;

	rn.setDecimalNumber(359);
	cout << "Roman Number: " << rn.getRomanNumber() << endl;

	return 0;
}