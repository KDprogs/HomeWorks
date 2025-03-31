#include "rhombus.h"

Rhombus::Rhombus() : Quadrangle(30, 30, 40)
{
	b = a; c = a; d = a; C = A; D = B;

	name = "Ромб";
	std::cout << name;

	check_sides_and_angles();
	if (a != b || a != c || a != d) { throw bad_figure("стороны не равны"); }
	if (A != C) { throw bad_figure("углы A и C не равны"); }
	if (B != D) { throw bad_figure("углы B и D не равны"); }

	std::cout << " (стороны " << a << ", " << b << ", " << c << ", " << d
		<< "; углы " << A << ", " << B << ", " << C << ", " << D << ") создан\n";
}
