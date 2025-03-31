#include "isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle() : Triangle(10, 20, 10, 50, 60, 50)
{
	if (a != c) { throw bad_figure("стороны a и c не равны"); }
	if (A != C) { throw bad_figure("углы A и C не равны"); }

	name = "Равнобедренный треугольник";
	print_created();
}
