#include <iostream>

using namespace std;

int main() {
    int numeros[4];
    int mayor, menor;

    // Ingresar los 4 números
    for (int i = 0; i < 4; i++) {
        cout << "Ingrese un número: ";
        cin >> numeros[i];
    }

    // encontramos el numero mayor y el menor
    mayor = menor = numeros[0];
    for (int i = 1; i < 4; i++) {
        mayor = (numeros[i] > mayor) ? numeros[i] : mayor;
        menor = (numeros[i] < menor) ? numeros[i] : menor;
    }

    // mostramos el doble del mayor y el numero menor aumentado en dos
    cout << "El doble del número mayor es: " << mayor * 2 << endl;
    cout << "El número menor incrementado en dos es: " << menor + 2 << endl;

    return 0;
}