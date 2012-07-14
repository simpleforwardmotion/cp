#include <iostream>

const float pi = 3.14159265359;

int main()
{
  double r, A;
  std::cout << "Enter the radius of a circle" << std::endl;
  std::cin >> r;
  A = r * r * pi;
  std::cout << "radius r = " << r << ", area A = " << A << std::endl;
  return 0;
}

