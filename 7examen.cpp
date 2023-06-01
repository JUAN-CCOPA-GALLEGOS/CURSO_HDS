#include <iostream>

using namespace std;

int main() {
    int matriz[4][4];
    int mayorColumnas[4] = {0, 0, 0, 0};

    // Llenar la matriz con valores ingresados por el usuario
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Ingrese el valor para la fila " << i+1 << " y la columna " << j+1 << ": ";
            cin >> matriz[i][j];
            if (matriz[i][j] > mayorColumnas[j]) {
                mayorColumnas[j] = matriz[i][j];
            }
        }
    }

    // Mostrar la tabla de 4x4
    cout << "La tabla de 4x4 es:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Mostrar el número mayor de cada columna
    for (int i = 0; i < 4; i++) {
        cout << "El número mayor de la columna " << i+1 << " es: " << mayorColumnas[i] << endl;
    }

    return 0;
}