// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ingenieria Mecatronica 
// Fecha creación: 09/03/2026

#include <iostream>
using namespace std;
int par(int num);
int main()
{
    int num = 0;
    system("cls");
    cout<<"ingrese un numero: ";
    cin>>num;
    cout<<par(num)<<endl;
    return 0;
}
int par(int num)
{
    bool numpar =  true;
    if (num % 2 == 0)
    {
        numpar = true;
    }else
    {
        numpar = false;
    }
    return numpar;
}