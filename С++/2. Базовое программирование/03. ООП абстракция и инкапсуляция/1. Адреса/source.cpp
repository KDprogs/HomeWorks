#include <iostream>
#include <fstream> 
#include <string>
#include <windows.h>

class Address
{
public:
	Address(std::string city, std::string street, int house, int flat)
	{
		setAddr(city, street, house, flat);
	}

	void setAddr(std::string& city, std::string& street, int house, int flat)
	{
		this->city = city;
		this->street = street;
		this->house = house;
		this->flat = flat;
	}

	std::string getAddr() const
	{
		return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(flat);
	}

private:
	std::string city;
	std::string street;
	int house;
	int flat;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string input{ "in.txt" };
	std::string output{ "out.txt" };

	int numAddr{};
	std::string city;
	std::string street;
	int house{};
	int flat{};


	std::ifstream data{ input };
	if (!data.is_open()) { std::cout << "Файла " + input + " не существует!\n"; return 1; }

	data >> numAddr;
	Address** addr = new Address* [numAddr];
	for (int i{}; i < numAddr; i++) { addr[i] = new Address(city, street, house, flat); }

	for (int i{}; i < numAddr; i++)
	{
		data >> city;
		data >> street;
		data >> house;
		data >> flat;
		addr[i]->setAddr(city, street, house, flat);
	}
	data.close();


	std::ofstream form{ output };
	if (!form.is_open()) { std::cout << "Невозможно создать файл " + output + " нет прав доступа!\n"; return 1; }

	form << numAddr << '\n';

	for (int i{numAddr-1}; i >= 0; i--)
	{
		form << addr[i]->getAddr() << '\n';
	}
	form.close();

	for (int i{}; i < numAddr; i++) { delete addr[i]; }
	delete[] addr;

	return 0;
}
