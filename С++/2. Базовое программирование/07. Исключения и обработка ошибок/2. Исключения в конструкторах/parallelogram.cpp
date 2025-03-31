#include "parallelogram.h"

Parallelogram::Parallelogram() : Quadrangle(20, 30, 30, 40)
{
	c = a; d = b; C = A; D = B;

	name = "Параллелограмм";
	std::cout << name;

	check_sides_and_angles();
	if (a != c) { throw bad_figure("стороны a и c не равны"); }
	if (b != d) { throw bad_figure("стороны b и d не равны"); }
	if (A != C) { throw bad_figure("углы A и C не равны"); }
	if (B != D) { throw bad_figure("углы B и D не равны"); }

	std::cout << " (стороны " << a << ", " << b << ", " << c << ", " << d
		<< "; углы " << A << ", " << B << ", " << C << ", " << D << ") создан\n";
}
