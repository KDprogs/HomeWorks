#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	int numEnteredUser{};

	std::cout << "Введите число:" << std::endl;
	std::cin >> numEnteredUser;
	std::cout << "Вы ввели:\n" << numEnteredUser << std::endl;

	return 0;
}
