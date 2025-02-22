#include <iostream>

int main()
{
   setlocale(LC_ALL, "rus");

   const int size{10};
   int arr[size]{};

   for (int i{}; i < size; i++) { arr[i] = i; }

   std::cout << "Массив:";
   for (int i{}; i < size; i++) { std::cout << ' ' << arr[i]; }

   std::cout << "\n\nМинимальный элемент: ";
   int min = arr[0];
   for (int i{1}; i < size; i++)
   {
      if (min > arr[i]) { min = arr[i]; }
   }
   std::cout << min;

   std::cout << "\nМаксимальный элемент: ";
   int max = arr[0];
   for (int i{1}; i < size; i++)
   {
      if (max < arr[i]) { max = arr[i]; }
   }
   std::cout << max << '\n';

   return 0;
}
