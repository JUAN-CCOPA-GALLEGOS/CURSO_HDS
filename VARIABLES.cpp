#include <iostream>
using namespace std;

int main() {
    const float PRECIO_OPCION_1 = 3.50;
    const float PRECIO_OPCION_2 = 4.80;
    const float IGV = 0.18;
    const int DIAS_VIGENCIA = 45;

    int opcion;
    float metros, precioPorMetro,precioSinIGV, precioConIGV, precioTotal;

    cout << "Seleccione la opcion deseada: \n";
    cout << "1. Precio por metro de S/3.50 \n";
    cout << "2. Precio por metro de S/4.80 \n";
    cin >> opcion;

    switch(opcion) {
        case 1:
            precioPorMetro = PRECIO_OPCION_1;
            break;
        case 2:
            precioPorMetro = PRECIO_OPCION_2;
            break;
        default:
            cout << "Opcion invalida. Saliendo del programa. \n";
            return 0;
    }
    cout << "ingrese la cantidad de metros: ";
    cin >> metros;

    precioSinIGV = (precioPorMetro * metros);
    precioConIGV = (precioSinIGV * IGV)+precioSinIGV;

    cout << "El precio por metro es: S/" << precioPorMetro << "\n";
    cout << "El precio por metro es: S/" << precioSinIGV << "\n";
    cout << "El precio con IGV es: S/" << precioConIGV << "\n";
    cout << "los dias de vigencia son: " << DIAS_VIGENCIA << "\n";
    return 0;
}
