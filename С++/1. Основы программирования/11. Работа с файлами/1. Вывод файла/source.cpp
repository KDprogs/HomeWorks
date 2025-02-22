#include <iostream>
#include <fstream>

int main()
{
	setlocale(LC_ALL, "rus");

	std::string file{ "data.txt" };
	std::string str;

	std::ifstream data{ file };
	if (!data.is_open()) { std::cout << "Файла " + file + " не существует!\n"; return 1; }

	while (data >> str) { std::cout << str << '\n'; }
	data.close();

	return 0;
}
