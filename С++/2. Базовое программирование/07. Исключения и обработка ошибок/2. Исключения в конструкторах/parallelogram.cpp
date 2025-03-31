#include "parallelogram.h"

Parallelogram::Parallelogram() : Quadrangle(20, 30, 20, 30, 30, 40, 30, 40)
{
	if (a != c) { throw bad_figure("стороны a и c не равны"); }
	if (b != d) { throw bad_figure("стороны b и d не равны"); }
	if (A != C) { throw bad_figure("углы A и C не равны"); }
	if (B != D) { throw bad_figure("углы B и D не равны"); }

	name = "Параллелограмм";
	print_created();
}
