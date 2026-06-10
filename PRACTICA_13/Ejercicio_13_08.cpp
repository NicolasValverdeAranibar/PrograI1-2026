// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 22/05/2026
// Número de ejercicio: 8

#include <iostream>

using namespace std;

struct Atleta
{
    string nombre;
    string departamento;
    string deporte;
    int medallas;
};

void registrarAtletas(Atleta atletas[], int n);
void mostrarMedallero(Atleta atletas[], int n);

int main()
{
    int n;
    cout << "Cantidad de atletas: ";
    cin >> n;
    Atleta atletas[n];
    registrarAtletas(atletas, n);
    mostrarMedallero(atletas, n);
    return 0;
}

void registrarAtletas(Atleta atletas[], int n)
{
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        cout << "\nNombre: ";
        getline(cin, atletas[i].nombre);
        cout << "Departamento: ";
        getline(cin, atletas[i].departamento);
        cout << "Deporte: ";
        getline(cin, atletas[i].deporte);
        cout << "Cantidad de medallas: ";
        cin >> atletas[i].medallas;
        cin.ignore();
    }
}

void mostrarMedallero(Atleta atletas[], int n)
{
    cout << "\nMEDALLERO\n";
    for(int i = 0; i < n; i++)
    {
        cout << atletas[i].departamento << " - " << atletas[i].nombre << " - " << atletas[i].medallas << " medallas" << endl;
    }
}