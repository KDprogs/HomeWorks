#include "right_triangle.h"

Right_triangle::Right_triangle() : Triangle(3, 4, 5, 30, 60)
{
	C = 90;

	name = "Прямоугольный треугольник";
	std::cout << name;

	check_sides_and_angles();
	if (C != 90) { throw bad_figure("угол C не равен 90"); }

	std::cout << " (стороны " << a << ", " << b << ", " << c
		<< "; углы " << A << ", " << B << ", " << C << ") создан\n";
}
