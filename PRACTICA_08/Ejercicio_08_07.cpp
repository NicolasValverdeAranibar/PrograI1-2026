// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 13/04/2026
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string eliminarDigitos(string texto);

int main() 
{
    string texto;
    system("cls");
    cout << "Ingrese cadena: ";
    cin >> texto;
    cout << eliminarDigitos(texto);
    return 0;
}
string eliminarDigitos(string texto) 
{
    string resultado = "";
    for(char c : texto)
    {
        if(!(c >= '0' && c <= '9'))
            resultado += c;
    }
    return resultado;
}