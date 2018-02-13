#include"Package.h"
Package::Package(CString & sname,CString & saddress,CString & scity,CString & sstate,int szipcode,float weight,float cost,CString & rname,CString & raddress,CString & rcity,CString & rstate,int rzipcode ):senderName(sname),senderAddress(saddress),senderCity(scity),senderState(sstate),senderZipCode(szipcode),weightInOunce(weight),costPerOunce(cost),recipientName(rname),recipientAddress(raddress),recipientCity(rcity),recipientState(rstate),recipientZipCode(rzipcode)
{
}
void Package::setSenderName(CString & sname)
{
	senderName=sname;
}
CString Package:: getSenderName() const
{
	return senderName;
}
void Package:: setRecipientName(CString & rname )
{
	recipientName=rname;
}
CString Package:: getRecipientName() const
{
	return recipientName;
}
void Package:: setSenderAddress(CString & saddress)
{
	senderAddress=saddress;
}
CString Package:: getSenderAddress() const
{
	return senderAddress;
}
void Package:: setRecipientAddress(CString & raddress)
{
	recipientAddress=raddress;
}
CString Package:: getRecipientAddress() const
{
	return recipientAddress;
}
void Package:: setSenderCity(CString & scity)
{
	senderCity=scity;
}
CString Package:: getSenderCity() const
{
	return senderCity;
}
void Package:: setRecipientCity(CString & rcity)
{
	recipientCity=rcity;
}
CString Package:: getRecipientCity() const
{
	return recipientCity;
}
void Package:: setSenderState(CString & sstate)
{
	senderState=sstate;
}
CString Package:: getSenderState() const
{
	return senderState;
}
void Package:: setRecipientState(CString & rstate)
{
	recipientState=rstate;
}
CString Package:: getRecipientState() const
{
	return recipientState;
}
void Package:: setSenderZipCode(int szipcode)
{
	senderZipCode=szipcode;
}
int Package:: getSenderZipCode() const
{
	return senderZipCode;
}
void Package:: setRecipientZipCode(int rzipcode)
{
	recipientZipCode=rzipcode;
}
int Package:: getRecipientZipCode() const
{
	return recipientZipCode;
}
void Package:: setWeightInOunce(float weight)
{
	if(weight>0)
		weightInOunce=weight;
}
float Package:: getWeightInOunce() const
{
	return weightInOunce;
}
void Package:: setCostInOunce(float cost)
{
	if(cost>0)
		costPerOunce=cost;
}
float Package:: getCostInOunce() const
{
	return costPerOunce;
}
double Package:: calculateCost() const
{
	return weightInOunce*costPerOunce;
}