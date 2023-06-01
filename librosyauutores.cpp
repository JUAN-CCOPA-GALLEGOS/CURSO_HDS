#include <iostream>
using namespace std;

class Libro {
public:
  string titulo;
  string autor;
};

int main() {
  Libro libros[8];
  int numLibros = 0;

  // Ingresar información de los libros
  for (int i = 0; i < 8; i++) {
    cout << "Ingrese el título del libro #" << i+1 << ": ";
    cin >> libros[i].titulo;
    cout << "Ingrese el autor del libro #" << i+1 << ": ";
    cin >> libros[i].autor;
    numLibros++;
  }

  // Mostrar información de los libros
  cout << "\nLibros almacenados:\n";
  for (int i = 0; i < numLibros; i++) {
    cout << "Título: " << libros[i].titulo << endl;
    cout << "Autor: " << libros[i].autor << endl;
    cout << endl;
  }

  return 0;
}