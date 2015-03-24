// Tut5.cpp : Defines the entry point for the console application.
#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"


int main(int argc, char* argv[])
{
	Triangle T1(1.5);
	Rectangle R1(1.5,1.5);
	Circle C1(1.5);

	Triangle T2(1.5);
	Rectangle R2(1.5, 1.5);
	Circle C2(1.5);

	Shape *shapePtr[10];

	shapePtr[0] = &T1;
	shapePtr[1] = &R1;
	shapePtr[2] = &C1;
	shapePtr[3] = &T1;
	shapePtr[4] = &R1;
	shapePtr[5] = &C1;

	T1.name();
	R1.name();
	C1.name();
	std::cout << std::endl;

	shapePtr[6] = new Triangle(1.0);
	shapePtr[7] = new Rectangle(1.0,1.0);
	shapePtr[8] = new Circle(1.0);
	shapePtr[9] = new Rectangle(2.0, 1.5);

	for (int i = 0; i < 10; i++)
	{
		shapePtr[i]->name();
		std::cout << "Perimeter: " << shapePtr[i]->perimeter() << std::endl;
		std::cout << "Area: " << shapePtr[i]->area() << std::endl;
		shapePtr[i]->draw();
		std::cout << std::endl;
	}


	delete shapePtr[6];
	delete shapePtr[7];
	delete shapePtr[8];
	delete shapePtr[9];


	return 0;
}

