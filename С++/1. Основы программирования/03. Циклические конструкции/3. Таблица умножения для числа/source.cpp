#include <iostream>

int main()
{
   setlocale(LC_ALL, "rus");

   int numEnteredUser{};
   int result{};

   std::cout << "Введите целое число:\n";
   std::cin >> numEnteredUser;

   for (int multiply_by = 1; multiply_by != 11; multiply_by++)
   {
      result = numEnteredUser * multiply_by;
      std::cout << numEnteredUser << " x " << multiply_by << " = " << result << "\n";
   }

   return 0;
}
