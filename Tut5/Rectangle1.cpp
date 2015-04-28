#include "Rectangle1.h"


Rectangle1::Rectangle1(float l, float w)
{
	length = l;
	width = w;
}


Rectangle1::~Rectangle1()
{
}


void Rectangle1::name()
{
	std::cout << "Rectangle" << std::endl;
}


float Rectangle1::perimeter()
{
	return 2*(length+width);
}

float Rectangle1::area()
{
	return length*width;
}

void Rectangle1::draw()
{
	int x = 320, y = 240;
	std::cout << "Draw a rectangle" << std::endl;
	al_draw_rectangle(x, y, x + length, y + width, al_map_rgb(255, 0, 0), 2);
}