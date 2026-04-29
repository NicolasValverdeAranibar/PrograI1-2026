// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 22/04/2026
// Número de ejercicio: 7

#include <iostream>
#include <vector> 
#include <cstdlib>
#include <ctime>

using namespace std;
vector<int> llenarvector (vector<int> numeros, int n);
void desplegarvector (vector<int> numeros);

int main()
{
    vector<int> numeros;
    int n = 0;
    cout<<"ingrese la cantidad de valores posibles: ";
    cin>>n;
    system("cls");  
    numeros = llenarvector(numeros, n);
    desplegarvector(numeros);
    return 0;
}
vector<int> llenarvector (vector<int> numeros, int n)
{
    int m = 0;
    do
    { 
        for (int i = 0; i < n; i++)
        {
            cout<<"ingrese un numero: ";
            cin>>m;
            numeros.push_back(m);
        }
    } while (m != 0 or m > 0);
    return numeros;
}
void desplegarvector (vector<int> numeros)
{
    for (int i = 0; i < numeros.size(); i++)
    {
        cout<<numeros[i]<<"\t";
    }
    cout<<endl;
}