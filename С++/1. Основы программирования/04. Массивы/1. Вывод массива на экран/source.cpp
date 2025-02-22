#include <iostream>

int main()
{
	const int size{10};
	int arr[size]{};

	for (int i{}; i < size; i++) { arr[i] = i; }

	std::cout << arr[0];

	for (int i{1}; i < size; i++) { std::cout << ", " << arr[i]; }

	std::cout << '\n';

	return 0;
}
