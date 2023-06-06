#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double a, b, h;

    // Lectura de los lados a y b
    cout << "Ingrese la longitud del lado a: ";
    cin >> a;

    cout << "Ingrese la longitud del lado b: ";
    cin >> b;

    // Cálculo de la hipotenusa utilizando la fórmula h^2 = a^2 + b^2
    h = sqrt(pow(a, 2) + pow(b, 2));

    // Imprimir el resultado
    cout << "La hipotenusa del triángulo es: " << h << endl;

    return 0;
}
