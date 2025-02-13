#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string wordEnteredUser{};

	std::cout << "Введите слово:" << std::endl;
	std::cin >> wordEnteredUser;
	std::cout << "Вы ввели:\n" << wordEnteredUser << std::endl;

	return 0;
}
