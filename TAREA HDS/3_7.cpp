#include <iostream>

using namespace std;

int main() {
    int hectometros, decametros, metros, perimetro_decimetros;

    // Lectura de la longitud del perímetro en hectómetros, decámetros y metros
    cout << "Ingrese longitud del perímetro en hectómetros: ";
    cin >> hectometros;

    cout << "Ingrese longitud del perímetro en decametros: ";
    cin >> decametros;

    cout << "Ingrese longitud del perímetro en metros: ";
    cin >> metros;

    // Cálculo del perímetro en decímetros
    perimetro_decimetros = ((hectometros * 100) + (decametros * 10) + (metros * 1))*10 ;

    // Mostrar el perímetro en decímetros
    cout << "El perímetro del terreno es: " << perimetro_decimetros << " decímetros" << endl;

    return 0;
}
