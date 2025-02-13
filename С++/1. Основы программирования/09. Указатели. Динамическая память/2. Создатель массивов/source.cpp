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

   for (int i = 0; i < size; i++) { std::cout << ' ' << arr[i]; }

   delete[] arr;

   return 0;
}
