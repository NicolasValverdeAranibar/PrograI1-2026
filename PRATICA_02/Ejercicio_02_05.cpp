// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/02/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int num = 0;
    int num_al = 0;
    int cont = 0;
    srand(time(NULL));
    num_al = 1 + rand()%(100);
    system("cls");
    do
    {
        cout<<"ingrese un numero: ";
        cin>>num;
        if (num>num_al)
        {
            cout<<"ingrese un numero menor"<<endl;
        }
        if (num<num_al)
        {
            cout<<"ingrese un numero mayor"<<endl;
        }  
        cont ++;
    } while (num != num_al);
    cout<<"Adivinaste el numero"<<endl;
    cout<<"El numero de intos fue: "<<cont<<endl;
    return 0;
}