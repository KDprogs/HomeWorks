#include <iostream>

void reverse(int* arr, int size)
{
   for (int i = 0; i < size / 2; i++)
   {
      int temp = arr[i];
      arr[i] = arr[size - i - 1];
      arr[size - i - 1] = temp;

      // arr[i] = arr[i] + arr[size-i-1];
      // arr[size-i-1] = arr[i] - arr[size-i-1];
      // arr[i] = arr[i] - arr[size-i-1];
   }
}

void print(int* arr, int size)
{
   for (int i = 0; i < size; i++) { std::cout << arr[i] << ' '; }
   std::cout << std::endl;
}


int main()
{
   setlocale(LC_ALL, "rus");

   int arr[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
   int size = sizeof(arr) / sizeof(arr[0]);

   std::cout << "До функции reverse: ";
   print(arr, size);

   reverse(arr, size);

   std::cout << "После функции reverse: ";
   print(arr, size);

   return 0;
}
