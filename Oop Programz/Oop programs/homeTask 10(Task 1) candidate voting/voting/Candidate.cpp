#include"Candidate.h"

Candidate::Candidate()//receives name of candidate and election symbol
{
}
Candidate::Candidate(const CString nam)//receives name of candidate and election symbol
{
	name=nam;
}
void Candidate::setName(const CString nam)
{
	name=nam;
}
void Candidate::setElecSymbol(const CString sym)
{
	elecSymbol=sym;
}
void Candidate::setVotes(int v)
{
	votes=v;
}
CString Candidate::getElecSymbol()const
{
	return elecSymbol;
}
int Candidate::getVotes()const
{
	return votes;
}
CString Candidate:: getName() const
{
	return name;
}
void Candidate::castVote()//increment of 1 in the vote count of candidate
{
	votes=votes+1;
}