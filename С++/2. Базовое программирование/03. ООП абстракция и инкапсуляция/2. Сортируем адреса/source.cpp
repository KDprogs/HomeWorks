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

	void setAddr(std::string city, std::string street, int house, int flat)
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

	std::string getCity() const
	{
		return city;
	}

private:
	std::string city;
	std::string street;
	int house;
	int flat;
};

void sort(Address** addr, int numAddr);

std::string utf8_to_1251(const std::string& utf8);


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

	char BOM{};
	bool UTF8{};
	int numChar{3};


	std::ifstream data{ input };
	if (!data.is_open()) { std::cout << "Файла " + input + " не существует!\n"; return 1; }

	for (int i{}; i < numChar; i++) { data >> BOM; }
	if (BOM != static_cast<char>(0xBF)) { data.seekg(0); UTF8 = false; }
	else { UTF8 = true; }

	data >> numAddr;
	Address** addr = new Address* [numAddr];
	for (int i{}; i < numAddr; i++) { addr[i] = new Address(city, street, house, flat); }

	for (int i{}; i < numAddr; i++)
	{
		data >> city;
		data >> street;
		data >> house;
		data >> flat;
		if (UTF8) { addr[i]->setAddr(utf8_to_1251(city), utf8_to_1251(street), house, flat); }
		else { addr[i]->setAddr(city, street, house, flat); }
	}
	data.close();


	std::ofstream form{ output };
	if (!form.is_open()) { std::cout << "Невозможно создать файл " + output + " нет прав доступа!\n"; return 1; }

	form << numAddr << '\n';

	sort(addr, numAddr);

	for (int i{}; i < numAddr; i++)
	{
		form << addr[i]->getAddr() << '\n';
	}
	form.close();

	for (int i{}; i < numAddr; i++) { delete addr[i]; }
	delete[] addr;

	return 0;
}


void sort(Address** addr, int numAddr)
{
	bool swap{};
	do
	{
		swap = false;
		for (int i{}; i < numAddr-1; i++)
		{
			if (addr[i]->getCity().compare(addr[i+1]->getCity()) == 1)
			{
				std::swap(addr[i], addr[i+1]);
				swap = true;
			}
		}
	} while (swap);
}

std::string utf8_to_1251(const std::string& utf8)
{
	int WCSize = MultiByteToWideChar(CP_UTF8, 0, utf8.c_str(), -1, NULL, 0);
	if (WCSize == 0) { throw std::runtime_error("Ошибка преобразования UTF-8 в WideChar\n"); }
	else
	{
		wchar_t* WCStr = new wchar_t[WCSize];

		MultiByteToWideChar(CP_UTF8, 0, utf8.c_str(), -1, WCStr, WCSize);

		int MBSize = WideCharToMultiByte(1251, 0, WCStr, -1, NULL, 0, NULL, NULL);
		char* MBStr = new char[MBSize];

		WideCharToMultiByte(1251, 0, WCStr, -1, MBStr, MBSize, NULL, NULL);

		std::string to_1251 = MBStr;

		delete[] WCStr;
		delete[] MBStr;

		return to_1251;
	}
}
