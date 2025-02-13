#include <iostream>

int main()
{
   setlocale(LC_ALL, "rus");

   int numEnteredUser{};
   int sum{};

   do
   {
      std::cout << "Введите целое число или число '0', чтобы закончить:\n";
      std::cin >> numEnteredUser;
      sum += numEnteredUser;
   }
   while (numEnteredUser != 0);

   std::cout << "Сумма: " << sum;

   return 0;
}
