#include "quadrangle.h"

Quadrangle::Quadrangle() : Figure(4), a(10), b(20), c(30), d(40), A(50), B(60), C(70), D(80)
{
	name = "Четырёхугольник";
	std::cout << name;

	check_sides_and_angles();

	std::cout << " (стороны " << a << ", " << b << ", " << c << ", " << d
		<< "; углы " << A << ", " << B << ", " << C << ", " << D << ") создан\n";
}

Quadrangle::Quadrangle(unsigned a)
	: Figure(4), a(a), b(0), c(0), d(0), A(0), B(0), C(0), D(0) {}

Quadrangle::Quadrangle(unsigned a, unsigned b)
	: Figure(4), a(a), b(b), c(0), d(0), A(0), B(0), C(0), D(0) {}

Quadrangle::Quadrangle(unsigned a, unsigned A, unsigned B)
	: Figure(4), a(a), b(0), c(0), d(0), A(A), B(B), C(0), D(0) {}

Quadrangle::Quadrangle(unsigned a, unsigned b, unsigned A, unsigned B)
	: Figure(4), a(a), b(b), c(0), d(0), A(A), B(B), C(0), D(0) {}

void Quadrangle::check_sides_and_angles() const
{
	if (get_sides_count() != 4) { throw bad_figure("количество сторон не равно 4"); }
	if (A + B + C + D != 360) { throw bad_figure("сумма углов не равна 360"); }
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
