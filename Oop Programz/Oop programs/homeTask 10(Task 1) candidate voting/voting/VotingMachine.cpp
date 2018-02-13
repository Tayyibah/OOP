#include"VotingMachine.h"
#include"CString.h"
#include"Candidate.h"
//VotingMachine::VotingMachine( const Candidate * P, const int N)
//{
//	numOfCandidates=0;
//	candidateList=0;
//	if(N>=0)
//	{
//		numOfCandidates=N;
//		candidateList=new Candidate[numOfCandidates];
//	}
//}
//int VotingMachine::castVote(const CString & voteSymbol)
//{
//	if(voteSymbol==candidateList.getElecSymbol())
//	{
//		return candidateList.castVote();
//	}
//}
//int VotingMachine::candidateReport( const CString & voteSymbol) const
//{
//	if(voteSymbol==candidateList.getElecSymbol())
//	{
//		return candidateList.castVote();
//	}
//}
//Candidate * VotingMachine::electionResult() const
//{
//	for(int i=0;i<3;i++)
//	{
//		return &candidateList[i];
//	}
//}
VotingMachine::VotingMachine( Candidate * P, const int N)
{
	if (N<=0)
	{
		numOfCandidates = 0 ;
		candidateList = 0 ;
		return ;
	}
	numOfCandidates = N ;
	candidateList = new Candidate [N] ;
	for(int i=0;i<N;i++)
	{
		candidateList[i] = P[i] ;
	}
}
int VotingMachine::castVote( CString & cand)
{
	for (int i = 0; i < numOfCandidates; i++)
	{
		if (cand == candidateList[i].getElecSymbol())
		{
			candidateList[i].castVote();
			return candidateList[i].getVotes();
		}
	}
	return -1;
}
int VotingMachine::candidateReport(  CString & symbol) 
{
	for (int i = 0; i < numOfCandidates; i++)
	{
		if (symbol == candidateList[i].getElecSymbol())
		{
			return candidateList[i].getVotes();
		}
	}
	return -1;
}