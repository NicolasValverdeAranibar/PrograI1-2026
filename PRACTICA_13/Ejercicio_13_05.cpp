// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 22/05/2026
// Número de ejercicio: 5

#include <iostream>
using namespace std;

struct Pelicula
{
    string titulo;
    string director;
    int duracion;
    int anio_estreno;
    string genero;
};

void registrarPeliculas(Pelicula peliculas[], int n);
void buscarGenero(Pelicula peliculas[], int n, string genero);
void buscarDirector(Pelicula peliculas[], int n, string director);

int main()
{
    int n;
    string genero;
    string director;
    cout << "Cantidad de peliculas: ";
    cin >> n;
    Pelicula peliculas[n];
    registrarPeliculas(peliculas, n);
    cin.ignore();
    cout << "\nGenero a buscar: ";
    getline(cin, genero);
    buscarGenero(peliculas, n, genero);
    cout << "\nDirector a buscar: ";
    getline(cin, director);
    buscarDirector(peliculas, n, director);
    return 0;
}

void registrarPeliculas(Pelicula peliculas[], int n)
{
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        cout << "\nTitulo: ";
        getline(cin, peliculas[i].titulo);
        cout << "Director: ";
        getline(cin, peliculas[i].director);
        cout << "Duracion: ";
        cin >> peliculas[i].duracion;
        cout << "Anio estreno: ";
        cin >> peliculas[i].anio_estreno;
        cin.ignore();
        cout << "Genero: ";
        getline(cin, peliculas[i].genero);
    }
}

void buscarGenero(Pelicula peliculas[], int n, string genero)
{
    cout << "\nPELICULAS DEL GENERO " << genero << endl;
    for(int i = 0; i < n; i++)
    {
        if(peliculas[i].genero == genero)
        {
            cout << peliculas[i].titulo << endl;
        }
    }
}

void buscarDirector(Pelicula peliculas[], int n, string director)
{
    cout << "\nPELICULAS DEL DIRECTOR " << director << endl;
    for(int i = 0; i < n; i++)
    {
        if(peliculas[i].director == director)
        {
            cout << peliculas[i].titulo << endl;
        }
    }
}