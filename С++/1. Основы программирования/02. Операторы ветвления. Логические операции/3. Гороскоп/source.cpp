#include <iostream>
#include <windows.h>

int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);

   int age{};
   std::string gender{};
   std::string zodiac{};

   std::string water_male_less_40{ "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.\n" };
   std::string earth_female_15_30{ "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок. Будет не только весело, но и интересно: найдётся дело, которое увлечёт всех.\n" };
   std::string air_male_less_40{ "Пройдёте обучение и найдёте хорошую работу, так что дерзайте!\n" };
   std::string in_development{ "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)\n" };

   std::cout << "Введите пол: ";
   std::cin >> gender;
   std::cout << "Введите знак зодиака: ";
   std::cin >> zodiac;
   std::cout << "Введите возраст: ";
   std::cin >> age;

   std::cout << "\nВаше предсказание:\n";

   if (gender != "м" && gender != "ж")
   {
      std::cout << "Введено неверное значение пола, нужно ввести 'м' или 'ж', перезапустите программу\n";
      return 1;
   }

   if (gender == "м")
   {
      if (zodiac == "овен") { std::cout << in_development; }
      else if (zodiac == "телец") { std::cout << in_development; }
      else if (zodiac == "близнецы") { std::cout << (age < 40 ? air_male_less_40 : in_development); }
      else if (zodiac == "рак"){ std::cout << (age < 40 ? water_male_less_40 : in_development);}
      else if (zodiac == "лев") { std::cout << in_development; }
      else if (zodiac == "дева") { std::cout << in_development; }
      else if (zodiac == "весы") { std::cout << (age < 40 ? air_male_less_40 : in_development); }
      else if (zodiac == "скорпион") { std::cout << (age < 40 ? water_male_less_40 : in_development); }
      else if (zodiac == "стелец") { std::cout << in_development; }
      else if (zodiac == "козерог") { std::cout << in_development; }
      else if (zodiac == "водолей") { std::cout << (age < 40 ? air_male_less_40 : in_development); }
      else if (zodiac == "рыбы") { std::cout << (age < 40 ? water_male_less_40 : in_development); }
      else { std::cout << "Введено неверное значение зодиака, вводите только строчные буквы, перезапустите программу\n"; return 1; }
   }
   else
   {
      if (zodiac == "овен") { std::cout << in_development; }
      else if (zodiac == "телец") { std::cout << (age <= 30 && age >= 15 ? earth_female_15_30 : in_development); }
      else if (zodiac == "близнецы") { std::cout << in_development; }
      else if (zodiac == "рак") { std::cout << in_development; }
      else if (zodiac == "лев") { std::cout << in_development; }
      else if (zodiac == "дева") { std::cout << (age <= 30 && age >= 15 ? earth_female_15_30 : in_development); }
      else if (zodiac == "весы") { std::cout << in_development; }
      else if (zodiac == "скорпион") { std::cout << in_development; }
      else if (zodiac == "стелец") { std::cout << in_development; }
      else if (zodiac == "козерог") { std::cout << (age <= 30 && age >= 15 ? earth_female_15_30 : in_development); }
      else if (zodiac == "водолей") { std::cout << in_development; }
      else if (zodiac == "рыбы") { std::cout << in_development; }
      else { std::cout << "Введено неверное значение зодиака, вводите только строчные буквы, перезапустите программу\n"; return 1; }
   }
   return 0;
}
