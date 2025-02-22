#include <iostream>
#include <fstream>
#include <string>  
#include <limits> 

int main()
{
   setlocale(LC_ALL, "rus");

   std::string file{ "out.txt" };

   std::string num;
   bool err{};

   do
   {
      std::string str;
      std::cout << "Введите размер массива: ";
      std::getline(std::cin, str);
      num = str.substr(0, 6);
      for (char i{'1'}; i <= '9'; i++)
      {
         if (num.find(i) == 0) { err = false; break; }
         err = true;
      }
      if (err || std::stoi(num) > 99999)
      {
         std::cout << "\nОшибка! Допустимый диапазон от 1 до 99999\n\n";
         err = true;
      }
   } while (err);

   int size = std::stoi(num);
   int* arr = new int[size]{};

   std::cout << "\nВы создали массив из " << size << " элементов, теперь введите значение каждого элемента:\n\n";

   for (int i{}; i < size; i++)
   {
      std::string value;
      do
      {
         std::string str;
         std::cout << "arr[" << i << "] = ";
         std::getline(std::cin, str);
         value = str.substr(0, 12);
         for (char j{'0'}; j <= '9'; j++)
         {
            if (value.find(j) == 0) { err = false; break; }
            else if (value.find(j) == 1 && value.find('-') == 0) { err = false; break; }
            err = true;
         }
         if (err || std::stoll(value) < std::numeric_limits<int>::min() || std::stoll(value) > std::numeric_limits<int>::max())
         {
            std::cout << "\nОшибка! Значение элемента массива должно быть целое число в диапазоне от -2147483648 до 2147483647\n\n";
            err = true;
         }
      } while (err);
      arr[i] = std::stoi(value);
   }

   std::ofstream log{ file };
   if (!log.is_open()) { std::cout << "Невозможно создать файл " + file + " нет прав доступа!\n"; return 1; }

   log << size << '\n';
   for (int i{size}; i > 0; i--) { log << arr[i-1] << ' '; }
   log.close();

   delete[] arr;

   return 0;
}
