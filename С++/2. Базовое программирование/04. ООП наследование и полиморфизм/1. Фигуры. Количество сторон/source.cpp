#include <iostream>

class Figure
{
public:
	Figure() = default;

	unsigned get_sides_count() const { return sides_count; }
	std::string get_name() const { return name; }

protected:
	Figure(unsigned sides_count) : sides_count(sides_count) {}
	std::string name{ "Фигура" };

private:
	unsigned sides_count{};
};


class Triangle : public Figure
{
public:
	Triangle() : Figure(3)
	{
		name = "Треугольник";
	}
};


class Quadrangle : public Figure
{
public:
	Quadrangle() : Figure(4)
	{
		name = "Четырёхугольник";
	}
};


int main()
{
	setlocale(LC_ALL, "rus");

	Figure fi;
	Triangle tr;
	Quadrangle qu;

	std::cout << "Количество сторон:\n"
		<< fi.get_name() << ": " << fi.get_sides_count() << '\n'
		<< tr.get_name() << ": " << tr.get_sides_count() << '\n'
		<< qu.get_name() << ": " << qu.get_sides_count() << '\n';

	return 0;
}
