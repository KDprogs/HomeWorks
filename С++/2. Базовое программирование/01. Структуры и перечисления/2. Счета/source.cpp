#include <iostream>
#include <iomanip>
#include <windows.h>

struct account
{
	long long num;
	std::string name;
	double money;
};

void change_balance(account& person, double amount);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	account person{};
	double amount{};

	std::cout << "Введите номер счёта: ";
	std::cin >> person.num;
	std::cout << "Введите имя владельца: ";
	std::cin >> person.name;
	std::cout << "Введите баланс: ";
	std::cin >> person.money;
	std::cout << "Введите новый баланс: ";
	std::cin >> amount;
	change_balance(person, amount);
	std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2);
	std::cout << "Ваш счёт: " << person.name << ", " << person.num << ", " << person.money << '\n';

	return 0;
}

void change_balance(account& person, double amount)
{
	person.money = amount;
}
