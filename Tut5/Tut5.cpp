// Tut5.cpp : Defines the entry point for the console application.
#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"


int main(int argc, char* argv[])
{
	Triangle T;
	Rectangle R;
	Circle C;

	Shape *shapePtr[10];

	shapePtr[0] = &T;
	shapePtr[1] = &R;
	shapePtr[2] = &C;

	T.name();
	R.name();
	C.name();

	shapePtr[0]->name();
	shapePtr[1]->name();
	shapePtr[2]->name();


	return 0;
}

