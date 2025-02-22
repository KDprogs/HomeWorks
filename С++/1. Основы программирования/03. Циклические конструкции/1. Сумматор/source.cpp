#include <iostream>

int main()
{
   setlocale(LC_ALL, "rus");

   int num{};
   int sum{};

   do
   {
      std::cout << "Введите целое число или число '0', чтобы закончить: ";
      std::cin >> num;
      sum += num;
   }
   while (num != 0);

   std::cout << "\nСумма: " << sum << '\n';

   return 0;
}
