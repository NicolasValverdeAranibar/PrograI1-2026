// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 22/05/2026
// Número de ejercicio: 1

#include <iostream>
using namespace std;

struct Libro
{
    string titulo;
    string autor;
    int anio_publicacion;
    bool disponible;
};

void registrarLibro(Libro &libro);
void mostrarLibro(Libro libro);

int main()
{
    Libro libro;
    registrarLibro(libro);
    mostrarLibro(libro);
    return 0;
}

void registrarLibro(Libro &libro)
{
    cin.ignore();
    cout << "Titulo: ";
    getline(cin, libro.titulo);
    cout << "Autor: ";
    getline(cin, libro.autor);
    cout << "Anio de publicacion: ";
    cin >> libro.anio_publicacion;
    cout << "Disponible (1=Si, 0=No): ";
    cin >> libro.disponible;
}

void mostrarLibro(Libro libro)
{
    cout << "\nDATOS DEL LIBRO\n";
    cout << "Titulo: " << libro.titulo << endl;
    cout << "Autor: " << libro.autor << endl;
    cout << "Anio: " << libro.anio_publicacion << endl;
    if(libro.disponible)
        cout << "Disponible\n";
    else
        cout << "No disponible\n";
}