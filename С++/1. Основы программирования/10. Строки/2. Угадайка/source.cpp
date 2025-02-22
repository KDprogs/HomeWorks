#include <iostream>
#include <windows.h>

int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);

   std::string word{ "малина" };
   std::string str;

   do
   {
      std::cout << "Угадайте слово: ";
      std::cin >> str;

      if (str == word) { std::cout << "\nПравильно! Вы победили! Загаданное слово — " + word + '\n'; break; }
      else { std::cout << "Неправильно\n"; continue; }
   }
   while (str != word);

   return 0;
}
