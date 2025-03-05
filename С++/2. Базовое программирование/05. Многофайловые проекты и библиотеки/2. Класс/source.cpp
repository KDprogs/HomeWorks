#include <iostream>
#include <windows.h>
#include "counter.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string answer;
	int num{};
	char command{};
	Counter score;

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> answer;
	if (answer == "да")
	{
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> num;
		score = Counter(num);
	}

	do
	{
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> command;

		switch (command)
		{
			case '+': score.setIncrease(); break;
			case '-': score.setDecrease(); break;
			case '=': score.getCurrent();
		}
	} while (command != 'x');

	std::cout << "До свидания!\n";

	return 0;
}
