#include <iostream>

void number_in_words(int num);

int main()
{
	setlocale(LC_ALL, "rus");

	int num1{};
	int num2{};

	std::cout << "Запуск программы сравнения двух целых чисел в диапазоне от -100 до 100...\n\n";

	std::cout << "Введите первое число: ";
	std::cin >> num1;
	std::cout << "Введите второе число: ";
	std::cin >> num2;

	if (num1 > 100 || num1 < -100 || num2 > 100 || num2 < -100)
	{
		std::cout << "\nОшибка! Одно или оба числа вне диапазона!\n";
		return 1;
	}

	std::cout << '\n';

	number_in_words(num1);

	std::cout << (num1 > num2 ? "больше чем " : num1 < num2 ? "меньше чем " : "равно ");

	number_in_words(num2);

	std::cout << '\n';

	return 0;
}

void number_in_words(int num)
{
	if (num < 0) std::cout << "минус ";

	switch (num)
	{
		case 0: std::cout << "ноль "; return;
		case 100: case -100: std::cout << "сто "; return;
	}

	if ((num % 100 >= 10 && num % 100 < 20) || (num % 100 <= -10 && num % 100 > -20))
	{
		switch (num % 100)
		{
			case 10: case -10: std::cout << "десять "; return;
			case 11: case -11: std::cout << "одиннадцать "; return;
			case 12: case -12: std::cout << "двенадцать "; return;
			case 13: case -13: std::cout << "тринадцать "; return;
			case 14: case -14: std::cout << "четырнадцать "; return;
			case 15: case -15: std::cout << "пятнадцать "; return;
			case 16: case -16: std::cout << "шестнадцать "; return;
			case 17: case -17: std::cout << "семнадцать "; return;
			case 18: case -18: std::cout << "восемнадцать "; return;
			case 19: case -19: std::cout << "девятнадцать "; return;
		}
	}
	else
	{
		switch (num % 100 / 10)
		{
			case 2: case -2: std::cout << "двадцать "; break;
			case 3: case -3: std::cout << "тридцать "; break;
			case 4: case -4: std::cout << "сорок "; break;
			case 5: case -5: std::cout << "пятьдесят "; break;
			case 6: case -6: std::cout << "шестьдесят "; break;
			case 7: case -7: std::cout << "семьдесят "; break;
			case 8: case -8: std::cout << "восемьдесят "; break;
			case 9: case -9: std::cout << "девяносто ";
		}
		switch (num % 10)
		{
			case 1: case -1: std::cout << "один "; break;
			case 2: case -2: std::cout << "два "; break;
			case 3: case -3: std::cout << "три "; break;
			case 4: case -4: std::cout << "четыре "; break;
			case 5: case -5: std::cout << "пять "; break;
			case 6: case -6: std::cout << "шесть "; break;
			case 7: case -7: std::cout << "семь "; break;
			case 8: case -8: std::cout << "восемь "; break;
			case 9: case -9: std::cout << "девять ";
		}
	}
}
