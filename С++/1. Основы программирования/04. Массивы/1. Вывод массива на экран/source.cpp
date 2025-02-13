#include <iostream>

int main()
{
	const int size_array_numbers = 10;
	int array_numbers[size_array_numbers]{};

	for (int index = 0; index < size_array_numbers; index++) { array_numbers[index] = index; }

	std::cout << array_numbers[0];

	for (int index = 1; index < size_array_numbers; index++) { std::cout << ", " << array_numbers[index]; }

	return 0;
}
