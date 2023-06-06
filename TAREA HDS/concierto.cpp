#include <iostream>
using namespace std;

int main() {
    int ubicacion, cantidad, precio, total;
    string bebida;
   
    cout << "Ubicaciones disponibles:" << endl;
    cout << "1. General - Precio 50 soles" << endl;
    cout << "2. Preferencial - Precio 80 soles" << endl;
    cout << "3. Platea - Precio 120 soles" << endl;
    cout << "4. VIP - Precio 160 soles" << endl;

    cout << "Ingrese la ubicación deseada : ";
    cin >> ubicacion;

    cout << "Ingrese la cantidad de entradas: ";
    cin >> cantidad;

    switch (ubicacion) {
        case 1:
            precio = 50;
            break;
        case 2:
            precio = 80;
            break;
        case 3:
            precio = 120;
            break;
        case 4:
            precio = 160;
            cout << "Elija una bebida (gaseosa, cerveza, agua): ";
            cin >> bebida;
            break;
        default:
            cout << "Opción inválida." << endl;
            return 0;
    }

    total = precio * cantidad;
    cout << "El total a pagar es: " << total << " soles" << endl;

    if (ubicacion == 4) {
        cout << "Bebida seleccionada: " << bebida << endl;
    }

    return 0;
}
