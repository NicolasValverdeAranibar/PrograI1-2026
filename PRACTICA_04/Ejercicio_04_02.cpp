// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ingenieria Mecatronica 
// Fecha creación: 09/03/2026

#include <iostream>
using namespace std;
int numeroMayor (int num1, int num2, int num3);
int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    system("cls");
    cout<<"ingrese el primer numero: ";
    cin>>num1;
    cout<<"ingrese el segundo numero: ";
    cin>>num2;
    cout<<"ingrese el tercer numero: ";
    cin>>num3;
    cout<<numeroMayor (num1, num2, num3)<<endl;
    return 0;
}
int numeroMayor (int num1, int num2, int num3)
{
    if (num1 < num2 and num1 < num3 and num2 < num3)
    {
        cout<<"el mayor es: "<<num3<<endl;
    }else if (num1 < num2 and num1 < num3 and num3 < num2)
    {
        cout<<"el mayor es: "<<num2<<endl;
    }else
    {
        cout<<"el mayor es: "<<num1<<endl;
    }
    return 0;
}