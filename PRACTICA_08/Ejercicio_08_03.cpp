// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 13/04/2026
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
vector<int> llenarVector(vector<int> calificaciones, int n);
void mostrarVector(vector<int> calificaciones);
void mostrarRangos (vector<int> porcentajes);

int main()
{
    vector<int> calificaiones;
    int n = 0;
    srand(time(NULL));
    system("cls");
    cout<<"ingrese la cantidad de calificaciones: ";
    cin>>n;
    calificaiones = llenarVector(calificaiones, n);
    mostrarVector(calificaiones);
    mostrarRangos(calificaiones);
    return 0;
}
vector<int> llenarVector(vector<int> calificaciones, int n)
{
    for (int i = 0; i < n; i++)
    {
        calificaciones.push_back(GenerarAleatorio(0,100));
    }
    return calificaciones;
}
void mostrarVector(vector<int> calificaciones)
{
    for (int i = 0; i < calificaciones.size(); i++)
    {
        cout<<calificaciones[i]<<"\t";
    }
    cout<<endl;
}
void mostrarRangos (vector<int> porcentajes)
{
    int reprobados = 0;
    int regular = 0;
    int bueno = 0;
    int exelente = 0;
    for (int i = 0; i < porcentajes.size(); i++)
    {
        if (porcentajes[i] >= 0 and porcentajes[i] <= 59)
        {
            reprobados++;
        }else if (porcentajes[i] >= 60 and porcentajes[i] <= 79)
        {
            regular++;
        }else if (porcentajes[i] >= 80 and porcentajes[i] <= 89)
        {
            bueno++;
        }else if (porcentajes[i] >= 90 and porcentajes[i] <= 100)
        {
            exelente++;
        } 
    }
    cout<<"REPROBADOS: "<<reprobados*10<<"%"<<endl;
    cout<<"REGULAR: "<<regular*10<<"%"<<endl;
    cout<<"BUENO: "<<bueno*10<<"%"<<endl;
    cout<<"EXELENTE: "<<exelente*10<<"%"<<endl;
}
int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}