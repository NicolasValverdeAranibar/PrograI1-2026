// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Carnet: 6862015
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int n = 0;
    int cont_pares = 0;
    int dado = 0;
    system("cls");
    cout<<"ingrese el numero de veces que se lanzara el dado: ";
    cin>>n;
    for (int i = 1; i < n; i++)
    {
        dado = rand() % 6 + 1;
        if (dado % 2 == 0)
        {
            cont_pares ++;
        }
    }
    cout<<"la frecuencia de las caras pares es: "<<cont_pares<<endl;
    return 0;
}
