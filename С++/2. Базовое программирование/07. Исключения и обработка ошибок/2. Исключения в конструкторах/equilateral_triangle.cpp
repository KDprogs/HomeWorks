#include "equilateral_triangle.h"

Equilateral_triangle::Equilateral_triangle() : Triangle(30)
{
	b = a; c = a; A = 60; B = 60; C = 60;

	name = "Равносторонний треугольник";
	std::cout << name;

	check_sides_and_angles();
	if (a != b || a != c) { throw bad_figure("стороны не равны"); }
	if (A != 60 || B != 60 || C != 60) { throw bad_figure("все углы должны быть 60"); }

	std::cout << " (стороны " << a << ", " << b << ", " << c
		<< "; углы " << A << ", " << B << ", " << C << ") создан\n";
}
