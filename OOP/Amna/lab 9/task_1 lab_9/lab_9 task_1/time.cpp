#include<iostream>
using namespace std;
#include"time.h"

 Time :: Time()
 {
	hr = 1;
	min = 1;
 }
  Time :: Time(int m, int h)
  {
	if(m >0 && m< 60)
	{
		min = m;
	}
	else
	{
		min =1;
	}
	if(h >0 && h< 12 && (m >0 && m< 60))
	{
		hr = h;
	}
	else
	{
		hr = 1;
	}
  }
void Time :: setTime(int m, int h)
{
	if(m> 0 && m<60)
	{
		min = m;
	}
	else 
	{
		min=1;
	}
	if(h >0 && h< 12 && (m >0 && m< 60))
	{
		hr = h;
	}
	else
	{
		hr = 1;
	}
}
 void Time:: getTime(int& m, int& h)
 {
	 // Time(m,h);
 }
 void Time :: printTime()
 {
	cout<<hr<<":"<<min;	  
 }
 void Time :: incrementHours()
 {
	if(hr >0 && hr <12)
	{
		hr++;
	}
	else if (hr =12)
	{
		hr = 1;
	}
	else
	{
		cout<<"Invalid Hour....";
	}
 }
 void Time :: incrementMinutes()
 {
	if(min > 0 && min < 60)
	{
		min ++;
	}
	else if(min = 60)
	{
		min = 1;
	}
	else
	{
		cout<<"Invalid minute...";
	}
 }