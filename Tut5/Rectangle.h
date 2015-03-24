#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
class Rectangle : public Shape
{
	float length;
	float width;
public:
	Rectangle(float, float);
	~Rectangle();

	void name();
	float perimeter();
	float area();
	void draw();
};
#endif
