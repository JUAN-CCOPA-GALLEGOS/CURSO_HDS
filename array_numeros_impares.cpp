#include <iostream>

int main() {
  int my_array[10];
  int num = 1;

  for (int i = 0; i < 10; i++) {
    my_array[i] = num;
    num += 2;
  }

  std::cout << "los numeros impares en los indices 0,2,4,6,8 son: ";
  for (int i = 0; i < 10; i += 2) {
    std::cout << my_array[i] << " ";
  }
  return 0;
}