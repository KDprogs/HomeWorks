#include <iostream>  
#include <string>  
#include <limits>  

int main()  
{  
  setlocale(LC_ALL, "rus");  

  std::string size{};  
  bool err = true;  

  do  
  {  
     std::string str{};  
     std::cout << "Введите размер массива: ";  
     std::getline(std::cin, str);  
     size = str.substr(0, 6);  
     for (char i = '1'; i <= '9'; i++)  
     {  
        if (size.find(i) == 0) { err = false; break; }  
        err = true;  
     }  
     if (err || std::stoi(size) > 99999)
     {
        std::cout << "\nОшибка! Допустимый диапазон от 1 до 99999\n\n";
        err = true;
     }
  } while (err);  

  int arraySize = std::stoi(size);  
  int* arr = new int[arraySize] {};  

  std::cout << "\nВы создали массив из " << arraySize << " элементов, теперь введите значение каждого элемента:\n\n";

  for (int i = 0; i < arraySize; i++)  
  {  
     std::string value{};  
     do  
     {  
        std::string str{};  
        std::cout << "arr[" << i << "] = ";  
        std::getline(std::cin, str);  
        value = str.substr(0, 12);  
        for (char j = '0'; j <= '9'; j++)  
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

  std::cout << "\nВведённый массив:";  

  for (int i = 0; i < arraySize; i++) { std::cout << ' ' << arr[i]; }  

  delete[] arr;  

  return 0;  
}
