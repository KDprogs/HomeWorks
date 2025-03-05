#include "equilateral_triangle.h"

Equilateral_triangle::Equilateral_triangle() : Triangle(30)
{
	b = a; c = a; A = 60; B = 60; C = 60;
	name = "Равносторонний треугольник";
}
