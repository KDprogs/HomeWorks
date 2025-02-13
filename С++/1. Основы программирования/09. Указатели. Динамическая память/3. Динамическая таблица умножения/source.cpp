#include <iostream>

int** create_two_dim_array(int rows, int cols)
{
   int** arr = new int* [rows];
   for (int i = 0; i < rows; i++) { arr[i] = new int[cols]; }
   return arr;
}

void fill_two_dim_array(int** arr, int rows, int cols)
{
   for (int i = 0; i < rows; i++)
   {
      for (int j = 0; j < cols; j++) { arr[i][j] = (i + 1) * (j + 1); }
   }
}

void print_two_dim_array(int** arr, int rows, int cols)
{
   for (int i = 0; i < rows; i++)
   {
      for (int j = 0; j < cols; j++) { std::cout.width(4); std::cout << arr[i][j]; }
      std::cout << "\n\n";
   }
}

void delete_two_dim_array(int** arr, int rows)
{
   for (int i = 0; i < rows; i++) { delete[] arr[i]; }
   delete[] arr;
}


int main()
{
   setlocale(LC_ALL, "rus");

   int rows{};
   int cols{};

   std::cout << "Введите количество строк: ";
   std::cin >> rows;
   std::cout << "Введите количество столбцов: ";
   std::cin >> cols;

   int** arr = create_two_dim_array(rows, cols);
   fill_two_dim_array(arr, rows, cols);

   std::cout << "Таблица умножения:\n\n";

   print_two_dim_array(arr, rows, cols);
   delete_two_dim_array(arr, rows);

   return 0;
}
