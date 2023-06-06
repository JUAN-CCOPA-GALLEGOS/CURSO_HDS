#include <iostream>
using namespace std;

int main() {
    double masa, energia;
    const double velocidad_luz = 2.997925e10;
    cout << "Ingrese la masa en gramos: ";
    cin >> masa;
    masa /= 1000;
    energia = masa * velocidad_luz * velocidad_luz;
    cout << "La energía producida es de " << energia << " joules." << endl;
    cout << "La energía producida es de " << energia * 1e7 << " ergios." << endl;

    return 0;
}