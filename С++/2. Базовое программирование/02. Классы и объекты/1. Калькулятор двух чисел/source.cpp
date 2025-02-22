#include <iostream>

class Calculator
{
public:
	bool set_num1(double& num1)
	{
		if (num1 != 0)
		{
			this->num1 = num1;
			return true;
		}
		return false;
	}

	bool set_num2(double& num2)
	{
		if (num2 != 0)
		{
			this->num2 = num2;
			return true;
		}
		return false;
	}

	double add() const { return num1 + num2; }
	double multiply() const { return num1 * num2; }
	double subtract_1_2() const { return num1 - num2; }
	double subtract_2_1() const { return num2 - num1; }
	double divide_1_2() const { return num1 / num2; }
	double divide_2_1() const { return num2 / num1; }

private:
	double num1{};
	double num2{};
};


int main()
{
	setlocale(LC_ALL, "rus");

	double num1{};
	double num2{};
	bool set{};
	Calculator calc;

	do
	{
		do
		{
			std::cout << "Введите num1: ";
			std::cin >> num1;
			set = calc.set_num1(num1);
			if (!set) { std::cout << "Неверный ввод!\n"; }

		} while (!set);

		do
		{
			std::cout << "Введите num2: ";
			std::cin >> num2;
			set = calc.set_num2(num2);
			if (!set) { std::cout << "Неверный ввод!\n"; }

		} while (!set);

		std::cout << "num1 + num2 = " << calc.add() << '\n'
			<< "num1 - num2 = " << calc.subtract_1_2() << '\n'
			<< "num2 - num1 = " << calc.subtract_2_1() << '\n'
			<< "num1 * num2 = " << calc.multiply() << '\n'
			<< "num1 / num2 = " << calc.divide_1_2() << '\n'
			<< "num2 / num1 = " << calc.divide_2_1() << "\n\n";

	} while (set);

	return 0;
}
