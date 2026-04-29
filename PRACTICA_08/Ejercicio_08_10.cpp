// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 13/04/2026
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string capitalizar(string texto);

int main() {
    string texto;
    system("cls");
    cout << "Ingrese texto: ";
    getline(cin, texto);
    cout << capitalizar(texto);
    return 0;
}
string capitalizar(string texto)
{
    if(texto[0] >= 'a' && texto[0] <= 'z')
        texto[0] -= 32;

    for(int i = 1; i < texto.length(); i++) 
    {
        if(texto[i-1] == ' ' && texto[i] >= 'a' && texto[i] <= 'z')
            texto[i] -= 32;
    }
    return texto;
}