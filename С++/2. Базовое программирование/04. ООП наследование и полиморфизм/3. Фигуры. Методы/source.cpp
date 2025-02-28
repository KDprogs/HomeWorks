#include <iostream>
#include <string>

class Figure
{
public:
	Figure() = default;

	virtual std::string print_info()
	{
		return get_name() + ":\n" + 
			(check()?"Правильная":"Неправильная") + 
			"\nКоличество сторон: " + std::to_string(get_sides_count());
	}
	virtual bool check()
	{
		if (sides_count == 0) { return true; }
		else { return false; }
	};
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

	std::string print_info() override
	{
		return Figure::print_info() +
			"\nСтороны: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) +
			"\nУглы: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C);
	}
	bool check() override
	{
		if (get_sides_count() == 3 && A + B + C == 180) { return true; }
		else { return false; }
	};
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
	Right_triangle() : Triangle(10, 20, 30, 50, 40)
	{
		C = 90;
		name = "Прямоугольный треугольник";
	}

	bool check() override
	{
		if (Triangle::check() && C == 90) { return true; }
		else { return false; }
	};
};


class Isosceles_triangle : public virtual Triangle
{
public:
	Isosceles_triangle() : Triangle(10, 20, 50, 60)
	{
		c = a; C = A;
		name = "Равнобедренный треугольник";
	}

	bool check() override
	{
		if (Triangle::check() && a == c && A == C) { return true; }
		else { return false; }
	};
};


class Equilateral_triangle : public Isosceles_triangle
{
public:
	Equilateral_triangle() : Triangle(30)
	{
		b = a; c = a; A = 60; B = 60; C = 60;
		name = "Равносторонний треугольник";
	}

	bool check() override
	{
		if (Isosceles_triangle::check() && a == b && A == B) { return true; }
		else { return false; }
	};
};


class Quadrangle : public Figure
{
public:
	Quadrangle() : Figure(4), a(10), b(20), c(30), d(40), A(50), B(60), C(70), D(80)
	{
		name = "Четырёхугольник";
	}

	std::string print_info() override
	{
		return Figure::print_info() +
			"\nСтороны: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + " d=" + std::to_string(d) +
			"\nУглы: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + " D=" + std::to_string(D);
	}
	bool check() override
	{
		if (get_sides_count() == 4 && A + B + C + D == 360) { return true; }
		else { return false; }
	};
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


class Parallelogram : public virtual Quadrangle
{
public:
	Parallelogram() : Quadrangle(20, 30, 30, 40)
	{
		c = a; d = b; C = A; D = B;
		name = "Параллелограмм";
	}

	bool check() override
	{
		if (Quadrangle::check() && a == c && b == d && A == C && B == D) { return true; }
		else { return false; }
	};
};


class Rectangle : public Parallelogram
{
public:
	Rectangle() : Quadrangle(10, 20)
	{
		c = a; d = b; A = 90; B = 90; C = 90; D = 90;
		name = "Прямоугольник";
	}

	bool check() override
	{
		if (Parallelogram::check() && B == C) { return true; }
		else { return false; }
	};
};


class Square : public Parallelogram
{
public:
	Square() : Quadrangle(20)
	{
		b = a; c = a; d = a; A = 90; B = 90; C = 90; D = 90;
		name = "Квадрат";
	}

	bool check() override
	{
		if (Parallelogram::check() && b == c && B == C) { return true; }
		else { return false; }
	};
};


class Rhombus : public Parallelogram
{
public:
	Rhombus() : Quadrangle(30, 30, 40)
	{
		b = a; c = a; d = a; C = A; D = B;
		name = "Ромб";
	}

	bool check() override
	{
		if (Parallelogram::check() && b == c) { return true; }
		else { return false; }
	};
};


int main()
{
	setlocale(LC_ALL, "rus");

	Figure fi;
	Triangle tr;
	Right_triangle rt;
	Isosceles_triangle it;
	Equilateral_triangle et;
	Quadrangle qu;
	Rectangle re;
	Square sq;
	Parallelogram pa;
	Rhombus rh;

	Figure* fi1 = &tr;
	Figure* fi2 = &rt;
	Figure* fi3 = &it;
	Figure* fi4 = &et;
	Figure* fi5 = &qu;
	Figure* fi6 = &re;
	Figure* fi7 = &sq;
	Figure* fi8 = &pa;
	Figure* fi9 = &rh;

	std::cout << fi.print_info() << "\n\n"
		<< fi1->print_info() << "\n\n"
		<< fi2->print_info() << "\n\n"
		<< fi3->print_info() << "\n\n"
		<< fi4->print_info() << "\n\n"
		<< fi5->print_info() << "\n\n"
		<< fi6->print_info() << "\n\n"
		<< fi7->print_info() << "\n\n"
		<< fi8->print_info() << "\n\n"
		<< fi9->print_info() << "\n\n";

	return 0;
}
