#include <iostream>

int main() {
  int a, b;

  std::cout << "Ingresa el valor de a: ";
  std::cin >> a;

  std::cout << "Ingresa el valor de b: ";
  std::cin >> b;

  int suma = a + b;
  int resta = a - b;
  int multiplicacion = a * b;
  int division = a / b;

  std::cout << "La suma de " << a << " y " << b << " es " << suma << std::endl;
  std::cout << "La resta de " << a << " y " << b << " es " << resta << std::endl;
  std::cout << "La multiplicacion de " << a << " y " << b << " es " << multiplicacion << std::endl;
  std::cout << "La division de " << a << " y " << b << " es " << division << std::endl;

  return 0;
}