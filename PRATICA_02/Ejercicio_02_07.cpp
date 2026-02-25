// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;

int main()
{
    int num;
    int sumaDiv = 0;
    system("cls");
    cout<<"ingrese un numero: ";
    cin>>num;
    for (int i = 1; i < num; i++) 
    {
        if (num % i == 0) 
        {
            sumaDiv += i;
        }
    }
    if (sumaDiv == num)
    {
        cout<<"el numero es perfecto"<<endl;
    } 
    else 
    {
        cout<<"el numero no es perfecto"<<endl;
    }
    return 0;
}