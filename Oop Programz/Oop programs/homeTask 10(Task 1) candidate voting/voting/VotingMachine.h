#include"Candidate.h"
#include"CString.h"
#ifndef VOTINGMACHINE_H
#define VOTINGMACHINE_H
class VotingMachine
{
private:
	int numOfCandidates;    // number of candidate objects
	Candidate * candidateList;    // points to an array of candidate objects
public:
	VotingMachine (  Candidate * P, const int N);
//Parameter “N” tells the number of candidates, so data member “candidateList” will point 
//to an array of objects of type Candidate of size “N”.
//Parameter “p” receives the array of candidate objects.
	int castVote( CString & );
//It invokes member function the “castVote()” for the Candidate object whose election 
//symbol is recieved. 
	int candidateReport(  CString & ) ;
//It returns the number of votes casted so far for the candidate whose election symbol is 
//received.
	Candidate* electionResult() const;
//It return an array of candidates having 3 objects with winner at index 0 and runner-up at 
//index 1 and 3rd position at index 2.
};
#endif