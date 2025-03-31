#include "isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle() : Triangle(10, 20, 50, 60)
{
	c = a; C = A;

	name = "Равнобедренный треугольник";
	std::cout << name;

	check_sides_and_angles();
	if (a != c) { throw bad_figure("стороны a и c не равны"); }
	if (A != C) { throw bad_figure("углы A и C не равны"); }

	std::cout << " (стороны " << a << ", " << b << ", " << c
		<< "; углы " << A << ", " << B << ", " << C << ") создан\n";
}
