﻿#include <iostream>
#include <string>

class Figure
{
public:
	Figure() = default;

	unsigned get_sides_count() const { return sides_count; }
	std::string get_name() const { return name; }

protected:
	Figure(unsigned sides_count) : sides_count(sides_count) {}

	std::string name{ "Фигура" };
	unsigned sides_count{};
};


class Triangle : public Figure
{
public:
	Triangle() : Figure(3), a(10), b(20), c(30), A(50), B(60), C(70)
	{
		name = "Треугольник";
	}

	std::string print_info() const
	{
		return get_name() + ':' +
			"\nСтороны: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) +
			"\nУглы: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C);
	}
	unsigned get_a() const { return a; }
	unsigned get_b() const { return b; }
	unsigned get_c() const { return c; }
	unsigned get_A() const { return A; }
	unsigned get_B() const { return B; }
	unsigned get_C() const { return C; }

protected:
	Triangle(unsigned a)
		: Figure(3), a(a) {}

	Triangle(unsigned a, unsigned b, unsigned A, unsigned B)
		: Figure(3), a(a), b(b), A(A), B(B) {}

	Triangle(unsigned a, unsigned b, unsigned c, unsigned A, unsigned B)
		: Figure(3), a(a), b(b), c(c), A(A), B(B) {}

	unsigned a{};
	unsigned b{};
	unsigned c{};
	unsigned A{};
	unsigned B{};
	unsigned C{};
};


class Right_triangle : public Triangle
{
public:
	Right_triangle() : Triangle(10, 20, 30, 50, 60)
	{
		C = 90;
		name = "Прямоугольный треугольник";
	}
};


class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle() : Triangle(10, 20, 50, 60)
	{
		c = a; C = A;
		name = "Равнобедренный треугольник";
	}
};


class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle() : Triangle(30)
	{
		b = a; c = a; A = 60; B = 60; C = 60;
		name = "Равносторонний треугольник";
	}
};


class Quadrangle : public Figure
{
public:
	Quadrangle() : Figure(4), a(10), b(20), c(30), d(40), A(50), B(60), C(70), D(80)
	{
		name = "Четырёхугольник";
	}

	std::string print_info() const
	{
		return get_name() + ':' +
			"\nСтороны: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + " d=" + std::to_string(d) +
			"\nУглы: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + " D=" + std::to_string(D);
	}
	unsigned get_a() const { return a; }
	unsigned get_b() const { return b; }
	unsigned get_c() const { return c; }
	unsigned get_d() const { return d; }
	unsigned get_A() const { return A; }
	unsigned get_B() const { return B; }
	unsigned get_C() const { return C; }
	unsigned get_D() const { return D; }

protected:
	Quadrangle(unsigned a)
		: Figure(4), a(a) {}

	Quadrangle(unsigned a, unsigned b)
		: Figure(4), a(a), b(b) {}

	Quadrangle(unsigned a, unsigned A, unsigned B)
		: Figure(4), a(a), A(A), B(B) {}

	Quadrangle(unsigned a, unsigned b, unsigned A, unsigned B)
		: Figure(4), a(a), b(b), A(A), B(B) {}

	unsigned a{};
	unsigned b{};
	unsigned c{};
	unsigned d{};
	unsigned A{};
	unsigned B{};
	unsigned C{};
	unsigned D{};
};


class Rectangle : public Quadrangle
{
public:
	Rectangle() : Quadrangle(10, 20)
	{
		c = a; d = b; A = 90; B = 90; C = 90; D = 90;
		name = "Прямоугольник";
	}
};


class Square : public Quadrangle
{
public:
	Square() : Quadrangle(20)
	{
		b = a; c = a; d = a; A = 90; B = 90; C = 90; D = 90;
		name = "Квадрат";
	}
};


class Parallelogram : public Quadrangle
{
public:
	Parallelogram() : Quadrangle(20, 30, 30, 40)
	{
		c = a; d = b; C = A; D = B;
		name = "Параллелограмм";
	}
};


class Rhombus : public Quadrangle
{
public:
	Rhombus() : Quadrangle(30, 30, 40)
	{
		b = a; c = a; d = a; C = A; D = B;
		name = "Ромб";
	}
};


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
