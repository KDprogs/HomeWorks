#include "equilateral_triangle.h"

Equilateral_triangle::Equilateral_triangle() : Triangle(30, 30, 30, 60, 60, 60)
{
	if (a != b || a != c) { throw bad_figure("стороны не равны"); }
	if (A != 60 || B != 60 || C != 60) { throw bad_figure("все углы должны быть 60"); }

	name = "Равносторонний треугольник";
	print_created();
}
