#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
	double length, width;
	static int count;
public:
	/* Constructor & Destructor */
	Rectangle();
	Rectangle(double, double);
	Rectangle(int);
	Rectangle(const Rectangle &obj);
	~Rectangle();
	/* Getter & Setter */
	double getLength() const { return length; }
	double getWidth() const;
	double getArea() const;
	void setLength(double);
	void setWidth(double);
	void print(Rectangle obj);
	static int getCount();
};
#endif // !RECTANGLE_H

