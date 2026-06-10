// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 13/05/2026
// Número de ejercicio: 8

#include <iostream>
#include <fstream>

using namespace std;

void contarDatos();

int main()
{
    contarDatos();
    return 0;
}

void contarDatos()
{
    ifstream archivo("documento.txt");
    string linea;
    int lineas = 0;
    int palabras = 0;
    int caracteres = 0;
    while(getline(archivo, linea))
    {
        lineas++;
        caracteres += linea.length();
        for(int i = 0; i < linea.length(); i++)
        {
            if(linea[i] == ' ')
                palabras++;
        }
        palabras++;
    }
    archivo.close();
    cout << "Lineas: " << lineas << endl;
    cout << "Palabras: " << palabras << endl;
    cout << "Caracteres: " << caracteres << endl;
}