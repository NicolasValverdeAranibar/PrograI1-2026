// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 24/04/2026
// Número de ejercicio: 4
#include <iostream>
using namespace std;

void generar(int m[10][10], int n);
void mostrar(int m[10][10], int n);

int main(){
    int n,m[10][10];
    cin>>n;
    generar(m,n);
    mostrar(m,n);
    return 0;
}
void generar(int m[10][10], int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            m[i][j]=2*i+j+1;
}
void mostrar(int m[10][10], int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }
}