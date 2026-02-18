// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ing. Mecatronica
// Fecha creación: 12/02/2026
#include <iostream>
using namespace std;
int main()
{
     int num = 0;
    system("cls");
    cout<<"ingrese un numero: ";
    cin>>num;
    if ((num % 2) == 0 or num == 0)
    {
        cout<<"el numero es par"<<endl;        
    }
    else
    {
        cout<<"el numero es impar"<<endl;
    }
    return 0;
}