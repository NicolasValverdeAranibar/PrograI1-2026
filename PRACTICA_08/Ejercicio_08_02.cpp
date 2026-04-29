// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 13/04/2026
#include <iostream>
#include <vector>
#include <string>

using namespace std;
vector<string> compararVectores(vector<string> A, vector<string> B);
void desplegarVector(vector <string> R);

int main()
{
    vector<string> A = {"Juan", "Maria", "Pedro", "Ana", "Luis", "Nicolas"};
    vector<string> B = {"Ana", "Carlos", "Sofia", "Pedro", "Luis", "Daniel"};
    vector<string> R = compararVectores(A, B);
    system("cls");
    desplegarVector (R);
    return 0;
}
vector<string> compararVectores(vector<string> A, vector<string> B)
{
    vector<string> R;
    for (int i = 0; i < A.size(); i++) 
    {
       for (int j = 0; j < B.size(); j++) 
       {
           if (A[i] == B[j])
           {
               R.push_back(A[i]);
           }
        }
    }
    return R;
}
void desplegarVector(vector <string> R)
{
    cout<<"clientes en comun: ";
    for (int i = 0; i < R.size(); i++)
    {
        cout<< R[i] <<"\t";
    }
    cout<<endl;
}