// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 04/05/2026
// Número de ejercicio: 6

#include <iostream>
#include <vector>
using namespace std;

bool compararVectores(int v1[], int v2[], int n);

int main()
{
    int n;
    system("cls");
    cout << "Cantidad de elementos: ";
    cin >> n;
    int v1[n], v2[n];
    cout << "\nVector 1\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Elemento [" << i << "]: ";
        cin >> v1[i];
    }
    cout << "\nVector 2\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Elemento [" << i << "]: ";
        cin >> v2[i];
    }
    if (compararVectores(v1, v2, n))
        cout << "\nLos vectores son iguales";
    else
        cout << "\nLos vectores son diferentes";

    return 0;
}

bool compararVectores(int v1[], int v2[], int n)
{
    if (n == 0)
        return true;
    if (v1[n - 1] != v2[n - 1])
        return false;
    return compararVectores(v1, v2, n - 1);
}