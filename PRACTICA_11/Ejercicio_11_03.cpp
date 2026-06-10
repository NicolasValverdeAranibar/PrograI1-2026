// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 04/05/2026
// Número de ejercicio: 3

#include <iostream>
using namespace std;

int fibonacci(int n);

int main()
{
    int n;
    system("cls");
    cout << "Ingrese la posicion: ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = "<< fibonacci(n);
    return 0;
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}