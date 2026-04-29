// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 22/04/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector> 
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
vector <int> generarcalificaciones(int n);
void desplegarvector (vector<int> cal);
void sumacalificaciones(vector<int> calificaciones, int n);

int main()
{
    vector <int> calificaciones;
    int n = 0;
    srand(time(NULL));
    system("cls");
    cout<<"ingrese el numero de calificaciones: ";
    cin>>n;
    calificaciones = generarcalificaciones(n);
    desplegarvector(calificaciones);
    sumacalificaciones(calificaciones, n);
    return 0;
}
vector <int> generarcalificaciones(int n)
{
    vector <int> calificaciones;
    for (int i = 0; i < n; i++)
    {
        calificaciones.push_back(GenerarAleatorio(1,100));
    }
    return calificaciones;
}
void desplegarvector (vector<int> cal)
{
    for (int i = 0; i < cal.size(); i++)
    {
        cout<<cal[i]<<"\t";
    }
    cout<<endl;
}
void sumacalificaciones(vector<int> calificaciones, int n)
{
    int suma = 0;
    for (int i = 0; i < calificaciones.size(); i++)
    {
        suma += calificaciones[i];
    }
    cout<<"la suma de las calificaiones es: "<<suma<<endl;
    cout<<"el promedio es: "<<suma/n<<endl;
}
int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}
