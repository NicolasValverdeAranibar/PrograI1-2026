// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 04/05/2026
// Número de ejercicio: 5

#include <iostream>
#include <vector>
using namespace std;

int sumaVector(int v[], int n);

int main()
{
    int n;
    system("cls");
    cout << "Cantidad de elementos: ";
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Elemento [" << i << "]: ";
        cin >> v[i];
    }
    cout << "Suma = "<< sumaVector(v, n);
    return 0;
}

int sumaVector(int v[], int n)
{
    if (n == 0)
        return 0;

    return v[n - 1] + sumaVector(v, n - 1);
}