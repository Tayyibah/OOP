#include<iostream>
using namespace std;
#include"FruitSlats.h"
template <typename T>
int main()
{
	FruitSlats<char*,char*,char*>f;
	cout<<playTurn();
	return 0;
}
int playTurn()
{
	int i=rand()%16;
	if(i==0)
	{
		FruitSlats<Cherry,Cherry,Cherry>s;
		return 100;
	}
	else if(i==1)
	{
		FruitSlats<Cherry,Apple,Cherry>s;
		return -75;
	}
	else if(i==2)
	{
		FruitSlats<Cherry,Cherry,Strawberry>s;
		return 50;
	}
	else if(i==3)
	{
		FruitSlats<Strawberry,Cherry,Cherry>s;
		return 50;
	}
	else if(i==4)
	{
		FruitSlats<Apple,Apple,Apple>s;
			return 100;
		else if(i==1)
	{
		FruitSlats<Apple,Apple,Strawberry>s;
		return 50;
	}
	else if(i==5)
	{
		FruitSlats<Strawberry,Apple,Apple,>s;
		return 50;
	}
		else if(i==6)
	{
		FruitSlats<Apple,Strawberry,Apple>s;
		return -75;
	}

	else if(i==7)
	{
		FruitSlats<Strawberry,Strawberry,Cherry>s;
		return 50;
	}

		else if(i==8)
	{
		FruitSlats<Strawberry,Strawberry,Strawberry>s;
		return 100;
	}
	else if(i==9)
	{
		FruitSlats<Strawberry,Cherry,Strawberry>s;
		return -75;
	}
		else if(i==10)
	{
		FruitSlats<Cherry,Strawberry,Strawberry>s;
		return 50;
	}
	else if(i==11)
	{
		FruitSlats<Strawberry,Cherry,Strawberry>s;
		return -75;
	}
		else if(i==12)
	{
		FruitSlats<Strawberry,Strawberry,Cherry>s;
		return 50;
	}

	else if(i==14)
	{
		FruitSlats<Strawberry,Strawberry,Cherry>s;
		return 50;
	}
	else if(i==13)
	{
		FruitSlats<Strawberry,Apple,Cherry>s;
		return 0;
	}
	else if(i==14)
	{
		FruitSlats<Apple,Strawberry,Cherry>s;
		return 0;
	}
}