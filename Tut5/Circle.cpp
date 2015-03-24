#include "Circle.h"

Circle::Circle(float r)
{
	radius = r;
}


Circle::~Circle()
{
}


void Circle::name()
{
	std::cout << "Circle" << std::endl;
}

float Circle::perimeter()
{
	return 2 * pi*radius;
}

float Circle::area()
{
	return pi*radius*radius;
}

void Circle::draw()
{
	std::cout << "Draw a circle" << std::endl;
}