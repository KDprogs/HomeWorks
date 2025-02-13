#include <iostream>

int main()
{
   setlocale(LC_ALL, "rus");

   int numEnteredUser_1{};
   int numEnteredUser_2{};
   int numEnteredUser_3{};

   std::cout << "Введите первое число: ";
   std::cin >> numEnteredUser_1;
   std::cout << "Введите второе число: ";
   std::cin >> numEnteredUser_2;
   std::cout << "Введите третье число: ";
   std::cin >> numEnteredUser_3;

   std::cout << '\n' << "Результат: ";

   int result = numEnteredUser_1 >= numEnteredUser_2
      ? numEnteredUser_1 >= numEnteredUser_3 ? numEnteredUser_1 : numEnteredUser_3
      : numEnteredUser_2 >= numEnteredUser_3 ? numEnteredUser_2 : numEnteredUser_3;
   std::cout << result << ' ';

   result = result == numEnteredUser_1
      ? numEnteredUser_2 >= numEnteredUser_3 ? numEnteredUser_2 : numEnteredUser_3
      : result == numEnteredUser_2
      ? numEnteredUser_1 >= numEnteredUser_3 ? numEnteredUser_1 : numEnteredUser_3
      : numEnteredUser_1 >= numEnteredUser_2 ? numEnteredUser_1 : numEnteredUser_2;
   std::cout << result << ' ';

   result = result == numEnteredUser_1
      ? numEnteredUser_2 <= numEnteredUser_3 ? numEnteredUser_2 : numEnteredUser_3
      : result == numEnteredUser_2
      ? numEnteredUser_1 <= numEnteredUser_3 ? numEnteredUser_1 : numEnteredUser_3
      : numEnteredUser_1 <= numEnteredUser_2 ? numEnteredUser_1 : numEnteredUser_2;
   std::cout << result;

   return 0;
}
