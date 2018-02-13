#ifndef TIME_H
#define TIME_H
class Time
{     //Time class 
private:
      int hr;
      int min;
 public:
      Time();
      Time(int, int);
      void setTime(int, int);
      void getTime(int&, int&);
      void printTime();
      void incrementHours();
      void incrementMinutes();
};
 
#endif