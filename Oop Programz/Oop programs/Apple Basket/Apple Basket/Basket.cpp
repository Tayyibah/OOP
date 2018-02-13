#include"Basket.h"
Basket::Basket(int col)
{
	basketColor=col;
	for(int i=0;i<10;i++)
	{
		fruits[i]=new Apple(this);
	}
}
int Basket::getColor()
{
	return basketColor;	
}