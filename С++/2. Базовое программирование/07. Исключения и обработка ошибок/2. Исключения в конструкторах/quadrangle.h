﻿#pragma once

#include "figure.h"

class Quadrangle : public Figure
{
public:
	Quadrangle();

	std::string print_info() const;
	unsigned get_a() const;
	unsigned get_b() const;
	unsigned get_c() const;
	unsigned get_d() const;
	unsigned get_A() const;
	unsigned get_B() const;
	unsigned get_C() const;
	unsigned get_D() const;

protected:
	Quadrangle(unsigned a, unsigned b, unsigned c, unsigned d, unsigned A, unsigned B, unsigned C, unsigned D);

	void check_sides_and_angles() const;
	void print_created() const;

	unsigned a;
	unsigned b;
	unsigned c;
	unsigned d;
	unsigned A;
	unsigned B;
	unsigned C;
	unsigned D;
};
