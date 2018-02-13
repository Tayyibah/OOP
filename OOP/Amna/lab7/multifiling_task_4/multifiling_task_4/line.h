#ifndef LINE_H
#define LINE_H
class parabola;
class line
{
	int x1;
	int y1;
	int m;
	int c;
public:
	line();
	void inputline();
	double calY();
	friend void intersect(line &l1, parabola &p1);
};
#endif