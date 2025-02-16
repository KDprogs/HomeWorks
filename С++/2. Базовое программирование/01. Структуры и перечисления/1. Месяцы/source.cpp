#include <iostream>
#include <string>  

enum class months { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };

int main()
{
   setlocale(LC_ALL, "rus");

   std::string str{};
   std::string value{};
   bool err{};

   do
   {
      do
      {
         std::cout << "Введите номер месяца: ";
         std::getline(std::cin, str);
         value = str.substr(0, 2);
         for (char j = '0'; j <= '9'; j++)
         {
            if (value.find(j) == 0) { err = false; break; }
            err = true;
         }
         if (err || ((static_cast<months>(std::stoi(value)) < months::Jan || static_cast<months>(std::stoi(value)) > months::Dec) && std::stoi(value) != 0))
         {
            std::cout << "Неправильный номер!\n";
            err = true;
         }
		} while (err);

      switch (static_cast<months>(std::stoi(value)))
      {
         case months::Jan: std::cout << "Январь\n"; break;
         case months::Feb: std::cout << "Февраль\n"; break;
         case months::Mar: std::cout << "Март\n"; break;
         case months::Apr: std::cout << "Апрель\n"; break;
         case months::May: std::cout << "Май\n"; break;
         case months::Jun: std::cout << "Июнь\n"; break;
         case months::Jul: std::cout << "Июль\n"; break;
         case months::Aug: std::cout << "Август\n"; break;
         case months::Sep: std::cout << "Сентябрь\n"; break;
         case months::Oct: std::cout << "Октябрь\n"; break;
         case months::Nov: std::cout << "Ноябрь\n"; break;
         case months::Dec: std::cout << "Декабрь\n";
      }
      
   } while (std::stoi(value) != 0);

   std::cout << "До свидания\n";

   return 0;
}
