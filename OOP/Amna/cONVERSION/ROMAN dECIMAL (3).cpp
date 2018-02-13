#include<iostream>
#include<cstring>
using namespace std;
class Roman
{
private:
	char data[7];//to store Roman Numeral
	int decimal; //to store Decimal value
public:
	Roman();
	char* getNumeral();
	int getDecimal();
	void setNumeral(char*);
	void setDecimal(int);
	int toDecimal();
	char* toRoman(int, char *);
	bool isRoman(char*);
	void printDec();
	void printRom();
};

Roman :: Roman()
{
		//you can initialize to i in constructor because there is no
		//representation for "0" in Roman Numerals............
		setNumeral("0");
		// you have to use strcpy(destination,source)
		//to assign some value to data.
}


int Roman :: getDecimal()
{
	return decimal;
}
	char* Roman :: getNumeral()
{
		//return the value of Roman Numeral stored in
		//data
	return data;
}


	void Roman :: setNumeral(char* input)
{
		//store the input value in data
	for(int i=0; i<7; i++)
	{
		data[i]=input[i];
	}
}
	
void Roman :: setDecimal(int input)
{
		//Convert the input into Roman and storeinto
		//data
	while (input <=1 || input >=80)
	{
		cout<<"enter a Decimal \n";
		cin>>input;
	}
	decimal=input;
}
	

int Roman :: toDecimal()
{
		//to convert the string stored in 
		//data to decimal
	int i=1, v=5,x=10,l=50, c=100, d=500, m=1000, res=0;
	int length=0;
	for(; data[length]!= '\0';)
	{
		length++;
	}
	for(int j=0; j<length; j++)
	{
		if((data[j] == 'I') && (data [j+1] == 'V' || data [j+1] == 'X'))
		{
			res-=i;
		}
		else
		{
			if (data[j] == 'I')
			{
				res+=i;
			}
			else
			{
				if(data[j] == 'V')
				{
					res+=v;
				}
				else
				{
					if ((data[j] == 'X') && (data [j+1] == 'L' || data [j+1] == 'C'))
					{
						res-=x;
					}
					else
					{
						if (data[j] == 'X')
						{
							res+=x;
						}
						else
						{
							if (data[j] == 'L')
							{
								res+=l;
							}
						}
					}
				}
			}
		}
	}
	return res;
}

char* Roman :: toRoman(int num, char* roman)
{
	int i=0;
	while (num)
	{
		if (num<4)
		{
			roman[i]='I';
			num--;
		}
		else
		{
			if (num==4)
			{
				roman[i]='I';
				i++;
				roman[i]='V';
				num-=4;
			}
			else
			{
				if (num<9)
				{
					roman[i]= 'V';
					num-=5;
				}
				else
				{
					if (num == 9)
					{
						roman[i]='I';
						i++;
						roman[i]='X';
						num-=9;
					}
					else
					{
						if (num<40)
						{
							roman[i]='X';
							num-=10;
						}
						else
						{
							if (num<50)
							{
								roman[i]='X';
								i++;
								roman[i]='L';
								num-=40;
							}
							else
							{
								if(num<80)
								{
									roman[i]='L';
									num-=50;
								}
							}
						}
					}
				}
			}
		}
		i++;
	}
	roman[i]='\0';
	return roman;
}
bool Roman :: isRoman(char * data)
{
	int len= strlen(data);
	for(int i=0; i<len; i++)
	{
		if ( data[i]== 'I' || data[i]== 'V' || data[i]== 'X' || data[i]== 'L' )
		{
			if(data[i]=='I' || data[i]=='V' || data[i]=='L')
			{
				if((data[i+2]==data[i]) && (data[i+1] != data[i]))
				{
					cout<<"Invalid Input because greater no can never occur before smaller no.eg VIV is wrong input.\n";
					return false;
				}
			}
			if(data[i] =='X' && data[i+2]=='X')
			{
				if(data[i+1] == 'L' ||data[i+1] == 'V')
				{
					cout<<"Invalid Input because XLX or XVX are nvalid inputs.\n";
					return false;
				}
			}
			if(data[i]=='I' && data[i+1]=='I')
			{
				if(data[i+2] == 'X' || data[i+2] == 'V' || data[i+2] == 'L')
				{
					cout<<"Invalid Input because I can occur only once before the larger number.\n";
					return false;
				}
			}
			if(data[i] == 'V')
			{
				if(data[i+1] == 'X' || data[i+1] == 'L' || data[i+1] == 'V' ||data[i+2] == 'X' 
					|| data[i+2] == 'L' )
				{
					cout<<"Invalid Input because V can be used only with I.\n";
					return false;
				}

			}
			if(data[i]=='I' &&  data[i+1]=='I' && data[i+2]=='I' && data[i+3]=='I')
			{
				cout<<"Invalid Input because 4 cannot be represented as IIII instead of IV.\n";
			}
			if(data[i]=='X' &&  data[i+1]=='X' && data[i+2]=='X' && data[i+3]=='X')
			{
				cout<<"Invalid Input because 40 is represented as XL.\n";
			}

			if((data[i] == 'L') && (data[i+1] =='L' || data[i+2] =='L'))
			{
				cout<<"Invalid Input because 150 is not LLL in roman.\n";
				return false;
			}
		}
		else
		{
			cout<<"Invalid Input\n";
			return false;
		}
	}
	return true;
}


void Roman :: printDec()
{
		//Print Decimal equivalent value of Roman 
		//value stored
	cout<<"Decimal Number Of Roman Numeral is\t"<<decimal<<endl;
}


void Roman :: printRom()
{
		//Print Roman value stored
	int len=strlen(data);
	cout<<"Roman Numeral is\t";
	for(int i=0; i<len;i++)
	{
		cout<<data[i];
	}
	cout<<endl;
	/*cout<<"Roman Numaral is\t"<<data<<endl;*/
}


void main()
{
	char numeral[7], value;
	int dest=0, num=0;
	Roman obj;
	cout<<"This program will make conversions for you\n";
	cout<<"Press: R	,r....	From Roman to Decimal\n";
	cout<<"Press: D	,d....	From Decimal to Roman\n";
	cin >> value;
	switch (value)
	{
	case 'D':
	case'd':
		{
			cout<<"\n\n conversion From Decimal to Roman....\n ";
			cout<<"Enter number between 1 to 80. \n";
			cout<<"enter a Decimal: \n";
			cin>>num;
			obj.setDecimal(num);
			num=obj.getDesimal();
			obj.toRoman(num,numeral);
			obj.setNumeral(numeral);
			char* numeral1=obj.getNumeral();
			obj.printDec();
			obj.printRom();
		}
		break;
	case 'R':
	case 'r':
		{
			bool flage= false;
			while (flage == false)
			{
				cout<<"\n\n conversion From Roman to Decimal....\n ";
				cout<<"Enter Roman number between I to LXXX. \n";
				cout<<"enter a roman numeral. \n";
				cin>>numeral;
				flage=obj.isRoman(numeral);
			}
			obj.setNumeral(numeral);
			char* numeral1=obj.getNumeral();
			dest=obj.toDecimal();
			obj.setDecimal(desValue);
			obj.printDec();
			obj.printRom();
		}
		break;
	}	
}