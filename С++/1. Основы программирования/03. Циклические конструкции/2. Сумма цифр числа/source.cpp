#include <iostream>

int main()
{
   setlocale(LC_ALL, "rus");

   int numEnteredUser{};
   int sum{};

   std::cout << "Введите целое число:\n";
   std::cin >> numEnteredUser;

   while (numEnteredUser != 0)
   {
      sum += numEnteredUser % 10;
      numEnteredUser = numEnteredUser / 10;
   }

   std::cout << "Сумма цифр: " << sum;

   return 0;
}
