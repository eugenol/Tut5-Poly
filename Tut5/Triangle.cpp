#include "Triangle.h"


Triangle::Triangle(float s)
{
	sides = s;
}


Triangle::~Triangle()
{
}


void Triangle::name()
{
	std::cout << "Triangle" << std::endl;
}

float Triangle::perimeter()
{
	return 3*sides;
}


float Triangle::area()
{
	return sqrt(3)/4*sides*sides;
}

void Triangle::draw()
{

}