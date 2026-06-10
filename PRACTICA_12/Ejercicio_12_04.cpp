// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 13/05/2026
// Número de ejercicio: 4

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int buscarTexto(string textoBuscar);

int main()
{
    string texto;
    cout << "Texto a buscar: ";
    getline(cin, texto);
    cout << "Aparece " << buscarTexto(texto) << " veces";
    return 0;
}

int buscarTexto(string textoBuscar)
{
    ifstream archivo("datos.txt");
    string linea;
    int contador = 0;
    while(getline(archivo, linea))
    {
        size_t pos = linea.find(textoBuscar);

        while(pos != string::npos)
        {
            contador++;
            pos = linea.find(textoBuscar, pos + 1);
        }
    }
    archivo.close();
    return contador;
}