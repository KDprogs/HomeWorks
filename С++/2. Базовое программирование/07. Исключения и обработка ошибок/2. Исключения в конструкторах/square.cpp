#include "square.h"

Square::Square() : Quadrangle(20)
{
	b = a; c = a; d = a; A = 90; B = 90; C = 90; D = 90;

	name = "Квадрат";
	std::cout << name;

	check_sides_and_angles();
	if (a != b || a != c || a != d) { throw bad_figure("стороны не равны"); }
	if (A != 90 || B != 90 || C != 90 || D != 90) { throw bad_figure("все углы должны быть 90"); }

	std::cout << " (стороны " << a << ", " << b << ", " << c << ", " << d
		<< "; углы " << A << ", " << B << ", " << C << ", " << D << ") создан\n";
}
