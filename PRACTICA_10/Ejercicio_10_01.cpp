// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 26/04/2026
// Número de ejercicio: 1
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
void NombresCompletos (int n, vector<string> nombres, vector<string> apellidos);

int main()
{
    vector <string> nombres = {"Nicolas",  "Alejandro", "Daniel", "Pablo", "Pedro", "Juan", "Jose", "Lucia", "Alessia", "Lorena"};
    vector <string> apellidos = {"Valverde" ,"Vega", "Calvo", "Aranibar", "Aguilar", "Martinez", "Camacho", "Rodriguez", "Velez", "Arce"};
    int n = 0;
    srand(time(NULL));
    system("cls");
    cout<<"cuantos nombres desea generar: ";
    cin>>n;
    NombresCompletos(n, nombres, apellidos);
    return 0;
}

void NombresCompletos (int n, vector<string> nombres, vector<string> apellidos)
{
    for (int i = 0; i < n; i++)
    {
        cout<< nombres[GenerarAleatorio(0,9)]<<"\t\t"<<apellidos[GenerarAleatorio(0,9)]<<"\t\t"<<apellidos[GenerarAleatorio(0,9)]<<endl;
    } 
}

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}