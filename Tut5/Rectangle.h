#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
class Rectangle : public Shape
{
public:
	Rectangle();
	~Rectangle();

	void name();
	float perimeter();
	float area();
	void draw();
};
#endif
