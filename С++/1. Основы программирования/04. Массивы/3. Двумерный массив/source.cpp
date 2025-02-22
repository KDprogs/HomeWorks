#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	const int size1{3};
	const int size2{6};
	int arr[size1][size2]{};
	int min{};
	int min_i{};
	int min_j{};
	int max{};
	int max_i{};
	int max_j{};
	int num{};


	for (int i{}; i < size1; i++)
	{
		for (int j{}; j < size2; j++) { arr[i][j] = num++; }
	}

	std::cout << "Массив:\n";
	for (int i{}; i < size1; i++)
	{
		for (int j{}; j < size2; j++)
		{
			std::cout.width(3);
			std::cout.setf(std::ios::left);
			std::cout << arr[i][j];
		}
		std::cout << '\n';
	}

	std::cout << "\nИндекс минимального элемента: ";
	
	min = arr[0][0];
	for (int i{}; i < size1; i++)
	{
		for (int j{}; j < size2; j++)
		{
			if (min > arr[i][j])
			{
				min = arr[i][j];
				min_i = i;
				min_j = j;
			}
		}
	}
	std::cout << min_i << ' ' << min_j << '\n';


	std::cout << "Индекс максимального элемента: ";
	
	max = arr[0][0];
	for (int i{}; i < size1; i++)
	{
		for (int j{}; j < size2; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				max_i = i;
				max_j = j;
			}
		}
	}
	std::cout << max_i << ' ' << max_j << '\n';

	return 0;
}
