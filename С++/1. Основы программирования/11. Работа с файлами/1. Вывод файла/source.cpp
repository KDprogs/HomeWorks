#include <iostream>
#include <fstream>

int main()
{
   setlocale(LC_ALL, "rus");

   std::string file{ "data.txt" };
   std::ifstream data{ file };

   if (data.is_open())
   {
      std::string str{};
      while (data >> str) { std::cout << str << '\n'; }
      data.close();
   }
   else { std::cout << "Файла " + file + " не существует!"; }

   return 0;
}
