#include <iostream>

long long numFibonacci(int seq)
{
	switch (seq)
	{
		case 1: return 0;
		case 2: return 1;
		default: return numFibonacci(seq-2) + numFibonacci(seq-1);
	}
}

/*
long long numFibonacci(int seq)
{
	switch(seq)
	{
		case 1: return 0;
		case 2: return 1;
		default:
			long long array[100] {0, 1};
			for (int i{0}; i <= seq-3; i++) { array[i+2] = array[i] + array[i+1]; }
			return array[seq-1];
	}
}
*/

/*
long long numFibonacci(int seq)
{
	switch(seq)
	{
		case 1: return 0;
		case 2: return 1;
		default:
			long long a{};
			long long b{1};
			for (int i{}; i <= seq-3; i+=2)
			{
				a = a + b;
				b = a + b;
			}
			if (seq%2 == 0) { return b; }
			else { return a; }
	}
}
*/

/*
long long numFibonacci(int seq, long long *array)
{
	switch(seq)
	{
		case 1:  return 0;
		case 2:  return 1;
		default: return array[seq-1] = array[seq-2] + array[seq-3];
	}
}
*/

int main()
{
	setlocale(LC_ALL, "rus");

	int num{};
	//long long array[100] {0, 1};

	std::cout << "Введите число: ";
	std::cin >> num;

	if (num > 0)
	{
		std::cout << "Числа Фибоначчи:\n";
		for (int i{1}; i <= num; i++)
		{
			std::cout.width(4);
			std::cout.setf(std::ios::left);
			std::cout << i << numFibonacci(i /*, array */) << '\n';
		}
	}
	else
	{
		std::cout << "\nВводите числа только больше нуля! Перезапустите программу";
		return 1;
	}

	return 0;
}
