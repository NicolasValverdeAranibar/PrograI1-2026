// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ingenieria Mecatronica 
// Fecha creación: 09/03/2026

#include <iostream>
using namespace std;
float MRU(float velocidad, float tiempo);
int main()
{
    float velocidad = 0;
    float tiempo = 0;
    system("cls");
    cout<<"ingrese la velocidad: ";
    cin>>velocidad;
    cout<<"ingrese el tiempo: ";
    cin>>tiempo;
    cout<<"la distancia es: "<<MRU(velocidad, tiempo)<<endl;
    return 0;
}
float MRU(float velocidad, float tiempo)
{
    float distancia = 0;
    distancia  = velocidad * tiempo;
    return distancia;
}