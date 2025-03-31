#include "quadrangle.h"

Quadrangle::Quadrangle()
	: Figure(4), a(10), b(20), c(30), d(40), A(50), B(60), C(70), D(80)
{
	check_sides_and_angles();

	name = "Четырёхугольник";
	print_created();
}

Quadrangle::Quadrangle(unsigned a, unsigned b, unsigned c, unsigned d, unsigned A, unsigned B, unsigned C, unsigned D)
	: Figure(4), a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D)
{
	check_sides_and_angles();
}

void Quadrangle::check_sides_and_angles() const
{
	if (get_sides_count() != 4) { throw bad_figure("количество сторон не равно 4"); }
	if (A + B + C + D != 360) { throw bad_figure("сумма углов не равна 360"); }
}

void Quadrangle::print_created() const
{
	std::cout << name << " (стороны " << a << ", " << b << ", " << c << ", " << d
		<< "; углы " << A << ", " << B << ", " << C << ", " << D << ") создан\n";
}

std::string Quadrangle::print_info() const
{
	return get_name() + ':' +
		"\nСтороны: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + " d=" + std::to_string(d) +
		"\nУглы: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + " D=" + std::to_string(D);
}

unsigned Quadrangle::get_a() const { return a; }
unsigned Quadrangle::get_b() const { return b; }
unsigned Quadrangle::get_c() const { return c; }
unsigned Quadrangle::get_d() const { return d; }
unsigned Quadrangle::get_A() const { return A; }
unsigned Quadrangle::get_B() const { return B; }
unsigned Quadrangle::get_C() const { return C; }
unsigned Quadrangle::get_D() const { return D; }
