#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	int num{};

	std::cout << "Введите число:\n";
	std::cin >> num;
	std::cout << "Вы ввели:\n" << num << '\n';

	return 0;
}
