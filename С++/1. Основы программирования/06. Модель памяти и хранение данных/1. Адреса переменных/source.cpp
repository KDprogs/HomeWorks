#include <iostream>

int main()
{
	int a{};
	short b{};
	long c{};
	long long d{};
	float e{};
	double f{};
	long double g{};
	bool h{};

	std::cout << "int:\t\t" << &a << "   " << sizeof(a) << "\n\n";
	std::cout << "short:\t\t" << &b << "   " << sizeof(b) << "\n\n";
	std::cout << "long:\t\t" << &c << "   " << sizeof(c) << "\n\n";
	std::cout << "long long:\t" << &d << "   " << sizeof(d) << "\n\n";
	std::cout << "float:\t\t" << &e << "   " << sizeof(e) << "\n\n";
	std::cout << "double:\t\t" << &f << "   " << sizeof(f) << "\n\n";
	std::cout << "long double:\t" << &g << "   " << sizeof(g) << "\n\n";
	std::cout << "bool:\t\t" << &h << "   " << sizeof(h);

	return 0;
}
