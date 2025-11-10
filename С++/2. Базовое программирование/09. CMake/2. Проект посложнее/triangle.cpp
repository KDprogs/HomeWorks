#include "triangle.h"

Triangle::Triangle() : Figure(3), a(10), b(20), c(30), A(50), B(60), C(70)
{
	name = "Треугольник";
}
Triangle::Triangle(unsigned a)
	: Figure(3), a(a), b(0), c(0), A(0), B(0), C(0) {}

Triangle::Triangle(unsigned a, unsigned b, unsigned A, unsigned B)
	: Figure(3), a(a), b(b), c(0), A(A), B(B), C(0) {}

Triangle::Triangle(unsigned a, unsigned b, unsigned c, unsigned A, unsigned B)
	: Figure(3), a(a), b(b), c(c), A(A), B(B), C(0) {}


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
