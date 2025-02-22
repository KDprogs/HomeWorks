#include <iostream>

int sum(int a, int b) { return a + b; }
int diff(int a, int b) { return a - b; }
int multiplication(int a, int b) { return a * b; }
double division(double a, double b) { return a / b; }

int main()
{
	int a{5};
	int b{10};

	int summ = sum(a, b);
	int dif = diff(a, b);
	int mult = multiplication(a, b);
	double div = division(a, b);

	std::cout << a << " + " << b << " = " << summ << '\n'
		<< a << " - " << b << " = " << dif << '\n'
		<< a << " * " << b << " = " << mult << '\n'
		<< a << " / " << b << " = " << div << '\n';

	return 0;
}
