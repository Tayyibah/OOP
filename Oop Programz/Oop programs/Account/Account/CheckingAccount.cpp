#include"CheckingAccount.h"
CheckingAccount::CheckingAccount(int balance,double feeAmount):Account(balance)
{

}
double CheckingAccount::creditBalance()
{
	return Account::getBalance()-feeChargedPerTransaction;
}
double CheckingAccount::debitBalance()
{
	if(getBalance()<feeChargedPerTransaction)
	return Account::getBalance()-feeChargedPerTransaction;
}