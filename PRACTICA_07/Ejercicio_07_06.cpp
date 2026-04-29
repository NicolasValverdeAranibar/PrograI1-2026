// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 22/04/2026
// Número de ejercicio: 6

#include <iostream>
#include <vector> 
#include <cstdlib>
#include <ctime>

using namespace std;
int GenerarAleatorio(int LimInferior, int LimSuperior);
vector<int> llenarVector(vector<int> vec, int n);
void desplegarVector(vector<int> vec);
vector<int> sumaVectores (vector<int> vec1, vector<int> vec2, vector<int> vecR, int n);

int main()
{
    vector<int> vec1; 
    vector<int> vec2;
    vector<int> vecR;
    int n = 5;
    srand(time(NULL));
    system("cls");
    vec1 = llenarVector(vec1, n);
    cout<<"VECTOR 1"<<endl;
    desplegarVector(vec1);
    vec2 = llenarVector(vec2, n);
    cout<<"VECTOR 2"<<endl;
    desplegarVector(vec2);
    vecR = sumaVectores(vec1, vec2, vecR, n);
    cout<<"VECTOR SUMADO"<<endl;
    desplegarVector(vecR);
    return 0;
}
vector<int> llenarVector(vector<int> vec, int n)
{
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        cout<<"ingrese un numero: ";
        cin>>num;
        vec.push_back(num);
    }
    return vec;
}
void desplegarVector(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<"\t";
    }
    cout<<endl;
}
vector<int> sumaVectores (vector<int> vec1, vector<int> vec2, vector<int> vecR, int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma = vec1[i] + vec2 [i];
        vecR.push_back(suma);
    }
    return vecR;
}