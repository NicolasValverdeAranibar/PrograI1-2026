// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 13/05/2026
// Número de ejercicio: 7

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void calcularPromedios();

int main()
{
    calcularPromedios();
    cout << "Promedios calculados";
    return 0;
}

void calcularPromedios()
{
    ifstream entrada("calificaciones.txt");
    ofstream salida("promedios.txt");
    string linea;
    while(getline(entrada, linea))
    {
        stringstream ss(linea);
        string nombre;
        float nota;
        float suma = 0;
        int cantidad = 0;
        ss >> nombre;
        while(ss >> nota)
        {
            suma += nota;
            cantidad++;
        }
        salida << nombre << " " << suma / cantidad << endl;
    }
    entrada.close();
    salida.close();
}