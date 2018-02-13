#include"Apple.h"
int Apple::whichColorBasket()
{
	return color;
}
Apple::Apple(Basket *b)
{
	color = b->getColor();
}