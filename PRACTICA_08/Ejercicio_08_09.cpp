// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 13/04/2026
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string limpiarTexto(string texto);
bool esPalindromo(string texto);

int main() {
    string texto;
    system("cls");
    cout << "Ingrese texto: ";
    getline(cin, texto);
    if(esPalindromo(texto))
        cout << "Es palindromo";
    else
        cout << "No es palindromo";

    return 0;
}
string limpiarTexto(string texto)
{
    string limpio = "";
    for(char c : texto) 
    {
        if(c != ' ' && c != '.' && c != ',') 
        {
            if(c >= 'A' && c <= 'Z')
                c += 32;
            limpio += c;
        }
    }
    return limpio;
}
bool esPalindromo(string texto) 
{
    texto = limpiarTexto(texto);
    int inicio = 0;
    int fin = texto.length() - 1;
    while(inicio < fin) 
    {
        if(texto[inicio] != texto[fin])
            return false;

        inicio++;
        fin--;
    }
    return true;
}