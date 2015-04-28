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
	int x = 320, y = 240;
	std::cout << "Draw a circle" << std::endl;
	al_draw_circle(x, y, radius, al_map_rgb(255, 0, 0),2);
}