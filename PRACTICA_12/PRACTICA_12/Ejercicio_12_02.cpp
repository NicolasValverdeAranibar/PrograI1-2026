// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 13/05/2026
// Número de ejercicio: 2

#include <iostream>
#include <fstream>

using namespace std;

int contarPalabras();

int main()
{
    cout << "Cantidad de palabras: "<< contarPalabras();
    return 0;
}

int contarPalabras()
{
    ifstream archivo("texto.txt");
    string palabra;
    int contador = 0;
    while(archivo >> palabra)
    {
        contador++;
    }
    archivo.close();
    return contador;
}