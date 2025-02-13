#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	const int size1_array_numbers = 3;
	const int size2_array_numbers = 6;
	int array_numbers[size1_array_numbers][size2_array_numbers]{};

	int element{};
	for (int index1 = 0; index1 < size1_array_numbers; index1++)
	{
		for (int index2 = 0; index2 < size2_array_numbers; index2++) { array_numbers[index1][index2] = element++; }
	}

	std::cout << "Массив:\n";
	for (int index1 = 0; index1 < size1_array_numbers; index1++)
	{
		for (int index2 = 0; index2 < size2_array_numbers; index2++)
		{
			std::cout.width(3);
			std::cout.setf(std::ios::left);
			std::cout << array_numbers[index1][index2];
		}
		std::cout << '\n';
	}

	std::cout << "Индекс минимального элемента: ";
	int index1_min_element{};
	int index2_min_element{};
	int min_element = array_numbers[0][0];
	for (int index1 = 0; index1 < size1_array_numbers; index1++)
	{
		for (int index2 = 0; index2 < size2_array_numbers; index2++)
		{
			if (min_element > array_numbers[index1][index2])
			{
				min_element = array_numbers[index1][index2];
				index1_min_element = index1;
				index2_min_element = index2;
			}
		}
	}
	std::cout << index1_min_element << ' ' << index2_min_element << '\n';

	std::cout << "Индекс максимального элемента: ";
	int index1_max_element{};
	int index2_max_element{};
	int max_element = array_numbers[0][0];
	for (int index1 = 0; index1 < size1_array_numbers; index1++)
	{
		for (int index2 = 0; index2 < size2_array_numbers; index2++)
		{
			if (max_element < array_numbers[index1][index2])
			{
				max_element = array_numbers[index1][index2];
				index1_max_element = index1;
				index2_max_element = index2;
			}
		}
	}
	std::cout << index1_max_element << ' ' << index2_max_element;

	return 0;
}
