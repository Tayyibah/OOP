#ifndef SHELF_H
#define SHELF_H
#include"media.h"
class Shelf 
	{
	private:
		Media** items;
		int maxSize;
		int currSize;
	public:
		Shelf(int);
		void insert(Media*);
		void displayContents();
		~Shelf();
	};
#endif