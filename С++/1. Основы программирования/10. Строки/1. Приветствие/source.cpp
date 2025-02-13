#include <iostream>
#include <windows.h>

int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);

   std::string name{};
   std::string surname{};

   std::cout << "Введите имя: ";
   std::cin >> name;
   std::cout << "Введите фамилию: ";
   std::cin >> surname;

   std::cout << "Здравствуйте, " + name + ' ' + surname + '!';

   return 0;
}
