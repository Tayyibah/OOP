#ifndef NUMBERS_H
#define NUMBERS_H
class Numbers
{
	float *numbers;
public:
	Numbers(int size);
	~Numbers();
	void Numbers::store(int);
	void Numbers::retrieve();
	float Numbers::maxVal(int);
	float Numbers::minVal(int);
	float Numbers::calAvg(int);
};
#endif