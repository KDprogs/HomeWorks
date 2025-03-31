#include "rhombus.h"

Rhombus::Rhombus() : Quadrangle(30, 30, 30, 30, 30, 40, 30, 40)
{
	if (a != b || a != c || a != d) { throw bad_figure("стороны не равны"); }
	if (A != C) { throw bad_figure("углы A и C не равны"); }
	if (B != D) { throw bad_figure("углы B и D не равны"); }

	name = "Ромб";
	print_created();
}
