// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 13/04/2026
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

vector<string> separarPalabras(string texto);
void invertir(vector<string> palabras);

int main() {
    string texto;
    system("cls");
    cout << "Ingrese texto: ";
    getline(cin, texto);
    vector<string> palabras = separarPalabras(texto);
    invertir(palabras);
    return 0;
}
vector<string> separarPalabras(string texto) 
{
    vector<string> palabras;
    string actual = "";
    for(char c : texto) {
        if(c != ' ')
            actual += c;
        else {
            palabras.push_back(actual);
            actual = "";
        }
    }
    palabras.push_back(actual);
    return palabras;
}
void invertir(vector<string> palabras) 
{
    for(int i = palabras.size()-1; i >= 0; i--) {
        cout << palabras[i] << " ";
    }
}