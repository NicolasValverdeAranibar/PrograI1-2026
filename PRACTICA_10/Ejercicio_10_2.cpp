// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 24/04/2026
// Número de ejercicio: 1#include <iostream>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
vector<double> llenarnotas(int n);
void procesarresultados (int n, vector<string> nombres, vector<string> apellidos,  vector<double> notas);


int main()
{
    vector<double> notas;
    vector <string> nombres = {"Nicolas",  "Alejandro", "Daniel", "Pablo", "Pedro", "Juan", "Jose", "Lucia", "Alessia", "Lorena"};
    vector <string> apellidos = {"Valverde" ,"Vega", "Calvo", "Aranibar", "Aguilar", "Martinez", "Camacho", "Rodriguez", "Velez", "Arce"};
    int n = 0;
    srand(time(NULL));
    system("cls");
    cout<<"cuantos estudiantes tiene: ";
    cin>>n;
    notas = llenarnotas(n);
    procesarresultados(n, nombres, apellidos, notas);
    return 0;
}
vector<double> llenarnotas(int n)
{
    vector<double> vectorAux;
    for (int i = 0; i < n; i++)
    {
        vectorAux.push_back(GenerarAleatorio(33,100));
    }
    return vectorAux;
}
void procesarresultados (int n, vector<string> nombres, vector<string> apellidos,  vector<double> notas)
{
    for (int i = 0; i < n; i++)
    {
        cout<< nombres[GenerarAleatorio(0,9)]<<"\t"<<apellidos[GenerarAleatorio(0,9)]<<"\t"<<apellidos[GenerarAleatorio(0,9)]<<endl;
    } 
}
int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}