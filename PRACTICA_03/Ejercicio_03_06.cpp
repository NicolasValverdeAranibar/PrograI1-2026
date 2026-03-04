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
    int num = 0;
    int ninos_1 = 0;
    int ninos_2 = 0;
    int ninos_3 = 0;
    int total_panales = 0;
    cout<<"Ingrese el total de ninos: ";
    cin>>num;
    system("cls");
    ninos_1 = rand() % (num + 1);
    ninos_2 = rand() % (num - ninos_1 + 1);
    ninos_3 = num - ninos_1 - ninos_2;
    total_panales= (ninos_1 * 6) + (ninos_2 * 3) + (ninos_3 * 2);
    cout << "los ninos de 1 ano son: "<<ninos_1<< endl;
    cout << "los ninos de 2 anos: "<<ninos_2<<endl;
    cout << "los ninos de 3 anos: "<<ninos_3<<endl;
    cout << "Total de panales por dia: " << total_panales << endl;

    return 0;
}