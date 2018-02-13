#ifndef PACKAGE_H
#define PACKAGE_H
#include "CString.h"
class Package
{
	CString senderName;
	CString senderAddress;
	CString senderCity;
	CString senderState;
	int senderZipCode;
	float weightInOunce;
	float costPerOunce;
	CString recipientName;
	CString recipientAddress;
	CString recipientCity;
	CString recipientState;
	int recipientZipCode;
public:
	Package(CString &,CString &,CString &,CString &,int,float,float,CString &,CString &,CString &,CString &,int);
	double calculateCost() const;
	void setSenderName(CString & );
	CString getSenderName() const;
	void setRecipientName(CString & );
	CString getRecipientName() const;
	void setSenderAddress(CString & );
	CString getSenderAddress() const;
	void setRecipientAddress(CString & );
	CString getRecipientAddress() const;
	void setSenderCity(CString &);
	CString getSenderCity() const;
	void setRecipientCity(CString &);
	CString getRecipientCity() const;
	void setSenderState(CString &);
	CString getSenderState() const;
	void setRecipientState(CString &);
	CString getRecipientState() const;
	void setSenderZipCode(int);
	int getSenderZipCode() const;
	void setRecipientZipCode(int);
	int getRecipientZipCode() const;
	void setWeightInOunce(float );
	float getWeightInOunce() const;
	void setCostInOunce(float);
	float getCostInOunce() const;
};
#endif