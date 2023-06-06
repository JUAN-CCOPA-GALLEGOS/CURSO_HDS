#include <iostream>
using namespace std;
int main(){
float a, b, c, d, e, f, denominador, x, y;
cout << "ingresa el valor de a: ";
cin>> a;
cout <<"ingresa el valor de b: ";
cin>> b;
cout<< "ingresa el valor de c: ";
cin>> c;
cout << "ingresa el valor de d: ";
cin>> d;
cout <<"ingresa el valor de e: ";
cin>> e;
cout<<"ingresa el valor de f: ";
cin>> f;
denominador = a * e - b * d;
if (denominador == 0)
cout << " no hay solucion";
else
{
x = (c * e - b * f) / denominador;
y = (a * f - c * d) / denominador;
cout << " la solucion del sistema es";
cout << " x = " << x << " y = " << y << endl;
}
return 0;
}