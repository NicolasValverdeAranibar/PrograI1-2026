// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ingenieria Mecatronica 
// Fecha creación: 09/03/2026

#include <iostream>
using namespace std;
int sumatoria (int num);
int main()
{
    int num = 0;
    system("cls");
    cout<<"ingrese un numero: ";
    cin>>num;
    cout<<"la sumatoria es: "<<sumatoria(num)<<endl;    
    return 0;
}
int sumatoria (int num)
{
    int suma = 0;
    for (int i = 1; i <= num; i++)
    { 
        suma += i;
    }
    return suma;
}