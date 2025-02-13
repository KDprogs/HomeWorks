#include <iostream>
#include <fstream>

int main()
{
   setlocale(LC_ALL, "rus");

   std::string file{ "data.txt" };
   std::ifstream data{ file };

   if (data.is_open())
   {
      int size{}; data >> size;
      int* arr = new int[size] {};

      for (int i = size; i > 0; i--) { data >> arr[i - 1]; }
      data.close();

      for (int i = 0; i < size; i++) { std::cout << arr[i] << ' '; }
      delete[] arr;
   }
   else { std::cout << "Файла " + file + " не существует!"; }

   return 0;
}
