// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 22/04/2026
// Número de ejercicio: 4

#include <iostream>
#include <vector> 
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
vector <int> llenarVector(vector<int> vec, int n);
void desplegarVector(vector <int> vec);
vector<int> multiplicaionVectores(vector<int> vec1, vector<int> vec2, vector<int> vecR, int n);

int main()
{
    vector<int> vec1;
    vector<int> vec2;
    vector<int> vecR;
    int n = 0;
    srand(time(NULL));
    system("cls");
    cout<<"ingrese la dimension del vector: ";
    cin>>n;
    vec1 = llenarVector(vec1, n);
    cout<<"VECTOR 1"<<endl;
    desplegarVector(vec1);
    vec2 = llenarVector(vec2, n);
    cout<<"VECTOR 2"<<endl;
    desplegarVector(vec2);
    vecR=multiplicaionVectores(vec1, vec2, vecR, n);
    cout<<"VECTOR RESULTADO"<<endl;
    desplegarVector(vecR);
    return 0;
}
vector <int> llenarVector(vector<int> vec, int n)
{
    for (int i = 0; i < n; i++)
    {
        vec.push_back(GenerarAleatorio(1,10));
    }
    return vec;
}
void desplegarVector(vector <int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<"\t";
    }
    cout<<endl;
}
vector<int> multiplicaionVectores(vector<int> vec1, vector<int> vec2, vector<int> vecR, int n)
{
    int mult = 0;
    for (int i = 0; i < n; i++)
    {
        mult = vec1[i] * vec2[i];
        vecR.push_back(mult);
    }
    return vecR;
} 
int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}

