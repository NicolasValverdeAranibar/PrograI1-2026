// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 13/04/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
void LlenarVector(vector<int> &numeros, int n);
void ImprimirVector(vector<int> numeros);
vector<int> LlenarPorRangos(vector<int> numeros);

int main()
{
    vector<int> numeros;
    vector<int> resultado;
    int n = 0;
    srand(time(NULL));
    system("cls");
    cout<<"ingrese el numero de pixeles: ";
    cin>>n;
    LlenarVector(numeros, n);
    ImprimirVector(numeros);
    resultado = LlenarPorRangos(numeros);
    ImprimirVector(resultado);
    return 0;
}

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}

void LlenarVector(vector<int> &numeros, int n)
{
    for (int i = 0; i < n; i++)
    {
        numeros.push_back(GenerarAleatorio(0,255));
    }
}

void ImprimirVector(vector<int> numeros)
{
    cout << "VECTOR" << endl;
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << "\t";
    }
    cout<<endl;
}

vector<int> LlenarPorRangos(vector<int> numeros)
{
    vector<int> resultado(26, 0);
    int posicion = 0;
    for (int i = 0; i < numeros.size(); i++)
    {
        posicion = numeros[i] / 10;
        resultado[posicion]++;
    }   
    return resultado;
}