#include <iostream>

void counting_function()
{
   static int count{1};
   std::cout << "Количество вызовов функции counting_function(): " << count << '\n';
   ++count;
}

int main()
{
   setlocale(LC_ALL, "rus");

   for (int i{}; i < 15; i++)
   {
      counting_function();
   }
}
