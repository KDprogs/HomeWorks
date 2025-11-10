#include <iostream>
#include "triangle.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "quadrangle.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"

int main()
{
	setlocale(LC_ALL, "rus");

	Triangle tr;
	Right_triangle rt;
	Isosceles_triangle it;
	Equilateral_triangle et;
	Quadrangle qu;
	Rectangle re;
	Square sq;
	Parallelogram pa;
	Rhombus rh;

	std::cout << tr.print_info() << "\n\n"
		<< rt.print_info() << "\n\n"
		<< it.print_info() << "\n\n"
		<< et.print_info() << "\n\n"
		<< qu.print_info() << "\n\n"
		<< re.print_info() << "\n\n"
		<< sq.print_info() << "\n\n"
		<< pa.print_info() << "\n\n"
		<< rh.print_info() << "\n\n";

	return 0;
}
