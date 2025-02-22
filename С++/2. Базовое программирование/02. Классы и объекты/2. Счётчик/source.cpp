#include <iostream>
#include <windows.h>

class Counter
{
public:
	Counter() { count = 1; }
	Counter(int& num) { count = num; }

	void setIncrease() { count++; }
	void setDecrease() { count--; }
	void getCurrent() const { std::cout << count << '\n'; }

private:
	int count{};
};

void commands(Counter& score);


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string answer;
	int num{};
	
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> answer;
	if (answer == "да")
	{
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> num;
		Counter score(num);
		commands(score);
	}
	else
	{
		Counter score;
		commands(score);
	}

	std::cout << "До свидания!\n";

	return 0;
}


void commands(Counter& score)
{
	char command{};

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
}
