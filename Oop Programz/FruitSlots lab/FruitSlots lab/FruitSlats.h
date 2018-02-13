#ifndef FRUITSLATS_H
#define FRUITSLATS_H
#include<cstdlib>

#endif;
template<typename S,typename R,typename M>
class FruitSlats<S,R,M>
{
	int getPoints()
	{
		return 0;
	}
};

template<typename T>
class FruitSlats<T,T,T>
{
	int getPoints()
	{
		return 100;
	}
};
template<typename S>
class FruitSlats<S,S,S>
{
	int getPoints()
	{
		return 100;
	}
};
template<typename R>
class FruitSlats<R,R,R>
{
	int getPoints()
	{
		return 100;
	}
};
template<typename S,typename S>
class FruitSlats <S,T,S>
{
	int getPoints()
	{
		return -75;
	}
};
template<typename T,typename T>
class FruitSlats <T,S,T>
{
	int getPoints()
	{
		return -75;
	}
};template<typename R,typename R>
class FruitSlats <R,T,R>
{
	int getPoints()
	{
		return -75;
	}
};template<typename S,typename S>
class FruitSlats <S,S,R>
{int getPoints()
	{
		return 50;
	}
};
template<typename S,typename S>
class FruitSlats <T,S,S>
{int getPoints()
	{
		return 50;
	}
};
template<typename T,typename T>
class FruitSlats <R,T,T>
{int getPoints()
	{
		return 50;
	}
};template<typename S,typename S>
class FruitSlats <T,T,R>
{int getPoints()
	{
		return 50;
	}
};
template<typename R,typename R>
class FruitSlats <R,R,S>
{
	int getPoints()
	{
		return 50;
	}
};
template<typename R,typename R>
class FruitSlats <T,R,R>
{
	int getPoints()
	{
		return 50;
	}
};

class Cherry
{};
class Apple
{};
class Strawberry
{};
class Orange
{};

//template<typename T>
//int FruitSlats<T>::getPoints(T*A,T*B,T*C)
//{
//	if(A=B=C)
//	return 0;
//}
//template<typename T>
//int FruitSlats<T>::getPoints(char*A,char*B,char*C)
//{
//	if(A=B=C)
//		return 100;
//	else if(A=B)
//		return 50;
//	else if(C=B)
//		return 50;
//	else if(A=C)
//		return -75;
//}