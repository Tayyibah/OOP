#ifndef PARABOLA_H
#define PARABOLA_H
class line;
class parabola
{
	int x2;
	int y2;
	int a;
	
public:
	parabola();
	void inputparabola();
	double calY();
	friend void intersect(line &l1,parabola &p1);
};
#endif