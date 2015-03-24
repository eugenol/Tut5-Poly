#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"
class Triangle : public Shape
{
public:
	Triangle();
	~Triangle();

	void name();
	float perimeter();
	float area();
	void draw();
};
#endif
