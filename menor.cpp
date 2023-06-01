#include <iostream>

using namespace std;

int main() {
    int matriz[4][4];
    int sumaFilas[4] = {0, 0, 0, 0};
    int filaMayorSuma = 0;
    int mayorSuma = 0;

    // Llenar la matriz con valores ingresados por el usuario
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Ingrese el valor para la fila " << i+1 << " y la columna " << j+1 << ": ";
            cin >> matriz[i][j];
            sumaFilas[i] += matriz[i][j];
        }
    }

    // Mostrar la matriz de 4x4
    cout << "La matriz de 4x4 es:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Encontrar la fila con la suma mayor
    for (int i = 0; i < 4; i++) {
        if (sumaFilas[i] > mayorSuma) {
            filaMayorSuma = i;
            mayorSuma = sumaFilas[i];
        }
    }

    // Mostrar la suma de cada fila
    for (int i = 0; i < 4; i++) {
        cout << "La suma de la fila " << i+1 << " es: " << sumaFilas[i] << endl;
    }

    // Mostrar la fila con la suma mayor y su valor
    cout << "La fila con la suma mayor es la fila " << filaMayorSuma+1 << " con una suma de " << mayorSuma << endl;

    return 0;
}
