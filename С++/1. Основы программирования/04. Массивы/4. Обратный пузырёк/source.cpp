#include <iostream>

int main()
{
   setlocale(LC_ALL, "rus");

   int array_numbers[]{ 7, 1, 6, 4, 9, 8, 2, 0, 3, 5 };
   int size_array_numbers = sizeof(array_numbers) / sizeof(array_numbers[0]);
   // или int size_array_numbers = std::size(array_numbers); доступен начиная с C++17.

   std::cout << "Массив до сортировки:";
   for (int index = 0; index < size_array_numbers; index++) { std::cout << ' ' << array_numbers[index]; }

   std::cout << '\n' << "Массив после сортировки:";
   bool swap = false;
   do
   {
      swap = false;
      for (int index = size_array_numbers - 1; index > 0; index--)
      {
         if (array_numbers[index] < array_numbers[index - 1])
         {
            int temporary = array_numbers[index];
            array_numbers[index] = array_numbers[index - 1];
            array_numbers[index - 1] = temporary;
            swap = true;
         }
      }
   } while (swap);
   for (int index = 0; index < size_array_numbers; index++) { std::cout << ' ' << array_numbers[index]; }

   return 0;
}
