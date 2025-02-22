#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string word;

	std::cout << "Введите слово:\n";
	std::cin >> word;
	std::cout << "Вы ввели:\n" << word << '\n';

	return 0;
}
