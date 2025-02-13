#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	bool logical_operand_1 = true;
	bool logical_operand_2 = true;

	std::cout << std::boolalpha;

	std::cout << "Оператор: ||\n";
	std::cout << logical_operand_1 << '\t' << logical_operand_2 << '\t';
	bool result = logical_operand_1 || logical_operand_2;
	std::cout << result << '\n';

	std::cout << !logical_operand_1 << '\t' << logical_operand_2 << '\t';
	result = !logical_operand_1 || logical_operand_2;
	std::cout << result << '\n';

	std::cout << logical_operand_1 << '\t' << !logical_operand_2 << '\t';
	result = logical_operand_1 || !logical_operand_2;
	std::cout << result << '\n';

	std::cout << !logical_operand_1 << '\t' << !logical_operand_2 << '\t';
	result = !logical_operand_1 || !logical_operand_2;
	std::cout << result << '\n' << '\n';

	std::cout << "Оператор: &&\n";
	std::cout << logical_operand_1 << '\t' << logical_operand_2 << '\t';
	result = logical_operand_1 && logical_operand_2;
	std::cout << result << '\n';

	std::cout << !logical_operand_1 << '\t' << logical_operand_2 << '\t';
	result = !logical_operand_1 && logical_operand_2;
	std::cout << result << '\n';

	std::cout << logical_operand_1 << '\t' << !logical_operand_2 << '\t';
	result = logical_operand_1 && !logical_operand_2;
	std::cout << result << '\n';

	std::cout << !logical_operand_1 << '\t' << !logical_operand_2 << '\t';
	result = !logical_operand_1 && !logical_operand_2;
	std::cout << result;

	return 0;
}
