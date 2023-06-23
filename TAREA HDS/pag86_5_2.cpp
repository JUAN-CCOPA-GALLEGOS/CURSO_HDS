#include <iostream>
#include <cmath>
using namespace std;
int main(){


    for (int n = 10; n > 0; n = n-2)
    {
    cout << " Hola ";
    cout << n << endl ;
    }
    
    for (double n = 2; n > 0; n = n - 0.5)
    cout << n << " ";
    

    return 0;
}
//la salida de A, es hola 10,hola 8, hola 6, hola 4, hola 2
// la salida de B, es 2,1.5,1,0.5