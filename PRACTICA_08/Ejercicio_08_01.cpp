// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 13/04/2026
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
void NombresCompletos (int n, vector<string> nombres, vector<string> apellidos, vector<int> edades);

int main()
{
    vector <string> nombres = {"Nicolas",  "Alejandro", "Daniel", "Pablo", "Pedro", "Juan", "Jose", "Lucia", "Alessia", "Lorena"};
    vector <string> apellidos = {"Valverde" ,"Vega", "Calvo", "Aranibar", "Aguilar", "Martinez", "Camacho", "Rodriguez", "Velez", "Arce"};
    vector <int> edades = {18, 21, 25, 28, 32, 36, 40, 44, 48, 52};
    int n = 0;
    srand(time(NULL));
    system("cls");
    cout<<"cuantos nombres desea generar: ";
    cin>>n;
    NombresCompletos(n, nombres, apellidos, edades);
    return 0;
}

void NombresCompletos (int n, vector<string> nombres, vector<string> apellidos, vector<int> edades)
{
    for (int i = 0; i < n; i++)
    {
        cout<< nombres[GenerarAleatorio(0,9)]<<"\t"<<apellidos[GenerarAleatorio(0,9)]<<"\t"<<apellidos[GenerarAleatorio(0,9)]<<" tiene "<<edades[(GenerarAleatorio(0,9))]<<" anios"<<endl;
    } 
}

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}