#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre, programa;
    int nota, semestre;
    cout << "Ingrese el nombre del estudiante: ";
    cin >> nombre;
    cout << "Ingrese la nota del estudiante: ";
    cin >> nota;
    cout << "Ingrese el programa de estudios: ";
    cin >> programa;
    cout << "Ingrese el semestre: ";
    cin >> semestre;
    cout << "Nombre del estudiante: " << nombre << endl;
    cout << "Nota del estudiante: " << nota << endl;
    cout << "Programa de estudios: " << programa << endl;
    cout << "Semestre: " << semestre << endl;
    return 0;
}
