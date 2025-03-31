#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"


int main()
{
	setlocale(LC_ALL, "rus");
	
	try
	{
		Triangle tr;
		Right_triangle rt;
		Isosceles_triangle it;
		Equilateral_triangle et;
		Quadrangle qu;
		Rectangle re;
		Square sq;
		Parallelogram pa;
		Rhombus rh;
	}
	catch (const bad_figure& err)
	{
		std::cerr << "Oшибка создания фигуры. Причина: " << err.what() << '\n';
	}

	return 0;
}
