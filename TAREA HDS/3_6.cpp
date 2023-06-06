#include <iostream>
using namespace std;

int main() {
    double pies, yardas, pulgadas, centimetros, metros;

    cout << "Ingrese la medida en pies: ";
    cin >> pies;

    yardas = pies /3;
    pulgadas = pies * 12.0;
    centimetros = pulgadas * 2.54;
    metros = centimetros / 100.0;

    cout << pies << " pies son equivalentes a:" << endl;
    cout << yardas << " yardas" << endl;
    cout << pulgadas << " pulgadas" << endl;
    cout << centimetros << " centimetros" << endl;
    cout << metros << " metros" << endl;

    return 0;
}