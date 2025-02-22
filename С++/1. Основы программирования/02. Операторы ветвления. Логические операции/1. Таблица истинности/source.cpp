#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	bool A{true};
	bool B{true};

	std::cout << std::boolalpha

		<< "Оператор: ||\n"
		<< A << '\t' << B << '\t' << (A || B) << '\n'
		<< !A << '\t' << B << '\t' << (!A || B) << '\n'
		<< A << '\t' << !B << '\t' << (A || !B) << '\n'
		<< !A << '\t' << !B << '\t' << (!A || !B) << '\n'

		<< "\nОператор: &&\n"
		<< A << '\t' << B << '\t' << (A && B) << '\n'
		<< !A << '\t' << B << '\t' << (!A && B) << '\n'
		<< A << '\t' << !B << '\t' << (A && !B) << '\n'
		<< !A << '\t' << !B << '\t' << (!A && !B) << '\n';

	return 0;
}
