#include <iostream>
using namespace std;

int main() {
    int mi_array[3][5] = {{4, 7, 1, 3, 5},{2, 0, 6, 9, 7},{3, 1, 2, 6, 4}};
    cout << "los valores almacenados son: " << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mi_array[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
    
}