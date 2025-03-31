#include "square.h"

Square::Square() : Quadrangle(20, 20, 20, 20, 90, 90, 90, 90)
{
	if (a != b || a != c || a != d) { throw bad_figure("стороны не равны"); }
	if (A != 90 || B != 90 || C != 90 || D != 90) { throw bad_figure("все углы должны быть 90"); }

	name = "Квадрат";
	print_created();
}
