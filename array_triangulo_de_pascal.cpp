#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> calcularTrianguloPascal(int n) {
    vector<vector<int>> triangulo(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        triangulo[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            triangulo[i][j] = triangulo[i-1][j-1] + triangulo[i-1][j];
        }
    }
    
    return triangulo;
}

int main() {
    int n;
    cout << "Ingrese el tamaño del triángulo: ";
    cin >> n;
    
    vector<vector<int>> triangulo = calcularTrianguloPascal(n);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << triangulo[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
