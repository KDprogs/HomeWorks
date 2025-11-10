#pragma once

#include "figure.h"

class Triangle : public Figure
{
public:
	Triangle();

	std::string print_info() const;
	unsigned get_a() const;
	unsigned get_b() const;
	unsigned get_c() const;
	unsigned get_A() const;
	unsigned get_B() const;
	unsigned get_C() const;

protected:
	Triangle(unsigned a);
	Triangle(unsigned a, unsigned b, unsigned A, unsigned B);
	Triangle(unsigned a, unsigned b, unsigned c, unsigned A, unsigned B);

	unsigned a;
	unsigned b;
	unsigned c;
	unsigned A;
	unsigned B;
	unsigned C;
};
