#include <iostream>

int main()
{
   setlocale(LC_ALL, "rus");

   int num{};
   int sum{};

   std::cout << "Введите целое число: ";
   std::cin >> num;

   while (num != 0)
   {
      sum += num % 10;
      num = num / 10;
   }

   std::cout << "\nСумма цифр: " << sum << '\n';

   return 0;
}
