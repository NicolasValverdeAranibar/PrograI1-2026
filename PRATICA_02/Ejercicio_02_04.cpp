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
    int fact = 1;
    int suma = 0;
    system("cls");
    cout<<"ingrese un numero: ";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
        suma += fact;        
    }
    cout<<"la suma es: "<<suma;
    
    return 0;
}