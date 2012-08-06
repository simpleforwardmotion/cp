#include <iostream>


int main()
{
  std::cout << "Enter the radius of a circle" << std::endl;

  double r;
  std::cin >> r;

  const float pi = 3.14159265359;
  double A = r * r * pi;

  std::cout << "radius r = " << r << ", area A = " << A << std::endl;

  return 0;
}

