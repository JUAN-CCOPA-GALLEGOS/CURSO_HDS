#include <iostream>
using namespace std;

int main() {
    int num = 2;
    int contador = 0;

    cout << "Tabla de los 100 primeros números primos:\n";

    while (contador < 100) {
        int esPrimo = 1;

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                esPrimo = 0;
            }
        }

        if (esPrimo) {
            cout << num << "\t";
            contador++;
            if (contador % 10 == 0) {
                cout << endl;
            }
        }

        num++;
    }

    return 0;
}