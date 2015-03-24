#include "Rectangle.h"


Rectangle::Rectangle(float l, float w)
{
	length = l;
	width = w;
}


Rectangle::~Rectangle()
{
}


void Rectangle::name()
{
	std::cout << "Rectangle" << std::endl;
}


float Rectangle::perimeter()
{
	return 2*(length+width);
}

float Rectangle::area()
{
	return length*width;
}

void Rectangle::draw()
{
	std::cout << "Draw a rectangle" << std::endl;
}