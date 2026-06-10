// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 04/05/2026
// Número de ejercicio: 1

#include <iostream>
using namespace std;

int sumaDigitos(int n);

int main()
{
    int numero;
    system("cls");
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;
    cout << "La suma de los digitos es: "<<sumaDigitos(numero);
    return 0;
}

int sumaDigitos(int n)
{
    if (n < 10)
    {
        return n;
    }
    return (n % 10) + sumaDigitos(n / 10);
}
