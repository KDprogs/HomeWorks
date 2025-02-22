#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	int num1{};
	int num2{};
	int num3{};
	int result{};

	std::cout << "Введите первое число: ";
	std::cin >> num1;
	std::cout << "Введите второе число: ";
	std::cin >> num2;
	std::cout << "Введите третье число: ";
	std::cin >> num3;

	std::cout << "\nРезультат: ";

	result = num1 >= num2
		? num1 >= num3 ? num1 : num3
		: num2 >= num3 ? num2 : num3;
	std::cout << result << ' ';

	result = result == num1
		? num2 >= num3 ? num2 : num3
		: result == num2
			? num1 >= num3 ? num1 : num3
			: num1 >= num2 ? num1 : num2;
	std::cout << result << ' ';

	result = result == num1
		? num2 <= num3 ? num2 : num3
		: result == num2
			? num1 <= num3 ? num1 : num3
			: num1 <= num2 ? num1 : num2;
	std::cout << result << '\n';

	return 0;
}
