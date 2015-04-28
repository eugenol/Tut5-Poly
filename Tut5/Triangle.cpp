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
	int x = 320, y = 240;
	std::cout << "Draw a triangle" << std::endl;
	al_draw_triangle(x, y, x + sides, y, x, y + sides, al_map_rgb(255, 0, 0), 2);
}