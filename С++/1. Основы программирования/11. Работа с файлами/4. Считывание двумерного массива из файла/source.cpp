#include <iostream>
#include <fstream>

int main()
{
   setlocale(LC_ALL, "rus");

   std::string file{ "data.txt" };
   std::ifstream data{ file };

   if (data.is_open())
   {
      int rows{}; data >> rows;
      int cols{}; data >> cols;

      // Создаем двумерный динамический массив
      int** arr = new int* [rows];
      for (int i = 0; i < rows; i++) { arr[i] = new int[cols]; }

      // Заполняем массив
      for (int i = 0; i < rows; i++)
      {
         for (int j = cols; j > 0; j--) { data >> arr[i][j - 1]; }
      }
      data.close();

      // Выводим массив
      for (int i = 0; i < rows; i++)
      {
         for (int j = 0; j < cols; j++)
         {
            std::cout.width(3);
            std::cout.setf(std::ios::left);
            std::cout << arr[i][j] << ' ';
         }
         std::cout << '\n';
      }

      // Освобождаем память
      for (int i = 0; i < rows; i++) { delete[] arr[i]; }
      delete[] arr;
   }
   else { std::cout << "Файла " + file + " не существует!"; }

   return 0;
}
