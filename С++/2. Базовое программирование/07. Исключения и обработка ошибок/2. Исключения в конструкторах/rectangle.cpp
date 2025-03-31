#include "rectangle.h"

Rectangle::Rectangle() : Quadrangle(10, 20, 10, 20, 90, 90, 90, 90)
{
	if (a != c) { throw bad_figure("стороны a и c не равны"); }
	if (b != d) { throw bad_figure("стороны b и d не равны"); }
	if (A != 90 || B != 90 || C != 90 || D != 90) { throw bad_figure("все углы должны быть 90"); }

	name = "Прямоугольник";
	print_created();
}
