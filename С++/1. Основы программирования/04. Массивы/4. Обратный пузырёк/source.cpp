#include <iostream>

int main()
{
   setlocale(LC_ALL, "rus");

   int arr[]{ 7, 1, 6, 4, 9, 8, 2, 0, 3, 5 };
   int size = sizeof(arr) / sizeof(arr[0]);
   // или int size = std::size(arr); доступен начиная с C++17.

   std::cout << "Массив до сортировки:";
   for (int i{}; i < size; i++) { std::cout << ' ' << arr[i]; }

   std::cout << "\nМассив после сортировки:";
   bool swap{};
   do
   {
      swap = false;
      for (int i{size-1}; i > 0; i--)
      {
         if (arr[i] < arr[i-1])
         {
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
            swap = true;
         }
      }
   } while (swap);
   for (int i{}; i < size; i++) { std::cout << ' ' << arr[i]; }

   std::cout << '\n';

   return 0;
}
