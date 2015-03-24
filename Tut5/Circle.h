#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
class Circle : public Shape
{
	float radius;
	const float pi = 3.14159;
public:
	Circle(float);
	~Circle();

	void name();
	float perimeter();
	float area();
	void draw();

};
#endif
