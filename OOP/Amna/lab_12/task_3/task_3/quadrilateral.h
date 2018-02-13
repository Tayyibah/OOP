#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H
class quadrilateral
{
private:
	int x1, x2, x3, x4;
	int y1, y2, y3, y4;
public:
	quadrilateral();
	quadrilateral(int, int, int, int, int, int, int, int);
	void setPoints(int, int, int, int, int, int, int, int);
	void shape();
	void displayQuadrilateral();
};
#endif