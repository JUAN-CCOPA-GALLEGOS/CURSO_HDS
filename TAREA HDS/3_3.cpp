#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c, d, e, f, denominador, x, y;
    cout << "Ingresa el valor de a: ";
    cin >> a;
    cout << "Ingresa el valor de b: ";
    cin >> b;
    cout << "Ingresa el valor de c: ";
    cin >> c;
    cout << "Ingresa el valor de d: ";
    cin >> d;
    cout << "Ingresa el valor de e: ";
    cin >> e;
    cout << "Ingresa el valor de f: ";
    cin >> f;
    denominador = a * e - b * d;
    if (denominador == 0) {
        cout << "No hay solucion" << endl;
    } else {
        x = (c * e - b * f) / denominador;
        if (x > 2) {
            y = pow((a * f - c * d) / denominador, 2);
        } else {
            y = (a * f - c * d) / denominador - 2;
        }
        cout << "La solucion del sistema es: " << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
    return 0;
}
