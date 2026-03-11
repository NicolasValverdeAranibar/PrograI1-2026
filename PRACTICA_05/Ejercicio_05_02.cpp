// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Fecha creación: 11/03/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int GenerarAleatorio(int LimInferior, int LimSuperior);
int main()
{
    int vendedoras = 0;
    system("cls");
    cout<<"ingrese el numero de vendedoras: ";
    cin>>vendedoras;
    return 0;
}
int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}