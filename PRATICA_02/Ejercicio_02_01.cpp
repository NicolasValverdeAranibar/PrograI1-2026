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
    int mult = 0;
    system("cls");
    do
    {
        cout<<"ingrese un numero entre 1 y 10: ";
        cin>>num;
        if(num<1 or num>10){
            cout<<"numero invalido"<<endl;
        }
    } while (num<1 or num>10);
    for (int i = 1; i <= 10; i++)
    {
        mult = num * i;
        cout<<"la multiplicacion por "<<i<<" es: "<<mult<<endl;
    }
    

    return 0;
}