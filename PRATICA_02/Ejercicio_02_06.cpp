// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;
    system("cls");
    cout<<"ingrese el primer numero: ";
    cin>>num1;
    cout<<"ingrese el segundo numero: ";
    cin>>num2;
    if (num1>num2)
    {
        int i = num1;
        while (i>=num2)
        {
            cout<<i<<endl;
            i--;
        }  
    }else
    {
        int i = num1;
        while (i<=num2)
        {
            cout<<i<<endl;
            i++;
        }
    }
    
    return 0;
}