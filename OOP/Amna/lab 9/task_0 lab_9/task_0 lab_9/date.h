#ifndef DATE_H
#define DATE_H
class date
{
	int day;
	int month;
	int year;;
public:
	date();
	date(int d, int m, int y);

	void  setDate(int d, int m, int y);
	date getDate();

};
#endif