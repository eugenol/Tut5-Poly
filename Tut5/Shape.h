#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

class Shape
{
public:
	Shape();
	~Shape();

	virtual void name() = 0;
	virtual float perimeter() = 0;
	virtual float area() = 0;
	virtual void draw() = 0;
};
#endif
