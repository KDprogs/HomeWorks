#include <iostream>
#include <windows.h>

class bad_length : public std::runtime_error
{
public:
	explicit bad_length(const std::string&) noexcept;
};

static size_t function(const std::string&, const int);


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string str;
	int forbidden_length{};
	bool no_throw{true};

	std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;
	
	try
	{
		do
		{
			std::cout << "Введите слово: ";
			std::cin >> str;
			std::cout << "Длина слова \"" + str + "\" равна " << function(str, forbidden_length) << '\n';
		}
		while (no_throw);
	}
	catch (const bad_length& err)
	{
		std::cerr << err.what();
	}

	std::cout << " До свидания\n";
	
	return 0;
}


bad_length::bad_length(const std::string& message) noexcept : std::runtime_error(message) {}

static size_t function(const std::string& str, const int forbidden_length)
{
	size_t len = str.length();
	if (len == forbidden_length) { throw bad_length("Вы ввели слово запретной длины!"); }
	return len;
}
