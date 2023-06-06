#include <iostream>

using namespace std;

int main() {
    double cantidad_euros;

    // Lectura de la cantidad en euros
    cout << "Ingrese la cantidad en euros: ";
    cin >> cantidad_euros;

    // Conversión a billetes y monedas de curso legal
    int billetes_100 = cantidad_euros / 100;
    cantidad_euros -= billetes_100 * 100;

    int billetes_50 = cantidad_euros / 50;
    cantidad_euros -= billetes_50 * 50;

    int billetes_20 = cantidad_euros / 20;
    cantidad_euros -= billetes_20 * 20;

    int billetes_10 = cantidad_euros / 10;
    cantidad_euros -= billetes_10 * 10;

    int billetes_5 = cantidad_euros / 5;
    cantidad_euros -= billetes_5 * 5;

    int monedas_2 = cantidad_euros / 2;
    cantidad_euros -= monedas_2 * 2;

    int monedas_1 = cantidad_euros / 1;
    cantidad_euros -= monedas_1 * 1;

    int monedas_050 = cantidad_euros / 0.50;
    cantidad_euros -= monedas_050 * 0.50;

    int monedas_020 = cantidad_euros / 0.20;
    cantidad_euros -= monedas_020 * 0.20;

    int monedas_010 = cantidad_euros / 0.10;
    cantidad_euros -= monedas_010 * 0.10;

    int monedas_005 = cantidad_euros / 0.05;
    cantidad_euros -= monedas_005 * 0.05;

    int monedas_002 = cantidad_euros / 0.02;
    cantidad_euros -= monedas_002 * 0.02;

    int monedas_001 = cantidad_euros / 0.01;

    // Impresión de los billetes y monedas
    cout << "Billetes de 100 euros: " << billetes_100 << endl;
    cout << "Billetes de 50 euros: " << billetes_50 << endl;
    cout << "Billetes de 20 euros: " << billetes_20 << endl;
    cout << "Billetes de 10 euros: " << billetes_10 << endl;
    cout << "Billetes de 5 euros: " << billetes_5 << endl;
    cout << "Monedas de 2 euros: " << monedas_2 << endl;
    cout << "Monedas de 1 euro: " << monedas_1 << endl;
    cout << "Monedas de 0.50 euros: " << monedas_050 << endl;
    cout << "Monedas de 0.20 euros: " << monedas_020 << endl;
    cout << "Monedas de 0.10 euros: " << monedas_010 << endl;
    cout << "Monedas de 0.05 euros: " << monedas_005 << endl;
    cout << "Monedas de 0.02 euros: " << monedas_002 << endl;
    cout << "Monedas de 0.01 euros: " << monedas_001 << endl;

    return 0; 
    
    }

