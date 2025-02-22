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

	std::cout << "int:\t\t" << &a << "   " << sizeof(a) << "\n\n"
		<< "short:\t\t" << &b << "   " << sizeof(b) << "\n\n"
		<< "long:\t\t" << &c << "   " << sizeof(c) << "\n\n"
		<< "long long:\t" << &d << "   " << sizeof(d) << "\n\n"
		<< "float:\t\t" << &e << "   " << sizeof(e) << "\n\n"
		<< "double:\t\t" << &f << "   " << sizeof(f) << "\n\n"
		<< "long double:\t" << &g << "   " << sizeof(g) << "\n\n"
		<< "bool:\t\t" << &h << "   " << sizeof(h) << '\n';

	return 0;
}
