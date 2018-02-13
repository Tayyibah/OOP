#ifndef POINT_H
#define POINT_H
class point
{
private:
	int x1,x2,x3,x4;
	int y1,y2,y3,y4;
public:
	point();
	point(int ,int ,int ,int ,int,int,int,int);
	void setPoint(int,int,int,int,int,int,int,int);
	double calculateArea();
	void display();
};
#endif