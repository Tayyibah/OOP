#include<iostream>
using namespace std;
#include"event.h"
int main ()
{
	      Event object;
      object.setEventData(6, 0, 12, 25, 2010, "Christmas");
      //print out the data for object
      object.printEventData();
      //instantiate the second object and set date for the fourth of July
      Event object2;
      object2.setEventData(1, 15, 7, 4, 2010, "Fourth of July");
      //print out the data for the second object
      object2.printEventData();

	return 0;
}