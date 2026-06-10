// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 13/05/2026
// Número de ejercicio: 9

#include <iostream>
#include <fstream>

using namespace std;

char cifrar(char c);
void cifrarArchivo();

int main()
{
    cifrarArchivo();
    cout << "Archivo cifrado correctamente";
    return 0;
}

char cifrar(char c)
{
    if(c >= 'A' && c <= 'Z')
        return ((c - 'A' + 3) % 26) + 'A';

    if(c >= 'a' && c <= 'z')
        return ((c - 'a' + 3) % 26) + 'a';

    return c;
}

void cifrarArchivo()
{
    ifstream entrada("mensaje.txt");
    ofstream salida("mensaje_cifrado.txt");
    char caracter;
    while(entrada.get(caracter))
    {
        salida << cifrar(caracter);
    }
    entrada.close();
    salida.close();
}