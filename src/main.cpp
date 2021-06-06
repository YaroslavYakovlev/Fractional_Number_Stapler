#include <iostream>

int main(){
  std::cout << "Fractional Number Stapler" << std::endl;
  int whole = 0;
  int fractional = 0; 
  std::string resStr = "";
  double res = 0.0;

  std::cin >> whole >> fractional;

  std::string strWhole = std::to_string(whole);
  std::string strFractional = std::to_string(fractional);
  resStr = strWhole + '.' + strFractional;
  res = std::stod(resStr);

  std::cout << "res " << res << std::endl;

  return 0;
}

// Сшиватель дробных чисел

// Что нужно сделать

// Надо написать небольшую программу. Из целой и 
// дробной частей числа, которые в отдельности 
// вводит пользователь надо составить новое 
// число с плавающей точкой (типа double) и вывести 
// это число обратно в консоль, для проверки. 
// Целая часть - это та, часть числа, которая 
// находится до точки (запятой), дробная - после.