#ifndef SHAPE_H
#define SHAPE_H
class Shape
{
public:
	Shape();
	~Shape();

	virtual void name() = 0;
	virtual void perimeter() = 0;
	virtual void area() = 0;
	virtual void draw() = 0;
};
#endif
