#include "right_triangle.h"

Right_triangle::Right_triangle() : Triangle(3, 4, 5, 30, 60, 90)
{
	if (C != 90) { throw bad_figure("угол C не равен 90"); }

	name = "Прямоугольный треугольник";
	print_created();
}
