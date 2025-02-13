#include <iostream>

int main()
{
   setlocale(LC_ALL, "rus");

   const int size_array_numbers = 10;
   int array_numbers[size_array_numbers]{};

   for (int index = 0; index < size_array_numbers; index++) { array_numbers[index] = index; }

   std::cout << "Массив:";
   for (int index = 0; index < size_array_numbers; index++) { std::cout << ' ' << array_numbers[index]; }

   std::cout << '\n' << "Минимальный элемент: ";
   int min_element = array_numbers[0];
   for (int index = 1; index < size_array_numbers; index++)
   {
      if (min_element > array_numbers[index]) { min_element = array_numbers[index]; }
   }
   std::cout << min_element;

   std::cout << '\n' << "Максимальный элемент: ";
   int max_element = array_numbers[0];
   for (int index = 1; index < size_array_numbers; index++)
   {
      if (max_element < array_numbers[index]) { max_element = array_numbers[index]; }
   }
   std::cout << max_element;

   return 0;
}
