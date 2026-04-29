// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 13/04/2026
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void dividirCadena(string texto, char delimitador);

int main() 
{
    string texto;
    char delimitador;
    system("cls");
    cout << "Ingrese cadena: ";
    getline(cin, texto);
    cout << "Ingrese delimitador: ";
    cin >> delimitador;
    dividirCadena(texto, delimitador);
    return 0;
}
void dividirCadena(string texto, char delimitador) 
{
    string token = "";
    for(char c : texto) 
    {
        if(c != delimitador)
            token += c;
        else 
        {
            cout << token << endl;
            token = "";
        }
    }
    cout << token << endl;
}