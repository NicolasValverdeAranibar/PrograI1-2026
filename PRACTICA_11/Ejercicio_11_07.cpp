// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 04/05/2026
// Número de ejercicio: 7

#include <iostream>
using namespace std;

int Q(int n);

int main()
{
    int n;
    system("cls");
    cout << "Ingrese n: ";
    cin >> n;
    cout << "Resultado = "<< Q(n);
    return 0;
}

int Q(int n)
{
    if (n == 1)
        return 1;

    return (n * n) + Q(n - 1);
}