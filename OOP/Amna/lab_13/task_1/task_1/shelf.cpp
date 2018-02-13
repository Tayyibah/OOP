#include"shelf.h"
#include<iostream>
using namespace std;

Shelf::Shelf(int size)
{
	if (size > 0)
	{
		maxSize = size;
	}
	items = new Media *[maxSize];
}
void Shelf::insert(Media *m)
{
	m->display();
}
void Shelf::displayContents()
{
	for (int i = 0; i < maxSize; i++)
	{
		items[i]->display();
	}
}
Shelf::~Shelf()
{
	for (int i = 0; i < maxSize; i++)
	{
		delete items[i];
		items[i] = NULL;
	}
	delete items;
	items = NULL;
}