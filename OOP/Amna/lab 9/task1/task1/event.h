#ifndef EVENT_H
#define EVENT_H
#include"date.h"
#include"time.h"
#include"string.h"
class Event
{//Event class

 
private:
      String eventName;
      Time eventTime;
      Date eventDay;

public:
      Event(int hours = 0, int minutes = 0, int m = 1,int d = 1, int y = 1900, char name[] = "Christmas"); 
      void setEventData(int hours, int minutes, int m, int d, int y, char name[]);
      void printEventData();
 
 
};
#endif 
