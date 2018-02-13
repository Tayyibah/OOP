#ifndef CIRCLE_H
#define CIRCLE_H
class Circle
{
private:
float radius;
public:
	void setRadius( int r) ;
	float getRadius( );
	float calcDiameter();
	float calcCircumference();
};
#endif
