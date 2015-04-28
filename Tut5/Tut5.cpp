// Tut5.cpp : Defines the entry point for the console application.
#include "Shape.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle1.h"

int main(int argc, char* argv[])
{
	ALLEGRO_DISPLAY *display;


	if (!al_init())
		return -1;

	display = al_create_display(640, 480);
	if (!display)
		return -1;

	al_init_primitives_addon();

	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_flip_display();

	//Objects
	Triangle T1(50);
	Rectangle1 R1(50,50);
	Circle C1(50);

	Triangle T2(20);
	Rectangle1 R2(20, 20);
	Circle C2(20);

	//Array of pointer to shape
	Shape *shapePtr[10];

	//Shape pointer to derived objects
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

	//Dynamically allocate :)
	shapePtr[6] = new Triangle(35);
	shapePtr[7] = new Rectangle1(35,35);
	shapePtr[8] = new Circle(35);
	shapePtr[9] = new Rectangle1(35, 60);


	//Cycle through array, using shape pointer on all the objects.
	for (int i = 0; i < 10; i++)
	{
		shapePtr[i]->name();
		std::cout << "Perimeter: " << shapePtr[i]->perimeter() << std::endl;
		std::cout << "Area: " << shapePtr[i]->area() << std::endl;
		shapePtr[i]->draw();
		std::cout << std::endl;
	}

	al_flip_display();

	//Clean up
	delete shapePtr[6];
	delete shapePtr[7];
	delete shapePtr[8];
	delete shapePtr[9];


	al_rest(10.0);
	//Destroy the display
	al_destroy_display(display);

	return 0;
}

