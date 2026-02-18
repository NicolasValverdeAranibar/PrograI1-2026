// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ing. Mecatronica
// Fecha creación: 12/02/2026
#include <iostream>
using namespace std;
int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    system("cls");
    cout<<"ingrese el primer numero: ";
    cin>>num1;
    cout<<"ingrese el segundo numero: ";
    cin>>num2;
    cout<<"ingrese el tercer numero: ";
    cin>>num3;
    cout<<"Ahora ingrese un cuarto numero: ";
    cin>>num4;
    if (num1 == num4 or num2 == num4 or num3 == num4)
    {
        cout<<"el cuarto numero coincide con uno de los numeros introducidos";
    }
    else
    {
        cout<<"el cuarto numero no coincide con ningun numero intoducido";
    }
    return 0;
}