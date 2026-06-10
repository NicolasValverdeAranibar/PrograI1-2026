// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 13/05/2026
// Número de ejercicio: 3

#include <iostream>
#include <fstream>

using namespace std;

void registrarEstudiantes();
void mostrarEstudiantes();

int main()
{
    registrarEstudiantes();
    mostrarEstudiantes();
    return 0;
}

void registrarEstudiantes()
{
    ofstream archivo("estudiantes.txt");
    int n, edad;
    string nombre;
    float promedio;
    cout << "Cantidad de estudiantes: ";
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        cout << "\nNombre: ";
        cin >> nombre;
        cout << "Edad: ";
        cin >> edad;
        cout << "Promedio: ";
        cin >> promedio;
        archivo << nombre << " " << edad << " " << promedio << endl;
    }
    archivo.close();
}

void mostrarEstudiantes()
{
    ifstream archivo("estudiantes.txt");
    string nombre;
    int edad;
    float promedio;
    cout << "\nLISTA DE ESTUDIANTES\n";
    while(archivo >> nombre >> edad >> promedio)
    {
        cout << "Nombre: " << nombre << " Edad: " << edad << " Promedio: " << promedio<< endl;
    }
    archivo.close();
}