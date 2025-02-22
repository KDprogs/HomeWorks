#include <iostream>

double* create_array(int size)
{
   return new double[size]{};
}


int main()
{
   setlocale(LC_ALL, "rus");

   int size{};

   std::cout << "Введите размер массива: ";
   std::cin >> size;

   double* arr = create_array(size);

   std::cout << "Массив:";

   for (int i{}; i < size; i++) { std::cout << ' ' << arr[i]; }

   delete[] arr;

   std::cout << '\n';

   return 0;
}
