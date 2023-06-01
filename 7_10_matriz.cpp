#include <iostream>
using namespace std;

int main() {
  int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int minimo = matriz[0][0];
  int maximo = matriz[0][0];
  int fila_minimo = 0;
  int columna_minimo = 0;
  int fila_maximo = 0;
  int columna_maximo = 0;
  int numero_buscado;

  cout << "Ingrese el número que desea buscar: ";
  cin >> numero_buscado;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (matriz[i][j] == numero_buscado) {
        cout << "El número " << numero_buscado << " se encuentra en la posición [" << i << "][" << j << "]" << endl;
      }
      if (matriz[i][j] < minimo) {
        minimo = matriz[i][j];
        fila_minimo = i;
        columna_minimo = j;
      }
      if (matriz[i][j] > maximo) {
        maximo = matriz[i][j];
        fila_maximo = i;
        columna_maximo = j;
      }
    }
  }

  cout << "El elemento mínimo es " << minimo << " y se encuentra en la posición [" << fila_minimo << "][" << columna_minimo << "]" << endl;
  cout << "El elemento máximo es " << maximo << " y se encuentra en la posición [" << fila_maximo << "][" << columna_maximo << "]" << endl;

  return 0;
}