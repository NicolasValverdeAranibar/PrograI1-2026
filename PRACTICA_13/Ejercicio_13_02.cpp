// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 22/05/2026
// Número de ejercicio: 2

#include <iostream>
using namespace std;

struct Atleta
{
    string nombre;
    string pais;
    int edad;
    int mejor_tiempo;
};

void registrarAtletas(Atleta atletas[], int n);
int obtenerMejorAtleta(Atleta atletas[], int n);

int main()
{
    int n;
    cout << "Cantidad de atletas: ";
    cin >> n;
    Atleta atletas[n];
    registrarAtletas(atletas, n);
    int mejor = obtenerMejorAtleta(atletas, n);
    cout << "\nMEJOR ATLETA\n";
    cout << atletas[mejor].nombre << endl;
    cout << atletas[mejor].pais << endl;
    return 0;
}

void registrarAtletas(Atleta atletas[], int n)
{
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        cout << "\nNombre: ";
        getline(cin, atletas[i].nombre);
        cout << "Pais: ";
        getline(cin, atletas[i].pais);
        cout << "Edad: ";
        cin >> atletas[i].edad;
        cout << "Mejor tiempo: ";
        cin >> atletas[i].mejor_tiempo;
        cin.ignore();
    }
}

int obtenerMejorAtleta(Atleta atletas[], int n)
{
    int pos = 0;
    for(int i = 1; i < n; i++)
    {
        if(atletas[i].mejor_tiempo <
           atletas[pos].mejor_tiempo)
        {
            pos = i;
        }
    }
    return pos;
}