#include <iostream>

int main() {
  int my_array[5];
  int num = 2;

  for (int i = 0; i < 5; i++) {
    my_array[i] = num;
    num += 2;
  }

  std::cout << "The first 5 even numbers are: ";
  for (int i = 0; i < 5; i++) {
    std::cout << my_array[i] << " ";
  }

return 0;
}