#include<iostream>
using namespace std;
class BankAccount
{
public:
	double balance;
	double interestRate;
	double interest;
	int transactions;
	char email[100];
	void setBalance(double b)
	{
		if(b>0)
		{
			balance=b;
		}
	}
	void setInterestRate(double ir)
	{
		if(ir>=0)
		{
			interestRate=ir;
		}
	}
	void setInterest(double i)
	{
		if(i>=0)
		{
			interest = i;
		}
	}
	void setTransactions(int t)
	{
		if(t>=0)
		{
			transactions=t;
		}
	}
	void setEmail(char e[100])
	{
		int j=0;
		while (e[j]!='@')
		{
			j++;
		}
		int k=j+1;
		while(e[k]!='\0')
		{
			if(e[k]=='.')
			{
				strcpy(email,e);
				return;
			}
			k++;
		}
		int l=j+k;
	}
	double getBalance()
	{
		return balance;
	}
	double getInterestRate()
	{
		return interestRate;
	}
	double getInterest()
	{
		return interest;
	}
	int getTransactions()
	{
		return transactions;
	}
	char *getEmail()
	{
		return email;
	}
	double deposits(double deposits)
	{
		balance=deposits+balance;
		return balance;
	}
	double withDraw(double wd)
	{
		if(wd<balance)
		{
			balance=balance-wd;
		}
		return balance;
	}
	double calcInterest()
	{
		balance=balance+interest;
		return balance;
	}
	
};


int main()
{
	BankAccount b;
	b.setBalance(13.34);
	b.setInterestRate(0);
	b.setInterest(0);
	b.setTransactions(0);
	b.setEmail("tayyibahalauddin@yahoo.com");
	cout<<b.getBalance()<<endl;
	cout<<b.getInterestRate()<<endl;
	cout<<b.getInterest()<<endl;
	cout<<b.getTransactions()<<endl;
	cout<<b.getEmail()<<endl;
	cout<<b.deposits(12)<<endl;
	cout<<b.withDraw(234.4)<<endl;
	cout<<b.calcInterest()<<endl;
	return 0;
}
