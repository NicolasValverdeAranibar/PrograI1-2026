// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 13/05/2026
// Número de ejercicio: 1

#include <iostream>
#include <fstream>

using namespace std;

void guardarNombres();
void leerNombres();

int main()
{
    guardarNombres();
    leerNombres();
    return 0;
}

void guardarNombres()
{
    ofstream archivo("nombres.txt");
    int n;
    string nombre;
    cout << "Cantidad de nombres: ";
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        cout << "Nombre: ";
        getline(cin, nombre);

        archivo << nombre << endl;
    }
    archivo.close();
}

void leerNombres()
{
    ifstream archivo("nombres.txt");
    string nombre;
    cout << "\nNombres almacenados:\n";
    while(getline(archivo, nombre))
    {
        cout << nombre << endl;
    }
    archivo.close();
}