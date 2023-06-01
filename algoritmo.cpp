#include <iostream>

int main() {
  int x, y, z, total;

  std::cout << "Ingrese la cantidad de billetes de $200: ";
  std::cin >> x;

  std::cout << "Ingrese la cantidad de billetes de $100: ";
  std::cin >> y;

  std::cout << "Ingrese la cantidad de billetes de $50: ";
  std::cin >> z;

  total = (x * 200) + (y * 100) + (z * 50);

  std::cout << "Juan tiene $" << total << std::endl;

return 0;
} 