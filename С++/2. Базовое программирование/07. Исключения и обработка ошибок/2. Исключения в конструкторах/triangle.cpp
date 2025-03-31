#include "triangle.h"

Triangle::Triangle()
	: Figure(3), a(10), b(20), c(30), A(50), B(60), C(70)
{
	check_sides_and_angles();

	name = "Треугольник";
	print_created();
}

Triangle::Triangle(unsigned a, unsigned b, unsigned c, unsigned A, unsigned B, unsigned C)
	: Figure(3), a(a), b(b), c(c), A(A), B(B), C(C)
{
	check_sides_and_angles();
}

void Triangle::check_sides_and_angles() const
{
	if (get_sides_count() != 3) { throw bad_figure("количество сторон не равно 3"); }
	if (A + B + C != 180) { throw bad_figure("сумма углов не равна 180"); }
}

void Triangle::print_created() const
{
	std::cout << name << " (стороны " << a << ", " << b << ", " << c
		<< "; углы " << A << ", " << B << ", " << C << ") создан\n";
}

std::string Triangle::print_info() const
{
	return get_name() + ':' +
		"\nСтороны: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) +
		"\nУглы: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C);
}

unsigned Triangle::get_a() const { return a; }
unsigned Triangle::get_b() const { return b; }
unsigned Triangle::get_c() const { return c; }
unsigned Triangle::get_A() const { return A; }
unsigned Triangle::get_B() const { return B; }
unsigned Triangle::get_C() const { return C; }
