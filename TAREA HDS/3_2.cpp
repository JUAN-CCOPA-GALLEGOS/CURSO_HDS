#include <iostream>

using namespace std;

int main() {
    int numero;
    // Lectura del número entero
    cout << "Ingrese un número entero: "; cin >> numero;
    // Calculara del doble y triple del número
    int doble = numero * 2;
    int triple = numero * 3;
    // Imprimir el resultado
    cout << "El doble del número es: " << doble << endl;
    cout << "El triple del número es: " << triple << endl;

    return 0;
}
