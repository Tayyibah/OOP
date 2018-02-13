#include"CString.h"
#ifndef CANDIDATE_H
#define CANDIDATE_H
class Candidate 
{
private:
	CString name;    //name of candidate
	CString elecSymbol;   //election symbol of candidate
	int votes;      //number of votes casted to candidate
public:
	Candidate();
	Candidate(const CString nam);
	void setName(const CString nam);
	void setElecSymbol();
	void setVotes(int v);
	CString getName() const;
	CString getElecSymbol() const;
	void setElecSymbol(const CString nam);
	int getVotes() const;
	void castVote();
};
#endif