#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> numeros(10);
  int suma = 0;
  for (int i = 0; i < 10; i++) {
    cout << "Ingrese el número #" << i+1 << ": ";
    cin >> numeros[i];
  }
  for (int i = 0; i < 10; i++) {
    suma += numeros[i];
  }
  int media = suma / 10;
  cout << "\nLa suma de los números es: " << suma << endl;
  cout << "La media aritmética es: " << media << endl;
  return 0;
}