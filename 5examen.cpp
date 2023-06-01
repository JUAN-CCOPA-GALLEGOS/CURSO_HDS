#include <iostream>

int main() {
    int notas[10] = {7, 8, 9, 6, 7, 8, 9, 8, 7, 6};
    int suma = 0;
    
    for (int i = 0; i < 10; i++) {
        suma += notas[i];
    }
    
    int promedio = suma / 10;
    
    std::cout << "Notas: ";
    for (int i = 0; i < 10; i++) {
        std::cout << notas[i] << " ";
    }
    std::cout << std::endl;
    
    std::cout << "Promedio: " << promedio << std::endl;
    
    return 0;
}
