#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"
class Triangle : public Shape
{
	float sides; //equilater triangle
public:
	Triangle(float);
	~Triangle();

	void name();
	float perimeter();
	float area();
	void draw();
};
#endif
