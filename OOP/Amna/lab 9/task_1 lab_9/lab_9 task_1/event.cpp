#include<iostream>
using namespace std;
#include"date.h"
#include"time.h"
#include"string.h"
#include"event.h"
 Event :: Event(int hours , int minutes, int m ,int d, int y , char s[])
 {
	eventDay.setDate(m,d,y);
	eventTime.setTime(minutes,hours);
	eventName.setBuff(s);
 }
  void Event :: setEventData(int hours, int minutes, int m, int d, int y, char name[])
 {
	eventDay.setDate(m,d,y);
	eventTime.setTime(minutes,hours);
	eventName.setBuff(name);
 }
  void Event :: printEventData()
 {
  eventName.display();
  cout<<"occurs on ";
  eventDay.printDate();
  cout<<"at ";
  eventTime.printTime();
  cout<<"\n\n";
 }
 