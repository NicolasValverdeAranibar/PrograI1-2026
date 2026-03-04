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
    int num = rand() % 10 + 1;
    int fact = 1;
    system("cls");
    cout<<"el numero es: "<<num<<endl;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout<<"Y su factorial es: "<<fact<<endl;
    return 0;
}