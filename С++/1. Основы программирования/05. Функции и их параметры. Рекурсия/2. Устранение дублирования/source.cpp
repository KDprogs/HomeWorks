#include <iostream>

void degree(int value, int power)
{
	int result = 1;
	for (int i = 0; i < power; i++) { result *= value; }
	std::cout << value << " в степени " << power << " = " << result << std::endl;
}

int main()
{
	setlocale(LC_ALL, "rus");

	degree(5, 2);
	degree(3, 3);
	degree(4, 4);

	return 0;
}
