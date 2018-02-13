#ifndef DATE_H
#define DATE_H
class Date
{//Date class
 
private:
	  int day;
      int month;
      int year;
 public:
      Date();
      Date(int, int, int);
      void setDate(int, int, int);
      void getDate();
      void printDate();
};
#endif