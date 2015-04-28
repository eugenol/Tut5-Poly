#ifndef RECTANGLE1_H
#define RECTANGLE1_H
#include "Shape.h"
class Rectangle1 : public Shape
{
	float length;
	float width;
public:
	Rectangle1(float, float);
	~Rectangle1();

	void name();
	float perimeter();
	float area();
	void draw();
};
#endif
