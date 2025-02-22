#include <iostream>
#include <fstream>

int main()
{
	setlocale(LC_ALL, "rus");

	std::string file{ "data.txt" };
	int size{};

	std::ifstream data{ file };
	if (!data.is_open()) { std::cout << "Файла " + file + " не существует!\n"; return 1; }

	data >> size;
	int* arr = new int[size]{};

	for (int i{size}; i > 0; i--) { data >> arr[i-1]; }
	data.close();

	for (int i{}; i < size; i++) { std::cout << arr[i] << ' '; }
	delete[] arr;

	std::cout << '\n';

	return 0;
}
