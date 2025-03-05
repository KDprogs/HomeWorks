#include <iostream>
#include "calculator.h"

int main()
{
	setlocale(LC_ALL, "rus");

	double num1{};
	double num2{};
	int operat{};

	std::cout << "Введите первое число: ";
	std::cin >> num1;
	std::cout << "Введите второе число: ";
	std::cin >> num2;

	std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> operat;

	switch (operat)
	{
		case 1: std::cout << num1 << " + " << num2 << " = " << addit(num1, num2) << '\n'; break;
		case 2: std::cout << num1 << " - " << num2 << " = " << subtr(num1, num2) << '\n'; break;
		case 3: std::cout << num1 << " * " << num2 << " = " << multi(num1, num2) << '\n'; break;
		case 4: std::cout << num1 << " / " << num2 << " = " << divis(num1, num2) << '\n'; break;
		case 5: std::cout << num1 << " в степени " << num2 << " = " << power(num1, static_cast<int>(num2)) << '\n';
	}

	return 0;
}
