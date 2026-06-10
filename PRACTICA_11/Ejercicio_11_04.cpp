// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 04/05/2026
// Número de ejercicio: 4

#include <iostream>
using namespace std;

int mcd(int a, int b);

int main()
{
    int a, b;
    system("cls");
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "MCD = " << mcd(a, b);
    return 0;
}

int mcd(int a, int b)
{
    if (b == 0)
        return a;

    return mcd(b, a % b);
}