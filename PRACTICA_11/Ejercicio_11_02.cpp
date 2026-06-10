// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 04/05/2026
// Número de ejercicio: 2

#include <iostream>
using namespace std;

int potencia(int base, int exponente);

int main()
{
    int base, exponente;
    system("cls");
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;
    cout << base << "^" << exponente<< " = " << potencia(base, exponente);
    return 0;
}

int potencia(int base, int exponente)
{
    if (exponente == 0)
    {
        return 1;
    }
    return base * potencia(base, exponente - 1);
}