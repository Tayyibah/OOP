#include<iostream>
#include<cstring>
using namespace std;
class Roman
{
private:
	char data[7];//to store Roman Numeral
	int desimal; //to store Desimal value
public:
	Roman();
	char* getNumeral();
	int getDesimal();
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
		setNumeral("0");

}


int Roman :: getDesimal()
{
	return desimal;
}
	char* Roman :: getNumeral()
{
	return data;
}


	void Roman :: setNumeral(char* input)
{
	int len=strlen(input)+1;
	while(len>4)
	{
		cout<<"invalid number\n";
		cout<<"Enter Roman number between I to LXX \n";
		cout<<"enter a roman numeral \n";
		cin>>input;
		int len=strlen(input)+1;
	}
	for(int i=0; i<7; i++)
	{
		data[i]=input[i];
	}
}
	
void Roman :: setDecimal(int input)
{
	while (input <=1 || input >=80)
	{
		cout<<"\n\nWelcome to conversion From Decimal to Roman\n ";
		cout<<"enter a Decimal \n";
		cin>>input;
	}
	desimal=input;
}
	

int Roman :: toDecimal()
{
	int i=1, v=5,x=10,l=50, c=100, d=500, m=1000, des=0;
	int length=0;
	for(; data[length]!= '\0';)
	{
		length++;
	}
	for(int j=0; j<length; j++)
	{
		if((data[j] == 'I') && (data [j+1] == 'V' || data [j+1] == 'X'))
		{
			des-=i;
		}
		else
		{
			if (data[j] == 'I')
			{
				des+=i;
			}
			else
			{
				if(data[j] == 'V')
				{
					des+=v;
				}
				else
				{
					if ((data[j] == 'X') && (data [j+1] == 'L' || data [j+1] == 'C'))
					{
						des-=x;
					}
					else
					{
						if (data[j] == 'X')
						{
							des+=x;
						}
						else
						{
							if (data[j] == 'L')
							{
								des+=l;
							}
						}
					}
				}
			}
		}
	}
	return des;
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
					cout<<"Invalid Input\n";
					return false;
				}
			}
			if(data[i] =='X' && data[i+2])
			{
				if(data[i+1] == 'L' ||data[i+1] == 'V')
				{
					cout<<"Invalid Input\n";
					return false;
				}
			}
			if(data[i]=='I' && data[i+1]=='I')
			{
				if(data[i+2] == 'X' || data[i+2] == 'V' || data[i+2] == 'L')
				{
					cout<<"Invalid Input\n";
					return false;
				}
			}
			if(data[i] == 'V')
			{
				if(data[i+1] == 'X' || data[i+1] == 'L' || data[i+1] == 'V' ||data[i+2] == 'X' 
					|| data[i+2] == 'L' )
				{
					cout<<"Invalid Input\n";
					return false;
				}

			}
			if((data[i] == 'L') && (data[i+1] =='L' || data[i+2] =='L'))
			{
				cout<<"Invalid Input\n";
				return false;
			}
		}
		else
		{
			cout<<"Invalid Input\n";
			return false;
		}
		if(i>=2)
		{
			if(data[i] == data[i+1] || data[i] == data[i-1])
			{
				if ((data[i] == 'I' || data[i] == 'X'  ) && 
					(data[i+1] == data[i+2] || data[i-1] == data[i-2]))
				{
					cout << "Error. Try Again"<< endl;
					return false;
				}
			}
		}
	}
	return true;
}


void Roman :: printDec()
{
	cout<<"Desimal Number Of Roman Numaral is\t"<<desimal<<endl;
}


void Roman :: printRom()
{
	int len=strlen(data);
	cout<<"Roman Numaral is\t";
	for(int i=0; i<len;i++)
	{
		cout<<data[i];
	}
	cout<<endl;
}


void main()
{
	char numeral[7], value;
	int desValue=0, num=0;
	Roman obj;
	cout<<"This program will make conversions for you\n";
	cout<<"Enter R For Roman to Decimal\n";
	cout<<"Enter D	For Decimal to Roman\n";
	cin >> value;
	switch (value)
	{
	case 'D':
	case'd':
		{
			cout<<"Enter number between 1 to 80 \n";
			cout<<"enter a Decimal \n";
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
				cout<<"Enter Roman number between I to LXX \n";
				cout<<"enter a roman numeral \n";
				cin>>numeral;
				flage=obj.isRoman(numeral);
			}
			obj.setNumeral(numeral);
			char* numeral1=obj.getNumeral();
			desValue=obj.toDecimal();
			obj.setDecimal(desValue);
			obj.printDec();
			obj.printRom();
		}
		break;
	}	
}