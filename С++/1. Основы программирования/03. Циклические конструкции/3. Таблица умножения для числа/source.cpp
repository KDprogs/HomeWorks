#include <iostream>

int main()
{
   setlocale(LC_ALL, "rus");

   int num{};
   int result{};

   std::cout << "Введите целое число: ";
   std::cin >> num;

   for (int i{1}; i < 11; i++)
   {
      result = num * i;
      std::cout << num << " x " << i << " = " << result << "\n";
   }

   return 0;
}
