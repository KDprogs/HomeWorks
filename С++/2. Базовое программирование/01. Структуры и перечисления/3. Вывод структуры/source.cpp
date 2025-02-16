#include <iostream>

struct address
{
	std::string city;
	std::string street;
	int house;
	int flat;
	int index;
};

void print_address(address person);

int main()
{
	setlocale(LC_ALL, "rus");

	address person1{ "Москва", "Арбат", 12, 8, 123456 };
	address person2{ "Ижевск", "Пушкина", 59, 143, 953769 };

	print_address(person1);
	print_address(person2);

	return 0;
}

void print_address(address person)
{
	std::cout << "Город: " << person.city << '\n'
		<< "Улица: " << person.street << '\n'
		<< "Номер дома: " << person.house << '\n'
		<< "Номер квартиры: " << person.flat << '\n'
		<< "Индекс: " << person.index << "\n\n";
}
