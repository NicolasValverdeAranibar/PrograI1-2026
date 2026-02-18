// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ing. Mecatronica
// Fecha creación: 12/02/2026
#include <iostream>
using namespace std;
int main()
{
    int edad = 0;
    system("cls");
    cout<<"ingrese su edad: ";
    cin>>edad;
    if (edad>=18 and edad<=25)
    {
        cout<<"esta en el rango permitido";
    }
    else
    {
        cout<<"no esta en el rango permitido";
    }
    return 0;
}