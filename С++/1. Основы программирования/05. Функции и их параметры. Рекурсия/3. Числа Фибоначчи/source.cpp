#include <iostream>

long long numFibonacci(int sequence)
{
	switch (sequence)
	{
		case 1: return 0;
		case 2: return 1;
		default: return numFibonacci(sequence - 2) + numFibonacci(sequence - 1);
	}
}

/*
long long numFibonacci(int sequence)
{
	switch(sequence)
	{
		case 1: return 0;
		case 2: return 1;
		default:
			long long array[100] {0, 1};
			for (int i = 0; i <= sequence-3; i++) { array[i+2] = array[i] + array[i+1]; }
			return array[sequence-1];
	}
}
*/

/*
long long numFibonacci(int sequence)
{
	switch(sequence)
	{
		case 1: return 0;
		case 2: return 1;
		default:
			long long a = 0;
			long long b = 1;
			for (int i = 0; i <= sequence-3; i+=2)
			{
				a = a + b;
				b = a + b;
			}
			if (sequence%2 == 0) { return b; }
			else { return a; }
	}
}
*/

/*
long long numFibonacci(int sequence, long long *array)
{
	switch(sequence)
	{
		case 1:  return 0;
		case 2:  return 1;
		default: return array[sequence-1] = array[sequence-2] + array[sequence-3];
	}
}
*/

int main()
{
	setlocale(LC_ALL, "rus");

	int numEnteredUser{};
	//long long array[100] {0, 1};

	std::cout << "Введите число: ";
	std::cin >> numEnteredUser;

	if (numEnteredUser > 0)
	{
		std::cout << "Числа Фибоначчи:\n";
		for (int sequence = 1; sequence <= numEnteredUser; sequence++)
		{
			std::cout.width(4);
			std::cout.setf(std::ios::left);
			std::cout << sequence << numFibonacci(sequence /*, array */) << '\n';
		}
	}
	else
	{
		std::cout << "\nВводите числа только больше нуля! Перезапустите программу";
		return 1;
	}

	return 0;
}
