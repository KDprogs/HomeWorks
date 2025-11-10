#include <iostream>
#include <windows.h>

int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);

   std::string name;

   std::cout << "Введите имя: ";
   std::cin >> name;

   std::cout << "\nЗдравствуйте, " + name + "!\n";

   return 0;
}
