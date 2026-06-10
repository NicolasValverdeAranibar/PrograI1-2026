// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 04/05/2026
// Número de ejercicio: 8

#include <iostream>
using namespace std;

void ullman(int n);

int main()
{
    int n;
    system("cls");
    do
    {
        cout << "Ingrese un numero mayor que 1: ";
        cin >> n;
    }
    while (n <= 1);
    cout << "\nSecuencia de Ullman:\n";
    ullman(n);
    return 0;
}

void ullman(int n)
{
    cout << n << " ";
    if (n == 1)
        return;

    if (n % 2 == 0)
        ullman(n / 2);
    else
        ullman(3 * n + 1);
}