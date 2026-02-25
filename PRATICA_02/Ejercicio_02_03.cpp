// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 23/02/2026

#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int suma = 0;
    system("cls");
    cout<<"ingrese un numero: ";
    cin>>num;
    for (int i = 0; i <=num; i++)
    {
        suma += i;
    }
    cout<<"la suma es: "<<suma;
    return 0;
}