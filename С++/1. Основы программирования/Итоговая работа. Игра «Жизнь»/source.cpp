#include <iostream>  
#include <fstream> 
#include <windows.h>

int countLiveCell(const char const* const* arr, const int &i, const int &j, const int &rows, const int &cols)
{
	int count{};
	for (int a = i - 1; a < i + 2; a++)
	{
		for (int b = j - 1; b < j + 2; b++)
		{
			if (a >= 0 && a < rows && b >= 0 && b < cols)
			{
				if (arr[a][b] == '*') { count++; }
			}
		}
	}
	return count;
}

void creatUniverse(char** arr, const int &rows, const int &cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) { arr[i][j] = '-'; }
	}
}

int main()
{
	setlocale(LC_ALL, "rus");

	std::string dataFile{ "firstGen.txt" };
	std::string logFile{ "nextGen.txt" };

	std::ifstream data{ dataFile };
	if (!data.is_open()) { std::cout << "Файла " + dataFile + " не существует!"; return 1; }

	int rows{}; data >> rows;
	int cols{}; data >> cols;

	char** arr = new char* [rows] {};
	for (int i = 0; i < rows; i++) { arr[i] = new char[cols] {}; }

	creatUniverse(arr, rows, cols);

	int gcount{};
	int ccount{};
	int num{};
	while (data >> num)
	{
		int i{ num };
		data >> num;
		int j{ num };
		arr[i][j] = '*';
		ccount++;
	}
	data.close();

	bool change{};
	do
	{
		system("cls");
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++) { std::cout << arr[i][j] << ' '; }
			std::cout << '\n';
		}
		std::cout << "Поколение: " << gcount + 1 << ". Живых клеток: " << ccount << '\n';
		Sleep(1000);

		std::ofstream log{ logFile };
		if (!log.is_open()) { std::cout << "Невозможно создать файл " + logFile + " нет прав доступа!"; return 1; }
		change = false;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (arr[i][j] == '-')
				{
					int count = countLiveCell(arr, i, j, rows, cols);
					if (count == 3) { log << i << ' ' << j << '\n'; change = true; }
				}
				else
				{
					int count = countLiveCell(arr, i, j, rows, cols);
					if (count - 1 == 2 || count - 1 == 3) { log << i << ' ' << j << '\n'; }
					else { change = true; }
				}
			}
		}
		log.close();

		if (change)
		{
			creatUniverse(arr, rows, cols);
			std::ifstream log{ logFile };
			if (!log.is_open()) { std::cout << "Файла " + logFile + " не существует!"; return 1; }
			ccount = 0;
			while (log >> num)
			{
				int i{ num };
				log >> num;
				int j{ num };
				arr[i][j] = '*';
				ccount++;
			}
			log.close();
			gcount++;
		}
	} while (change);

	ccount = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] == '*') { ccount++; }
		}
	}

	for (int i = 0; i < rows; i++) { delete[] arr[i]; }
	delete[] arr;

	if (ccount == 0) { std::cout << "Во Вселенной все клетки мертвы. Игра окончена!"; }
	else { std::cout << "Во Вселенной наступила гармония. Игра окончена!"; }

	return 0;
}
