#include <iostream>
using namespace std;
int main(){
const float G = 6.673e-8;
float masa1, masa2, distancia, fuerza;
cout << " primera masa en gramos: ";
cin >> masa1;
cout << " segunda masa en gramos: ";
cin >> masa2;
cout<<" la distancia entre masas en centimetros: ";
cin >> distancia;
if (fuerza = G * masa1 * masa2 / (distancia * distancia))
cout << " la solucion de la Fuerza en dinas es: "<< fuerza << endl;
return 0;
}